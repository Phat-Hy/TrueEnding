#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_17(void);
extern void _restgpr_25(void);
extern void _savegpr_17(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void actor_validateIndex(void);
extern void actor_dispatchMessage(void);
extern void fn_80040B40(void);
extern void collision_queryGeometry(void);
extern void talk_parseQuotedString(void);
extern void talk_scanQuotedString(void);
extern void talk_setSpeakerName(void);
extern void boss_initActionStream(void);
extern void mem_free(void);
extern void route_createSegment(void);
extern void node_createNamedChild(void);
extern void node_destroy(void);
extern void atn_Anim_setLayerAnimation(void);
extern void cursor_updateSlotState(void);
extern void atn_Anim_getLayerDuration(void);
extern void msg_getMessageById(void);
extern void skin_playAnimationByName(void);
extern void morph_reset(void);
extern void ref_releaseHandle(void);
extern void atn_Task_setActive(void);
extern void str_parseInt(void);
extern void str_skipWhitespace(void);
extern void system_getNextSequenceId(void);
extern void scissor_clipFrustum(void);
extern void fn_80102824(void);
extern void boss_updatePhaseState(void);
extern void quest_resetObjectiveBounds(void);
extern void quest_evaluateConditions(void);
extern void quest_updateFlow(void);
extern void dialog_updateScriptState(void);
extern void inventory_unequipItem(void);
extern void inventory_calcTotalStats(void);
extern void shop_canPurchaseItem(void);
extern void party_evalTacticCondition(void);
extern void fn_8016C1E0(void);
extern void actor_setState(void);
extern void battle_resolveAggroHierarchy(void);
extern void battle_updateTargetAggro(void);
extern void battle_calcOutcomeBonus(void);
extern void battle_calcExpPosition(void);
extern void actor_getMovementFlags(void);
extern void fn_8017A33C(void);
extern void fn_8017AC3C(void);
extern void task_findEntryById(void);
extern void res_MsgHandle_ctor(void);
extern void res_Resource_destructor(void);
extern void res_Resource_unload(void);
extern void res_MsgHandle_isLoading(void);
extern void res_MsgHandle_constructor(void);
extern void res_MsgHandle_destructor(void);
extern void res_MsgHandle_unload(void);
extern void res_MsgHandle_update(void);
extern void fn_802F2C50(void);
extern void fn_802F33A0(void);
extern void fn_802F389C(void);
extern void fn_802F3BE8(void);
extern void fn_802F42CC(void);
extern void fn_802F469C(void);
extern void fn_802F4A98(void);
extern void fn_802F5370(void);
extern void fn_802F566C(void);
extern void fn_802F58A0(void);
extern void fn_802F66CC(void);
extern void entity_Instance_constructor(void);
extern void entity_Instance_destructor(void);
extern void boss_getOffset54(void);
extern void boss_getOffset50(void);
extern void atn_LoadHandle_constructor(void);
extern void atn_LoadHandle_destructor(void);
extern void atn_LoadHandle_isLoading(void);
extern void fn_8059B670(void);
extern void fn_8059C6E0(void);
extern void fn_805A5224(void);
extern void PSMTXRotRad(void);
extern void PSMTXMultVec(void);
extern void PSVECNormalize(void);
extern void PSVECMag(void);
extern void PSVECDotProduct(void);
extern void printf(void);
extern void rand(void);
extern void strcmp(void);
extern void strncmp(void);
extern void atoi(void);
extern void abort(void);
extern void std_sin(void);
extern void std_fmod(void);
extern void math_u64DivMod(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807878E8[];
extern u8 lbl_80748460[];
extern u8 lbl_80748468[];
extern u8 lbl_80748470[];
extern u8 lbl_80748488[];
extern u8 lbl_80748538[];
extern u8 lbl_80748558[];
extern u8 lbl_80775A88[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_80787938[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807C6B90[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087EE98;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F490;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9E8;
extern u32 lbl_80884850;
extern u32 lbl_80884854;
extern u32 lbl_80884858;
extern u32 lbl_8088485C;
extern u32 lbl_80884860;
extern u32 lbl_80884868;
extern u32 lbl_8088486C;
extern u32 lbl_8088487C;
extern u32 lbl_80884888;
extern u32 lbl_808848A8;
extern u32 lbl_808848AC;
extern u32 lbl_808848B0;
extern u32 lbl_808848B4;
extern u32 lbl_808848B8;
extern u32 lbl_808848BC;
extern u32 lbl_808848C0;
extern u32 lbl_808848C4;
extern u32 lbl_808848C8;
extern u32 lbl_808848D0;
extern u32 lbl_808848D4;
extern u32 lbl_808848D8;
extern u32 lbl_808848DC;
extern u32 lbl_808848E0;
extern u32 lbl_808848E4;
extern u32 lbl_808848E8;
extern u32 lbl_808848EC;
extern u32 lbl_808848F0;
extern u32 lbl_808848F4;
extern u32 lbl_808848F8;
extern u32 lbl_808848FC;
extern u32 lbl_80884900;
extern u32 lbl_80884904;
extern u32 lbl_80884908;

/* Function declarations */
void fn_802F0964(void);
void fn_802F0988(void);
u32 fn_802F0990(void);
void fn_802F0998(void);
void fn_802F09D4(void);
void fn_802F0F60(void);
void fn_802F1120(void);
void fn_802F1240(void);
void fn_802F1320(void);
void fn_802F1490(void);
void fn_802F1524(void);
void fn_802F18E0(void);
void fn_802F1A2C(void);
void fn_802F2294(void);

asm void fn_802F0964(void)
{
    nofralloc
    mr r0, r6
    mr r9, r7
    mr r10, r8
    mr r6, r4
    mr r7, r5
    mr r8, r0
    li r4, 0x0
    li r5, 0x0
    b scissor_clipFrustum
}

asm void fn_802F0988(void)
{
    nofralloc
    lfs f1, 0x3a4(r3)
    blr
}

u32 fn_802F0990(void)
{
    return lbl_8087EFA8;
}

asm void fn_802F0998(void)
{
    nofralloc
    lwz r4, 0x30(r3)
    lis r3, lbl_80748468@ha
    stwu r1, -0x10(r1)
    lis r0, 0x4330
    lfd f2, lbl_80748468@l(r3)
    stw r0, 0x8(r1)
    mullw r0, r4, r4
    lfs f0, lbl_808848B0
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    lfd f1, 0x8(r1)
    fsubs f1, f1, f2
    fdivs f1, f0, f1
    addi r1, r1, 0x10
    blr
}

asm void fn_802F09D4(void)
{
    nofralloc
    stwu r1, -0x140(r1)
    mflr r0
    lfs f3, lbl_80884850
    stw r0, 0x144(r1)
    addi r5, r1, 0x48
    lfs f0, lbl_80884858
    stfd f31, 0x130(r1)
    psq_st f31, 0x138(r1), 0, 0
    stfd f30, 0x120(r1)
    psq_st f30, 0x128(r1), 0, 0
    fmr f30, f1
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    stw r29, 0x114(r1)
    mr r29, r4
    li r4, 0x79
    psq_l f1, 0x528(r3), 0, 0
    lfs f2, 0x530(r3)
    stfs f2, 0x50(r1)
    psq_st f1, 0x0(r5), 0, 0
    addi r5, r1, 0x3c
    psq_l f1, 0x534(r3), 0, 0
    lfs f2, 0x53c(r3)
    psq_st f1, 0x0(r5), 0, 0
    stfs f3, 0x30(r1)
    stfs f3, 0x34(r1)
    stfs f0, 0x38(r1)
    lfs f0, 0x538(r3)
    addi r3, r1, 0x58
    stfs f2, 0x44(r1)
    fmr f1, f0
    bl PSMTXRotRad
    addi r4, r1, 0x30
    addi r3, r1, 0x58
    mr r5, r4
    bl PSMTXMultVec
    lfs f3, 0x4(r29)
    lis r3, lbl_80748460@ha
    lfs f0, 0x40(r1)
    lfd f2, lbl_80748460@l(r3)
    fsubs f1, f3, f0
    bl std_fmod
    frsp f3, f1
    lfs f0, lbl_80884888
    fcmpo cr0, f3, f0
    ble lbl_fn_802F09D4_00000134
    lfs f0, lbl_808848A8
    fsubs f3, f3, f0
lbl_fn_802F09D4_00000134:
    lfs f0, lbl_808848AC
    fcmpo cr0, f3, f0
    bge lbl_fn_802F09D4_00000148
    lfs f0, lbl_808848A8
    fadds f3, f3, f0
lbl_fn_802F09D4_00000148:
    lfs f0, lbl_8088486C
    lwz r3, lbl_8087EFA8
    fcmpo cr0, f0, f3
    lfs f31, 0x3a4(r3)
    ble lbl_fn_802F09D4_00000160
    b lbl_fn_802F09D4_00000164
lbl_fn_802F09D4_00000160:
    fmr f0, f3
lbl_fn_802F09D4_00000164:
    lfs f5, lbl_80884868
    fcmpo cr0, f5, f0
    bge lbl_fn_802F09D4_00000174
    b lbl_fn_802F09D4_00000188
lbl_fn_802F09D4_00000174:
    lfs f5, lbl_8088486C
    fcmpo cr0, f5, f3
    ble lbl_fn_802F09D4_00000184
    b lbl_fn_802F09D4_00000188
lbl_fn_802F09D4_00000184:
    fmr f5, f3
lbl_fn_802F09D4_00000188:
    lfs f3, lbl_8088485C
    lfs f0, 0x570(r30)
    lfs f6, lbl_80884858
    fsubs f0, f3, f0
    fcmpo cr0, f6, f0
    ble lbl_fn_802F09D4_000001A4
    b lbl_fn_802F09D4_000001A8
lbl_fn_802F09D4_000001A4:
    fmr f6, f0
lbl_fn_802F09D4_000001A8:
    lfs f3, lbl_808848B4
    lfs f0, 0x570(r30)
    lfs f4, lbl_80884854
    fmuls f0, f3, f0
    lfs f7, lbl_80884858
    fmuls f6, f4, f6
    fcmpo cr0, f7, f0
    ble lbl_fn_802F09D4_000001CC
    b lbl_fn_802F09D4_000001D0
lbl_fn_802F09D4_000001CC:
    fmr f7, f0
lbl_fn_802F09D4_000001D0:
    lfs f3, lbl_80884860
    fmuls f0, f6, f31
    lfs f4, lbl_80884858
    fdivs f7, f3, f7
    fcmpo cr0, f4, f0
    bge lbl_fn_802F09D4_000001EC
    b lbl_fn_802F09D4_000001F0
lbl_fn_802F09D4_000001EC:
    fmr f4, f0
lbl_fn_802F09D4_000001F0:
    lfs f3, 0x574(r30)
    fmuls f0, f6, f31
    lfs f6, lbl_80884858
    fnmsubs f3, f3, f4, f3
    fcmpo cr0, f6, f0
    stfs f3, 0x574(r30)
    bge lbl_fn_802F09D4_00000210
    b lbl_fn_802F09D4_00000214
lbl_fn_802F09D4_00000210:
    fmr f6, f0
lbl_fn_802F09D4_00000214:
    fmuls f5, f5, f7
    lfs f3, 0x57c(r30)
    lfs f4, 0x40(r1)
    lfs f0, lbl_8088487C
    fnmsubs f3, f3, f6, f3
    fadds f4, f4, f5
    fcmpo cr0, f30, f0
    stfs f3, 0x57c(r30)
    stfs f4, 0x40(r1)
    ble lbl_fn_802F09D4_000002A0
    fsubs f3, f30, f0
    lfs f0, lbl_808848B4
    lwz r0, 0x154c(r30)
    fdivs f30, f3, f0
    cmpwi r0, 0x0
    beq lbl_fn_802F09D4_0000025C
    lfs f0, lbl_80884858
    b lbl_fn_802F09D4_00000260
lbl_fn_802F09D4_0000025C:
    lfs f0, lbl_80884860
lbl_fn_802F09D4_00000260:
    fmuls f30, f30, f0
    lfs f3, lbl_80884850
    lfs f0, lbl_8088487C
    addi r3, r1, 0x88
    lfs f1, 0x40(r1)
    li r4, 0x79
    fmuls f0, f0, f30
    stfs f3, 0x24(r1)
    stfs f3, 0x28(r1)
    stfs f0, 0x2c(r1)
    bl PSMTXRotRad
    addi r4, r1, 0x24
    addi r3, r1, 0x88
    mr r5, r4
    bl PSMTXMultVec
    b lbl_fn_802F09D4_000002B0
lbl_fn_802F09D4_000002A0:
    lfs f0, lbl_80884850
    stfs f0, 0x24(r1)
    stfs f0, 0x28(r1)
    stfs f0, 0x2c(r1)
lbl_fn_802F09D4_000002B0:
    lfs f3, lbl_80884858
    fcmpo cr0, f3, f31
    bge lbl_fn_802F09D4_000002C0
    b lbl_fn_802F09D4_000002C4
lbl_fn_802F09D4_000002C0:
    fmr f3, f31
lbl_fn_802F09D4_000002C4:
    lfs f0, 0x24(r1)
    lfs f4, lbl_80884858
    fmuls f0, f0, f3
    fcmpo cr0, f4, f31
    stfs f0, 0x24(r1)
    bge lbl_fn_802F09D4_000002E0
    b lbl_fn_802F09D4_000002E4
lbl_fn_802F09D4_000002E0:
    fmr f4, f31
lbl_fn_802F09D4_000002E4:
    lfs f0, 0x28(r1)
    lfs f3, lbl_80884858
    fmuls f0, f0, f4
    fcmpo cr0, f3, f31
    stfs f0, 0x28(r1)
    bge lbl_fn_802F09D4_00000300
    b lbl_fn_802F09D4_00000304
lbl_fn_802F09D4_00000300:
    fmr f3, f31
lbl_fn_802F09D4_00000304:
    lfs f0, 0x2c(r1)
    fmuls f0, f0, f3
    stfs f0, 0x2c(r1)
    lwz r0, 0x958(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_802F09D4_00000360
    lwz r4, lbl_8087F0A8
    lis r0, 0x4330
    stw r0, 0x108(r1)
    lis r3, lbl_80748468@ha
    lwz r0, 0x30(r4)
    lfd f5, lbl_80748468@l(r3)
    mullw r0, r0, r0
    lfs f3, lbl_808848B0
    lfs f0, 0x578(r30)
    xoris r0, r0, 0x8000
    stw r0, 0x10c(r1)
    lfd f4, 0x108(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fmadds f0, f31, f3, f0
    stfs f0, 0x578(r30)
lbl_fn_802F09D4_00000360:
    lfs f3, 0x24(r1)
    lfs f0, 0x574(r30)
    lfs f5, 0x28(r1)
    fadds f3, f3, f0
    lfs f0, lbl_808848B8
    lfs f4, 0x2c(r1)
    stfs f3, 0x24(r1)
    lfs f3, 0x578(r30)
    fadds f3, f5, f3
    stfs f3, 0x28(r1)
    fcmpo cr0, f3, f0
    lfs f3, 0x57c(r30)
    fadds f3, f4, f3
    stfs f3, 0x2c(r1)
    bge lbl_fn_802F09D4_000003A0
    stfs f0, 0x28(r1)
lbl_fn_802F09D4_000003A0:
    lwz r3, 0x152c(r30)
    li r31, 0x1
    cmpwi r3, 0x0
    beq lbl_fn_802F09D4_000003BC
    lwz r0, 0x5c0(r3)
    clrrwi r0, r0, 1
    stw r0, 0x5c0(r3)
lbl_fn_802F09D4_000003BC:
    addi r29, r1, 0x48
    li r0, 0x0
    lfs f2, 0x50(r1)
    addi r3, r1, 0x18
    psq_l f1, 0x0(r29), 0, 0
    mr r4, r30
    psq_st f1, 0x0(r3), 0, 0
    mr r5, r29
    addi r3, r1, 0x8
    stfs f2, 0x20(r1)
    stw r0, 0xec(r1)
    stw r0, 0xf0(r1)
    stw r0, 0xf4(r1)
    stw r0, 0xf8(r1)
    bl battle_calcExpPosition
    mr r3, r30
    bl actor_getMovementFlags
    mr r7, r3
    lwz r3, lbl_8087EE98
    lfs f1, 0x14(r1)
    addi r4, r1, 0xb8
    addi r5, r1, 0x8
    addi r6, r1, 0x24
    addi r8, r30, 0x5b8
    li r9, 0x0
    bl collision_queryGeometry
    addi r4, r1, 0xc8
    lfs f2, 0xd0(r1)
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r3, 0x0
    psq_st f1, 0x0(r29), 0, 0
    lfs f0, 0x14(r1)
    stfs f2, 0x50(r1)
    lfs f5, 0x48(r1)
    lfs f3, 0x5a4(r30)
    lfs f4, 0x4c(r1)
    fsubs f3, f5, f3
    stfs f3, 0x48(r1)
    lfs f3, 0x5a8(r30)
    fsubs f3, f4, f3
    stfs f3, 0x4c(r1)
    fsubs f0, f3, f0
    lfs f3, 0x5ac(r30)
    fsubs f3, f2, f3
    stfs f0, 0x4c(r1)
    stfs f3, 0x50(r1)
    beq lbl_fn_802F09D4_00000490
    lwz r0, 0xf4(r1)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_802F09D4_00000490
    lfs f0, lbl_80884850
    stfs f0, 0x28(r1)
lbl_fn_802F09D4_00000490:
    lwz r3, 0xec(r1)
    cmpwi r3, 0x0
    beq lbl_fn_802F09D4_000004A4
    lwz r0, 0x0(r3)
    b lbl_fn_802F09D4_000004A8
lbl_fn_802F09D4_000004A4:
    li r0, -0x1
lbl_fn_802F09D4_000004A8:
    lwz r3, 0x152c(r30)
    stw r0, 0x634(r30)
    cmpwi r3, 0x0
    beq lbl_fn_802F09D4_000004C4
    lwz r0, 0x5c0(r3)
    ori r0, r0, 0x1
    stw r0, 0x5c0(r3)
lbl_fn_802F09D4_000004C4:
    lwz r0, 0x54c(r30)
    li r3, 0x0
    stw r3, 0x610(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802F09D4_000004F4
    lfs f3, 0x4c(r1)
    lfs f0, lbl_80884850
    fcmpo cr0, f3, f0
    bge lbl_fn_802F09D4_000004F4
    stfs f0, 0x4c(r1)
    stfs f0, 0x28(r1)
lbl_fn_802F09D4_000004F4:
    lfs f3, 0x2c(r1)
    lfs f0, 0x24(r1)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl math_u64DivMod
    frsp f3, f1
    lfs f0, lbl_8088485C
    stfs f3, 0x1560(r30)
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802F09D4_00000550
    lwz r3, 0x14ec(r30)
    bl task_findEntryById
    mr r7, r3
    lwz r9, 0x5c(r3)
    lwz r8, 0x1540(r30)
    mr r6, r30
    lwz r3, lbl_8087F048
    li r4, 0x0
    lfs f1, lbl_80884850
    li r5, 0x0
    li r10, -0x1
    bl scissor_clipFrustum
lbl_fn_802F09D4_00000550:
    addi r3, r1, 0x48
    lfs f2, 0x50(r1)
    psq_l f1, 0x0(r3), 0, 0
    cmpwi r31, 0x0
    psq_st f1, 0x528(r30), 0, 0
    stfs f2, 0x530(r30)
    beq lbl_fn_802F09D4_00000580
    addi r3, r1, 0x3c
    lfs f2, 0x44(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x534(r30), 0, 0
    stfs f2, 0x53c(r30)
lbl_fn_802F09D4_00000580:
    addi r3, r1, 0x24
    lfs f2, 0x2c(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x574(r30), 0, 0
    stfs f2, 0x57c(r30)
    lfs f3, 0x2c(r1)
    lfs f0, 0x24(r1)
    fmuls f3, f3, f3
    fmadds f1, f0, f0, f3
    bl math_u64DivMod
    lwz r0, 0x153c(r30)
    frsp f3, f1
    cmpwi r0, 0x0
    stfs f3, 0x570(r30)
    beq lbl_fn_802F09D4_000005D0
    lfs f0, lbl_8088487C
    fcmpo cr0, f3, f0
    bge lbl_fn_802F09D4_000005D0
    li r0, 0x0
    stw r0, 0x153c(r30)
lbl_fn_802F09D4_000005D0:
    lwz r0, 0x144(r1)
    psq_l f31, 0x138(r1), 0, 0
    lfd f31, 0x130(r1)
    psq_l f30, 0x128(r1), 0, 0
    lfd f30, 0x120(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x140
    blr
}

asm void fn_802F0F60(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lfs f0, lbl_80884860
    stw r0, 0x74(r1)
    li r0, 0x1
    lfs f2, lbl_80884858
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stw r31, 0x5c(r1)
    mr r31, r3
    lfs f1, 0x1560(r3)
    stw r0, 0x3fc(r3)
    fcmpo cr0, f1, f0
    stfs f2, 0x2fc(r3)
    stfs f2, 0x2e8(r3)
    ble lbl_fn_802F0F60_00000758
    lfs f2, 0x57c(r3)
    lfs f1, 0x574(r3)
    addi r3, r1, 0x14
    lfs f0, lbl_80884850
    mr r4, r3
    stfs f1, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f2, 0x1c(r1)
    bl PSVECNormalize
    lfs f1, lbl_80884850
    addi r3, r1, 0x20
    lfs f0, lbl_80884858
    li r4, 0x79
    stfs f1, 0x8(r1)
    stfs f1, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r31)
    bl PSMTXRotRad
    addi r4, r1, 0x8
    addi r3, r1, 0x20
    mr r5, r4
    bl PSMTXMultVec
    addi r3, r1, 0x14
    addi r4, r1, 0x8
    bl PSVECDotProduct
    fmr f31, f1
    lis r3, lbl_80748470@ha
    lfd f1, lbl_80748470@l(r3)
    bl std_sin
    frsp f0, f1
    fcmpo cr0, f31, f0
    bge lbl_fn_802F0F60_000006E4
    lfs f1, lbl_80884850
    addi r3, r31, 0xb0
    lfs f2, lbl_80884854
    li r4, 0x0
    li r5, 0x144
    li r6, 0x0
    li r7, 0x0
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    b lbl_fn_802F0F60_0000077C
lbl_fn_802F0F60_000006E4:
    lfs f1, lbl_80884850
    addi r3, r31, 0xb0
    lfs f2, lbl_80884854
    li r4, 0x0
    li r5, 0x140
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    lfs f1, lbl_808848BC
    lfs f0, 0x1560(r31)
    fmuls f0, f1, f0
    fcmpo cr0, f1, f0
    ble lbl_fn_802F0F60_00000720
    b lbl_fn_802F0F60_00000724
lbl_fn_802F0F60_00000720:
    fmr f1, f0
lbl_fn_802F0F60_00000724:
    lfs f2, lbl_808848C0
    fcmpo cr0, f2, f1
    bge lbl_fn_802F0F60_00000734
    b lbl_fn_802F0F60_00000750
lbl_fn_802F0F60_00000734:
    lfs f2, lbl_808848BC
    lfs f0, 0x1560(r31)
    fmuls f0, f2, f0
    fcmpo cr0, f2, f0
    ble lbl_fn_802F0F60_0000074C
    b lbl_fn_802F0F60_00000750
lbl_fn_802F0F60_0000074C:
    fmr f2, f0
lbl_fn_802F0F60_00000750:
    stfs f2, 0x2e8(r31)
    b lbl_fn_802F0F60_0000077C
lbl_fn_802F0F60_00000758:
    lfs f1, lbl_80884850
    li r4, 0x0
    lfs f2, lbl_80884854
    li r5, 0x142
    li r6, 0x1
    li r7, 0x0
    li r8, 0x1
    addi r3, r3, 0xb0
    bl atn_Anim_setLayerAnimation
lbl_fn_802F0F60_0000077C:
    lwz r3, 0x1544(r31)
    subic. r0, r3, 0x1
    stw r0, 0x1544(r31)
    bge lbl_fn_802F0F60_000007A0
    li r0, 0x1e
    stw r0, 0x1544(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x1540(r31)
lbl_fn_802F0F60_000007A0:
    lwz r0, 0x74(r1)
    psq_l f31, 0x68(r1), 0, 0
    lfd f31, 0x60(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_802F1120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    lwz r4, 0x152c(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802F1120_000008C8
    lwz r0, 0x1530(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F1120_000008C8
    lwz r0, 0x58c(r3)
    cmpwi r0, 0x11
    bne lbl_fn_802F1120_000007F8
    b lbl_fn_802F1120_000008C8
lbl_fn_802F1120_000007F8:
    lwz r0, 0x154c(r3)
    li r5, 0x1f0
    cmpwi r0, 0x0
    beq lbl_fn_802F1120_00000820
    lfs f3, 0x1560(r3)
    lfs f0, lbl_808848C4
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802F1120_00000820
    li r5, 0x1f1
lbl_fn_802F1120_00000820:
    li r0, 0x1
    stw r0, 0x3fc(r4)
    lfs f0, lbl_80884858
    li r4, 0x0
    lwz r6, 0x152c(r3)
    li r7, 0x0
    lfs f1, lbl_80884850
    li r8, 0x1
    stfs f0, 0x2fc(r6)
    li r6, 0x1
    lfs f2, lbl_80884854
    lwz r9, 0x152c(r3)
    stfs f1, 0x2e8(r9)
    lwz r9, 0x152c(r3)
    lfs f0, 0x2e4(r3)
    stfs f0, 0x2e4(r9)
    lwz r3, 0x152c(r3)
    addi r3, r3, 0xb0
    bl atn_Anim_setLayerAnimation
    lwz r3, 0x152c(r31)
    addi r4, r1, 0x8
    lwz r0, 0x1530(r31)
    stw r0, 0xf1c(r3)
    lwz r3, 0x1530(r31)
    lwz r5, 0x152c(r31)
    lfs f3, 0x1c(r3)
    lfs f4, 0xc(r3)
    lfs f0, 0x2c(r3)
    stfs f4, 0x8(r1)
    fmr f2, f0
    stfs f3, 0xc(r1)
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x528(r5), 0, 0
    stfs f2, 0x530(r5)
    lwz r3, 0x152c(r31)
    lfs f2, 0x53c(r31)
    psq_l f1, 0x534(r31), 0, 0
    psq_st f1, 0x534(r3), 0, 0
    stfs f2, 0x53c(r3)
    stfs f0, 0x10(r1)
    lwz r3, 0x152c(r31)
    bl quest_updateFlow
lbl_fn_802F1120_000008C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802F1240(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_8017AC3C
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0xf
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r5, -0x1
    li r4, 0x3
    li r3, 0x0
    li r0, 0x12c
    stw r5, 0x1550(r30)
    stw r4, 0x1554(r30)
    stw r3, 0x14c0(r30)
    stw r0, 0x155c(r30)
    lwz r0, 0x12a4(r31)
    srwi. r0, r0, 31
    beq lbl_fn_802F1240_00000950
    mr r3, r31
    bl inventory_unequipItem
lbl_fn_802F1240_00000950:
    lwz r0, 0x12a4(r31)
    extrwi. r0, r0, 1, 25
    beq lbl_fn_802F1240_00000968
    mr r3, r31
    li r4, 0x0
    bl inventory_calcTotalStats
lbl_fn_802F1240_00000968:
    lwz r0, 0x139c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802F1240_00000984
    mr r3, r31
    li r4, 0x0
    li r5, 0x1
    bl fn_8017A33C
lbl_fn_802F1240_00000984:
    lwz r0, 0x1208(r31)
    cmpwi r0, 0x0
    beq lbl_fn_802F1240_00000998
    mr r3, r31
    bl battle_calcOutcomeBonus
lbl_fn_802F1240_00000998:
    mr r3, r31
    li r4, 0x0
    bl party_evalTacticCondition
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802F1320(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stw r31, 0x8c(r1)
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    lwz r0, 0x152c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F1320_00000B10
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_802F1320_00000A14
    lwz r4, lbl_8087F8A0
    cmpwi r4, 0x0
    beq lbl_fn_802F1320_00000A14
    lwz r5, 0x48(r4)
    cmpwi r5, 0x0
    beq lbl_fn_802F1320_00000A14
    mr r4, r29
    bl fn_80102824
lbl_fn_802F1320_00000A14:
    lwz r3, 0x152c(r29)
    lwz r0, 0x7e0(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802F1320_00000A30
    li r4, 0x1
    bl actor_setState
lbl_fn_802F1320_00000A30:
    lwz r3, 0x152c(r29)
    bl quest_resetObjectiveBounds
    lwz r4, 0x152c(r29)
    li r31, 0x0
    lfs f3, lbl_80884850
    addi r3, r1, 0x18
    stw r31, 0xf1c(r4)
    li r4, 0x79
    lfs f0, lbl_80884858
    lwz r5, 0x152c(r29)
    stfs f3, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f0, 0x10(r1)
    lfs f1, 0x538(r5)
    bl PSMTXRotRad
    addi r4, r1, 0x8
    addi r3, r1, 0x18
    mr r5, r4
    bl PSMTXMultVec
    lfs f1, lbl_8088486C
    addi r3, r1, 0x48
    li r4, 0x79
    bl PSMTXRotRad
    addi r4, r1, 0x8
    addi r3, r1, 0x48
    mr r5, r4
    bl PSMTXMultVec
    lfs f4, 0x8(r1)
    addi r3, r1, 0x8
    lfs f5, lbl_808848C8
    li r4, 0x0
    lfs f3, 0xc(r1)
    lfs f0, 0x10(r1)
    fmuls f4, f4, f5
    fmuls f3, f3, f5
    fmuls f2, f0, f5
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f2, 0x10(r1)
    psq_l f1, 0x0(r3), 0, 0
    lwz r3, 0x152c(r29)
    psq_st f1, 0x574(r3), 0, 0
    stfs f2, 0x57c(r3)
    lwz r3, 0x152c(r29)
    bl fn_8017AC3C
    cmpwi r30, 0x0
    stw r31, 0x152c(r29)
    beq lbl_fn_802F1320_00000B10
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0xe
    lwz r12, 0x100(r12)
    mtctr r12
    bctrl
    li r0, 0x12c
    stw r0, 0x1550(r29)
lbl_fn_802F1320_00000B10:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_802F1490(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    lis r6, lbl_80748488@ha
    stw r0, 0x114(r1)
    addi r6, r6, lbl_80748488@l
    stw r31, 0x10c(r1)
    mr r31, r4
    addi r4, r6, 0x95
    stw r30, 0x108(r1)
    mr r30, r3
    lwz r5, 0x58(r3)
    addi r3, r1, 0x8
    crclr 6
    bl sprintf
    lwz r0, 0x151c(r30)
    cmpwi r0, 0x0
    bne lbl_fn_802F1490_00000B9C
    cmpwi r31, 0x0
    beq lbl_fn_802F1490_00000B9C
    lwz r0, lbl_8087EF10
    cmpwi r0, 0x0
    beq lbl_fn_802F1490_00000B9C
    mr r3, r31
    addi r4, r1, 0x8
    bl node_createNamedChild
    stw r3, 0x151c(r30)
    mr r4, r3
    b lbl_fn_802F1490_00000BA0
lbl_fn_802F1490_00000B9C:
    li r4, 0x0
lbl_fn_802F1490_00000BA0:
    mr r3, r30
    bl fn_805A5224
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_802F1524(void)
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
    lis r3, lbl_80787938@ha
    li r29, 0x0
    addi r3, r3, lbl_80787938@l
    stw r3, 0x0(r30)
    addi r3, r30, 0x14d4
    stw r29, 0x14b0(r30)
    bl morph_reset
    addi r3, r30, 0x14d8
    bl res_MsgHandle_constructor
    lfs f1, lbl_808848D0
    li r0, 0x3c
    lfs f0, lbl_808848D4
    addi r3, r30, 0x1514
    stw r0, 0x14e4(r30)
    stfs f1, 0x14e8(r30)
    stfs f0, 0x14f0(r30)
    bl morph_reset
    addi r3, r30, 0x1518
    bl res_MsgHandle_constructor
    lfs f0, lbl_808848DC
    li r0, 0x5a
    lfs f2, lbl_808848D8
    addi r3, r30, 0x15ac
    lfs f1, lbl_808848D4
    stfs f2, 0x1524(r30)
    stfs f1, 0x152c(r30)
    stw r29, 0x1534(r30)
    stfs f0, 0x1538(r30)
    stfs f0, 0x153c(r30)
    stw r29, 0x1554(r30)
    stw r29, 0x1570(r30)
    stw r29, 0x1574(r30)
    stw r29, 0x1578(r30)
    stw r29, 0x157c(r30)
    stw r29, 0x1580(r30)
    stw r29, 0x1584(r30)
    stw r29, 0x158c(r30)
    stw r29, 0x1590(r30)
    stw r29, 0x1594(r30)
    stw r29, 0x1598(r30)
    stw r0, 0x159c(r30)
    stw r0, 0x15a0(r30)
    bl res_MsgHandle_constructor
    addi r3, r30, 0x15b8
    bl res_MsgHandle_ctor
    addi r28, r30, 0x15c4
    mr r3, r28
    bl atn_LoadHandle_constructor
    lis r4, lbl_8078FBB0@ha
    lis r3, lbl_80748558@ha
    addi r4, r4, lbl_8078FBB0@l
    stw r4, 0x0(r28)
    addi r28, r3, lbl_80748558@l
    addi r27, r1, 0x38
    stw r29, 0x15cc(r30)
    mr r3, r28
    stw r29, 0x15d0(r30)
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
lbl_fn_802F1524_00000DD8:
    addi r3, r1, 0x44
    bl talk_parseQuotedString
    cmpwi r3, 0x0
    mr r26, r3
    beq lbl_fn_802F1524_00000E70
    addi r4, r28, 0x2b
    bl strcmp
    cmpwi r3, 0x0
    beq lbl_fn_802F1524_00000E70
    mr r3, r26
    addi r4, r28, 0x2c
    li r5, 0x8
    bl strncmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1524_00000E60
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802F1524_00000E2C
    lbz r0, 0x2c(r1)
    clrlwi r25, r0, 25
    b lbl_fn_802F1524_00000E30
lbl_fn_802F1524_00000E2C:
    lwz r25, 0x30(r1)
lbl_fn_802F1524_00000E30:
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
lbl_fn_802F1524_00000E60:
    addi r3, r1, 0x44
    bl talk_scanQuotedString
    cmpwi r3, 0x0
    bne lbl_fn_802F1524_00000DD8
lbl_fn_802F1524_00000E70:
    addi r3, r1, 0x20
    addi r4, r1, 0x38
    addi r5, r1, 0x2c
    bl boss_initActionStream
    lwz r0, 0x20(r1)
    addi r3, r30, 0x15c4
    srwi. r0, r0, 31
    bne lbl_fn_802F1524_00000E98
    addi r4, r1, 0x21
    b lbl_fn_802F1524_00000E9C
lbl_fn_802F1524_00000E98:
    lwz r4, 0x28(r1)
lbl_fn_802F1524_00000E9C:
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    lwz r0, 0x5c0(r30)
    li r3, 0x3f8
    lfs f0, lbl_808848E0
    clrlwi r0, r0, 1
    stfs f0, 0x568(r30)
    stw r0, 0x5c0(r30)
    bl task_findEntryById
    stw r3, 0x1528(r30)
    li r3, 0x3f7
    bl task_findEntryById
    stw r3, 0x14ec(r30)
    li r3, 0x400
    bl task_findEntryById
    lis r31, lbl_80748558@ha
    stw r3, 0x1550(r30)
    addi r31, r31, lbl_80748558@l
    li r0, 0xa
    stw r0, 0x15a8(r30)
    addi r3, r30, 0x15ac
    addi r4, r31, 0x35
    bl res_MsgHandle_destructor
    addi r3, r30, 0x1518
    addi r4, r31, 0x4a
    bl res_MsgHandle_destructor
    addi r3, r30, 0x14d8
    addi r4, r31, 0x60
    bl res_MsgHandle_destructor
    addi r3, r30, 0x15b8
    addi r4, r31, 0x75
    bl res_Resource_unload
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802F1524_00000F38
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_802F1524_00000F38:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802F1524_00000F4C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_802F1524_00000F4C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802F1524_00000F60
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_802F1524_00000F60:
    addi r11, r1, 0x6a0
    mr r3, r30
    bl _restgpr_25
    lwz r0, 0x6a4(r1)
    mtlr r0
    addi r1, r1, 0x6a0
    blr
}

asm void fn_802F18E0(void)
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
    beq lbl_fn_802F18E0_000010A8
    addic. r0, r3, 0x15cc
    beq lbl_fn_802F18E0_00000FC8
    lwz r4, 0x15cc(r3)
    cmpwi r4, 0x0
    beq lbl_fn_802F18E0_00000FC8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802F18E0_00000FC8
    bl node_destroy
lbl_fn_802F18E0_00000FC8:
    addic. r3, r29, 0x15c4
    beq lbl_fn_802F18E0_00000FD8
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_802F18E0_00000FD8:
    addi r3, r29, 0x15b8
    li r4, -0x1
    bl res_Resource_destructor
    addic. r31, r29, 0x15ac
    beq lbl_fn_802F18E0_00001004
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_802F18E0_00001004
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_802F18E0_00001004:
    addic. r4, r29, 0x1570
    beq lbl_fn_802F18E0_00001034
    beq lbl_fn_802F18E0_00001034
    beq lbl_fn_802F18E0_00001034
    beq lbl_fn_802F18E0_00001034
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_802F18E0_00001034
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_802F18E0_00001034:
    addic. r31, r29, 0x1518
    beq lbl_fn_802F18E0_00001054
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_802F18E0_00001054
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_802F18E0_00001054:
    addi r3, r29, 0x1514
    li r4, -0x1
    bl ref_releaseHandle
    addic. r31, r29, 0x14d8
    beq lbl_fn_802F18E0_00001080
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_802F18E0_00001080
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_802F18E0_00001080:
    addi r3, r29, 0x14d4
    li r4, -0x1
    bl ref_releaseHandle
    mr r3, r29
    li r4, 0x0
    bl entity_Instance_destructor
    cmpwi r30, 0x0
    ble lbl_fn_802F18E0_000010A8
    mr r3, r29
    bl dtor_80084684
lbl_fn_802F18E0_000010A8:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_802F1A2C(void)
{
    nofralloc
    stwu r1, -0x6e0(r1)
    mflr r0
    stw r0, 0x6e4(r1)
    addi r11, r1, 0x6a0
    stfd f31, 0x6d0(r1)
    psq_st f31, 0x6d8(r1), 0, 0
    stfd f30, 0x6c0(r1)
    psq_st f30, 0x6c8(r1), 0, 0
    stfd f29, 0x6b0(r1)
    psq_st f29, 0x6b8(r1), 0, 0
    stfd f28, 0x6a0(r1)
    psq_st f28, 0x6a8(r1), 0, 0
    bl _savegpr_17
    mr r18, r3
    bl boss_updatePhaseState
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000018F4
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_802F1A2C_00001128
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_802F1A2C_000018F4
lbl_fn_802F1A2C_00001128:
    addi r3, r18, 0x15ac
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000018F4
    addi r3, r18, 0x1518
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000018F4
    addi r3, r18, 0x14d8
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000018F4
    addi r3, r18, 0x15b8
    bl res_MsgHandle_isLoading
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000018F4
    addi r3, r18, 0x15c4
    bl atn_LoadHandle_isLoading
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000018F4
    addi r3, r18, 0x15c4
    bl boss_getOffset54
    cmpwi r3, 0x0
    beq lbl_fn_802F1A2C_00001820
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_802F1A2C_00001820
    lwz r0, 0x10d8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F1A2C_00001820
    addi r3, r18, 0x15c4
    bl boss_getOffset50
    mr r20, r3
    addi r3, r18, 0x15c4
    bl boss_getOffset54
    lis r4, lbl_807772D0@ha
    li r22, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x28(r1)
    mr r19, r3
    addi r3, r1, 0x38
    stw r22, 0x2c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r22, 0x30(r1)
    stw r22, 0x34(r1)
    stw r22, 0x658(r1)
    bl memset
    addi r3, r1, 0x638
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x28(r1)
    mr r4, r19
    mr r5, r20
    addi r3, r1, 0x28
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x28
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x28(r1)
    la r4, lbl_8087D708
    bl talk_setSpeakerName
    lis r4, lbl_80748558@ha
    lis r3, __files@ha
    lfs f31, lbl_808848EC
    addi r25, r4, lbl_80748558@l
    lfs f30, lbl_808848E8
    addi r26, r3, __files@l
    lfs f28, lbl_808848D4
    addi r20, r1, 0x14
    lfs f29, lbl_808848E4
    lis r29, 0xcccd
    lis r24, 0x4000
    lis r28, 0x1555
    lis r30, 0x2aab
    lis r31, lbl_80775A88@ha
lbl_fn_802F1A2C_00001264:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    mr r17, r3
    addi r4, r25, 0x8d
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000012A8
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    addi r4, r25, 0x9a
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001810
    lwz r0, 0x157c(r18)
    ori r0, r0, 0x2
    stw r0, 0x157c(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000012A8:
    mr r3, r17
    addi r4, r25, 0x9d
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000012E4
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    addi r4, r25, 0x9a
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001810
    lwz r0, 0x157c(r18)
    ori r0, r0, 0x4
    stw r0, 0x157c(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000012E4:
    mr r3, r17
    addi r4, r25, 0xa4
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001320
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    addi r4, r25, 0x9a
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001810
    lwz r0, 0x157c(r18)
    ori r0, r0, 0x8
    stw r0, 0x157c(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001320:
    mr r3, r17
    addi r4, r25, 0xac
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000015C8
lbl_fn_802F1A2C_00001334:
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_parseInt
    lwz r4, lbl_8087F430
    mr r23, r3
    li r5, 0x0
    li r6, 0x0
    lwz r4, 0x10d8(r4)
    lwz r0, 0x78(r4)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802F1A2C_0000138C
lbl_fn_802F1A2C_00001364:
    lwz r7, 0x7c(r4)
    lwzx r0, r7, r6
    cmpw r3, r0
    bne lbl_fn_802F1A2C_00001380
    mulli r0, r5, 0x28
    add r21, r7, r0
    b lbl_fn_802F1A2C_00001390
lbl_fn_802F1A2C_00001380:
    addi r6, r6, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802F1A2C_00001364
lbl_fn_802F1A2C_0000138C:
    li r21, 0x0
lbl_fn_802F1A2C_00001390:
    cmpwi r21, 0x0
    beq lbl_fn_802F1A2C_000015BC
    lwz r4, 0x1574(r18)
    lwz r3, 0x1578(r18)
    cmplw r4, r3
    bge lbl_fn_802F1A2C_000013C4
    addi r4, r4, 0x1
    lwz r3, 0x1570(r18)
    slwi r0, r4, 2
    stw r4, 0x1574(r18)
    add r3, r3, r0
    stw r21, -0x4(r3)
    b lbl_fn_802F1A2C_000015BC
lbl_fn_802F1A2C_000013C4:
    subi r0, r24, 0x1
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_802F1A2C_000013E8
    addi r4, r25, 0xb7
    addi r3, r26, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802F1A2C_000013E8:
    lwz r3, 0x1574(r18)
    addi r4, r18, 0x1578
    lwz r27, 0x1578(r18)
    subi r0, r24, 0x1
    addi r3, r3, 0x1
    stw r22, 0x14(r1)
    subf r3, r27, r3
    subf r0, r27, r0
    cmplw r3, r0
    stw r22, 0x18(r1)
    stw r22, 0x1c(r1)
    stw r4, 0x20(r1)
    stw r22, 0x24(r1)
    stw r3, 0x8(r1)
    ble lbl_fn_802F1A2C_00001438
    addi r4, r25, 0xb7
    addi r3, r26, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802F1A2C_00001438:
    addi r0, r28, 0x5555
    cmplw r27, r0
    bge lbl_fn_802F1A2C_00001480
    addi r4, r27, 0x1
    subi r5, r29, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x8(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_802F1A2C_00001474
    addi r3, r1, 0x8
lbl_fn_802F1A2C_00001474:
    lwz r0, 0x0(r3)
    add r19, r27, r0
    b lbl_fn_802F1A2C_000014BC
lbl_fn_802F1A2C_00001480:
    subi r0, r30, 0x5556
    cmplw r27, r0
    bge lbl_fn_802F1A2C_000014B8
    addi r3, r27, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_802F1A2C_000014AC
    addi r3, r1, 0x8
lbl_fn_802F1A2C_000014AC:
    lwz r0, 0x0(r3)
    add r19, r27, r0
    b lbl_fn_802F1A2C_000014BC
lbl_fn_802F1A2C_000014B8:
    subi r19, r24, 0x1
lbl_fn_802F1A2C_000014BC:
    subi r0, r24, 0x1
    cmplw r19, r0
    ble lbl_fn_802F1A2C_000014DC
    addi r4, r25, 0xb7
    addi r3, r26, 0xa0
    crclr 6
    bl printf
    bl abort
lbl_fn_802F1A2C_000014DC:
    slwi r3, r19, 2
    bl mem_free
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_802F1A2C_00001504
    addi r3, r26, 0xa0
    addi r4, r31, lbl_80775A88@l
    crclr 6
    bl printf
    bl abort
lbl_fn_802F1A2C_00001504:
    lwz r5, 0x1574(r18)
    lwz r3, 0x18(r1)
    slwi r0, r5, 2
    stw r19, 0x1c(r1)
    slwi r4, r3, 2
    addi r3, r3, 0x1
    add r0, r27, r0
    stw r3, 0x18(r1)
    stwx r21, r4, r0
    lwz r0, 0x1574(r18)
    lwz r19, 0x1570(r18)
    slwi r0, r0, 2
    add r0, r19, r0
    mr r4, r19
    subf r0, r19, r0
    srawi r0, r0, 2
    addze r21, r0
    subf r0, r21, r5
    stw r0, 0x24(r1)
    slwi r17, r21, 2
    slwi r0, r0, 2
    mr r5, r17
    add r3, r27, r0
    bl memcpy
    mr r3, r19
    mr r5, r17
    li r4, 0x0
    bl memset
    lwz r0, 0x18(r1)
    cmpwi r20, 0x0
    lwz r3, 0x1570(r18)
    add r5, r0, r21
    mr r0, r27
    lwz r6, 0x1578(r18)
    lwz r4, 0x1c(r1)
    stw r4, 0x1578(r18)
    stw r6, 0x1c(r1)
    stw r0, 0x1570(r18)
    stw r3, 0x14(r1)
    stw r5, 0x1574(r18)
    stw r22, 0x18(r1)
    beq lbl_fn_802F1A2C_000015BC
    cmpwi r3, 0x0
    beq lbl_fn_802F1A2C_000015BC
    stw r22, 0x18(r1)
    bl dtor_80084684
lbl_fn_802F1A2C_000015BC:
    cmpwi r23, 0x0
    bne lbl_fn_802F1A2C_00001334
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000015C8:
    mr r3, r17
    addi r4, r25, 0xcb
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000015F0
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl atoi
    stw r3, 0x14e4(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000015F0:
    mr r3, r17
    addi r4, r25, 0xdc
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001618
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x1524(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001618:
    mr r3, r17
    addi r4, r25, 0xe7
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001640
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x14e8(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001640:
    mr r3, r17
    addi r4, r25, 0xf2
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001668
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl atoi
    stw r3, 0x1558(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001668:
    mr r3, r17
    addi r4, r25, 0xfe
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001690
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x155c(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001690:
    mr r3, r17
    addi r4, r25, 0x10a
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000016D4
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    frsp f0, f1
    stfs f1, 0x152c(r18)
    fsubs f0, f0, f28
    fabs f0, f0
    frsp f0, f0
    fcmpo cr0, f0, f29
    bge lbl_fn_802F1A2C_00001810
    stfs f30, 0x152c(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000016D4:
    mr r3, r17
    addi r4, r25, 0x115
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001700
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    fmuls f0, f31, f1
    stfs f0, 0x14f0(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001700:
    mr r3, r17
    addi r4, r25, 0x121
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_0000172C
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl atoi
    bl task_findEntryById
    stw r3, 0x1528(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_0000172C:
    mr r3, r17
    addi r4, r25, 0x12a
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001758
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl atoi
    bl task_findEntryById
    stw r3, 0x14ec(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001758:
    mr r3, r17
    addi r4, r25, 0x133
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001784
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl atoi
    bl task_findEntryById
    stw r3, 0x1550(r18)
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_00001784:
    mr r3, r17
    addi r4, r25, 0x142
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000017B8
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    mr r5, r3
    addi r3, r18, 0x14f4
    addi r4, r25, 0x151
    crclr 6
    bl sprintf
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000017B8:
    mr r3, r17
    addi r4, r25, 0x154
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_000017EC
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    mr r5, r3
    addi r3, r18, 0x14b4
    addi r4, r25, 0x151
    crclr 6
    bl sprintf
    b lbl_fn_802F1A2C_00001810
lbl_fn_802F1A2C_000017EC:
    mr r3, r17
    addi r4, r25, 0x15b
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001810
    addi r3, r1, 0x28
    bl talk_parseQuotedString
    bl str_skipWhitespace
    stfs f1, 0x1258(r18)
lbl_fn_802F1A2C_00001810:
    addi r3, r1, 0x28
    bl talk_scanQuotedString
    cmpwi r3, 0x0
    bne lbl_fn_802F1A2C_00001264
lbl_fn_802F1A2C_00001820:
    lwz r0, 0x7ec(r18)
    ori r0, r0, 0x1c0
    oris r0, r0, 0x1
    ori r0, r0, 0x4218
    oris r0, r0, 0x380
    stw r0, 0x7ec(r18)
    bl rand
    lis r4, 0x8889
    lwz r0, 0x15cc(r18)
    subi r5, r4, 0x7777
    lwz r6, 0x159c(r18)
    mulhw r7, r5, r3
    cmpwi r0, 0x0
    li r5, 0x2
    stw r5, 0x10d0(r18)
    lis r4, lbl_80748558@ha
    addi r4, r4, lbl_80748558@l
    add r0, r7, r3
    addi r4, r4, 0x16c
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r0, r0, r5
    mulli r0, r0, 0x3c
    subf r0, r0, r3
    add r0, r6, r0
    stw r0, 0x159c(r18)
    bne lbl_fn_802F1A2C_000018A8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_802F1A2C_000018A8
    addi r3, r3, 0x10
    bl node_createNamedChild
    stw r3, 0x15cc(r18)
    b lbl_fn_802F1A2C_000018AC
lbl_fn_802F1A2C_000018A8:
    li r3, 0x0
lbl_fn_802F1A2C_000018AC:
    lis r4, lbl_80748558@ha
    addi r5, r18, 0x15d0
    addi r4, r4, lbl_80748558@l
    li r6, 0x0
    addi r4, r4, 0x17b
    li r7, 0x0
    bl route_createSegment
    lwz r3, 0x1438(r18)
    cmpwi r3, 0x0
    beq lbl_fn_802F1A2C_000018EC
    li r4, 0x0
    bl atn_Task_setActive
    lwz r3, 0x1438(r18)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_802F1A2C_000018EC:
    li r3, 0x1
    b lbl_fn_802F1A2C_000018F8
lbl_fn_802F1A2C_000018F4:
    li r3, 0x0
lbl_fn_802F1A2C_000018F8:
    addi r11, r1, 0x6a0
    psq_l f31, 0x6d8(r1), 0, 0
    lfd f31, 0x6d0(r1)
    psq_l f30, 0x6c8(r1), 0, 0
    lfd f30, 0x6c0(r1)
    psq_l f29, 0x6b8(r1), 0, 0
    lfd f29, 0x6b0(r1)
    psq_l f28, 0x6a8(r1), 0, 0
    lfd f28, 0x6a0(r1)
    bl _restgpr_17
    lwz r0, 0x6e4(r1)
    mtlr r0
    addi r1, r1, 0x6e0
    blr
}

asm void fn_802F2294(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stw r31, 0x8c(r1)
    mr r31, r3
    stw r30, 0x88(r1)
    lwz r0, 0xd1c(r3)
    stw r0, 0x1580(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802F2294_0000196C
    lwz r4, lbl_8087F8A0
    lwz r0, 0x48(r4)
    stw r0, 0x1580(r3)
lbl_fn_802F2294_0000196C:
    lwz r0, 0x1584(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802F2294_00001980
    lwz r0, 0x1580(r3)
    stw r0, 0x1584(r3)
lbl_fn_802F2294_00001980:
    lwz r0, 0xd18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_802F2294_00001998
    lwz r0, 0x1580(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802F2294_000019D4
lbl_fn_802F2294_00001998:
    mr r3, r31
    li r4, 0x3
    bl actor_setState
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x2
    bne lbl_fn_802F2294_000019C8
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802F2294_00001E9C
lbl_fn_802F2294_000019C8:
    mr r3, r31
    bl fn_802F33A0
    b lbl_fn_802F2294_00001E9C
lbl_fn_802F2294_000019D4:
    lwz r0, 0x58c(r3)
    cmplwi r0, 0x12
    bgt lbl_fn_802F2294_00001E60
    lis r4, jumptable_807878E8@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_807878E8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    mr r3, r31
    bl shop_canPurchaseItem
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001A4C
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001A24
    lwz r0, 0x68(r3)
    b lbl_fn_802F2294_00001A28
lbl_fn_802F2294_00001A24:
    li r0, 0x5a
lbl_fn_802F2294_00001A28:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl actor_setState
lbl_fn_802F2294_00001A4C:
    lfs f3, 0x2e4(r31)
    lfs f0, lbl_808848F0
    fcmpo cr0, f3, f0
    cror eq, gt, eq
    bne lbl_fn_802F2294_00001E9C
    lfs f0, lbl_808848F4
    fcmpo cr0, f3, f0
    cror eq, lt, eq
    bne lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl quest_evaluateConditions
    lwz r3, lbl_8087F048
    mr r6, r31
    lwz r7, 0x1528(r31)
    li r4, 0x0
    lwz r8, 0x590(r31)
    li r5, 0x0
    lfs f1, lbl_808848DC
    li r9, 0x1e
    li r10, -0x1
    bl scissor_clipFrustum
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F3BE8
    b lbl_fn_802F2294_00001E9C
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xec(r12)
    mtctr r12
    bctrl
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F42CC
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F469C
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F4A98
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F5370
    b lbl_fn_802F2294_00001E9C
    lwz r0, 0x1590(r3)
    cmpwi r0, 0x0
    bne lbl_fn_802F2294_00001E9C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl atn_Anim_getLayerDuration
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F2294_00001B74
    lwz r4, 0x14ec(r31)
    li r0, 0x0
    lwz r3, 0x5c0(r31)
    cmpwi r4, 0x0
    stw r0, 0x1590(r31)
    ori r0, r3, 0x1
    stw r0, 0x5c0(r31)
    beq lbl_fn_802F2294_00001B48
    lwz r0, 0x68(r4)
    b lbl_fn_802F2294_00001B4C
lbl_fn_802F2294_00001B48:
    li r0, 0x5a
lbl_fn_802F2294_00001B4C:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl actor_setState
    b lbl_fn_802F2294_00001E9C
lbl_fn_802F2294_00001B74:
    lfs f4, 0x528(r31)
    lis r0, 0x4330
    lfs f3, 0x1540(r31)
    lis r3, lbl_80748538@ha
    lfs f2, 0x530(r31)
    addi r4, r1, 0xc
    fadds f5, f4, f3
    lfs f0, 0x1548(r31)
    psq_l f1, 0x528(r31), 0, 0
    fadds f0, f2, f0
    lfs f4, 0x52c(r31)
    lfs f3, 0x1544(r31)
    stfs f5, 0x528(r31)
    fadds f4, f4, f3
    lfd f5, lbl_80748538@l(r3)
    stfs f0, 0x530(r31)
    lfs f3, lbl_808848F8
    stfs f4, 0x52c(r31)
    lfs f0, 0x1544(r31)
    lwz r3, lbl_8087F0A8
    stw r0, 0x78(r1)
    lwz r0, 0x30(r3)
    psq_st f1, 0x0(r4), 0, 0
    mullw r0, r0, r0
    stfs f2, 0x14(r1)
    xoris r0, r0, 0x8000
    stw r0, 0x7c(r1)
    lfd f4, 0x78(r1)
    fsubs f4, f4, f5
    fdivs f3, f3, f4
    fadds f0, f0, f3
    stfs f0, 0x1544(r31)
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F2C50
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001CD4
    lwz r3, lbl_8087F430
    li r4, 0x0
    li r5, 0x0
    lwz r6, 0x10d8(r3)
    lwz r0, 0x78(r6)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802F2294_00001C50
lbl_fn_802F2294_00001C28:
    lwz r3, 0x7c(r6)
    lwzx r0, r3, r5
    cmpwi r0, 0x259
    bne lbl_fn_802F2294_00001C44
    mulli r0, r4, 0x28
    add r0, r3, r0
    b lbl_fn_802F2294_00001C54
lbl_fn_802F2294_00001C44:
    addi r5, r5, 0x28
    addi r4, r4, 0x1
    bdnz lbl_fn_802F2294_00001C28
lbl_fn_802F2294_00001C50:
    li r0, 0x0
lbl_fn_802F2294_00001C54:
    cmpwi r0, 0x0
    beq lbl_fn_802F2294_00001C8C
    lwz r0, 0x55c(r31)
    cmpwi r0, 0x7
    beq lbl_fn_802F2294_00001C80
    li r0, 0x3
    stw r0, 0x55c(r31)
    lwz r5, 0x15a8(r31)
    mr r3, r31
    li r4, 0x259
    bl battle_resolveAggroHierarchy
lbl_fn_802F2294_00001C80:
    mr r3, r31
    bl fn_802F33A0
    b lbl_fn_802F2294_00001E9C
lbl_fn_802F2294_00001C8C:
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001CA8
    lwz r0, 0x68(r3)
    b lbl_fn_802F2294_00001CAC
lbl_fn_802F2294_00001CA8:
    li r0, 0x5a
lbl_fn_802F2294_00001CAC:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    li r0, 0x6
    mr r3, r31
    li r4, 0x3
    stw r0, 0x58c(r31)
    bl actor_setState
    b lbl_fn_802F2294_00001E9C
lbl_fn_802F2294_00001CD4:
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001CF0
    lwz r0, 0x68(r3)
    b lbl_fn_802F2294_00001CF4
lbl_fn_802F2294_00001CF0:
    li r0, 0x5a
lbl_fn_802F2294_00001CF4:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    li r0, 0xf
    lis r5, lbl_807C7030@ha
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    addi r5, r5, lbl_807C7030@l
    li r4, 0x0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x57c(r31)
    psq_st f1, 0x574(r31), 0, 0
    lfs f1, lbl_808848DC
    bl cursor_updateSlotState
    lfs f0, lbl_808848FC
    li r0, 0x1
    stw r0, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14a
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F566C
    b lbl_fn_802F2294_00001E9C
    lfs f31, 0x2e4(r3)
    li r4, 0x0
    addi r3, r3, 0xb0
    bl atn_Anim_getLayerDuration
    fcmpo cr0, f31, f1
    cror eq, gt, eq
    bne lbl_fn_802F2294_00001E9C
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001DB4
    lwz r0, 0x68(r3)
    b lbl_fn_802F2294_00001DB8
lbl_fn_802F2294_00001DB4:
    li r0, 0x5a
lbl_fn_802F2294_00001DB8:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    lwz r0, 0x54c(r31)
    li r4, 0x11
    stw r3, 0x590(r31)
    addi r3, r31, 0xb0
    rlwinm r0, r0, 0, 19, 17
    lfs f1, lbl_808848DC
    stw r4, 0x58c(r31)
    li r4, 0x0
    stw r0, 0x54c(r31)
    bl cursor_updateSlotState
    lfs f0, lbl_808848FC
    li r30, 0x1
    stw r30, 0x3fc(r31)
    addi r3, r31, 0xb0
    lfs f1, lbl_808848DC
    li r4, 0x0
    stfs f0, 0x2fc(r31)
    li r5, 0x14c
    lfs f2, lbl_80884900
    li r6, 0x1
    stfs f0, 0x2e8(r31)
    li r7, 0x0
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    li r0, 0x0
    stw r30, 0x1594(r31)
    stw r0, 0x1598(r31)
    b lbl_fn_802F2294_00001E9C
    lwz r4, 0x1598(r3)
    addi r0, r4, 0x1
    stw r0, 0x1598(r3)
    cmpwi r0, 0x258
    ble lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F66CC
    b lbl_fn_802F2294_00001E9C
    mr r3, r31
    bl fn_802F58A0
    b lbl_fn_802F2294_00001E9C
lbl_fn_802F2294_00001E60:
    lwz r4, 0x55c(r3)
    subi r0, r4, 0x6
    cmplwi r0, 0x1
    ble lbl_fn_802F2294_00001E8C
    li r0, 0x3
    stw r0, 0x55c(r3)
    lwz r4, 0x1580(r31)
    mr r3, r31
    lfs f1, lbl_80884904
    lwz r5, 0x15a8(r31)
    bl battle_updateTargetAggro
lbl_fn_802F2294_00001E8C:
    mr r3, r31
    bl fn_802F33A0
    mr r3, r31
    bl fn_802F389C
lbl_fn_802F2294_00001E9C:
    lwz r0, 0x157c(r31)
    rlwinm r0, r0, 0, 28, 28
    cmpwi r0, 0x8
    bne lbl_fn_802F2294_00001FB0
    lwz r0, 0x7e0(r31)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_802F2294_00001FB0
    mr r3, r31
    bl fn_802F2C50
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00001FB0
    lwz r3, lbl_8087F9E8
    mr r5, r31
    lwz r4, 0x1550(r31)
    bl fn_8059C6E0
    cmpwi r3, 0x0
    bne lbl_fn_802F2294_00001FB0
    lwz r4, 0x1550(r31)
    lbz r3, 0x1(r4)
    subi r0, r3, 0x4
    clrlwi r0, r0, 24
    cmplwi r0, 0x2
    bgt lbl_fn_802F2294_00001F64
    li r0, 0x0
    stw r0, 0x24(r1)
    lwz r3, lbl_8087F9E8
    mr r5, r31
    lfs f1, lbl_808848FC
    mr r6, r31
    addi r7, r31, 0x528
    addi r8, r31, 0x534
    addi r9, r1, 0x24
    bl fn_8059B670
    addic. r3, r1, 0x24
    beq lbl_fn_802F2294_00001FB0
    lwz r4, 0x24(r1)
    cmpwi r4, 0x0
    beq lbl_fn_802F2294_00001FB0
    lwz r12, 0x0(r4)
    cmpwi r12, 0x0
    beq lbl_fn_802F2294_00001F58
    addi r3, r3, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_802F2294_00001F58:
    li r0, 0x0
    stw r0, 0x24(r1)
    b lbl_fn_802F2294_00001FB0
lbl_fn_802F2294_00001F64:
    lwz r0, 0x74(r1)
    li r10, 0x0
    li r9, -0x1
    addi r5, r31, 0x7d4
    clrlwi r0, r0, 4
    lis r8, lbl_807C6B90@ha
    stw r10, 0x58(r1)
    mr r6, r5
    addi r3, r1, 0x58
    addi r8, r8, lbl_807C6B90@l
    stw r10, 0x5c(r1)
    li r7, 0x0
    stw r10, 0x60(r1)
    stw r10, 0x64(r1)
    stw r10, 0x68(r1)
    stw r9, 0x6c(r1)
    stw r0, 0x74(r1)
    stw r9, 0x70(r1)
    bl fn_80040B40
lbl_fn_802F2294_00001FB0:
    mr r3, r31
    bl dialog_updateScriptState
    mr r3, r31
    bl quest_updateFlow
    lwz r0, 0x58c(r31)
    cmpwi r0, 0x11
    bne lbl_fn_802F2294_00002170
    lwz r4, lbl_8087F8A0
    addi r3, r1, 0x18
    lfs f6, 0x530(r31)
    lwz r30, 0x48(r4)
    lfs f5, 0x52c(r31)
    lfs f0, 0x530(r30)
    lfs f4, 0x52c(r30)
    fsubs f6, f6, f0
    lfs f3, 0x528(r31)
    lfs f0, 0x528(r30)
    fsubs f4, f5, f4
    fsubs f0, f3, f0
    stfs f4, 0x1c(r1)
    stfs f0, 0x18(r1)
    stfs f6, 0x20(r1)
    bl PSVECMag
    lfs f0, lbl_80884908
    fcmpo cr0, f1, f0
    bge lbl_fn_802F2294_00002170
    lwz r3, 0x12a4(r30)
    extrwi. r0, r3, 1, 25
    bne lbl_fn_802F2294_00002170
    srwi. r0, r3, 31
    bne lbl_fn_802F2294_00002170
    lwz r0, 0x55c(r30)
    cmpwi r0, 0x6
    bne lbl_fn_802F2294_00002044
    lwz r0, 0x560(r30)
    cmpwi r0, 0x4
    bne lbl_fn_802F2294_00002170
lbl_fn_802F2294_00002044:
    lwz r7, lbl_8087F490
    cmpwi r7, 0x0
    beq lbl_fn_802F2294_0000209C
    li r4, 0x6
    stw r4, 0x764(r7)
    li r5, 0x0
    li r3, 0x11
    stw r3, 0x768(r7)
    li r6, -0x1
    li r0, 0x1
    stw r6, 0x76c(r7)
    stw r5, 0x770(r7)
    stw r5, 0x774(r7)
    stw r5, 0x778(r7)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r5, 0x48(r1)
    stw r5, 0x4c(r1)
    stw r4, 0x38(r1)
    stw r3, 0x3c(r1)
    stw r0, 0x50(r1)
    stw r0, 0x77c(r7)
lbl_fn_802F2294_0000209C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl msg_getMessageById
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_00002170
    mr r3, r30
    mr r4, r31
    bl fn_8016C1E0
    lwz r3, 0x14ec(r31)
    li r0, 0x0
    stw r0, 0x1590(r31)
    cmpwi r3, 0x0
    beq lbl_fn_802F2294_000020DC
    lwz r0, 0x68(r3)
    b lbl_fn_802F2294_000020E0
lbl_fn_802F2294_000020DC:
    li r0, 0x5a
lbl_fn_802F2294_000020E0:
    stw r0, 0x15a0(r31)
    lwz r3, lbl_8087F048
    bl system_getNextSequenceId
    stw r3, 0x590(r31)
    li r0, 0x12
    lfs f1, lbl_808848DC
    addi r3, r31, 0xb0
    stw r0, 0x58c(r31)
    li r4, 0x0
    bl cursor_updateSlotState
    lfs f3, lbl_808848FC
    li r0, 0x1
    lfs f0, lbl_808848E0
    addi r3, r31, 0xb0
    stw r0, 0x3fc(r31)
    li r4, 0x0
    lfs f1, lbl_808848DC
    li r5, 0x2e
    stfs f3, 0x2fc(r31)
    li r6, 0x0
    lfs f2, lbl_80884900
    li r7, 0x0
    stfs f0, 0x2e8(r31)
    li r8, 0x1
    bl atn_Anim_setLayerAnimation
    lis r4, lbl_80748558@ha
    lfs f1, lbl_808848FC
    addi r4, r4, lbl_80748558@l
    addi r3, r1, 0x8
    addi r4, r4, 0x185
    li r5, 0x0
    li r6, -0x1
    bl skin_playAnimationByName
    addi r3, r1, 0x8
    li r4, -0x1
    bl ref_releaseHandle
lbl_fn_802F2294_00002170:
    lwz r0, 0xa4(r1)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
