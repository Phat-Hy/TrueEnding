#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void actor_validateIndex(void);
extern void actor_dispatchMessage(void);
extern void collision_testLineSegment(void);
extern void talk_parseQuotedString(void);
extern void talk_scanQuotedString(void);
extern void talk_setSpeakerName(void);
extern void fn_8006AFF8(void);
extern void mem_alloc(void);
extern void mem_getAllocSize(void);
extern void route_findNextWaypoint(void);
extern void route_interpolatePath(void);
extern void route_createSegment(void);
extern void node_createNamedChild(void);
extern void node_destroy(void);
extern void atn_Anim_setLayerAnimation(void);
extern void atn_Anim_getLayerDuration(void);
extern void skin_playAnimationByName(void);
extern void skin_applyWeights(void);
extern void ref_releaseHandle(void);
extern void atn_Task_setActive(void);
extern void wcs_vformat(void);
extern void fn_800EB7A0(void);
extern void system_getNextSequenceId(void);
extern void clip_calculateFrustum(void);
extern void fn_80109828(void);
extern void enemy_updateCombatBehavior(void);
extern void fn_8013322C(void);
extern void boss_updatePhaseState(void);
extern void fn_8013A258(void);
extern void npc_updateTalkInteraction(void);
extern void dialog_renderWindow(void);
extern void inventory_applyItemStats(void);
extern void equip_applyToCharacter(void);
extern void fn_8015E4B0(void);
extern void fn_801603CC(void);
extern void debuff_clearStatus(void);
extern void actor_setState(void);
extern void fn_80178208(void);
extern void fn_80178A6C(void);
extern void fn_801C02F4(void);
extern void task_findEntryById(void);
extern void sound_initGlobalInstances(void);
extern void res_MsgHandle_constructor(void);
extern void res_MsgHandle_destructor(void);
extern void res_MsgHandle_unload(void);
extern void res_MsgHandle_update(void);
extern void res_findResourceSlot(void);
extern void res_registerResource(void);
extern void fn_8025CFF4(void);
extern void entity_Instance_constructor(void);
extern void entity_Instance_destructor(void);
extern void world_getLocalFlag(void);
extern void world_setLocalFlag(void);
extern void atn_LoadHandle_constructor(void);
extern void atn_LoadHandle_destructor(void);
extern void atn_LoadHandle_isLoading(void);
extern void PSMTXRotRad(void);
extern void PSMTX44Identity(void);
extern void PSVECNormalize(void);
extern void PSVECSquareMag(void);
extern void PSVECMag(void);
extern void rand(void);
extern void strcmp(void);
extern void strncmp(void);
extern void std_atan2(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80743F50[];
extern u8 lbl_80743F58[];
extern u8 lbl_80743F78[];
extern u8 lbl_807440F4[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80784958[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_808813D0;
extern u32 lbl_808834A8;
extern u32 lbl_808834B0;
extern u32 lbl_808834B4;
extern u32 lbl_808834BC;
extern u32 lbl_808834CC;
extern u32 lbl_808834D0;
extern u32 lbl_808834D4;
extern u32 lbl_808834D8;
extern u32 lbl_808834DC;
extern u32 lbl_808834E0;
extern u32 lbl_808834E4;
extern u32 lbl_808834E8;
extern u32 lbl_808834F0;
extern u32 lbl_808834F4;
extern u32 lbl_808834F8;
extern u32 lbl_808834FC;
extern u32 lbl_80883500;

/* Function declarations */
void fn_8025B5D4(void);
void fn_8025B5D8(void);
void fn_8025B7DC(void);
void fn_8025B9EC(void);
void fn_8025BD1C(void);
void fn_8025BF58(void);
void fn_8025C29C(void);
void fn_8025C460(void);
void fn_8025C624(void);
void fn_8025C7A8(void);
void fn_8025C92C(void);
void fn_8025C998(void);
void fn_8025CDE0(void);
void fn_8025CEF8(void);

asm void fn_8025B5D4(void)
{
    nofralloc
    b dialog_renderWindow
}

asm void fn_8025B5D8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r5, 0x58c(r3)
    subi r0, r5, 0xa
    cmplwi r0, 0x1
    bgt lbl_fn_8025B5D8_00000050
    li r0, 0x0
    li r5, 0x1
    li r3, 0x2
    stw r5, 0x90(r4)
    stw r3, 0x84(r4)
    stw r0, 0x68(r4)
    stw r0, 0x8c(r4)
    b lbl_fn_8025B5D8_000001F0
lbl_fn_8025B5D8_00000050:
    lwz r0, 0x1554(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025B5D8_0000018C
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8025B5D8_00000100
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8025B5D8_00000100
    lwz r0, 0x15d4(r3)
    li r5, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8025B5D8_00000098
    lfs f1, 0x80(r4)
    lfs f0, lbl_808834A8
    fcmpo cr0, f1, f0
    ble lbl_fn_8025B5D8_00000098
    li r5, 0x1
lbl_fn_8025B5D8_00000098:
    cmpwi r0, 0x1
    bne lbl_fn_8025B5D8_000000B4
    lfs f1, 0x74(r4)
    lfs f0, lbl_808834A8
    fcmpo cr0, f1, f0
    ble lbl_fn_8025B5D8_000000B4
    li r5, 0x1
lbl_fn_8025B5D8_000000B4:
    cmpwi r5, 0x0
    beq lbl_fn_8025B5D8_00000100
    lwz r0, 0x15d0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025B5D8_000000F4
    lwz r3, lbl_8087F430
    li r4, 0xe6
    bl world_getLocalFlag
    cmpwi r3, 0x0
    bne lbl_fn_8025B5D8_000000EC
    lwz r3, lbl_8087F430
    li r4, 0xe6
    li r5, 0x1
    bl world_setLocalFlag
lbl_fn_8025B5D8_000000EC:
    li r0, 0x0
    stw r0, 0x15d0(r30)
lbl_fn_8025B5D8_000000F4:
    mr r3, r30
    bl fn_8025C624
    b lbl_fn_8025B5D8_000001F0
lbl_fn_8025B5D8_00000100:
    lwz r0, 0x15cc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025B5D8_00000124
    lwz r3, lbl_8087F430
    li r4, 0xe7
    li r5, 0x1
    bl world_setLocalFlag
    li r0, 0x0
    stw r0, 0x15cc(r30)
lbl_fn_8025B5D8_00000124:
    lwz r3, 0x0(r31)
    li r4, 0x1
    li r0, 0x0
    stw r4, 0x64(r31)
    cmpwi r3, 0x0
    stw r4, 0x90(r31)
    stw r4, 0x84(r31)
    stw r0, 0x68(r31)
    stw r0, 0x8c(r31)
    beq lbl_fn_8025B5D8_000001F0
    lwz r0, 0x44(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8025B5D8_000001F0
    lwz r0, 0x55c(r3)
    cmpwi r0, 0x6
    bne lbl_fn_8025B5D8_000001F0
    lwz r4, 0x560(r3)
    subi r0, r4, 0x4
    cmplwi r0, 0x1
    bgt lbl_fn_8025B5D8_000001F0
    lwz r12, 0x0(r3)
    li r4, 0x0
    lwz r12, 0x7c(r12)
    mtctr r12
    bctrl
    b lbl_fn_8025B5D8_000001F0
lbl_fn_8025B5D8_0000018C:
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8025B5D8_000001CC
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025B5D8_000001CC
    lfs f2, 0x10(r4)
    lfs f3, lbl_808834A8
    lfs f1, 0x14(r4)
    lfs f0, 0x18(r4)
    fmuls f2, f2, f3
    fmuls f1, f1, f3
    fmuls f0, f0, f3
    stfs f2, 0x10(r4)
    stfs f1, 0x14(r4)
    stfs f0, 0x18(r4)
lbl_fn_8025B5D8_000001CC:
    mr r3, r30
    mr r4, r31
    bl inventory_applyItemStats
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r31
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_8025B5D8_000001F0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8025B7DC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r0, 0x55c(r3)
    lwz r5, 0x15d8(r3)
    cmpwi r0, 0x6
    addi r0, r5, 0x1
    stw r0, 0x15d8(r3)
    bne lbl_fn_8025B7DC_000002F0
    lwz r0, 0x560(r3)
    cmpwi r0, 0x16
    beq lbl_fn_8025B7DC_0000025C
    cmpwi r0, 0x17
    bne lbl_fn_8025B7DC_00000294
    addi r4, r3, 0x6b8
    li r5, -0x1
    bl fn_8015E4B0
lbl_fn_8025B7DC_0000025C:
    li r0, 0x0
    stw r0, 0x58c(r30)
    stw r0, 0x14d4(r30)
    stw r0, 0x14d8(r30)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    lwz r0, 0x14b8(r30)
    stw r0, 0x1504(r30)
lbl_fn_8025B7DC_00000294:
    lwz r0, 0x560(r30)
    cmpwi r0, 0x1e
    bne lbl_fn_8025B7DC_000002F0
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8025B7DC_000002F0
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8025B7DC_000002F0
    lfs f3, 0x30(r31)
    mr r3, r30
    lfs f2, lbl_808834CC
    addi r4, r1, 0x14
    lfs f1, 0x2c(r31)
    li r5, -0x1
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f3, 0x1c(r1)
    stfs f0, 0x14(r1)
    stfs f1, 0x18(r1)
    bl fn_8015E4B0
lbl_fn_8025B7DC_000002F0:
    lwz r0, 0x7e0(r30)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    bne lbl_fn_8025B7DC_00000400
    lwz r3, lbl_8087F430
    li r4, 0x26
    bl world_getLocalFlag
    cmpwi r3, 0x0
    ble lbl_fn_8025B7DC_000003B4
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8025B7DC_000003B4
    lwz r0, 0x48(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8025B7DC_000003B4
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x48(r12)
    mtctr r12
    bctrl
    mr r3, r30
    bl fn_80178A6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x1
    bl equip_applyToCharacter
    mr r3, r30
    bl debuff_clearStatus
    lfs f0, lbl_808834B0
    li r3, 0x2
    li r0, 0x1
    stw r3, 0x58c(r30)
    lfs f1, lbl_808834A8
    addi r3, r30, 0xb0
    stw r0, 0x3fc(r30)
    li r4, 0x0
    lfs f2, lbl_808834B4
    li r5, 0x2e
    stfs f0, 0x2fc(r30)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    stfs f0, 0x2e8(r30)
    bl atn_Anim_setLayerAnimation
    mr r3, r30
    bl fn_800EB7A0
    b lbl_fn_8025B7DC_00000400
lbl_fn_8025B7DC_000003B4:
    addi r3, r30, 0x7d4
    li r4, 0x20
    bl fn_8013322C
    lfs f0, lbl_808834B0
    mr r3, r30
    stfs f0, 0x7d8(r30)
    addi r4, r1, 0x8
    lfs f2, lbl_808834CC
    li r5, -0x1
    lfs f3, 0x30(r31)
    lfs f1, 0x2c(r31)
    lfs f0, 0x28(r31)
    fmuls f3, f3, f2
    fmuls f1, f1, f2
    fmuls f0, f0, f2
    stfs f3, 0x10(r1)
    stfs f0, 0x8(r1)
    stfs f1, 0xc(r1)
    bl fn_8015E4B0
lbl_fn_8025B7DC_00000400:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8025B9EC(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    mflr r0
    stw r0, 0x164(r1)
    addi r4, r1, 0x8c
    addi r5, r1, 0x80
    stfd f31, 0x150(r1)
    psq_st f31, 0x158(r1), 0, 0
    lfs f31, lbl_808834A8
    stfd f30, 0x140(r1)
    psq_st f30, 0x148(r1), 0, 0
    lfs f30, lbl_808834B0
    stfd f29, 0x130(r1)
    psq_st f29, 0x138(r1), 0, 0
    stfd f28, 0x120(r1)
    psq_st f28, 0x128(r1), 0, 0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    stfs f2, 0x94(r1)
    psq_st f1, 0x0(r4), 0, 0
    lwz r4, 0x14d0(r3)
    lfs f0, 0x530(r3)
    lfs f2, 0x530(r4)
    psq_l f1, 0x528(r4), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    fsubs f6, f2, f0
    lfs f4, 0x52c(r3)
    lfs f0, 0x528(r3)
    addi r3, r1, 0x74
    lfs f5, 0x84(r1)
    lfs f3, 0x80(r1)
    fsubs f4, f5, f4
    stfs f2, 0x88(r1)
    fsubs f0, f3, f0
    stfs f4, 0x78(r1)
    stfs f0, 0x74(r1)
    stfs f6, 0x7c(r1)
    bl PSVECMag
    lwz r0, 0x55c(r29)
    cmpwi r0, 0x7
    bne lbl_fn_8025B9EC_000006DC
    addi r3, r29, 0x1030
    bl enemy_updateCombatBehavior
    addi r4, r29, 0x1088
    addi r31, r1, 0x68
    psq_l f1, 0x0(r4), 0, 0
    mr r3, r31
    lfs f2, 0x1090(r29)
    stfs f2, 0x70(r1)
    psq_st f1, 0x0(r31), 0, 0
    bl PSVECMag
    lfs f0, lbl_808834D0
    fmr f31, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_8025B9EC_000006F0
    addi r30, r1, 0x50
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x70(r1)
    mr r3, r30
    psq_st f1, 0x0(r30), 0, 0
    mr r4, r30
    stfs f2, 0x58(r1)
    bl PSVECNormalize
    lfs f2, 0x58(r1)
    addi r31, r1, 0x5c
    psq_l f1, 0x0(r30), 0, 0
    fabs f3, f2
    lfs f0, lbl_808834BC
    psq_st f1, 0x0(r31), 0, 0
    frsp f3, f3
    stfs f2, 0x64(r1)
    fcmpo cr0, f3, f0
    bge lbl_fn_8025B9EC_0000056C
    lfs f3, 0x5c(r1)
    lfs f0, lbl_808834A8
    fcmpo cr0, f3, f0
    ble lbl_fn_8025B9EC_00000560
    lfs f0, lbl_808834D4
    b lbl_fn_8025B9EC_00000564
lbl_fn_8025B9EC_00000560:
    lfs f0, lbl_808834D8
lbl_fn_8025B9EC_00000564:
    stfs f0, 0x48(r1)
    b lbl_fn_8025B9EC_00000580
lbl_fn_8025B9EC_0000056C:
    frsp f2, f2
    lfs f1, 0x5c(r1)
    bl std_atan2
    frsp f0, f1
    stfs f0, 0x48(r1)
lbl_fn_8025B9EC_00000580:
    lfs f0, 0x48(r1)
    addi r3, r1, 0x98
    li r4, 0x79
    fneg f1, f0
    bl PSMTXRotRad
    lfs f3, lbl_808834A8
    addi r4, r1, 0x38
    lfs f28, 0xa0(r1)
    mr r5, r4
    lfs f29, 0x9c(r1)
    addi r3, r1, 0xc8
    lfs f13, 0x98(r1)
    lfs f12, 0xb0(r1)
    lfs f11, 0xac(r1)
    lfs f10, 0xa8(r1)
    lfs f9, 0xc0(r1)
    lfs f8, 0xbc(r1)
    lfs f7, 0xb8(r1)
    lfs f6, 0xc4(r1)
    lfs f5, 0xb4(r1)
    lfs f4, 0xa4(r1)
    lfs f0, lbl_808834B0
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x64(r1)
    stfs f3, 0xf8(r1)
    stfs f3, 0xfc(r1)
    stfs f3, 0x100(r1)
    stfs f0, 0x104(r1)
    stfs f13, 0x8(r1)
    stfs f29, 0xc(r1)
    stfs f28, 0x10(r1)
    stfs f13, 0xc8(r1)
    stfs f29, 0xcc(r1)
    stfs f28, 0xd0(r1)
    stfs f10, 0x14(r1)
    stfs f11, 0x18(r1)
    stfs f12, 0x1c(r1)
    stfs f10, 0xd8(r1)
    stfs f11, 0xdc(r1)
    stfs f12, 0xe0(r1)
    stfs f7, 0x20(r1)
    stfs f8, 0x24(r1)
    stfs f9, 0x28(r1)
    stfs f7, 0xe8(r1)
    stfs f8, 0xec(r1)
    stfs f9, 0xf0(r1)
    stfs f4, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f6, 0x34(r1)
    stfs f4, 0xd4(r1)
    stfs f5, 0xe4(r1)
    stfs f6, 0xf4(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    bl PSMTX44Identity
    lfs f2, 0x40(r1)
    lfs f0, lbl_808834BC
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_8025B9EC_0000069C
    lfs f3, 0x3c(r1)
    lfs f0, lbl_808834A8
    fcmpo cr0, f3, f0
    ble lbl_fn_8025B9EC_0000068C
    lfs f0, lbl_808834D4
    b lbl_fn_8025B9EC_00000690
lbl_fn_8025B9EC_0000068C:
    lfs f0, lbl_808834D8
lbl_fn_8025B9EC_00000690:
    fneg f0, f0
    stfs f0, 0x44(r1)
    b lbl_fn_8025B9EC_000006B0
lbl_fn_8025B9EC_0000069C:
    lfs f1, 0x3c(r1)
    bl std_atan2
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x44(r1)
lbl_fn_8025B9EC_000006B0:
    lfs f2, lbl_808834A8
    addi r3, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x8c
    stfs f2, 0x4c(r1)
    stfs f2, 0x64(r1)
    frsp f2, f2
    psq_st f1, 0x0(r31), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x94(r1)
    b lbl_fn_8025B9EC_000006F0
lbl_fn_8025B9EC_000006DC:
    cmpwi r0, 0x6
    bne lbl_fn_8025B9EC_000006F0
    mr r3, r29
    bl fn_8013A258
    b lbl_fn_8025B9EC_0000070C
lbl_fn_8025B9EC_000006F0:
    lfs f0, 0x568(r29)
    fmr f1, f31
    mr r3, r29
    addi r4, r1, 0x8c
    fmuls f2, f0, f30
    li r5, 0x1
    bl npc_updateTalkInteraction
lbl_fn_8025B9EC_0000070C:
    lwz r0, 0x164(r1)
    psq_l f31, 0x158(r1), 0, 0
    lfd f31, 0x150(r1)
    psq_l f30, 0x148(r1), 0, 0
    lfd f30, 0x140(r1)
    psq_l f29, 0x138(r1), 0, 0
    lfd f29, 0x130(r1)
    psq_l f28, 0x128(r1), 0, 0
    lfd f28, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x160
    blr
}

asm void fn_8025BD1C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    lwz r0, 0x14e0(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, 0x14fc(r3)
    bl task_findEntryById
    stw r3, 0x638(r31)
    lis r4, 0x4330
    lis r5, lbl_80743F58@ha
    lfs f3, 0xfb8(r31)
    lwz r0, 0xc0(r3)
    stw r4, 0x8(r1)
    xoris r0, r0, 0x8000
    lfd f4, lbl_80743F58@l(r5)
    stw r0, 0xc(r1)
    lfd f0, 0x8(r1)
    stw r4, 0x10(r1)
    fsubs f0, f0, f4
    stfs f0, 0xfbc(r31)
    lwz r0, 0xc0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fcmpo cr0, f3, f0
    bge lbl_fn_8025BD1C_000007FC
    lfs f0, lbl_808834B0
    stw r4, 0x10(r1)
    fadds f3, f3, f0
    stfs f3, 0xfb8(r31)
    lwz r0, 0xc0(r3)
    xoris r0, r0, 0x8000
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f4
    fcmpu cr0, f3, f0
    bne lbl_fn_8025BD1C_00000800
    li r30, 0x1
    b lbl_fn_8025BD1C_00000800
lbl_fn_8025BD1C_000007FC:
    li r30, 0x1
lbl_fn_8025BD1C_00000800:
    lfs f3, 0x52c(r31)
    lfs f0, 0x14f4(r31)
    lfs f4, lbl_808834DC
    fsubs f0, f3, f0
    fcmpo cr0, f0, f4
    bge lbl_fn_8025BD1C_00000824
    lfs f0, lbl_808834E0
    fadds f0, f3, f0
    stfs f0, 0x52c(r31)
lbl_fn_8025BD1C_00000824:
    cmpwi r30, 0x0
    beq lbl_fn_8025BD1C_0000096C
    lfs f0, lbl_808834A8
    addi r4, r31, 0xf6c
    lwz r3, 0x14d0(r31)
    lwz r0, 0x14e0(r31)
    stfs f0, 0xfb8(r31)
    cmpwi r0, 0x0
    stw r3, 0xf7c(r31)
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0xf74(r31)
    psq_st f1, 0x0(r4), 0, 0
    bne lbl_fn_8025BD1C_000008D8
    li r0, 0x0
    stw r0, 0x14d4(r31)
    stw r0, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    li r0, 0x8
    stw r0, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl actor_setState
    lfs f0, lbl_808834B0
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808834A8
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x6b
    lfs f2, lbl_808834B4
    li r6, 0x0
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    b lbl_fn_8025BD1C_00000958
lbl_fn_8025BD1C_000008D8:
    li r30, 0x0
    stw r30, 0x14d4(r31)
    stw r30, 0x14d8(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    mr r4, r31
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    stw r30, 0x58c(r31)
    mr r3, r31
    li r4, 0x3
    bl actor_setState
    lwz r3, 0x14cc(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8025BD1C_00000948
    psq_l f1, 0x4(r3), 0, 0
    addi r5, r31, 0xf6c
    lfs f2, 0xc(r3)
    mr r3, r31
    stfs f2, 0xf74(r31)
    li r4, 0x1
    psq_st f1, 0x0(r5), 0, 0
    lfs f1, lbl_808834B0
    bl fn_801603CC
    b lbl_fn_8025BD1C_00000958
lbl_fn_8025BD1C_00000948:
    lfs f1, lbl_808834B0
    mr r3, r31
    li r4, 0x0
    bl fn_801603CC
lbl_fn_8025BD1C_00000958:
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl res_findResourceSlot
lbl_fn_8025BD1C_0000096C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8025BF58(void)
{
    nofralloc
    stwu r1, -0x2d0(r1)
    mflr r0
    stw r0, 0x2d4(r1)
    stfd f31, 0x2c0(r1)
    psq_st f31, 0x2c8(r1), 0, 0
    stw r31, 0x2bc(r1)
    stw r30, 0x2b8(r1)
    mr r30, r3
    lwz r0, 0x14e0(r3)
    slwi r0, r0, 2
    add r3, r3, r0
    lwz r3, 0x14fc(r3)
    bl task_findEntryById
    stw r3, 0x638(r30)
    addi r3, r30, 0xb0
    lfs f31, 0x2e4(r30)
    li r4, 0x0
    bl atn_Anim_getLayerDuration
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_8025BF58_00000A74
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    bl res_findResourceSlot
    lfs f0, lbl_808834A8
    li r31, 0x0
    stfs f0, 0xfb8(r30)
    stw r31, 0x14d4(r30)
    stw r31, 0x14d8(r30)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    stw r31, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl actor_setState
    lis r5, lbl_80743F78@ha
    li r3, 0x34
    addi r5, r5, lbl_80743F78@l
    li r4, 0x0
    addi r5, r5, 0x2b
    li r7, 0x0
    mr r6, r5
    bl mem_alloc
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8025BF58_00000A68
    mr r4, r30
    bl fn_801C02F4
    mr r4, r3
lbl_fn_8025BF58_00000A68:
    mr r3, r30
    bl fn_80178208
    b lbl_fn_8025BF58_00000CA8
lbl_fn_8025BF58_00000A74:
    lfs f4, 0x2e4(r30)
    lfs f0, lbl_808834DC
    lfs f3, lbl_808834BC
    fsubs f0, f4, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_8025BF58_00000C10
    lwz r5, 0x14d0(r30)
    addi r3, r30, 0x14e4
    lfs f6, lbl_808834A8
    li r0, 0x0
    lfs f2, 0x530(r5)
    addi r4, r1, 0x68
    psq_l f1, 0x528(r5), 0, 0
    addi r5, r1, 0x58
    psq_st f1, 0x0(r3), 0, 0
    fadds f7, f2, f6
    lfs f5, lbl_808834B0
    addi r6, r1, 0x4c
    lfs f4, 0x14e8(r30)
    lis r7, 0x8000
    lfs f0, lbl_808834E4
    lfs f3, 0x14e4(r30)
    fadds f8, f4, f5
    stfs f2, 0x14ec(r30)
    fadds f4, f4, f0
    fadds f3, f3, f6
    li r8, 0x0
    stfs f6, 0x40(r1)
    lwz r3, lbl_8087EE98
    li r9, 0x0
    stfs f5, 0x44(r1)
    stfs f6, 0x48(r1)
    stfs f3, 0x58(r1)
    stfs f8, 0x5c(r1)
    stfs f7, 0x60(r1)
    stfs f6, 0x34(r1)
    stfs f0, 0x38(r1)
    stfs f6, 0x3c(r1)
    stfs f3, 0x4c(r1)
    stfs f4, 0x50(r1)
    stfs f7, 0x54(r1)
    stw r0, 0x9c(r1)
    stw r0, 0xa0(r1)
    stw r0, 0xa4(r1)
    stw r0, 0xa8(r1)
    bl collision_testLineSegment
    cmpwi r3, 0x0
    beq lbl_fn_8025BF58_00000B54
    addi r3, r1, 0x78
    lfs f2, 0x80(r1)
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r30, 0x14e4
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x14ec(r30)
lbl_fn_8025BF58_00000B54:
    lfs f6, lbl_808834A8
    mr r3, r30
    lfs f5, lbl_808834B0
    li r4, 0x3e8
    lfs f4, 0x14e4(r30)
    lfs f3, 0x14e8(r30)
    lfs f0, 0x14ec(r30)
    fadds f4, f4, f6
    fadds f3, f3, f6
    stfs f6, 0x28(r1)
    fadds f0, f0, f5
    stfs f6, 0x2c(r1)
    stfs f5, 0x30(r1)
    stfs f4, 0x14e4(r30)
    stfs f3, 0x14e8(r30)
    stfs f0, 0x14ec(r30)
    bl sound_initGlobalInstances
    lfs f1, lbl_808834B0
    li r3, -0x1
    stfs f1, 0x18(r1)
    li r0, 0x1
    addi r4, r30, 0x153c
    addi r7, r30, 0x14e4
    stfs f1, 0x1c(r1)
    addi r8, r30, 0x534
    addi r9, r1, 0x18
    li r5, 0x0
    stfs f1, 0x20(r1)
    li r6, 0x0
    li r10, -0x1
    stfs f1, 0x24(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl res_registerResource
    lis r4, lbl_80743F78@ha
    lfs f1, lbl_808834B0
    addi r4, r4, lbl_80743F78@l
    addi r3, r1, 0x10
    addi r4, r4, 0xf5
    li r5, 0x0
    li r6, -0x1
    bl skin_playAnimationByName
    addi r3, r1, 0x10
    li r4, -0x1
    bl ref_releaseHandle
    b lbl_fn_8025BF58_00000CA8
lbl_fn_8025BF58_00000C10:
    lfs f0, lbl_808834E8
    fsubs f0, f4, f0
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f3
    bge lbl_fn_8025BF58_00000CA8
    addi r3, r1, 0xb8
    li r4, 0x0
    li r5, 0x200
    bl memset
    lwz r4, lbl_8087F1E4
    addi r3, r1, 0xb8
    lwz r4, 0x28c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_8025BF58_00000C50
    b lbl_fn_8025BF58_00000C54
lbl_fn_8025BF58_00000C50:
    la r4, lbl_808813D0
lbl_fn_8025BF58_00000C54:
    lwz r5, 0x60(r30)
    lwz r5, 0x4(r5)
    crclr 6
    bl wcs_vformat
    lwz r3, lbl_8087F048
    addi r4, r1, 0xb8
    bl fn_80109828
    li r0, -0x1
    stw r0, 0x8(r1)
    lfs f1, lbl_808834A8
    mr r4, r30
    stw r0, 0xc(r1)
    addi r7, r30, 0x14e4
    lfs f2, lbl_808834B0
    addi r8, r30, 0x534
    lwz r3, lbl_8087F048
    li r9, 0x0
    lwz r5, 0x638(r30)
    li r10, 0x1e
    lwz r6, 0x590(r30)
    bl clip_calculateFrustum
lbl_fn_8025BF58_00000CA8:
    lwz r0, 0x2d4(r1)
    psq_l f31, 0x2c8(r1), 0, 0
    lfd f31, 0x2c0(r1)
    lwz r31, 0x2bc(r1)
    lwz r30, 0x2b8(r1)
    mtlr r0
    addi r1, r1, 0x2d0
    blr
}

asm void fn_8025C29C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    li r0, 0x0
    stw r31, 0x6c(r1)
    mr r31, r4
    stw r30, 0x68(r1)
    mr r30, r3
    stw r0, 0x14d4(r3)
    stw r0, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    li r0, 0x7
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x6
    bl actor_setState
    li r3, 0x1d
    slwi r0, r31, 2
    stw r3, 0x560(r30)
    add r3, r30, r0
    stw r31, 0x14e0(r30)
    lwz r3, 0x14fc(r3)
    bl task_findEntryById
    lfs f0, lbl_808834B0
    addi r9, r30, 0x14f0
    psq_l f1, 0x528(r30), 0, 0
    li r31, 0x1
    lfs f2, 0x530(r30)
    li r4, 0x0
    stw r3, 0x638(r30)
    addi r3, r30, 0xb0
    li r5, 0x66
    li r6, 0x1
    psq_st f1, 0x0(r9), 0, 0
    li r7, 0x0
    lfs f1, lbl_808834A8
    li r8, 0x1
    stfs f2, 0x14f8(r30)
    lfs f2, lbl_808834B4
    stw r31, 0x3fc(r30)
    stfs f0, 0x2fc(r30)
    stfs f0, 0x2e8(r30)
    bl atn_Anim_setLayerAnimation
    lfs f0, lbl_808834A8
    mr r3, r30
    stfs f0, 0xfb8(r30)
    li r4, 0x0
    bl sound_initGlobalInstances
    lwz r0, 0x14e0(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8025C29C_00000E14
    lfs f0, lbl_808834A8
    li r0, -0x1
    lfs f1, lbl_808834B0
    addi r4, r30, 0x1524
    stfs f0, 0x44(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x38
    addi r8, r1, 0x44
    stfs f0, 0x48(r1)
    addi r9, r1, 0x50
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x4c(r1)
    stfs f0, 0x38(r1)
    stfs f0, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f1, 0x50(r1)
    stfs f1, 0x54(r1)
    stfs f1, 0x58(r1)
    stfs f1, 0x5c(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl res_registerResource
    b lbl_fn_8025C29C_00000E74
lbl_fn_8025C29C_00000E14:
    lfs f0, lbl_808834A8
    li r0, -0x1
    lfs f1, lbl_808834B0
    addi r4, r30, 0x1518
    stfs f0, 0x1c(r1)
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    addi r8, r1, 0x1c
    stfs f0, 0x20(r1)
    addi r9, r1, 0x28
    li r6, 0x0
    li r10, -0x1
    stfs f0, 0x24(r1)
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r0, 0x8(r1)
    stw r31, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl res_registerResource
lbl_fn_8025C29C_00000E74:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_8025C460(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    stw r31, 0xac(r1)
    li r31, 0x0
    stw r30, 0xa8(r1)
    mr r30, r3
    stw r31, 0x14d4(r3)
    stw r31, 0x14d8(r3)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r30)
    mr r4, r30
    li r5, 0x3e8
    li r6, 0x1
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    li r0, 0xb
    stw r0, 0x58c(r30)
    mr r3, r30
    li r4, 0x3
    bl actor_setState
    lfs f0, lbl_808834B0
    li r0, 0x1
    stw r0, 0x3fc(r30)
    addi r3, r30, 0xb0
    lfs f1, lbl_808834A8
    li r4, 0x0
    stfs f0, 0x2fc(r30)
    li r5, 0x1ea
    lfs f2, lbl_808834B4
    li r6, 0x0
    stfs f0, 0x2e8(r30)
    li r7, 0x0
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    mr r3, r30
    addi r4, r30, 0x1508
    addi r5, r30, 0x1514
    bl fn_8025C7A8
    stw r31, 0x84(r1)
    addi r5, r30, 0x1508
    lfs f6, lbl_808834A8
    addi r4, r1, 0x50
    lfs f5, lbl_808834E4
    addi r6, r1, 0x44
    stw r31, 0x88(r1)
    addi r8, r30, 0x5b8
    lis r7, 0x8000
    li r9, 0x0
    stw r31, 0x8c(r1)
    stw r31, 0x90(r1)
    lfs f4, 0x1510(r30)
    lfs f3, 0x150c(r30)
    lfs f0, 0x1508(r30)
    fadds f4, f6, f4
    psq_l f1, 0x0(r5), 0, 0
    fadds f3, f5, f3
    lfs f2, 0x1510(r30)
    fadds f0, f6, f0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    stfs f6, 0x38(r1)
    lwz r3, lbl_8087EE98
    stfs f5, 0x3c(r1)
    stfs f6, 0x40(r1)
    stfs f0, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f4, 0x4c(r1)
    bl collision_testLineSegment
    cmpwi r3, 0x0
    beq lbl_fn_8025C460_00000FC0
    addi r3, r1, 0x60
    lfs f2, 0x68(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
lbl_fn_8025C460_00000FC0:
    lfs f0, 0x1514(r30)
    mr r3, r30
    stfs f0, 0x538(r30)
    li r4, 0x65
    bl sound_initGlobalInstances
    lfs f0, lbl_808834A8
    li r3, -0x1
    lfs f1, lbl_808834B0
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x1530
    addi r5, r30, 0xb0
    addi r7, r1, 0x10
    stfs f0, 0x20(r1)
    addi r8, r1, 0x1c
    addi r9, r1, 0x28
    li r6, 0x0
    stfs f0, 0x24(r1)
    li r10, -0x1
    stfs f0, 0x10(r1)
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl res_registerResource
    lwz r0, 0xb4(r1)
    lwz r31, 0xac(r1)
    lwz r30, 0xa8(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_8025C624(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    li r5, 0x3e9
    li r6, 0x0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    mr r4, r31
    stw r30, 0x48(r1)
    stw r29, 0x44(r1)
    li r29, 0x0
    stw r29, 0x1554(r3)
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    lwz r3, lbl_8087F3C0
    mr r4, r31
    li r5, 0x3ea
    li r6, 0x0
    bl res_findResourceSlot
    li r3, 0x0
    li r4, 0x0
    bl sound_initGlobalInstances
    lfs f0, lbl_808834A8
    li r0, -0x1
    lfs f1, lbl_808834B0
    li r30, 0x1
    stfs f0, 0x20(r1)
    addi r4, r31, 0x1574
    addi r5, r31, 0xb0
    addi r7, r1, 0x14
    stfs f0, 0x24(r1)
    addi r8, r1, 0x20
    addi r9, r1, 0x30
    li r6, 0x0
    stfs f0, 0x28(r1)
    li r10, -0x1
    stfs f0, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x34(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x3c(r1)
    stw r0, 0x8(r1)
    stw r30, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl res_registerResource
    lis r4, lbl_80743F50@ha
    lfs f1, lbl_808834B0
    addi r4, r4, lbl_80743F50@l
    addi r3, r1, 0x10
    lwz r4, 0x4(r4)
    addi r5, r31, 0x528
    li r6, 0x0
    li r7, -0x1
    bl skin_applyWeights
    addi r3, r1, 0x10
    li r4, -0x1
    bl ref_releaseHandle
    lwz r5, lbl_8087F430
    li r0, 0x5
    lfs f1, lbl_808834B0
    lwz r3, 0x96c(r5)
    lfs f0, lbl_808834CC
    srwi r4, r3, 31
    clrlwi r3, r3, 31
    xor r3, r3, r4
    subf r3, r4, r3
    stw r3, 0x96c(r5)
    stw r0, 0x970(r5)
    stfs f1, 0x974(r5)
    stfs f0, 0x978(r5)
    lwz r3, 0x15dc(r31)
    addi r0, r3, 0x1
    stw r0, 0x15dc(r31)
    cmpwi r0, 0x2
    bge lbl_fn_8025C624_0000118C
    stw r29, 0x15d4(r31)
    b lbl_fn_8025C624_000011B8
lbl_fn_8025C624_0000118C:
    cmpwi r0, 0x4
    bge lbl_fn_8025C624_0000119C
    stw r30, 0x15d4(r31)
    b lbl_fn_8025C624_000011B8
lbl_fn_8025C624_0000119C:
    lwz r3, 0x15d4(r31)
    addi r0, r3, 0x1
    srwi r3, r0, 31
    clrlwi r0, r0, 31
    xor r0, r0, r3
    subf r0, r3, r0
    stw r0, 0x15d4(r31)
lbl_fn_8025C624_000011B8:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8025C7A8(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x40
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    bl _savegpr_25
    lwz r0, 0x14c4(r3)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    cmpwi r0, 0x0
    bne lbl_fn_8025C7A8_00001210
    li r3, 0x0
    b lbl_fn_8025C7A8_00001338
lbl_fn_8025C7A8_00001210:
    li r26, 0x0
    b lbl_fn_8025C7A8_000012DC
lbl_fn_8025C7A8_00001218:
    slwi r28, r25, 2
    b lbl_fn_8025C7A8_000012D0
lbl_fn_8025C7A8_00001220:
    lwz r4, 0x14c0(r29)
    addi r3, r1, 0x14
    lfs f0, 0x530(r29)
    lwzx r4, r4, r28
    lfs f4, 0x52c(r29)
    lfs f6, 0xc(r4)
    lfs f5, 0x8(r4)
    fsubs f6, f6, f0
    lfs f3, 0x4(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x18(r1)
    stfs f0, 0x14(r1)
    stfs f6, 0x1c(r1)
    bl PSVECSquareMag
    subi r0, r25, 0x1
    lwz r3, 0x14c0(r29)
    slwi r27, r0, 2
    lfs f0, 0x530(r29)
    lwzx r4, r3, r27
    fmr f31, f1
    lfs f4, 0x52c(r29)
    addi r3, r1, 0x8
    lfs f6, 0xc(r4)
    lfs f5, 0x8(r4)
    fsubs f6, f6, f0
    lfs f3, 0x4(r4)
    lfs f0, 0x528(r29)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0xc(r1)
    stfs f0, 0x8(r1)
    stfs f6, 0x10(r1)
    bl PSVECSquareMag
    fcmpo cr0, f31, f1
    ble lbl_fn_8025C7A8_000012C8
    lwz r4, 0x14c0(r29)
    lwzx r3, r4, r28
    lwzx r0, r4, r27
    stwx r0, r4, r28
    stwx r3, r4, r27
lbl_fn_8025C7A8_000012C8:
    subi r28, r28, 0x4
    subi r25, r25, 0x1
lbl_fn_8025C7A8_000012D0:
    cmplw r25, r26
    bgt lbl_fn_8025C7A8_00001220
    addi r26, r26, 0x1
lbl_fn_8025C7A8_000012DC:
    lwz r28, 0x14c4(r29)
    subi r25, r28, 0x1
    cmplw r26, r25
    blt lbl_fn_8025C7A8_00001218
    cmplwi r28, 0x3
    ble lbl_fn_8025C7A8_000012F8
    li r28, 0x3
lbl_fn_8025C7A8_000012F8:
    bl rand
    divw r0, r3, r28
    lwz r4, 0x14c0(r29)
    mullw r0, r0, r28
    subf r0, r0, r3
    li r3, 0x1
    slwi r0, r0, 2
    lwzx r4, r4, r0
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    lwz r4, 0x14c0(r29)
    lwzx r4, r4, r0
    lfs f0, 0x14(r4)
    stfs f0, 0x0(r31)
lbl_fn_8025C7A8_00001338:
    addi r11, r1, 0x40
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8025C92C(void)
{
    nofralloc
    lwz r0, 0x1554(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8025C92C_000013BC
    cmpwi r5, 0x0
    beq lbl_fn_8025C92C_000013BC
    lwz r0, 0x15d4(r3)
    li r3, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_8025C92C_00001390
    lfs f1, 0x80(r5)
    lfs f0, lbl_808834A8
    fcmpo cr0, f1, f0
    ble lbl_fn_8025C92C_00001390
    li r3, 0x1
lbl_fn_8025C92C_00001390:
    cmpwi r0, 0x1
    bne lbl_fn_8025C92C_000013AC
    lfs f1, 0x74(r5)
    lfs f0, lbl_808834A8
    fcmpo cr0, f1, f0
    ble lbl_fn_8025C92C_000013AC
    li r3, 0x1
lbl_fn_8025C92C_000013AC:
    cmpwi r3, 0x0
    bne lbl_fn_8025C92C_000013BC
    li r3, 0x4
    blr
lbl_fn_8025C92C_000013BC:
    li r3, 0x0
    blr
}

asm void fn_8025C998(void)
{
    nofralloc
    stwu r1, -0x6a0(r1)
    mflr r0
    stw r0, 0x6a4(r1)
    addi r11, r1, 0x6a0
    bl _savegpr_25
    mr r31, r5
    lwz r5, 0x20(r5)
    mr r30, r3
    bl entity_Instance_constructor
    lis r3, lbl_80784958@ha
    addi r28, r30, 0x14b0
    addi r3, r3, lbl_80784958@l
    stw r3, 0x0(r30)
    mr r3, r28
    bl atn_LoadHandle_constructor
    lfs f1, lbl_808834F0
    lis r3, lbl_8078FBB0@ha
    li r29, 0x0
    lfs f0, lbl_808834F4
    addi r3, r3, lbl_8078FBB0@l
    li r4, 0x78
    li r0, 0x32
    stw r3, 0x0(r28)
    addi r3, r30, 0x156c
    stw r29, 0x14b8(r30)
    stw r29, 0x14bc(r30)
    stw r29, 0x14c4(r30)
    stw r29, 0x14c8(r30)
    stw r29, 0x14cc(r30)
    stw r29, 0x14d0(r30)
    stw r29, 0x14ec(r30)
    stw r29, 0x14f0(r30)
    stw r29, 0x14f4(r30)
    stw r29, 0x14f8(r30)
    stw r29, 0x1514(r30)
    stw r29, 0x151c(r30)
    stw r29, 0x1520(r30)
    stw r29, 0x1528(r30)
    stw r29, 0x152c(r30)
    stw r29, 0x1530(r30)
    stw r4, 0x1534(r30)
    stw r0, 0x1538(r30)
    stfs f1, 0x1540(r30)
    stw r29, 0x1548(r30)
    stfs f1, 0x154c(r30)
    stfs f1, 0x1550(r30)
    stfs f1, 0x1554(r30)
    stfs f1, 0x1558(r30)
    stfs f1, 0x155c(r30)
    stfs f1, 0x1560(r30)
    stfs f1, 0x1564(r30)
    stfs f0, 0x1568(r30)
    bl res_MsgHandle_constructor
    addi r3, r30, 0x1578
    bl res_MsgHandle_constructor
    addi r3, r30, 0x1584
    bl res_MsgHandle_constructor
    lwz r4, 0x12a4(r30)
    li r5, 0x5a
    lwz r0, 0x12a8(r30)
    lis r3, lbl_807440F4@ha
    lfs f0, lbl_808834F8
    oris r4, r4, 0x40
    ori r0, r0, 0x800
    stw r5, 0x15c0(r30)
    addi r28, r3, lbl_807440F4@l
    addi r27, r1, 0x38
    stfs f0, 0x15c4(r30)
    mr r3, r28
    stw r4, 0x12a4(r30)
    stw r0, 0x12a8(r30)
    stw r29, 0x15c8(r30)
    stw r29, 0x15cc(r30)
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
lbl_fn_8025C998_000015F8:
    addi r3, r1, 0x44
    bl talk_parseQuotedString
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_8025C998_00001690
    addi r4, r28, 0x2b
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_fn_8025C998_00001690
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_fn_8025C998_00001680
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8025C998_0000164C
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_8025C998_00001650
lbl_fn_8025C998_0000164C:
    lwz r25, 0x30(r1)
lbl_fn_8025C998_00001650:
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
lbl_fn_8025C998_00001680:
    addi r3, r1, 0x44
    bl talk_scanQuotedString
    cmpwi r3, 0x0
    bne lbl_fn_8025C998_000015F8
lbl_fn_8025C998_00001690:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl fn_8006AFF8
    lwz r0, 0x20(r1)
    addi r3, r30, 0x14b0
    srwi. r0, r0, 31
    bne lbl_fn_8025C998_000016B8
    addi r4, r1, 0x21
    b lbl_fn_8025C998_000016BC
lbl_fn_8025C998_000016B8:
    lwz r4, 0x28(r1)
lbl_fn_8025C998_000016BC:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r5, 0x5c(r30)
    lis r3, lbl_807440F4@ha
    addi r3, r3, lbl_807440F4@l
    lwz r0, 0x9c(r5)
    addi r4, r3, 0x35
    ori r0, r0, 0x1000
    stw r0, 0x9c(r5)
    lwz r0, 0x15c8(r30)
    cmpwi r0, 0x0
    bne lbl_fn_8025C998_00001714
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8025C998_00001714
    addi r3, r3, 0x10
    bl node_createNamedChild
    stw r3, 0x15c8(r30)
    mr r26, r3
    b lbl_fn_8025C998_00001718
lbl_fn_8025C998_00001714:
    li r26, 0x0
lbl_fn_8025C998_00001718:
    lis r31, lbl_807440F4@ha
    mr r3, r26
    addi r31, r31, lbl_807440F4@l
    addi r5, r30, 0x15cc
    addi r4, r31, 0x46
    li r6, 0x0
    li r7, 0x0
    bl route_createSegment
    lis r6, 0xf
    mr r3, r26
    addi r7, r6, 0x4240
    addi r4, r31, 0x50
    addi r5, r30, 0x15c0
    li r6, 0x0
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl route_findNextWaypoint
    lfs f1, lbl_808834F0
    mr r3, r26
    lfs f2, lbl_808834FC
    addi r4, r31, 0x5a
    lfs f3, lbl_80883500
    addi r5, r30, 0x15c4
    li r6, 0x0
    li r7, 0x0
    bl route_interpolatePath
    addi r3, r30, 0x156c
    addi r4, r31, 0x6c
    bl res_MsgHandle_destructor
    addi r3, r30, 0x1578
    addi r4, r31, 0x82
    bl res_MsgHandle_destructor
    addi r3, r30, 0x1584
    addi r4, r31, 0x8f
    bl res_MsgHandle_destructor
    lwz r0, 0x12a8(r30)
    ori r0, r0, 0x20
    stw r0, 0x12a8(r30)
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025C998_000017C8
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8025C998_000017C8:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025C998_000017DC
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8025C998_000017DC:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8025C998_000017F0
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8025C998_000017F0:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_8025CDE0(void)
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
    beq lbl_fn_8025CDE0_00001904
    addic. r0, r3, 0x15c8
    beq lbl_fn_8025CDE0_00001858
    lwz r4, 0x15c8(r3)
    cmpwi r4, 0x0
    beq lbl_fn_8025CDE0_00001858
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8025CDE0_00001858
    bl node_destroy
lbl_fn_8025CDE0_00001858:
    addic. r31, r29, 0x1584
    beq lbl_fn_8025CDE0_00001878
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_8025CDE0_00001878
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_8025CDE0_00001878:
    addic. r31, r29, 0x1578
    beq lbl_fn_8025CDE0_00001898
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_8025CDE0_00001898
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_8025CDE0_00001898:
    addic. r31, r29, 0x156c
    beq lbl_fn_8025CDE0_000018B8
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_8025CDE0_000018B8
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_8025CDE0_000018B8:
    addic. r0, r29, 0x14c4
    beq lbl_fn_8025CDE0_000018D8
    lwz r3, 0x14cc(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8025CDE0_000018D8
    beq lbl_fn_8025CDE0_000018D8
    subi r3, r3, 0x10
    bl mem_getAllocSize
lbl_fn_8025CDE0_000018D8:
    addic. r3, r29, 0x14b0
    beq lbl_fn_8025CDE0_000018E8
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_8025CDE0_000018E8:
    mr r3, r29
    li r4, 0x0
    bl entity_Instance_destructor
    cmpwi r30, 0x0
    ble lbl_fn_8025CDE0_00001904
    mr r3, r29
    bl dtor_80084684
lbl_fn_8025CDE0_00001904:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8025CEF8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl boss_updatePhaseState
    cmpwi r3, 0x0
    bne lbl_fn_8025CEF8_00001A08
    lwz r3, 0x1438(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8025CEF8_00001960
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8025CEF8_00001A08
lbl_fn_8025CEF8_00001960:
    addi r3, r31, 0x156c
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_8025CEF8_00001A08
    addi r3, r31, 0x1578
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_8025CEF8_00001A08
    addi r3, r31, 0x1584
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_8025CEF8_00001A08
    addi r3, r31, 0x14b0
    bl atn_LoadHandle_isLoading
    cmpwi r3, 0x0
    bne lbl_fn_8025CEF8_00001A08
    lwz r4, 0x7ec(r31)
    li r0, 0x0
    stw r0, 0x58c(r31)
    mr r3, r31
    ori r0, r4, 0x1c0
    li r4, 0x3
    oris r0, r0, 0x1
    ori r0, r0, 0xc21d
    oris r0, r0, 0x380
    stw r0, 0x7ec(r31)
    bl actor_setState
    mr r3, r31
    bl fn_8025CFF4
    lwz r3, 0x1438(r31)
    lfs f0, 0x568(r31)
    cmpwi r3, 0x0
    stfs f0, 0x1518(r31)
    beq lbl_fn_8025CEF8_00001A00
    li r4, 0x0
    bl atn_Task_setActive
    lwz r3, 0x1438(r31)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8025CEF8_00001A00:
    li r3, 0x1
    b lbl_fn_8025CEF8_00001A0C
lbl_fn_8025CEF8_00001A08:
    li r3, 0x0
lbl_fn_8025CEF8_00001A0C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
