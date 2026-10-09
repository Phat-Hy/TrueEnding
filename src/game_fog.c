#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _savegpr_19(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800CA834(void);
extern void fn_800CA8B0(void);
extern void fn_800CA8E0(void);
extern void fn_800CB800(void);
extern void fn_800CBE8C(void);
extern void fn_800CC518(void);
extern void fn_800D26A4(void);
extern void fn_800D2868(void);
extern void fn_800D3B74(void);
extern void fn_800D5618(void);
extern void fn_800D5670(void);
extern void fn_800D56C4(void);
extern void fn_800DCA6C(void);
extern void fn_806952C4(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_807796B0[];
extern u8 lbl_80734440[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];
extern u8 lbl_807796D0[];
extern u8 lbl_807C75D8[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFF0;
extern u32 lbl_80881188;
extern u32 lbl_8088118C;
extern u32 lbl_8088119C;
extern u32 lbl_808811A8;
extern u32 lbl_808811B0;
extern u32 lbl_808811CC;
extern u32 lbl_808811D0;

/* Function declarations */
void fn_800D0DB0(void);
void fn_800D0F34(void);
void fn_800D10B8(void);
void fn_800D123C(void);
void fn_800D1430(void);
void fn_800D19FC(void);
void fn_800D1C60(void);
void fn_800D1CD4(void);
void fn_800D1D3C(void);
void fn_800D1D94(void);
void fn_800D1E9C(void);
void fn_800D2338(void);
void fn_800D2398(void);
void fn_800D246C(void);
void fn_800D2494(void);

asm void fn_800D0DB0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r19, 0x2c(r1)
    mr r27, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800D0DB0_00000170
    cmpwi r5, 0x0
    blt lbl_fn_800D0DB0_00000030
    cmpwi r5, 0x8
    blt lbl_fn_800D0DB0_00000038
lbl_fn_800D0DB0_00000030:
    li r31, 0x0
    b lbl_fn_800D0DB0_00000044
lbl_fn_800D0DB0_00000038:
    mulli r0, r5, 0x18
    add r4, r3, r0
    addi r31, r4, 0x2a18
lbl_fn_800D0DB0_00000044:
    lis r19, lbl_80775B60@ha
    lis r25, lbl_80775B98@ha
    lis r26, lbl_80775B30@ha
    addi r29, r3, 0x4
    addi r19, r19, lbl_80775B60@l
    addi r23, r1, 0x8
    addi r25, r25, lbl_80775B98@l
    addi r26, r26, lbl_80775B30@l
    addi r30, r1, 0x18
    li r28, 0x0
    li r20, 0x0
    lis r21, lbl_80775BC8@ha
    li r24, 0x1
lbl_fn_800D0DB0_00000078:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800D0DB0_00000160
    cmpwi r31, 0x0
    beq lbl_fn_800D0DB0_00000098
    lwz r0, 0xa8(r29)
    cmplw r0, r31
    bne lbl_fn_800D0DB0_00000160
lbl_fn_800D0DB0_00000098:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800D0DB0_00000148
    stw r19, 0x18(r1)
    addi r3, r21, lbl_80775BC8@l
    stb r20, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r22, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r23, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800D0DB0_000000F4
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    stw r25, 0x0(r3)
    stw r22, 0xc(r3)
lbl_fn_800D0DB0_000000F4:
    cmpwi r20, 0x0
    stw r3, 0x20(r1)
    stw r20, 0x10(r1)
    beq lbl_fn_800D0DB0_0000010C
    li r3, 0x0
    bl fn_80084C24
lbl_fn_800D0DB0_0000010C:
    lwz r3, 0x1c(r1)
    addi r4, r21, lbl_80775BC8@l
    bl strcpy
    stw r26, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r30, 0x0
    beq lbl_fn_800D0DB0_00000148
    addic. r3, r30, 0x4
    beq lbl_fn_800D0DB0_00000148
    beq lbl_fn_800D0DB0_00000148
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800D0DB0_00000148
    bl fn_806952C4
lbl_fn_800D0DB0_00000148:
    lwz r5, 0x0(r27)
    mr r4, r29
    addi r3, r27, 0x4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800D0DB0_00000160:
    addi r28, r28, 0x1
    addi r29, r29, 0x14c
    cmpwi r28, 0x20
    blt lbl_fn_800D0DB0_00000078
lbl_fn_800D0DB0_00000170:
    lmw r19, 0x2c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800D0F34(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r19, 0x2c(r1)
    mr r27, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800D0F34_000002F4
    cmpwi r5, 0x0
    blt lbl_fn_800D0F34_000001B4
    cmpwi r5, 0x20
    blt lbl_fn_800D0F34_000001BC
lbl_fn_800D0F34_000001B4:
    li r31, 0x0
    b lbl_fn_800D0F34_000001C8
lbl_fn_800D0F34_000001BC:
    mulli r0, r5, 0x18
    add r4, r3, r0
    addi r31, r4, 0x2b98
lbl_fn_800D0F34_000001C8:
    lis r19, lbl_80775B60@ha
    lis r25, lbl_80775B98@ha
    lis r26, lbl_80775B30@ha
    addi r29, r3, 0x4
    addi r19, r19, lbl_80775B60@l
    addi r23, r1, 0x8
    addi r25, r25, lbl_80775B98@l
    addi r26, r26, lbl_80775B30@l
    addi r30, r1, 0x18
    li r28, 0x0
    li r20, 0x0
    lis r21, lbl_80775BC8@ha
    li r24, 0x1
lbl_fn_800D0F34_000001FC:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800D0F34_000002E4
    cmpwi r31, 0x0
    beq lbl_fn_800D0F34_0000021C
    lwz r0, 0xac(r29)
    cmplw r0, r31
    bne lbl_fn_800D0F34_000002E4
lbl_fn_800D0F34_0000021C:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800D0F34_000002CC
    stw r19, 0x18(r1)
    addi r3, r21, lbl_80775BC8@l
    stb r20, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r22, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r23, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800D0F34_00000278
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    stw r25, 0x0(r3)
    stw r22, 0xc(r3)
lbl_fn_800D0F34_00000278:
    cmpwi r20, 0x0
    stw r3, 0x20(r1)
    stw r20, 0x10(r1)
    beq lbl_fn_800D0F34_00000290
    li r3, 0x0
    bl fn_80084C24
lbl_fn_800D0F34_00000290:
    lwz r3, 0x1c(r1)
    addi r4, r21, lbl_80775BC8@l
    bl strcpy
    stw r26, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r30, 0x0
    beq lbl_fn_800D0F34_000002CC
    addic. r3, r30, 0x4
    beq lbl_fn_800D0F34_000002CC
    beq lbl_fn_800D0F34_000002CC
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800D0F34_000002CC
    bl fn_806952C4
lbl_fn_800D0F34_000002CC:
    lwz r5, 0x0(r27)
    mr r4, r29
    addi r3, r27, 0x4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800D0F34_000002E4:
    addi r28, r28, 0x1
    addi r29, r29, 0x14c
    cmpwi r28, 0x20
    blt lbl_fn_800D0F34_000001FC
lbl_fn_800D0F34_000002F4:
    lmw r19, 0x2c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800D10B8(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r19, 0x2c(r1)
    mr r27, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800D10B8_00000478
    cmpwi r5, 0x0
    blt lbl_fn_800D10B8_00000338
    cmpwi r5, 0x10
    blt lbl_fn_800D10B8_00000340
lbl_fn_800D10B8_00000338:
    li r31, 0x0
    b lbl_fn_800D10B8_0000034C
lbl_fn_800D10B8_00000340:
    mulli r0, r5, 0x18
    add r4, r3, r0
    addi r31, r4, 0x3198
lbl_fn_800D10B8_0000034C:
    lis r19, lbl_80775B60@ha
    lis r25, lbl_80775B98@ha
    lis r26, lbl_80775B30@ha
    addi r29, r3, 0x4
    addi r19, r19, lbl_80775B60@l
    addi r23, r1, 0x8
    addi r25, r25, lbl_80775B98@l
    addi r26, r26, lbl_80775B30@l
    addi r30, r1, 0x18
    li r28, 0x0
    li r20, 0x0
    lis r21, lbl_80775BC8@ha
    li r24, 0x1
lbl_fn_800D10B8_00000380:
    lwz r0, 0x4(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800D10B8_00000468
    cmpwi r31, 0x0
    beq lbl_fn_800D10B8_000003A0
    lwz r0, 0xb0(r29)
    cmplw r0, r31
    bne lbl_fn_800D10B8_00000468
lbl_fn_800D10B8_000003A0:
    lwz r0, 0x0(r27)
    cmpwi r0, 0x0
    bne lbl_fn_800D10B8_00000450
    stw r19, 0x18(r1)
    addi r3, r21, lbl_80775BC8@l
    stb r20, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r22, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r23, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800D10B8_000003FC
    stw r24, 0x4(r3)
    stw r24, 0x8(r3)
    stw r25, 0x0(r3)
    stw r22, 0xc(r3)
lbl_fn_800D10B8_000003FC:
    cmpwi r20, 0x0
    stw r3, 0x20(r1)
    stw r20, 0x10(r1)
    beq lbl_fn_800D10B8_00000414
    li r3, 0x0
    bl fn_80084C24
lbl_fn_800D10B8_00000414:
    lwz r3, 0x1c(r1)
    addi r4, r21, lbl_80775BC8@l
    bl strcpy
    stw r26, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r30, 0x0
    beq lbl_fn_800D10B8_00000450
    addic. r3, r30, 0x4
    beq lbl_fn_800D10B8_00000450
    beq lbl_fn_800D10B8_00000450
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800D10B8_00000450
    bl fn_806952C4
lbl_fn_800D10B8_00000450:
    lwz r5, 0x0(r27)
    mr r4, r29
    addi r3, r27, 0x4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800D10B8_00000468:
    addi r28, r28, 0x1
    addi r29, r29, 0x14c
    cmpwi r28, 0x20
    blt lbl_fn_800D10B8_00000380
lbl_fn_800D10B8_00000478:
    lmw r19, 0x2c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_800D123C(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r17, 0x34(r1)
    mr r22, r4
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800D123C_0000066C
    cmpwi r5, 0x0
    blt lbl_fn_800D123C_000004BC
    cmpwi r5, 0x8
    blt lbl_fn_800D123C_000004C4
lbl_fn_800D123C_000004BC:
    li r28, 0x0
    b lbl_fn_800D123C_000004D0
lbl_fn_800D123C_000004C4:
    mulli r0, r5, 0x18
    add r4, r3, r0
    addi r28, r4, 0x2a18
lbl_fn_800D123C_000004D0:
    cmpwi r6, 0x0
    blt lbl_fn_800D123C_000004E0
    cmpwi r6, 0x20
    blt lbl_fn_800D123C_000004E8
lbl_fn_800D123C_000004E0:
    li r27, 0x0
    b lbl_fn_800D123C_000004F4
lbl_fn_800D123C_000004E8:
    mulli r0, r6, 0x18
    add r4, r3, r0
    addi r27, r4, 0x2b98
lbl_fn_800D123C_000004F4:
    cmpwi r7, 0x0
    blt lbl_fn_800D123C_00000504
    cmpwi r7, 0x10
    blt lbl_fn_800D123C_0000050C
lbl_fn_800D123C_00000504:
    li r26, 0x0
    b lbl_fn_800D123C_00000518
lbl_fn_800D123C_0000050C:
    mulli r0, r7, 0x18
    add r4, r3, r0
    addi r26, r4, 0x3198
lbl_fn_800D123C_00000518:
    lis r29, lbl_80775B60@ha
    lis r20, lbl_80775B98@ha
    lis r21, lbl_80775B30@ha
    addi r24, r3, 0x4
    addi r29, r29, lbl_80775B60@l
    addi r18, r1, 0x8
    addi r20, r20, lbl_80775B98@l
    addi r21, r21, lbl_80775B30@l
    addi r25, r1, 0x18
    li r23, 0x0
    li r30, 0x0
    lis r31, lbl_80775BC8@ha
    li r19, 0x1
lbl_fn_800D123C_0000054C:
    lwz r0, 0x4(r24)
    cmpwi r0, 0x0
    beq lbl_fn_800D123C_0000065C
    cmpwi r28, 0x0
    beq lbl_fn_800D123C_0000056C
    lwz r0, 0xa8(r24)
    cmplw r0, r28
    bne lbl_fn_800D123C_0000065C
lbl_fn_800D123C_0000056C:
    cmpwi r27, 0x0
    beq lbl_fn_800D123C_00000580
    lwz r0, 0xac(r24)
    cmplw r0, r27
    bne lbl_fn_800D123C_0000065C
lbl_fn_800D123C_00000580:
    cmpwi r26, 0x0
    beq lbl_fn_800D123C_00000594
    lwz r0, 0xb0(r24)
    cmplw r0, r26
    bne lbl_fn_800D123C_0000065C
lbl_fn_800D123C_00000594:
    lwz r0, 0x0(r22)
    cmpwi r0, 0x0
    bne lbl_fn_800D123C_00000644
    stw r29, 0x18(r1)
    addi r3, r31, lbl_80775BC8@l
    stb r30, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    stw r3, 0x1c(r1)
    mr r17, r3
    stw r3, 0x10(r1)
    li r3, 0x10
    stw r18, 0x14(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800D123C_000005F0
    stw r19, 0x4(r3)
    stw r19, 0x8(r3)
    stw r20, 0x0(r3)
    stw r17, 0xc(r3)
lbl_fn_800D123C_000005F0:
    cmpwi r30, 0x0
    stw r3, 0x20(r1)
    stw r30, 0x10(r1)
    beq lbl_fn_800D123C_00000608
    li r3, 0x0
    bl fn_80084C24
lbl_fn_800D123C_00000608:
    lwz r3, 0x1c(r1)
    addi r4, r31, lbl_80775BC8@l
    bl strcpy
    stw r21, 0x18(r1)
    addi r3, r1, 0x18
    bl fn_800DCA6C
    cmpwi r25, 0x0
    beq lbl_fn_800D123C_00000644
    addic. r3, r25, 0x4
    beq lbl_fn_800D123C_00000644
    beq lbl_fn_800D123C_00000644
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800D123C_00000644
    bl fn_806952C4
lbl_fn_800D123C_00000644:
    lwz r5, 0x0(r22)
    mr r4, r24
    addi r3, r22, 0x4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800D123C_0000065C:
    addi r23, r23, 0x1
    addi r24, r24, 0x14c
    cmpwi r23, 0x20
    blt lbl_fn_800D123C_0000054C
lbl_fn_800D123C_0000066C:
    lmw r17, 0x34(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_800D1430(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    addi r11, r1, 0xa0
    bl _savegpr_19
    lwz r0, 0x46e4(r3)
    lis r4, lbl_80734440@ha
    addi r4, r4, lbl_80734440@l
    mr r31, r3
    cmpwi r0, 0x0
    addi r4, r4, 0xc4
    bne lbl_fn_800D1430_000006D0
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_800D1430_000006D0
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x46e4(r31)
    mr r28, r3
    b lbl_fn_800D1430_000006D4
lbl_fn_800D1430_000006D0:
    li r28, 0x0
lbl_fn_800D1430_000006D4:
    lis r4, lbl_80734440@ha
    mr r3, r28
    addi r30, r4, lbl_80734440@l
    addi r5, r31, 0x3498
    addi r4, r30, 0xca
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r30, 0xd2
    addi r5, r31, 0x349c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r30, 0xe0
    addi r5, r31, 0x34dc
    li r6, 0x0
    li r7, 0x63
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r28
    addi r4, r30, 0xeb
    addi r5, r31, 0x2a10
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088118C
    mr r3, r28
    lfs f2, lbl_808811A8
    addi r4, r30, 0xf6
    lfs f3, lbl_808811CC
    addi r5, r31, 0x2a14
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x103
    bl fn_8008937C
    mr r21, r3
    addi r22, r31, 0x2a18
    addi r23, r31, 0x2a1c
    addi r24, r31, 0x2a20
    addi r25, r31, 0x2a24
    addi r26, r31, 0x2a28
    addi r27, r31, 0x2a2c
    li r20, 0x0
    lis r29, fn_800CB800@ha
lbl_fn_800D1430_000007A8:
    mr r5, r20
    addi r3, r1, 0x48
    addi r4, r30, 0x10f
    crclr 6
    bl sprintf
    mr r3, r21
    addi r4, r1, 0x48
    bl fn_8008937C
    mr r19, r3
    mr r5, r23
    mr r7, r22
    addi r4, r30, 0x11a
    addi r6, r29, fn_800CB800@l
    bl fn_80087994
    lfs f1, lbl_8088118C
    mr r3, r19
    lfs f2, lbl_808811A8
    mr r5, r24
    lfs f3, lbl_808811CC
    mr r7, r22
    addi r4, r30, 0x11f
    addi r6, r29, fn_800CB800@l
    bl fn_8008771C
    lfs f1, lbl_808811CC
    mr r3, r19
    lfs f2, lbl_808811B0
    mr r5, r25
    fmr f3, f1
    mr r7, r22
    addi r4, r30, 0x126
    addi r6, r29, fn_800CB800@l
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r19
    lfs f2, lbl_80881188
    mr r5, r26
    lfs f3, lbl_808811CC
    mr r7, r22
    addi r4, r30, 0x12c
    addi r6, r29, fn_800CB800@l
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r19
    lfs f2, lbl_80881188
    mr r5, r27
    lfs f3, lbl_808811CC
    mr r7, r22
    addi r4, r30, 0x130
    addi r6, r29, fn_800CB800@l
    bl fn_8008771C
    addi r20, r20, 0x1
    addi r23, r23, 0x18
    cmpwi r20, 0x8
    addi r24, r24, 0x18
    addi r25, r25, 0x18
    addi r26, r26, 0x18
    addi r27, r27, 0x18
    addi r22, r22, 0x18
    blt lbl_fn_800D1430_000007A8
    lis r4, lbl_80734440@ha
    mr r3, r28
    addi r30, r4, lbl_80734440@l
    addi r4, r30, 0x138
    bl fn_8008937C
    mr r19, r3
    addi r22, r31, 0x2b98
    addi r23, r31, 0x2b9c
    addi r24, r31, 0x2ba0
    addi r25, r31, 0x2ba4
    addi r26, r31, 0x2ba8
    addi r27, r31, 0x2bac
    li r20, 0x0
    lis r29, fn_800CBE8C@ha
lbl_fn_800D1430_000008CC:
    mr r5, r20
    addi r3, r1, 0x28
    addi r4, r30, 0x146
    crclr 6
    bl sprintf
    mr r3, r19
    addi r4, r1, 0x28
    bl fn_8008937C
    mr r21, r3
    mr r5, r23
    mr r7, r22
    addi r4, r30, 0x11a
    addi r6, r29, fn_800CBE8C@l
    bl fn_80087994
    lfs f1, lbl_8088118C
    mr r3, r21
    lfs f2, lbl_808811A8
    mr r5, r24
    lfs f3, lbl_808811CC
    mr r7, r22
    addi r4, r30, 0x11f
    addi r6, r29, fn_800CBE8C@l
    bl fn_8008771C
    lfs f1, lbl_808811CC
    mr r3, r21
    lfs f2, lbl_808811B0
    mr r5, r25
    fmr f3, f1
    mr r7, r22
    addi r4, r30, 0x126
    addi r6, r29, fn_800CBE8C@l
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r21
    lfs f2, lbl_80881188
    mr r5, r26
    lfs f3, lbl_808811CC
    mr r7, r22
    addi r4, r30, 0x12c
    addi r6, r29, fn_800CBE8C@l
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r21
    lfs f2, lbl_80881188
    mr r5, r27
    lfs f3, lbl_808811CC
    mr r7, r22
    addi r4, r30, 0x130
    addi r6, r29, fn_800CBE8C@l
    bl fn_8008771C
    addi r20, r20, 0x1
    addi r23, r23, 0x18
    cmpwi r20, 0x20
    addi r24, r24, 0x18
    addi r25, r25, 0x18
    addi r26, r26, 0x18
    addi r27, r27, 0x18
    addi r22, r22, 0x18
    blt lbl_fn_800D1430_000008CC
    lis r4, lbl_80734440@ha
    mr r3, r28
    addi r29, r4, lbl_80734440@l
    addi r4, r29, 0x153
    bl fn_8008937C
    mr r19, r3
    addi r27, r31, 0x3198
    addi r26, r31, 0x319c
    addi r25, r31, 0x31a0
    addi r24, r31, 0x31a4
    addi r23, r31, 0x31a8
    addi r22, r31, 0x31ac
    li r20, 0x0
    lis r30, fn_800CC518@ha
lbl_fn_800D1430_000009F0:
    mr r5, r20
    addi r3, r1, 0x8
    addi r4, r29, 0x15e
    crclr 6
    bl sprintf
    mr r3, r19
    addi r4, r1, 0x8
    bl fn_8008937C
    mr r21, r3
    mr r5, r26
    mr r7, r27
    addi r4, r29, 0x11a
    addi r6, r30, fn_800CC518@l
    bl fn_80087994
    lfs f1, lbl_8088118C
    mr r3, r21
    lfs f2, lbl_808811A8
    mr r5, r25
    lfs f3, lbl_808811CC
    mr r7, r27
    addi r4, r29, 0x11f
    addi r6, r30, fn_800CC518@l
    bl fn_8008771C
    lfs f1, lbl_808811CC
    mr r3, r21
    lfs f2, lbl_808811B0
    mr r5, r24
    fmr f3, f1
    mr r7, r27
    addi r4, r29, 0x126
    addi r6, r30, fn_800CC518@l
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r21
    lfs f2, lbl_80881188
    mr r5, r23
    lfs f3, lbl_808811CC
    mr r7, r27
    addi r4, r29, 0x12c
    addi r6, r30, fn_800CC518@l
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r21
    lfs f2, lbl_80881188
    mr r5, r22
    lfs f3, lbl_808811CC
    mr r7, r27
    addi r4, r29, 0x130
    addi r6, r30, fn_800CC518@l
    bl fn_8008771C
    addi r20, r20, 0x1
    addi r26, r26, 0x18
    cmpwi r20, 0x10
    addi r25, r25, 0x18
    addi r24, r24, 0x18
    addi r23, r23, 0x18
    addi r22, r22, 0x18
    addi r27, r27, 0x18
    blt lbl_fn_800D1430_000009F0
    lis r30, lbl_80734440@ha
    mr r3, r28
    addi r30, r30, lbl_80734440@l
    addi r4, r30, 0x168
    bl fn_8008937C
    mr r19, r3
    addi r4, r30, 0xca
    addi r5, r31, 0x34a0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_8088118C
    mr r3, r19
    lfs f2, lbl_808811D0
    addi r4, r30, 0x170
    lfs f3, lbl_80881188
    addi r5, r31, 0x34a4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r19
    lfs f2, lbl_808811D0
    addi r4, r30, 0x182
    lfs f3, lbl_80881188
    addi r5, r31, 0x34a8
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r19
    lfs f2, lbl_808811D0
    addi r4, r30, 0x18f
    lfs f3, lbl_80881188
    addi r5, r31, 0x34ac
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r28
    addi r4, r30, 0x19c
    bl fn_8008937C
    mr r19, r3
    addi r4, r30, 0xca
    addi r5, r31, 0x34b0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r19
    addi r4, r30, 0x1a4
    addi r5, r31, 0x34b4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r30, 0x1af
    addi r5, r31, 0x34bc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r28
    addi r4, r30, 0x1ba
    addi r5, r31, 0x34c0
    li r6, -0x1
    li r7, 0x1e
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_8088118C
    mr r3, r28
    lfs f2, lbl_808811A8
    addi r4, r30, 0x1c8
    lfs f3, lbl_8088119C
    addi r5, r31, 0x34c4
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_8088118C
    mr r3, r28
    lfs f2, lbl_808811A8
    addi r4, r30, 0x1d6
    lfs f3, lbl_808811CC
    addi r5, r31, 0x34cc
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    addi r11, r1, 0xa0
    bl _restgpr_19
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_800D19FC(void)
{
    nofralloc
    stwu r1, -0x1f0(r1)
    mflr r0
    stw r0, 0x1f4(r1)
    stfd f31, 0x1e0(r1)
    psq_st f31, 0x1e8(r1), 0, 0
    stfd f30, 0x1d0(r1)
    psq_st f30, 0x1d8(r1), 0, 0
    stfd f29, 0x1c0(r1)
    psq_st f29, 0x1c8(r1), 0, 0
    fmr f29, f1
    stw r31, 0x1bc(r1)
    mr r31, r4
    stw r30, 0x1b8(r1)
    mr r30, r3
    stw r29, 0x1b4(r1)
    stw r28, 0x1b0(r1)
    lwz r0, 0x34e0(r3)
    cmplwi r0, 0x20
    bge lbl_fn_800D19FC_00000E78
    cmpwi r4, 0x0
    bne lbl_fn_800D19FC_00000CA4
    b lbl_fn_800D19FC_00000E78
lbl_fn_800D19FC_00000CA4:
    lwz r0, 0x34dc(r3)
    cmpwi r0, 0x0
    ble lbl_fn_800D19FC_00000D54
    lwz r0, 0x9c(r4)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_800D19FC_00000D2C
    lfs f2, 0x78(r4)
    addi r5, r1, 0x8
    psq_l f1, 0x70(r4), 0, 0
    mr r3, r31
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    bl fn_800CA8E0
    fmr f30, f1
    mr r3, r31
    bl fn_800CA8B0
    fmr f31, f1
    mr r3, r31
    bl fn_800CA834
    lis r4, lbl_80734440@ha
    fmr f4, f29
    addi r4, r4, lbl_80734440@l
    fmr f5, f31
    mr r5, r3
    fmr f6, f30
    lfs f1, 0x8(r1)
    lfs f2, 0xc(r1)
    addi r3, r1, 0xa8
    lfs f3, 0x10(r1)
    addi r4, r4, 0x1e
    crset 6
    bl sprintf
    b lbl_fn_800D19FC_00000D5C
lbl_fn_800D19FC_00000D2C:
    mr r3, r31
    bl fn_800CA834
    lis r4, lbl_80734440@ha
    mr r5, r3
    addi r4, r4, lbl_80734440@l
    addi r3, r1, 0xa8
    addi r4, r4, 0x1e2
    crclr 6
    bl sprintf
    b lbl_fn_800D19FC_00000D5C
lbl_fn_800D19FC_00000D54:
    li r0, 0x0
    stb r0, 0xa8(r1)
lbl_fn_800D19FC_00000D5C:
    lwz r0, 0x34e0(r30)
    addi r29, r30, 0x34e4
    mulli r0, r0, 0x90
    add r3, r30, r0
    addi r4, r3, 0x34e4
    b lbl_fn_800D19FC_00000DC0
lbl_fn_800D19FC_00000D74:
    lwz r3, 0x80(r29)
    lwz r0, 0x98(r31)
    cmplw r3, r0
    bne lbl_fn_800D19FC_00000DBC
    addi r28, r1, 0xa8
    cmplw r28, r29
    beq lbl_fn_800D19FC_00000DAC
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r28
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800D19FC_00000DAC:
    li r0, 0x0
    stw r0, 0x84(r29)
    stfs f29, 0x88(r29)
    b lbl_fn_800D19FC_00000E78
lbl_fn_800D19FC_00000DBC:
    addi r29, r29, 0x90
lbl_fn_800D19FC_00000DC0:
    cmplw r29, r4
    bne lbl_fn_800D19FC_00000D74
    addi r28, r1, 0xa8
    addi r29, r1, 0x18
    cmplw r28, r29
    li r0, 0x0
    stb r0, 0x18(r1)
    beq lbl_fn_800D19FC_00000DFC
    mr r3, r28
    bl strlen
    mr r5, r3
    mr r3, r29
    mr r4, r28
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_800D19FC_00000DFC:
    lwz r3, 0x98(r31)
    li r0, 0x0
    stw r3, 0x98(r1)
    stw r0, 0x9c(r1)
    stfs f29, 0xa0(r1)
    stw r31, 0xa4(r1)
    lwz r0, 0x34e0(r30)
    mulli r0, r0, 0x90
    add r0, r30, r0
    addic. r6, r0, 0x34e4
    beq lbl_fn_800D19FC_00000E6C
    li r0, 0x10
    subi r5, r6, 0x4
    addi r4, r1, 0x14
    mtctr r0
lbl_fn_800D19FC_00000E38:
    lwz r3, 0x4(r4)
    lwzu r0, 0x8(r4)
    stw r3, 0x4(r5)
    stwu r0, 0x8(r5)
    bdnz lbl_fn_800D19FC_00000E38
    lwz r0, 0x98(r1)
    stw r0, 0x80(r6)
    lwz r0, 0x9c(r1)
    stw r0, 0x84(r6)
    lfs f0, 0xa0(r1)
    stfs f0, 0x88(r6)
    lwz r0, 0xa4(r1)
    stw r0, 0x8c(r6)
lbl_fn_800D19FC_00000E6C:
    lwz r3, 0x34e0(r30)
    addi r0, r3, 0x1
    stw r0, 0x34e0(r30)
lbl_fn_800D19FC_00000E78:
    lwz r0, 0x1f4(r1)
    psq_l f31, 0x1e8(r1), 0, 0
    lfd f31, 0x1e0(r1)
    psq_l f30, 0x1d8(r1), 0, 0
    lfd f30, 0x1d0(r1)
    psq_l f29, 0x1c8(r1), 0, 0
    lfd f29, 0x1c0(r1)
    lwz r31, 0x1bc(r1)
    lwz r30, 0x1b8(r1)
    lwz r29, 0x1b4(r1)
    lwz r28, 0x1b0(r1)
    mtlr r0
    addi r1, r1, 0x1f0
    blr
}

asm void fn_800D1C60(void)
{
    nofralloc
    cmpwi r3, 0x0
    bne lbl_fn_800D1C60_00000EC0
    li r3, 0x0
    blr
lbl_fn_800D1C60_00000EC0:
    cmpwi r3, 0x1
    bne lbl_fn_800D1C60_00000ED0
    li r3, 0x1
    blr
lbl_fn_800D1C60_00000ED0:
    cmpwi r3, 0x2
    bne lbl_fn_800D1C60_00000EE0
    li r3, 0x3
    blr
lbl_fn_800D1C60_00000EE0:
    cmpwi r3, 0x3
    bne lbl_fn_800D1C60_00000EF0
    li r3, 0x2
    blr
lbl_fn_800D1C60_00000EF0:
    cmpwi r3, 0x6
    bne lbl_fn_800D1C60_00000F00
    li r3, 0x5
    blr
lbl_fn_800D1C60_00000F00:
    cmpwi r3, 0x5
    bne lbl_fn_800D1C60_00000F10
    li r3, 0x6
    blr
lbl_fn_800D1C60_00000F10:
    cmpwi r3, 0x4
    li r3, 0x7
    bnelr
    li r3, 0x4
    blr
}

asm void fn_800D1CD4(void)
{
    nofralloc
    cmplwi r3, 0x7
    bgt lbl_fn_800D1CD4_00000F84
    lis r4, jumptable_807796B0@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_807796B0@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x0
    blr
    li r3, 0x1
    blr
    li r3, 0x2
    blr
    li r3, 0x3
    blr
    li r3, 0x4
    blr
    li r3, 0x5
    blr
    li r3, 0x6
    blr
    li r3, 0x7
    blr
lbl_fn_800D1CD4_00000F84:
    li r3, 0x0
    blr
}

asm void fn_800D1D3C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    bl fn_800D5618
    lis r4, lbl_807796D0@ha
    mr r3, r30
    addi r4, r4, lbl_807796D0@l
    stw r4, 0x0(r30)
    mr r4, r31
    bl fn_800D1D94
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D1D94(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    li r5, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    stw r5, 0x18(r3)
    stw r5, 0x1c(r3)
    stw r5, 0x38(r3)
    beq lbl_fn_800D1D94_00001074
    beq lbl_fn_800D1D94_00001024
    mr r3, r30
    bl fn_800D56C4
lbl_fn_800D1D94_00001024:
    cmpwi r31, 0x0
    beq lbl_fn_800D1D94_00001054
    stw r30, 0x20(r31)
    addi r3, r30, 0x18
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800D1D94_00001050
lbl_fn_800D1D94_00001040:
    lwz r3, 0x0(r3)
    lwzu r0, 0x1c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_800D1D94_00001040
lbl_fn_800D1D94_00001050:
    stw r31, 0x0(r3)
lbl_fn_800D1D94_00001054:
    lwz r0, 0x24(r30)
    stw r0, 0x24(r31)
    cmplw r0, r30
    beq lbl_fn_800D1D94_00001084
    lwz r3, 0x3c(r30)
    addi r0, r3, 0x1
    stw r0, 0x3c(r30)
    b lbl_fn_800D1D94_00001084
lbl_fn_800D1D94_00001074:
    ori r0, r5, 0x52
    stw r3, 0x24(r3)
    stw r5, 0x20(r3)
    stw r0, 0x38(r3)
lbl_fn_800D1D94_00001084:
    li r7, 0x0
    stw r7, 0x3c(r31)
    lwz r5, 0x24(r31)
    lis r6, lbl_807C75D8@ha
    stw r7, 0x28(r31)
    addi r3, r6, lbl_807C75D8@l
    li r0, 0x1
    stw r7, 0x34(r31)
    stw r7, 0x30(r31)
    stw r7, 0x40(r31)
    lwz r4, 0x3c(r5)
    addi r4, r4, 0x1
    stw r4, 0x3c(r5)
    lwz r5, 0x4(r3)
    lwz r4, lbl_807C75D8@l(r6)
    addc r0, r5, r0
    stw r0, 0x4(r3)
    adde r0, r4, r7
    stw r0, lbl_807C75D8@l(r6)
    stw r7, 0x44(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D1E9C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r29, r3
    mr r30, r4
    beq lbl_fn_800D1E9C_00001570
    lwz r31, 0x18(r3)
    lis r4, lbl_807796D0@ha
    addi r4, r4, lbl_807796D0@l
    stw r4, 0x0(r3)
    cmpwi r31, 0x0
    beq lbl_fn_800D1E9C_00001498
    beq lbl_fn_800D1E9C_00001130
    mr r3, r31
    bl fn_800D56C4
lbl_fn_800D1E9C_00001130:
    lwz r28, 0x1c(r31)
    cmpwi r28, 0x0
    beq lbl_fn_800D1E9C_00001290
    beq lbl_fn_800D1E9C_00001148
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D1E9C_00001148:
    lwz r27, 0x1c(r28)
    cmpwi r27, 0x0
    beq lbl_fn_800D1E9C_000011E8
    beq lbl_fn_800D1E9C_00001160
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D1E9C_00001160:
    lwz r26, 0x1c(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800D1E9C_000011A0
    beq lbl_fn_800D1E9C_00001178
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D1E9C_00001178:
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001188
    bl fn_800D3B74
lbl_fn_800D1E9C_00001188:
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001198
    bl fn_800D3B74
lbl_fn_800D1E9C_00001198:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D1E9C_000011A0:
    lwz r26, 0x18(r27)
    cmpwi r26, 0x0
    beq lbl_fn_800D1E9C_000011E0
    beq lbl_fn_800D1E9C_000011B8
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D1E9C_000011B8:
    lwz r3, 0x1c(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000011C8
    bl fn_800D3B74
lbl_fn_800D1E9C_000011C8:
    lwz r3, 0x18(r26)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000011D8
    bl fn_800D3B74
lbl_fn_800D1E9C_000011D8:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D1E9C_000011E0:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D1E9C_000011E8:
    lwz r26, 0x18(r28)
    cmpwi r26, 0x0
    beq lbl_fn_800D1E9C_00001288
    beq lbl_fn_800D1E9C_00001200
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D1E9C_00001200:
    lwz r27, 0x1c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D1E9C_00001240
    beq lbl_fn_800D1E9C_00001218
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D1E9C_00001218:
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001228
    bl fn_800D3B74
lbl_fn_800D1E9C_00001228:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001238
    bl fn_800D3B74
lbl_fn_800D1E9C_00001238:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D1E9C_00001240:
    lwz r27, 0x18(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D1E9C_00001280
    beq lbl_fn_800D1E9C_00001258
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D1E9C_00001258:
    lwz r3, 0x1c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001268
    bl fn_800D3B74
lbl_fn_800D1E9C_00001268:
    lwz r3, 0x18(r27)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001278
    bl fn_800D3B74
lbl_fn_800D1E9C_00001278:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D1E9C_00001280:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D1E9C_00001288:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D1E9C_00001290:
    lwz r26, 0x18(r31)
    cmpwi r26, 0x0
    beq lbl_fn_800D1E9C_000013F0
    beq lbl_fn_800D1E9C_000012A8
    mr r3, r26
    bl fn_800D56C4
lbl_fn_800D1E9C_000012A8:
    lwz r27, 0x1c(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D1E9C_00001348
    beq lbl_fn_800D1E9C_000012C0
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D1E9C_000012C0:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D1E9C_00001300
    beq lbl_fn_800D1E9C_000012D8
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D1E9C_000012D8:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000012E8
    bl fn_800D3B74
lbl_fn_800D1E9C_000012E8:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000012F8
    bl fn_800D3B74
lbl_fn_800D1E9C_000012F8:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D1E9C_00001300:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D1E9C_00001340
    beq lbl_fn_800D1E9C_00001318
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D1E9C_00001318:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001328
    bl fn_800D3B74
lbl_fn_800D1E9C_00001328:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001338
    bl fn_800D3B74
lbl_fn_800D1E9C_00001338:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D1E9C_00001340:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D1E9C_00001348:
    lwz r27, 0x18(r26)
    cmpwi r27, 0x0
    beq lbl_fn_800D1E9C_000013E8
    beq lbl_fn_800D1E9C_00001360
    mr r3, r27
    bl fn_800D56C4
lbl_fn_800D1E9C_00001360:
    lwz r28, 0x1c(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D1E9C_000013A0
    beq lbl_fn_800D1E9C_00001378
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D1E9C_00001378:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001388
    bl fn_800D3B74
lbl_fn_800D1E9C_00001388:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_00001398
    bl fn_800D3B74
lbl_fn_800D1E9C_00001398:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D1E9C_000013A0:
    lwz r28, 0x18(r27)
    cmpwi r28, 0x0
    beq lbl_fn_800D1E9C_000013E0
    beq lbl_fn_800D1E9C_000013B8
    mr r3, r28
    bl fn_800D56C4
lbl_fn_800D1E9C_000013B8:
    lwz r3, 0x1c(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000013C8
    bl fn_800D3B74
lbl_fn_800D1E9C_000013C8:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000013D8
    bl fn_800D3B74
lbl_fn_800D1E9C_000013D8:
    mr r3, r28
    bl fn_800D2398
lbl_fn_800D1E9C_000013E0:
    mr r3, r27
    bl fn_800D2398
lbl_fn_800D1E9C_000013E8:
    mr r3, r26
    bl fn_800D2398
lbl_fn_800D1E9C_000013F0:
    lwz r0, 0x38(r31)
    ori r0, r0, 0x40
    stw r0, 0x38(r31)
    lwz r3, 0x28(r31)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_0000145C
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_0000145C
    lwz r3, 0x28(r31)
    lwz r5, 0x30(r31)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r31)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D1E9C_0000145C
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
lbl_fn_800D1E9C_0000145C:
    lwz r12, 0x44(r31)
    cmpwi r12, 0x0
    bne lbl_fn_800D1E9C_0000148C
    cmpwi r31, 0x0
    beq lbl_fn_800D1E9C_00001498
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D1E9C_00001498
lbl_fn_800D1E9C_0000148C:
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_800D1E9C_00001498:
    lwz r3, 0x20(r29)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000014F4
    cmpwi r29, 0x0
    addi r4, r3, 0x18
    beq lbl_fn_800D1E9C_000014EC
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000014F4
    b lbl_fn_800D1E9C_000014D0
lbl_fn_800D1E9C_000014C0:
    addi r4, r3, 0x1c
    lwz r3, 0x1c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800D1E9C_000014F4
lbl_fn_800D1E9C_000014D0:
    cmplw r29, r3
    bne lbl_fn_800D1E9C_000014C0
    lwz r3, 0x1c(r3)
    li r0, 0x0
    stw r3, 0x0(r4)
    stw r0, 0x20(r29)
    b lbl_fn_800D1E9C_000014F4
lbl_fn_800D1E9C_000014EC:
    li r0, 0x0
    stw r0, 0x0(r4)
lbl_fn_800D1E9C_000014F4:
    lis r6, lbl_807C75D8@ha
    li r3, -0x1
    addi r4, r6, lbl_807C75D8@l
    lwz r5, lbl_807C75D8@l(r6)
    lwz r0, 0x4(r4)
    addc r0, r0, r3
    stw r0, 0x4(r4)
    adde r0, r5, r3
    stw r0, lbl_807C75D8@l(r6)
    lwz r4, 0x24(r29)
    lwz r3, 0x3c(r4)
    subi r0, r3, 0x1
    stw r0, 0x3c(r4)
    lwz r0, 0x20(r29)
    cmpwi r0, 0x0
    beq lbl_fn_800D1E9C_0000154C
    lwz r4, 0x24(r29)
    cmplw r4, r0
    beq lbl_fn_800D1E9C_0000154C
    lwz r3, 0x3c(r4)
    subi r0, r3, 0x1
    stw r0, 0x3c(r4)
lbl_fn_800D1E9C_0000154C:
    li r0, 0x0
    stw r0, 0x38(r29)
    mr r3, r29
    li r4, 0x0
    bl fn_800D5670
    cmpwi r30, 0x0
    ble lbl_fn_800D1E9C_00001570
    mr r3, r29
    bl dtor_80084684
lbl_fn_800D1E9C_00001570:
    mr r3, r29
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800D2338(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_800D2338_000015A8
    bl fn_800D56C4
lbl_fn_800D2338_000015A8:
    lwz r0, 0x38(r31)
    andis. r3, r0, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2338_000015D4
    li r0, 0x1
    stw r0, 0x40(r31)
    stw r0, lbl_8087EFF0
    lwz r0, 0x38(r31)
    oris r0, r0, 0xdead
    stw r0, 0x38(r31)
lbl_fn_800D2338_000015D4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D2398(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x28(r3)
    lwz r0, 0x38(r3)
    cmpwi r4, 0x0
    ori r0, r0, 0x40
    stw r0, 0x38(r3)
    beq lbl_fn_800D2398_0000166C
    mr r3, r4
    bl fn_800D56C4
    cmpwi r3, 0x0
    beq lbl_fn_800D2398_0000166C
    lwz r3, 0x28(r31)
    lwz r5, 0x30(r31)
    lwz r0, 0x10(r3)
    lwz r6, 0x34(r31)
    lwz r4, 0x14(r3)
    xor r0, r5, r0
    xor r4, r6, r4
    or. r0, r4, r0
    bne lbl_fn_800D2398_0000166C
    lwz r12, 0x0(r3)
    mr r4, r31
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    li r0, 0x0
    stw r0, 0x28(r31)
    stw r0, 0x34(r31)
    stw r0, 0x30(r31)
lbl_fn_800D2398_0000166C:
    lwz r12, 0x44(r31)
    cmpwi r12, 0x0
    bne lbl_fn_800D2398_0000169C
    cmpwi r31, 0x0
    beq lbl_fn_800D2398_000016A8
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    b lbl_fn_800D2398_000016A8
lbl_fn_800D2398_0000169C:
    mr r3, r31
    mtctr r12
    bctrl
lbl_fn_800D2398_000016A8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800D246C(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_800D246C_000016D4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x1
    stw r0, 0x38(r3)
    blr
lbl_fn_800D246C_000016D4:
    lwz r0, 0x38(r3)
    clrrwi r0, r0, 1
    stw r0, 0x38(r3)
    blr
}

asm void fn_800D2494(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_800D2494_00001710
    bl fn_800D56C4
lbl_fn_800D2494_00001710:
    lwz r0, 0x20(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800D2494_00001728
    lwz r0, 0x38(r28)
    rlwinm. r0, r0, 0, 27, 27
    beq lbl_fn_800D2494_000018D4
lbl_fn_800D2494_00001728:
    lwz r4, 0x38(r28)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2494_000018D4
    clrlwi r0, r4, 31
    cmplwi r0, 0x1
    beq lbl_fn_800D2494_00001754
    mr r3, r28
    bl fn_800D2868
    b lbl_fn_800D2494_000018D4
lbl_fn_800D2494_00001754:
    lwz r31, 0x18(r28)
    cmpwi r31, 0x0
    beq lbl_fn_800D2494_000018D4
    lis r29, 0xdead
lbl_fn_800D2494_00001764:
    lwz r4, 0x38(r31)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2494_000018C0
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2494_000018C0
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2494_000017B4
    lwz r12, 0x0(r31)
    mr r3, r31
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2494_000017B0
    lwz r0, 0x38(r31)
    ori r0, r0, 0x2
    stw r0, 0x38(r31)
lbl_fn_800D2494_000017B0:
    lwz r4, 0x38(r31)
lbl_fn_800D2494_000017B4:
    addi r0, r29, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D2494_000018C0
    lwz r30, 0x18(r31)
    cmpwi r30, 0x0
    beq lbl_fn_800D2494_000018C0
lbl_fn_800D2494_000017CC:
    lwz r4, 0x38(r30)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2494_000018AC
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2494_000018AC
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2494_0000181C
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2494_00001818
    lwz r0, 0x38(r30)
    ori r0, r0, 0x2
    stw r0, 0x38(r30)
lbl_fn_800D2494_00001818:
    lwz r4, 0x38(r30)
lbl_fn_800D2494_0000181C:
    addi r0, r29, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D2494_000018AC
    lwz r28, 0x18(r30)
    cmpwi r28, 0x0
    beq lbl_fn_800D2494_000018AC
lbl_fn_800D2494_00001834:
    lwz r4, 0x38(r28)
    andis. r3, r4, 0xdead
    addis r0, r3, 0x2153
    cmplwi r0, 0x0
    beq lbl_fn_800D2494_00001898
    rlwinm. r0, r4, 0, 29, 29
    bne lbl_fn_800D2494_00001898
    rlwinm. r0, r4, 0, 30, 30
    bne lbl_fn_800D2494_00001884
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_800D2494_00001880
    lwz r0, 0x38(r28)
    ori r0, r0, 0x2
    stw r0, 0x38(r28)
lbl_fn_800D2494_00001880:
    lwz r4, 0x38(r28)
lbl_fn_800D2494_00001884:
    addi r0, r29, 0x4
    and. r0, r4, r0
    bne lbl_fn_800D2494_00001898
    mr r3, r28
    bl fn_800D26A4
lbl_fn_800D2494_00001898:
    cmpwi r28, 0x0
    beq lbl_fn_800D2494_000018A4
    lwz r28, 0x1c(r28)
lbl_fn_800D2494_000018A4:
    cmpwi r28, 0x0
    bne lbl_fn_800D2494_00001834
lbl_fn_800D2494_000018AC:
    cmpwi r30, 0x0
    beq lbl_fn_800D2494_000018B8
    lwz r30, 0x1c(r30)
lbl_fn_800D2494_000018B8:
    cmpwi r30, 0x0
    bne lbl_fn_800D2494_000017CC
lbl_fn_800D2494_000018C0:
    cmpwi r31, 0x0
    beq lbl_fn_800D2494_000018CC
    lwz r31, 0x1c(r31)
lbl_fn_800D2494_000018CC:
    cmpwi r31, 0x0
    bne lbl_fn_800D2494_00001764
lbl_fn_800D2494_000018D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
