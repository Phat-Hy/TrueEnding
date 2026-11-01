#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void atn_ColliBase_destructor(void);
extern void mission_initPathTracker(void);
extern void mission_clearPathTracker(void);
extern void mission_isObjectiveActive(void);
extern void mission_updateObjectiveTarget(void);
extern void talk_formatQuotedString(void);
extern void talk_parseQuotes(void);
extern void talk_copySpeakerName(void);
extern void mem_alloc(void);
extern void area_updateZoneState(void);
extern void map_processTrigger(void);
extern void minimap_renderOverlay(void);
extern void atn_Model_findBoneIndex(void);
extern void target_pushPointToHistory(void);
extern void lockon_updateTarget(void);
extern void cursor_Object_constructor(void);
extern void atn_Anim_getLayerDuration(void);
extern void fn_8009E5A0(void);
extern void fn_8009E690(void);
extern void hud_updateTargetReticle(void);
extern void hud_drawTargetMarker(void);
extern void fn_8009F788(void);
extern void fn_8009FFCC(void);
extern void str_skipWhitespace(void);
extern void battle_generateLootDrops(void);
extern void fn_80187D04(void);
extern void sound_initGlobalInstances(void);
extern void res_MsgHandle_constructor(void);
extern void res_MsgHandle_destructor(void);
extern void res_MsgHandle_unload(void);
extern void res_MsgHandle_update(void);
extern void res_findResourceSlot(void);
extern void res_registerResource(void);
extern void fn_803EBC44(void);
extern void fn_803EC0A4(void);
extern void task_createWorker(void);
extern void task_destroyWorker(void);
extern void task_updateWorker(void);
extern void task_initWorkerContext(void);
extern void barrier_bindFieldAnimation(void);
extern void fn_80415F6C(void);
extern void boss_getOffset54(void);
extern void boss_getOffset50(void);
extern void atn_LoadHandle_destructor(void);
extern void PSMTXConcat(void);
extern void PSMTXRotRad(void);
extern void PSMTXScale(void);
extern void PSMTXMultVec(void);
extern void strcmp(void);
extern void atoi(void);
extern void std_fmod(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80752D98[];
extern u8 lbl_80752DB8[];
extern u8 lbl_80752E6C[];
extern u8 lbl_80752EA4[];
extern u8 lbl_807774B8[];
extern u8 lbl_807774D8[];
extern u8 lbl_8078D948[];
extern u8 lbl_8078D9E0[];
extern u8 lbl_807C7060[];
extern u8 lbl_807C88A0[];

/* Small data declarations */
extern u32 lbl_8087D710;
extern u32 lbl_8087F3C0;
extern u32 lbl_80886410;
extern u32 lbl_80886424;
extern u32 lbl_80886428;
extern u32 lbl_8088642C;
extern u32 lbl_80886430;
extern u32 lbl_80886434;
extern u32 lbl_80886438;
extern u32 lbl_8088643C;
extern u32 lbl_80886440;
extern u32 lbl_80886444;
extern u32 lbl_80886448;
extern u32 lbl_8088644C;
extern u32 lbl_80886450;

/* Function declarations */
void fn_80414328(void);
void fn_804145B8(void);
void fn_804145E8(void);
void fn_804146E4(void);
u32 fn_80414824(void);
void fn_8041482C(void);
void fn_80414974(void);
void fn_80414994(void);
void fn_804149F0(void);
void fn_80414A6C(void);
void fn_80414AC4(void);
void fn_80414B84(void);
void fn_80414C38(void);
void fn_80414C9C(void);
void fn_80414E58(void);
void fn_80414F2C(void);
void fn_80414F54(void);
void fn_8041502C(void);
void fn_804150BC(void);
void fn_804150D4(void);
void fn_80415214(void);
void *fn_80415244(void *p);
void fn_8041524C(void);
void fn_8041537C(void);
void fn_804154AC(void);
void fn_80415514(void);
void fn_8041553C(void);
void fn_80415910(void);
void fn_80415934(void);
void fn_80415974(void);
void fn_80415AB4(void);

asm void fn_80414328(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    stmw r22, 0x648(r1)
    mr r23, r3
    addi r3, r3, 0x60
    bl boss_getOffset50
    mr r25, r3
    addi r3, r23, 0x60
    bl boss_getOffset54
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r24, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r24
    mr r5, r25
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl talk_copySpeakerName
    lis r31, lbl_80752DB8@ha
    mr r29, r23
    mr r28, r23
    mr r27, r23
    mr r26, r23
    addi r30, r23, 0xfc
    addi r31, r31, lbl_80752DB8@l
    li r25, 0x0
    li r24, 0x0
lbl_fn_80414328_000000C4:
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    lbz r0, 0x0(r3)
    mr r22, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80414328_0000026C
    addi r4, r31, 0x1
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414328_0000010C
    li r25, 0x0
    li r24, 0x0
    addi r30, r30, 0x3d0
    addi r29, r29, 0x3d0
    addi r28, r28, 0xc
    addi r27, r27, 0x4
    addi r26, r26, 0x8
    b lbl_fn_80414328_0000026C
lbl_fn_80414328_0000010C:
    mr r3, r22
    addi r4, r31, 0x18
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414328_00000174
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    mr r4, r3
    mr r3, r30
    li r5, 0x0
    bl atn_Model_findBoneIndex
    cmpwi r3, 0x0
    bge lbl_fn_80414328_00000150
    li r0, 0x0
    b lbl_fn_80414328_0000015C
lbl_fn_80414328_00000150:
    mulli r0, r3, 0x30
    lwz r3, 0x138(r29)
    add r0, r3, r0
lbl_fn_80414328_0000015C:
    stw r0, 0x2040(r28)
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl atoi
    stw r3, 0x22a4(r27)
    b lbl_fn_80414328_0000026C
lbl_fn_80414328_00000174:
    mr r3, r22
    addi r4, r31, 0x80
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414328_000001C0
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl atoi
    slwi r0, r3, 3
    addi r3, r1, 0x8
    add r22, r23, r0
    bl talk_formatQuotedString
    bl atoi
    stw r3, 0x211c(r22)
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl atoi
    stw r3, 0x2120(r22)
    b lbl_fn_80414328_0000026C
lbl_fn_80414328_000001C0:
    mr r3, r22
    addi r4, r31, 0x8e
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414328_00000208
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    addi r0, r23, 0x2284
    mr r22, r3
    cmplw r3, r0
    beq lbl_fn_80414328_0000026C
    bl strlen
    mr r5, r3
    mr r4, r22
    addi r3, r23, 0x2284
    addi r5, r5, 0x1
    bl memcpy
    b lbl_fn_80414328_0000026C
lbl_fn_80414328_00000208:
    mr r3, r22
    addi r4, r31, 0x64
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414328_0000023C
    mulli r0, r25, 0x1c
    lwz r3, 0x22c8(r26)
    mr r5, r30
    addi r4, r1, 0x8
    add r3, r3, r0
    bl fn_803EBC44
    addi r25, r25, 0x1
    b lbl_fn_80414328_0000026C
lbl_fn_80414328_0000023C:
    mr r3, r22
    addi r4, r31, 0x6d
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414328_0000026C
    lwz r3, 0x2308(r26)
    slwi r0, r24, 3
    mr r5, r30
    addi r4, r1, 0x8
    add r3, r3, r0
    bl fn_803EC0A4
    addi r24, r24, 0x1
lbl_fn_80414328_0000026C:
    addi r3, r1, 0x8
    bl talk_parseQuotes
    cmpwi r3, 0x0
    bne lbl_fn_80414328_000000C4
    lmw r22, 0x648(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_804145B8(void)
{
    nofralloc
    cmpwi r4, 0x0
    bne lbl_fn_804145B8_000002A0
    li r3, 0x0
    blr
lbl_fn_804145B8_000002A0:
    lwz r0, 0x0(r4)
    stw r0, 0x54(r3)
    cmplwi r0, 0x7
    ble lbl_fn_804145B8_000002B8
    li r0, 0x0
    stw r0, 0x54(r3)
lbl_fn_804145B8_000002B8:
    lwz r3, 0x54(r3)
    blr
}

asm void fn_804145E8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    bne lbl_fn_804145E8_000002DC
    li r3, 0x0
    b lbl_fn_804145E8_000003AC
lbl_fn_804145E8_000002DC:
    lwz r6, 0x54(r3)
    mulli r0, r6, 0xc
    add r5, r3, r0
    lwz r0, 0x2044(r5)
    cmpwi r0, 0x0
    bne lbl_fn_804145E8_000002FC
    li r3, 0x0
    b lbl_fn_804145E8_000003AC
lbl_fn_804145E8_000002FC:
    lwz r0, 0x48(r3)
    cmpwi r0, 0x6dd8
    bne lbl_fn_804145E8_00000358
    lwz r5, 0x28(r4)
    cmpwi r5, 0x0
    beq lbl_fn_804145E8_00000320
    lwz r0, 0x48(r5)
    cmpwi r0, 0x0
    beq lbl_fn_804145E8_00000328
lbl_fn_804145E8_00000320:
    li r3, 0x0
    b lbl_fn_804145E8_000003AC
lbl_fn_804145E8_00000328:
    lwz r4, 0x2c(r4)
    cmpwi r4, 0x0
    bne lbl_fn_804145E8_0000033C
    li r3, 0x0
    b lbl_fn_804145E8_000003AC
lbl_fn_804145E8_0000033C:
    lwz r0, 0x4(r4)
    cmpwi r0, 0xcd
    beq lbl_fn_804145E8_00000358
    cmpwi r0, 0x7d0
    beq lbl_fn_804145E8_00000358
    li r3, 0x0
    b lbl_fn_804145E8_000003AC
lbl_fn_804145E8_00000358:
    slwi r0, r6, 3
    add r4, r3, r0
    lwz r4, 0x211c(r4)
    cmpwi r4, 0x0
    blt lbl_fn_804145E8_000003A8
    lfs f0, lbl_80886410
    li r0, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
lbl_fn_804145E8_000003A8:
    li r3, 0x0
lbl_fn_804145E8_000003AC:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_804146E4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lfs f0, lbl_80886410
    stw r0, 0x34(r1)
    li r0, 0x0
    stw r31, 0x2c(r1)
    stw r30, 0x28(r1)
    mr r30, r3
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stfs f0, 0x1c(r1)
    stfs f0, 0x20(r1)
    stfs f0, 0x24(r1)
    lwz r12, 0x0(r3)
    lwz r12, 0x40(r12)
    mtctr r12
    bctrl
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_804146E4_000004D0
    lbz r0, 0x244(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804146E4_000004D0
    lwz r0, 0x230(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804146E4_000004D0
    li r4, 0x0
    bl atn_Anim_getLayerDuration
    stfs f1, 0x234(r31)
    mr r3, r30
    lwz r12, 0x0(r30)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804146E4_00000490
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    bl barrier_bindFieldAnimation
lbl_fn_804146E4_00000490:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804146E4_000004D0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r30
    li r5, 0x1
    bl task_initWorkerContext
lbl_fn_804146E4_000004D0:
    lwz r3, 0xe4(r30)
    cmpwi r3, 0x0
    beq lbl_fn_804146E4_000004E4
    li r0, 0x1
    stw r0, 0x58(r3)
lbl_fn_804146E4_000004E4:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

u32 fn_80414824(void)
{
    return 0;
}

asm void fn_8041482C(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    mr r31, r4
    stw r30, 0x28(r1)
    mr r30, r3
    lwz r6, 0x54(r3)
    mulli r0, r6, 0x24
    add r4, r3, r0
    lwz r0, 0x2160(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8041482C_00000634
    addi r5, r4, 0x2174
    addi r4, r1, 0x14
    mulli r0, r6, 0x3d0
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    mr r5, r4
    stfs f2, 0x1c(r1)
    add r3, r3, r0
    psq_st f1, 0x0(r4), 0, 0
    addi r3, r3, 0x104
    bl PSMTXMultVec
    lwz r0, 0x54(r30)
    addi r4, r1, 0x8
    psq_l f1, 0x78(r30), 0, 0
    lis r3, lbl_80752D98@ha
    mulli r0, r0, 0x24
    psq_st f1, 0x0(r4), 0, 0
    lfs f2, 0x80(r30)
    stfs f2, 0x10(r1)
    add r4, r30, r0
    lfs f3, 0xc(r1)
    lfs f0, 0x2180(r4)
    lfd f2, lbl_80752D98@l(r3)
    fadds f1, f3, f0
    bl std_fmod
    frsp f3, f1
    lfs f0, lbl_80886424
    fcmpo cr0, f3, f0
    ble lbl_fn_8041482C_000005B4
    lfs f0, lbl_80886428
    fsubs f3, f3, f0
lbl_fn_8041482C_000005B4:
    lfs f0, lbl_8088642C
    fcmpo cr0, f3, f0
    bge lbl_fn_8041482C_000005C8
    lfs f0, lbl_80886428
    fadds f3, f3, f0
lbl_fn_8041482C_000005C8:
    addi r3, r1, 0x14
    lis r5, lbl_80752DB8@ha
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r5, lbl_80752DB8@l
    lfs f2, 0x1c(r1)
    addi r8, r1, 0x8
    stfs f2, 0x530(r31)
    mr r6, r5
    lfs f2, 0x10(r1)
    li r3, 0x14
    stfs f3, 0xc(r1)
    li r4, 0x1
    li r7, 0x0
    psq_st f1, 0x528(r31), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    stfs f2, 0x53c(r31)
    bl mem_alloc
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8041482C_0000062C
    mr r4, r31
    mr r5, r30
    bl fn_80187D04
    mr r4, r3
lbl_fn_8041482C_0000062C:
    mr r3, r31
    bl battle_generateLootDrops
lbl_fn_8041482C_00000634:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80414974(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    mulli r0, r0, 0xc
    add r3, r3, r0
    lwz r3, 0x2044(r3)
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    blr
}

asm void fn_80414994(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80414994_000006B0
    lwz r0, 0x54(r31)
    mulli r0, r0, 0xc
    add r3, r31, r0
    lwz r3, 0x2044(r3)
    lfs f1, 0x48(r3)
    b lbl_fn_80414994_000006B4
lbl_fn_80414994_000006B0:
    lfs f1, lbl_80886410
lbl_fn_80414994_000006B4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804149F0(void)
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
    lwz r12, 0x0(r31)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_804149F0_00000718
    lwz r0, 0x54(r31)
    mulli r0, r0, 0xc
    add r3, r31, r0
    lwz r3, 0x2044(r3)
    addi r3, r3, 0x3c
    b lbl_fn_804149F0_0000071C
lbl_fn_804149F0_00000718:
    addi r3, r31, 0x6c
lbl_fn_804149F0_0000071C:
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x8(r30)
    psq_st f1, 0x0(r30), 0, 0
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80414A6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r12, 0x0(r3)
    lwz r12, 0x5c(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80414A6C_00000784
    lwz r0, 0x54(r31)
    mulli r0, r0, 0xc
    add r3, r31, r0
    lwz r3, 0x2044(r3)
    b lbl_fn_80414A6C_00000788
lbl_fn_80414A6C_00000784:
    li r3, 0x0
lbl_fn_80414A6C_00000788:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80414AC4(void)
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
    beq lbl_fn_80414AC4_0000083C
    lis r5, lbl_80752E6C@ha
    li r3, 0x560
    addi r5, r5, lbl_80752E6C@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl mem_alloc
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80414AC4_00000834
    lwz r5, 0x18(r30)
    mr r4, r29
    lwz r6, 0x1c(r30)
    bl task_createWorker
    lis r4, lbl_8078D948@ha
    addi r3, r31, 0xf4
    addi r4, r4, lbl_8078D948@l
    stw r4, 0x0(r31)
    li r4, 0x1
    li r5, 0x20
    bl lockon_updateTarget
    addi r3, r31, 0x4c4
    bl mission_initPathTracker
    addi r3, r31, 0x54c
    bl res_MsgHandle_constructor
    stw r30, 0x558(r31)
    li r0, 0x0
    stw r0, 0x54(r31)
lbl_fn_80414AC4_00000834:
    mr r3, r31
    b lbl_fn_80414AC4_00000840
lbl_fn_80414AC4_0000083C:
    li r3, 0x0
lbl_fn_80414AC4_00000840:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80414B84(void)
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
    beq lbl_fn_80414B84_000008F0
    addic. r31, r3, 0x54c
    beq lbl_fn_80414B84_000008A4
    mr r3, r31
    bl res_MsgHandle_unload
    addic. r3, r31, 0x4
    beq lbl_fn_80414B84_000008A4
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_80414B84_000008A4:
    addic. r31, r29, 0x4c4
    beq lbl_fn_80414B84_000008C8
    addic. r3, r31, 0x3c
    beq lbl_fn_80414B84_000008BC
    li r4, 0x0
    bl atn_LoadHandle_destructor
lbl_fn_80414B84_000008BC:
    mr r3, r31
    li r4, 0x0
    bl atn_ColliBase_destructor
lbl_fn_80414B84_000008C8:
    addi r3, r29, 0xf4
    li r4, -0x1
    bl cursor_Object_constructor
    mr r3, r29
    li r4, 0x0
    bl task_destroyWorker
    cmpwi r30, 0x0
    ble lbl_fn_80414B84_000008F0
    mr r3, r29
    bl dtor_80084684
lbl_fn_80414B84_000008F0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80414C38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0xf4
    bl map_processTrigger
    cmpwi r3, 0x0
    bne lbl_fn_80414C38_00000954
    addi r3, r31, 0x4c4
    bl mission_isObjectiveActive
    cmpwi r3, 0x0
    bne lbl_fn_80414C38_00000954
    addi r3, r31, 0x54c
    bl res_MsgHandle_update
    cmpwi r3, 0x0
    beq lbl_fn_80414C38_0000095C
lbl_fn_80414C38_00000954:
    li r3, 0x1
    b lbl_fn_80414C38_00000960
lbl_fn_80414C38_0000095C:
    li r3, 0x0
lbl_fn_80414C38_00000960:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80414C9C(void)
{
    nofralloc
    stwu r1, -0x750(r1)
    mflr r0
    stw r0, 0x754(r1)
    stw r31, 0x74c(r1)
    stw r30, 0x748(r1)
    stw r29, 0x744(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl boss_getOffset50
    mr r30, r3
    addi r3, r29, 0x60
    bl boss_getOffset54
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x108(r1)
    mr r31, r3
    addi r3, r1, 0x118
    stw r0, 0x10c(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0x738(r1)
    bl memset
    addi r3, r1, 0x718
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x108(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x108
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x108
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087D710
    bl talk_copySpeakerName
    lis r31, lbl_80752E6C@ha
    addi r31, r31, lbl_80752E6C@l
lbl_fn_80414C9C_00000A24:
    addi r3, r1, 0x108
    bl talk_formatQuotedString
    lbz r0, 0x0(r3)
    mr r30, r3
    cmpwi r0, 0x3b
    beq lbl_fn_80414C9C_00000B04
    addi r4, r31, 0x1
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414C9C_00000A68
    addi r3, r1, 0x108
    bl talk_formatQuotedString
    mr r4, r3
    addi r3, r29, 0xf4
    li r5, 0x0
    bl area_updateZoneState
    b lbl_fn_80414C9C_00000B04
lbl_fn_80414C9C_00000A68:
    mr r3, r30
    addi r4, r31, 0x7
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414C9C_00000AB0
    addi r3, r1, 0x108
    bl talk_formatQuotedString
    mr r4, r3
    addi r3, r1, 0x8
    bl strcpy
    addi r3, r1, 0x108
    bl talk_formatQuotedString
    bl str_skipWhitespace
    addi r3, r29, 0xf4
    addi r4, r1, 0x8
    li r5, 0x0
    bl target_pushPointToHistory
    b lbl_fn_80414C9C_00000B04
lbl_fn_80414C9C_00000AB0:
    mr r3, r30
    addi r4, r31, 0x11
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414C9C_00000ADC
    addi r3, r1, 0x108
    bl talk_formatQuotedString
    mr r4, r3
    addi r3, r29, 0x4c4
    bl mission_clearPathTracker
    b lbl_fn_80414C9C_00000B04
lbl_fn_80414C9C_00000ADC:
    mr r3, r30
    addi r4, r31, 0x1e
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80414C9C_00000B04
    addi r3, r1, 0x108
    bl talk_formatQuotedString
    mr r4, r3
    addi r3, r29, 0x54c
    bl res_MsgHandle_destructor
lbl_fn_80414C9C_00000B04:
    addi r3, r1, 0x108
    bl talk_parseQuotes
    cmpwi r3, 0x0
    bne lbl_fn_80414C9C_00000A24
    lwz r0, 0x754(r1)
    lwz r31, 0x74c(r1)
    lwz r30, 0x748(r1)
    lwz r29, 0x744(r1)
    mtlr r0
    addi r1, r1, 0x750
    blr
}

asm void fn_80414E58(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    mr r31, r3
    addi r3, r3, 0x60
    stw r30, 0x648(r1)
    bl boss_getOffset50
    mr r30, r3
    addi r3, r31, 0x60
    bl boss_getOffset54
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl talk_copySpeakerName
lbl_fn_80414E58_00000BD4:
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    addi r3, r1, 0x8
    bl talk_parseQuotes
    cmpwi r3, 0x0
    bne lbl_fn_80414E58_00000BD4
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80414F2C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl task_updateWorker
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80414F54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lfs f0, lbl_80886430
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x558(r3)
    psq_l f1, 0x4(r4), 0, 0
    lfs f2, 0xc(r4)
    stfs f2, 0x74(r3)
    psq_st f1, 0x6c(r3), 0, 0
    lfs f7, 0x14(r4)
    stfs f7, 0x7c(r3)
    stfs f0, 0x78(r3)
    stfs f0, 0x80(r3)
    lwz r12, 0x0(r3)
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80414F54_00000CA4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl task_initWorkerContext
lbl_fn_80414F54_00000CA4:
    addi r3, r31, 0x4c4
    psq_l f1, 0xfc(r31), 0, 0
    psq_l f2, 0x104(r31), 0, 0
    li r0, 0x1
    psq_l f3, 0x10c(r31), 0, 0
    psq_l f4, 0x114(r31), 0, 0
    psq_l f5, 0x11c(r31), 0, 0
    psq_l f6, 0x124(r31), 0, 0
    stw r0, 0x54(r31)
    psq_st f1, 0x48(r3), 0, 0
    psq_st f2, 0x50(r3), 0, 0
    psq_st f3, 0x58(r3), 0, 0
    psq_st f4, 0x60(r3), 0, 0
    psq_st f5, 0x68(r3), 0, 0
    psq_st f6, 0x70(r3), 0, 0
    bl mission_updateObjectiveTarget
    lwz r0, 0x4cc(r31)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041502C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8041502C_00000D34
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8041502C_00000D34:
    lwz r0, 0x54(r31)
    cmplwi r0, 0x2
    ble lbl_fn_8041502C_00000D80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8041502C_00000D80
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0x38(r12)
    mtctr r12
    bctrl
    mr r4, r3
    mr r3, r31
    li r5, 0x1
    bl task_initWorkerContext
lbl_fn_8041502C_00000D80:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804150BC(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmplwi r0, 0x2
    blelr
    addi r3, r3, 0xf4
    b minimap_renderOverlay
    blr
}

asm void fn_804150D4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r4
    stw r30, 0x38(r1)
    mr r30, r3
    bne lbl_fn_804150D4_00000DD8
    li r3, 0x0
    b lbl_fn_804150D4_00000ED4
lbl_fn_804150D4_00000DD8:
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_804150D4_00000E00
    cmpwi r0, 0x2
    beq lbl_fn_804150D4_00000E24
    cmpwi r0, 0x3
    beq lbl_fn_804150D4_00000E48
    cmpwi r0, 0x4
    beq lbl_fn_804150D4_00000E60
    b lbl_fn_804150D4_00000ECC
lbl_fn_804150D4_00000E00:
    lwz r3, lbl_8087F3C0
    mr r4, r30
    li r5, 0x1
    li r6, 0x0
    bl res_findResourceSlot
    lwz r0, 0x4cc(r30)
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r30)
    b lbl_fn_804150D4_00000ECC
lbl_fn_804150D4_00000E24:
    lwz r0, 0x4cc(r3)
    mr r4, r30
    li r5, 0x1
    li r6, 0x0
    clrrwi r0, r0, 1
    stw r0, 0x4cc(r3)
    lwz r3, lbl_8087F3C0
    bl res_findResourceSlot
    b lbl_fn_804150D4_00000ECC
lbl_fn_804150D4_00000E48:
    li r4, 0x1
    bl sound_initGlobalInstances
    lwz r0, 0x4cc(r30)
    ori r0, r0, 0x1
    stw r0, 0x4cc(r30)
    b lbl_fn_804150D4_00000ECC
lbl_fn_804150D4_00000E60:
    li r4, 0x1
    bl sound_initGlobalInstances
    lfs f0, lbl_80886430
    li r3, -0x1
    lfs f1, lbl_80886434
    li r0, 0x1
    stfs f0, 0x1c(r1)
    addi r4, r30, 0x54c
    addi r5, r30, 0xf4
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
lbl_fn_804150D4_00000ECC:
    lwz r3, 0x0(r31)
    stw r3, 0x54(r30)
lbl_fn_804150D4_00000ED4:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80415214(void)
{
    nofralloc
    lwz r4, 0x54(r3)
    li r5, 0x0
    subi r0, r4, 0x2
    cmplwi r0, 0x2
    bgt lbl_fn_80415214_00000F14
    lwz r3, 0x558(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80415214_00000F14
    li r5, 0x1
lbl_fn_80415214_00000F14:
    mr r3, r5
    blr
}

void *fn_80415244(void *p)
{
    return (char *)p + 0xf4;
}

asm void fn_8041524C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    beq lbl_fn_8041524C_00001038
    lis r31, lbl_80752EA4@ha
    li r3, 0x1a0
    addi r5, r31, lbl_80752EA4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl mem_alloc
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8041524C_00001030
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl task_createWorker
    lis r3, 0x1062
    lis r4, lbl_8078D9E0@ha
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r28
    addi r3, r31, lbl_80752EA4@l
    addi r4, r4, lbl_8078D9E0@l
    stw r4, 0x0(r30)
    lis r31, lbl_807C88A0@ha
    addi r4, r3, 0x1
    srawi r6, r0, 6
    addi r3, r31, lbl_807C88A0@l
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r7
    subf r6, r0, r28
    crclr 6
    bl sprintf
    addi r3, r31, lbl_807C88A0@l
    bl fn_8009F788
    mr r4, r3
    addi r3, r30, 0xf4
    bl fn_8009E5A0
    lfs f1, lbl_80886438
    li r3, 0x0
    stfs f1, 0x17c(r30)
    li r0, -0x1
    lfs f0, lbl_8088643C
    stfs f1, 0x180(r30)
    lfs f2, lbl_80886440
    stfs f1, 0x184(r30)
    lfs f1, lbl_80886444
    stfs f0, 0x188(r30)
    lfs f0, lbl_80886448
    stfs f2, 0x18c(r30)
    stfs f1, 0x190(r30)
    stw r3, 0x194(r30)
    stw r0, 0x198(r30)
    stw r3, 0x54(r30)
    lwz r3, 0xf8(r30)
    stfs f0, 0xbc(r3)
lbl_fn_8041524C_00001030:
    mr r3, r30
    b lbl_fn_8041524C_0000103C
lbl_fn_8041524C_00001038:
    li r3, 0x0
lbl_fn_8041524C_0000103C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8041537C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    beq lbl_fn_8041537C_00001168
    lis r31, lbl_80752EA4@ha
    li r3, 0x1a0
    addi r5, r31, lbl_80752EA4@l
    li r4, 0xc
    mr r6, r5
    li r7, 0x0
    bl mem_alloc
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8041537C_00001160
    lwz r29, 0x18(r28)
    mr r4, r27
    lwz r6, 0x1c(r28)
    mr r5, r29
    bl task_createWorker
    lis r3, 0x1062
    lis r4, lbl_8078D9E0@ha
    addi r0, r3, 0x4dd3
    mulhw r0, r0, r29
    addi r3, r31, lbl_80752EA4@l
    addi r4, r4, lbl_8078D9E0@l
    stw r4, 0x0(r30)
    lis r31, lbl_807C88A0@ha
    addi r4, r3, 0x1
    srawi r6, r0, 6
    addi r3, r31, lbl_807C88A0@l
    srawi r0, r0, 6
    srwi r5, r0, 31
    srwi r7, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x3e8
    add r5, r6, r7
    subf r6, r0, r29
    crclr 6
    bl sprintf
    addi r3, r31, lbl_807C88A0@l
    bl fn_8009F788
    mr r4, r3
    addi r3, r30, 0xf4
    bl fn_8009E5A0
    lfs f1, lbl_80886438
    li r3, 0x0
    stfs f1, 0x17c(r30)
    li r0, -0x1
    lfs f0, lbl_8088643C
    stfs f1, 0x180(r30)
    lfs f2, lbl_80886440
    stfs f1, 0x184(r30)
    lfs f1, lbl_80886444
    stfs f0, 0x188(r30)
    lfs f0, lbl_80886448
    stfs f2, 0x18c(r30)
    stfs f1, 0x190(r30)
    stw r3, 0x194(r30)
    stw r0, 0x198(r30)
    stw r3, 0x54(r30)
    lwz r3, 0xf8(r30)
    stfs f0, 0xbc(r3)
lbl_fn_8041537C_00001160:
    mr r3, r30
    b lbl_fn_8041537C_0000116C
lbl_fn_8041537C_00001168:
    li r3, 0x0
lbl_fn_8041537C_0000116C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804154AC(void)
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
    beq lbl_fn_804154AC_000011D0
    li r4, -0x1
    addi r3, r3, 0xf4
    bl fn_8009E690
    mr r3, r30
    li r4, 0x0
    bl task_destroyWorker
    cmpwi r31, 0x0
    ble lbl_fn_804154AC_000011D0
    mr r3, r30
    bl dtor_80084684
lbl_fn_804154AC_000011D0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80415514(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl task_updateWorker
    cntlzw r0, r3
    srwi r3, r0, 5
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8041553C(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    stw r0, 0x314(r1)
    stw r31, 0x30c(r1)
    stw r30, 0x308(r1)
    mr r30, r3
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8041553C_00001248
    lwz r12, 0x0(r3)
    lwz r12, 0x28(r12)
    mtctr r12
    bctrl
lbl_fn_8041553C_00001248:
    lfs f8, 0x70(r30)
    lis r4, lbl_807C7060@ha
    lfs f0, lbl_8088644C
    addi r4, r4, lbl_807C7060@l
    addi r3, r1, 0x2d8
    lfs f7, lbl_80886438
    fadds f8, f8, f0
    lfs f0, lbl_80886450
    addi r31, r1, 0x2a8
    stfs f8, 0x70(r30)
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    stfs f7, 0x2d4(r1)
    stfs f7, 0x2cc(r1)
    stfs f7, 0x2c8(r1)
    stfs f7, 0x2c4(r1)
    stfs f7, 0x2c0(r1)
    stfs f7, 0x2b8(r1)
    stfs f7, 0x2b4(r1)
    stfs f7, 0x2b0(r1)
    stfs f7, 0x2ac(r1)
    stfs f0, 0x2d0(r1)
    stfs f0, 0x2bc(r1)
    stfs f0, 0x2a8(r1)
    lfs f1, 0x80(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_8041553C_0000132C
    addi r3, r1, 0x158
    li r4, 0x7a
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x158
    addi r5, r1, 0x128
    bl PSMTXConcat
    addi r3, r1, 0x128
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8041553C_0000132C:
    lfs f0, lbl_80886438
    lfs f1, 0x7c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8041553C_0000138C
    addi r3, r1, 0x1b8
    li r4, 0x79
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x1b8
    addi r5, r1, 0x188
    bl PSMTXConcat
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8041553C_0000138C:
    lfs f0, lbl_80886438
    lfs f1, 0x78(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8041553C_000013EC
    addi r3, r1, 0x218
    li r4, 0x78
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x218
    addi r5, r1, 0x1e8
    bl PSMTXConcat
    addi r3, r1, 0x1e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8041553C_000013EC:
    lfs f1, 0x90(r30)
    addi r3, r1, 0x278
    lfs f2, 0x94(r30)
    lfs f3, 0x98(r30)
    bl PSMTXScale
    addi r4, r1, 0x2d8
    addi r3, r1, 0x278
    mr r5, r4
    bl PSMTXConcat
    addi r4, r1, 0x2d8
    addi r3, r1, 0x2a8
    mr r5, r4
    bl PSMTXConcat
    lfs f7, lbl_80886438
    addi r31, r1, 0x248
    lfs f0, lbl_80886450
    stfs f7, 0x274(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x25c(r1)
    stfs f0, 0x248(r1)
    lfs f1, 0x8c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_8041553C_000014B8
    addi r3, r1, 0x38
    li r4, 0x7a
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl PSMTXConcat
    addi r3, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8041553C_000014B8:
    lfs f0, lbl_80886438
    lfs f1, 0x88(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8041553C_00001518
    addi r3, r1, 0x98
    li r4, 0x79
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    bl PSMTXConcat
    addi r3, r1, 0x68
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8041553C_00001518:
    lfs f0, lbl_80886438
    lfs f1, 0x84(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_8041553C_00001578
    addi r3, r1, 0xf8
    li r4, 0x78
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl PSMTXConcat
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8041553C_00001578:
    addi r4, r1, 0x2d8
    addi r3, r1, 0x248
    mr r5, r4
    bl PSMTXConcat
    lfs f8, 0x74(r30)
    addi r3, r30, 0xf4
    lfs f7, 0x70(r30)
    addi r4, r1, 0x2d8
    lfs f0, 0x6c(r30)
    stfs f0, 0x2e4(r1)
    stfs f7, 0x2f4(r1)
    stfs f8, 0x304(r1)
    bl hud_drawTargetMarker
    lfs f7, 0x70(r30)
    lfs f0, lbl_8088644C
    lwz r0, 0x54(r30)
    fsubs f0, f7, f0
    cmpwi r0, 0x2
    stfs f0, 0x70(r30)
    bne lbl_fn_8041553C_000015D0
    mr r3, r30
    bl fn_80415F6C
lbl_fn_8041553C_000015D0:
    lwz r0, 0x314(r1)
    lwz r31, 0x30c(r1)
    lwz r30, 0x308(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}

asm void fn_80415910(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    cmpwi r0, 0x1
    beqlr
    li r0, 0x0
    stw r0, 0x158(r3)
    li r4, 0x1
    addi r3, r3, 0xf4
    b hud_updateTargetReticle
    blr
}

asm void fn_80415934(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    lwz r3, 0xf8(r3)
    bl fn_8009FFCC
    cmpwi r3, 0x0
    beq lbl_fn_80415934_00001634
    li r31, 0x1
lbl_fn_80415934_00001634:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80415974(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    stw r0, 0x654(r1)
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r29, 0x644(r1)
    mr r29, r3
    addi r3, r3, 0x60
    bl boss_getOffset50
    mr r30, r3
    addi r3, r29, 0x60
    bl boss_getOffset54
    lis r4, lbl_807774D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807774D8@l
    stw r4, 0x8(r1)
    mr r31, r3
    addi r3, r1, 0x18
    stw r0, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x638(r1)
    bl memset
    addi r3, r1, 0x618
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x8(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x8
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807774B8@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_807774B8@l
    stw r4, 0x8(r1)
    la r4, lbl_8087D710
    bl talk_copySpeakerName
    lis r31, lbl_80752EA4@ha
    addi r31, r31, lbl_80752EA4@l
lbl_fn_80415974_000016FC:
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_80415974_00001760
    addi r4, r31, 0x16
    bl strcmp
    cmpwi r3, 0x0
    bne lbl_fn_80415974_00001760
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl str_skipWhitespace
    stfs f1, 0x188(r29)
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl str_skipWhitespace
    stfs f1, 0x18c(r29)
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl str_skipWhitespace
    stfs f1, 0x190(r29)
    addi r3, r1, 0x8
    bl talk_formatQuotedString
    bl atoi
    stw r3, 0x194(r29)
lbl_fn_80415974_00001760:
    addi r3, r1, 0x8
    bl talk_parseQuotes
    cmpwi r3, 0x0
    bne lbl_fn_80415974_000016FC
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    lwz r29, 0x644(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80415AB4(void)
{
    nofralloc
    stwu r1, -0x310(r1)
    mflr r0
    lis r5, lbl_807C7060@ha
    lfs f7, lbl_80886438
    stw r0, 0x314(r1)
    li r0, 0x2
    addi r5, r5, lbl_807C7060@l
    addi r4, r1, 0x2d8
    stw r31, 0x30c(r1)
    addi r31, r1, 0x2a8
    lfs f0, lbl_80886450
    stw r30, 0x308(r1)
    mr r30, r3
    stw r0, 0x54(r3)
    psq_l f1, 0x0(r5), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    psq_l f3, 0x10(r5), 0, 0
    psq_l f4, 0x18(r5), 0, 0
    psq_l f5, 0x20(r5), 0, 0
    psq_l f6, 0x28(r5), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    stfs f7, 0x2d4(r1)
    stfs f7, 0x2cc(r1)
    stfs f7, 0x2c8(r1)
    stfs f7, 0x2c4(r1)
    stfs f7, 0x2c0(r1)
    stfs f7, 0x2b8(r1)
    stfs f7, 0x2b4(r1)
    stfs f7, 0x2b0(r1)
    stfs f7, 0x2ac(r1)
    stfs f0, 0x2d0(r1)
    stfs f0, 0x2bc(r1)
    stfs f0, 0x2a8(r1)
    lfs f1, 0x80(r3)
    fcmpu cr0, f7, f1
    beq lbl_fn_80415AB4_00001880
    addi r3, r1, 0x158
    li r4, 0x7a
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x158
    addi r5, r1, 0x128
    bl PSMTXConcat
    addi r3, r1, 0x128
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80415AB4_00001880:
    lfs f0, lbl_80886438
    lfs f1, 0x7c(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80415AB4_000018E0
    addi r3, r1, 0x1b8
    li r4, 0x79
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x1b8
    addi r5, r1, 0x188
    bl PSMTXConcat
    addi r3, r1, 0x188
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80415AB4_000018E0:
    lfs f0, lbl_80886438
    lfs f1, 0x78(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80415AB4_00001940
    addi r3, r1, 0x218
    li r4, 0x78
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x218
    addi r5, r1, 0x1e8
    bl PSMTXConcat
    addi r3, r1, 0x1e8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80415AB4_00001940:
    lfs f1, 0x90(r30)
    addi r3, r1, 0x278
    lfs f2, 0x94(r30)
    lfs f3, 0x98(r30)
    bl PSMTXScale
    addi r4, r1, 0x2d8
    addi r3, r1, 0x278
    mr r5, r4
    bl PSMTXConcat
    addi r4, r1, 0x2d8
    addi r3, r1, 0x2a8
    mr r5, r4
    bl PSMTXConcat
    lfs f7, lbl_80886438
    addi r31, r1, 0x248
    lfs f0, lbl_80886450
    stfs f7, 0x274(r1)
    stfs f7, 0x26c(r1)
    stfs f7, 0x268(r1)
    stfs f7, 0x264(r1)
    stfs f7, 0x260(r1)
    stfs f7, 0x258(r1)
    stfs f7, 0x254(r1)
    stfs f7, 0x250(r1)
    stfs f7, 0x24c(r1)
    stfs f0, 0x270(r1)
    stfs f0, 0x25c(r1)
    stfs f0, 0x248(r1)
    lfs f1, 0x8c(r30)
    fcmpu cr0, f7, f1
    beq lbl_fn_80415AB4_00001A0C
    addi r3, r1, 0x38
    li r4, 0x7a
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x38
    addi r5, r1, 0x8
    bl PSMTXConcat
    addi r3, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80415AB4_00001A0C:
    lfs f0, lbl_80886438
    lfs f1, 0x88(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80415AB4_00001A6C
    addi r3, r1, 0x98
    li r4, 0x79
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0x98
    addi r5, r1, 0x68
    bl PSMTXConcat
    addi r3, r1, 0x68
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80415AB4_00001A6C:
    lfs f0, lbl_80886438
    lfs f1, 0x84(r30)
    fcmpu cr0, f0, f1
    beq lbl_fn_80415AB4_00001ACC
    addi r3, r1, 0xf8
    li r4, 0x78
    bl PSMTXRotRad
    mr r3, r31
    addi r4, r1, 0xf8
    addi r5, r1, 0xc8
    bl PSMTXConcat
    addi r3, r1, 0xc8
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_80415AB4_00001ACC:
    addi r4, r1, 0x2d8
    addi r3, r1, 0x248
    mr r5, r4
    bl PSMTXConcat
    lfs f8, 0x74(r30)
    addi r3, r30, 0xf4
    lfs f7, 0x70(r30)
    addi r4, r1, 0x2d8
    lfs f0, 0x6c(r30)
    stfs f0, 0x2e4(r1)
    stfs f7, 0x2f4(r1)
    stfs f8, 0x304(r1)
    bl hud_drawTargetMarker
    lwz r0, 0x314(r1)
    lwz r31, 0x30c(r1)
    lwz r30, 0x308(r1)
    mtlr r0
    addi r1, r1, 0x310
    blr
}
