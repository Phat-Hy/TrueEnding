#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_8008B130(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_8012B988(void);
extern void fn_80134774(void);
extern void fn_8014DEE4(void);
extern void fn_8014EE48(void);
extern void fn_8014EEC4(void);
extern void fn_8014F5D4(void);
extern void fn_8014FAD0(void);
extern void fn_801CDD9C(void);
extern void fn_801E7FF8(void);
extern void fn_801E9164(void);
extern void fn_801E9168(void);
extern void fn_801E917C(void);
extern void fn_801E92D4(void);
extern void fn_80206B14(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_80219558(void);
extern void fn_804439FC(void);
extern void fn_8044441C(void);
extern void fn_8044D034(void);
extern void fn_8044D184(void);
extern void fn_8044D490(void);
extern void fn_805634D4(void);
extern void fn_805638C0(void);
extern void fn_806827C4(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8073BCF0[];
extern u8 lbl_807C7CB8[];

/* Small data declarations */
extern u32 lbl_8087F408;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_808829C8;
extern u32 lbl_808829F8;
extern u32 lbl_80882A14;

/* Function declarations */
void fn_801CDE14(void);
void fn_801CE144(void);
void fn_801CE148(void);
void fn_801CE4CC(void);
void fn_801CE518(void);
void fn_801CE5B0(void);
void fn_801CE634(void);
void fn_801CE648(void);
void fn_801CE7E8(void);
void fn_801CE87C(void);
void fn_801CEA50(void);
void fn_801CEA98(void);
void fn_801CF334(void);
void fn_801CF3C0(void);

asm void fn_801CDE14(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    stw r0, 0xe4(r1)
    stw r31, 0xdc(r1)
    mr r31, r3
    stw r30, 0xd8(r1)
    lis r30, lbl_807C7CB8@ha
    addi r30, r30, lbl_807C7CB8@l
    stw r29, 0xd4(r1)
    lwz r6, 0xd4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CDE14_00000314
    cmpwi r5, 0x0
    stw r4, 0x104(r3)
    ble lbl_fn_801CDE14_00000180
    lwz r7, 0xd8(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CDE14_000000C8
    lwz r5, 0x4c(r7)
    lwz r0, 0x0(r4)
    cmpw r0, r5
    bne lbl_fn_801CDE14_000000C8
    addi r29, r30, 0x48
    addi r4, r1, 0xbc
    psq_l f1, 0x0(r29), 0, 0
    addi r7, r30, 0x3c
    lfs f2, 0x8(r29)
    addi r5, r1, 0xb0
    psq_st f1, 0x0(r4), 0, 0
    mr r3, r6
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0xc4(r1)
    lfs f2, 0x8(r7)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xb8(r1)
    bl fn_801E92D4
    addi r3, r30, 0x54
    addi r4, r1, 0xa4
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x98
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0xac(r1)
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0xa0(r1)
    lwz r3, 0xd8(r31)
    bl fn_801E92D4
    b lbl_fn_801CDE14_00000158
lbl_fn_801CDE14_000000C8:
    lwz r6, 0xdc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CDE14_00000158
    lwz r5, 0x4c(r6)
    lwz r0, 0x0(r4)
    cmpw r0, r5
    bne lbl_fn_801CDE14_00000158
    stw r6, 0xd8(r3)
    addi r29, r30, 0x48
    addi r4, r1, 0x8c
    addi r6, r30, 0x3c
    stw r7, 0xdc(r3)
    addi r5, r1, 0x80
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x94(r1)
    lfs f2, 0x8(r6)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x88(r1)
    lwz r3, 0xd4(r3)
    bl fn_801E92D4
    addi r3, r30, 0x54
    addi r4, r1, 0x74
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x68
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x7c(r1)
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x70(r1)
    lwz r3, 0xd8(r31)
    bl fn_801E92D4
lbl_fn_801CDE14_00000158:
    lfs f0, lbl_808829F8
    li r0, 0x1
    stw r0, 0xf4(r31)
    mr r3, r31
    stfs f0, 0xf8(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
    b lbl_fn_801CDE14_000002C4
lbl_fn_801CDE14_00000180:
    lwz r8, 0xd8(r3)
    cmpwi r8, 0x0
    beq lbl_fn_801CDE14_00000218
    lwz r5, 0x4c(r8)
    lwz r0, 0x0(r4)
    cmpw r0, r5
    bne lbl_fn_801CDE14_00000218
    lwz r0, 0xdc(r3)
    addi r29, r30, 0x48
    stw r0, 0xd8(r3)
    addi r4, r1, 0x5c
    addi r7, r30, 0x54
    addi r5, r1, 0x50
    stw r8, 0xdc(r3)
    mr r3, r6
    psq_l f1, 0x0(r29), 0, 0
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x64(r1)
    lfs f2, 0x8(r7)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x58(r1)
    bl fn_801E92D4
    addi r3, r30, 0x3c
    addi r4, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x38
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x4c(r1)
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x40(r1)
    lwz r3, 0xdc(r31)
    bl fn_801E92D4
    b lbl_fn_801CDE14_000002A0
lbl_fn_801CDE14_00000218:
    lwz r5, 0xdc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801CDE14_000002A0
    lwz r5, 0x4c(r5)
    lwz r0, 0x0(r4)
    cmpw r0, r5
    bne lbl_fn_801CDE14_000002A0
    addi r29, r30, 0x48
    addi r4, r1, 0x2c
    psq_l f1, 0x0(r29), 0, 0
    addi r6, r30, 0x54
    lfs f2, 0x8(r29)
    addi r5, r1, 0x20
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x8(r6)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x28(r1)
    lwz r3, 0xd4(r3)
    bl fn_801E92D4
    addi r3, r30, 0x3c
    addi r4, r1, 0x14
    psq_l f1, 0x0(r3), 0, 0
    addi r5, r1, 0x8
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x1c(r1)
    lfs f2, 0x8(r29)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x10(r1)
    lwz r3, 0xdc(r31)
    bl fn_801E92D4
lbl_fn_801CDE14_000002A0:
    lfs f0, lbl_80882A14
    li r0, -0x1
    stw r0, 0xf4(r31)
    mr r3, r31
    stfs f0, 0xf8(r31)
    lwz r12, 0x0(r31)
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
lbl_fn_801CDE14_000002C4:
    lwz r0, 0x1e0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_801CDE14_000002DC
    lwz r3, 0x48(r31)
    lwz r4, 0x1224(r3)
    b lbl_fn_801CDE14_000002E4
lbl_fn_801CDE14_000002DC:
    lwz r3, 0x48(r31)
    lwz r4, 0x1268(r3)
lbl_fn_801CDE14_000002E4:
    lwz r3, 0x100(r31)
    lwz r0, 0xf4(r31)
    add. r0, r3, r0
    stw r0, 0x100(r31)
    bge lbl_fn_801CDE14_00000300
    subi r0, r4, 0x1
    stw r0, 0x100(r31)
lbl_fn_801CDE14_00000300:
    lwz r0, 0x100(r31)
    cmpw r0, r4
    blt lbl_fn_801CDE14_00000314
    li r0, 0x0
    stw r0, 0x100(r31)
lbl_fn_801CDE14_00000314:
    lwz r0, 0xe4(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_801CE144(void)
{
    nofralloc
    blr
}

asm void fn_801CE148(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lwz r0, 0x484(r3)
    lis r26, lbl_807C7CB8@ha
    mr r30, r3
    mr r31, r4
    cmpwi r0, 0x0
    addi r26, r26, lbl_807C7CB8@l
    beq lbl_fn_801CE148_000003A4
    mr r27, r30
    li r28, 0x0
    b lbl_fn_801CE148_0000038C
lbl_fn_801CE148_00000370:
    lwz r3, 0x48c(r27)
    cmpwi r3, 0x0
    beq lbl_fn_801CE148_00000384
    li r4, 0x1
    bl fn_805638C0
lbl_fn_801CE148_00000384:
    addi r27, r27, 0xc
    addi r28, r28, 0x1
lbl_fn_801CE148_0000038C:
    lwz r0, 0x484(r30)
    cmplw r28, r0
    blt lbl_fn_801CE148_00000370
    li r0, 0x0
    stw r0, 0x484(r30)
    stw r0, 0xa88(r30)
lbl_fn_801CE148_000003A4:
    lwz r0, 0xd4(r30)
    cmpwi r0, 0x0
    bne lbl_fn_801CE148_000004C0
    lwz r4, 0x4(r31)
    mr r3, r30
    lwz r5, 0x0(r31)
    bl fn_801E7FF8
    stw r3, 0xd4(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r3, r26, 0x48
    addi r4, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x58(r1)
    lwz r3, 0xd4(r30)
    bl fn_801E917C
    lwz r5, 0xd4(r30)
    li r27, 0x0
    mr r3, r30
    li r4, 0x1
    stw r27, 0x478(r5)
    bl fn_801CDD9C
    mr r28, r3
    mr r3, r30
    li r4, -0x1
    bl fn_801CDD9C
    cmplw r3, r31
    mr r29, r3
    beq lbl_fn_801CE148_00000464
    lwz r4, 0x4(r29)
    mr r3, r30
    lwz r5, 0x0(r29)
    bl fn_801E7FF8
    stw r3, 0xdc(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r3, r26, 0x3c
    addi r4, r1, 0x44
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x4c(r1)
    lwz r3, 0xdc(r30)
    bl fn_801E917C
    lwz r3, 0xdc(r30)
    stw r27, 0x478(r3)
lbl_fn_801CE148_00000464:
    cmplw r28, r31
    beq lbl_fn_801CE148_00000698
    cmplw r29, r28
    beq lbl_fn_801CE148_00000698
    lwz r4, 0x4(r28)
    mr r3, r30
    lwz r5, 0x0(r28)
    bl fn_801E7FF8
    stw r3, 0xd8(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r3, r26, 0x54
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
    lwz r3, 0xd8(r30)
    bl fn_801E917C
    lwz r3, 0xd8(r30)
    li r0, 0x0
    stw r0, 0x478(r3)
    b lbl_fn_801CE148_00000698
lbl_fn_801CE148_000004C0:
    lwz r3, 0xd8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801CE148_000005B8
    lwz r4, 0x4c(r3)
    lwz r0, 0x0(r31)
    cmpw r0, r4
    bne lbl_fn_801CE148_000005B8
    lwz r3, 0xdc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801CE148_000004FC
    bl fn_801E9164
    lwz r3, 0xdc(r30)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xdc(r30)
lbl_fn_801CE148_000004FC:
    lwz r5, 0xd4(r30)
    mr r3, r30
    lwz r0, 0xd8(r30)
    li r4, 0x1
    stw r5, 0xdc(r30)
    stw r0, 0xd4(r30)
    bl fn_801CDD9C
    cmpwi r3, 0x0
    bne lbl_fn_801CE148_00000528
    lwz r3, 0x48(r30)
    addi r3, r3, 0x126c
lbl_fn_801CE148_00000528:
    lwz r4, 0xdc(r30)
    lwz r5, 0x0(r3)
    lwz r0, 0x4c(r4)
    cmpw r5, r0
    bne lbl_fn_801CE148_00000548
    li r0, 0x0
    stw r0, 0xd8(r30)
    b lbl_fn_801CE148_000005A0
lbl_fn_801CE148_00000548:
    lwz r4, 0x4(r3)
    mr r3, r30
    bl fn_801E7FF8
    stw r3, 0xd8(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r5, r26, 0x54
    lwz r6, 0xd8(r30)
    lfs f2, 0x8(r5)
    addi r3, r1, 0x2c
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x20
    psq_st f1, 0x488(r6), 0, 0
    stfs f2, 0x490(r6)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x34(r1)
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    lwz r3, 0xd8(r30)
    bl fn_801E9168
lbl_fn_801CE148_000005A0:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
    b lbl_fn_801CE148_00000698
lbl_fn_801CE148_000005B8:
    lwz r4, 0xdc(r30)
    cmpwi r4, 0x0
    beq lbl_fn_801CE148_00000698
    lwz r4, 0x4c(r4)
    lwz r0, 0x0(r31)
    cmpw r0, r4
    bne lbl_fn_801CE148_00000698
    cmpwi r3, 0x0
    beq lbl_fn_801CE148_000005F0
    bl fn_801E9164
    lwz r3, 0xd8(r30)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xd8(r30)
lbl_fn_801CE148_000005F0:
    lwz r5, 0xd4(r30)
    mr r3, r30
    lwz r0, 0xdc(r30)
    li r4, -0x1
    stw r5, 0xd8(r30)
    stw r0, 0xd4(r30)
    bl fn_801CDD9C
    lwz r4, 0xd8(r30)
    lwz r5, 0x0(r3)
    lwz r0, 0x4c(r4)
    cmpw r5, r0
    bne lbl_fn_801CE148_0000062C
    li r0, 0x0
    stw r0, 0xdc(r30)
    b lbl_fn_801CE148_00000684
lbl_fn_801CE148_0000062C:
    lwz r4, 0x4(r3)
    mr r3, r30
    bl fn_801E7FF8
    stw r3, 0xdc(r30)
    li r4, 0x1
    bl fn_800D246C
    addi r5, r26, 0x3c
    lwz r6, 0xdc(r30)
    lfs f2, 0x8(r5)
    addi r3, r1, 0x14
    psq_l f1, 0x0(r5), 0, 0
    addi r4, r1, 0x8
    psq_st f1, 0x488(r6), 0, 0
    stfs f2, 0x490(r6)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f2, 0x1c(r1)
    lfs f2, 0x8(r5)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x10(r1)
    lwz r3, 0xdc(r30)
    bl fn_801E9168
lbl_fn_801CE148_00000684:
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x6c(r12)
    mtctr r12
    bctrl
lbl_fn_801CE148_00000698:
    li r0, 0x1
    stw r0, 0xf0(r30)
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801CE4CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, 0xd4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801CE4CC_000006F0
    lwz r3, 0x48(r3)
    cmpwi r3, 0x0
    beq lbl_fn_801CE4CC_000006F0
    bl fn_8014FAD0
    cmpwi r3, 0x0
    beq lbl_fn_801CE4CC_000006F0
    li r3, 0x1
    b lbl_fn_801CE4CC_000006F4
lbl_fn_801CE4CC_000006F0:
    li r3, 0x0
lbl_fn_801CE4CC_000006F4:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CE518(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xd4(r3)
    stw r31, 0xf4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CE518_00000744
    mr r3, r0
    bl fn_801E9164
    lwz r3, 0xd4(r30)
    bl fn_800D2338
    stw r31, 0xd4(r30)
lbl_fn_801CE518_00000744:
    lwz r3, 0xd8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801CE518_00000764
    bl fn_801E9164
    lwz r3, 0xd8(r30)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xd8(r30)
lbl_fn_801CE518_00000764:
    lwz r3, 0xdc(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801CE518_00000784
    bl fn_801E9164
    lwz r3, 0xdc(r30)
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0xdc(r30)
lbl_fn_801CE518_00000784:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CE5B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x1e8(r3)
    cmpw r4, r0
    beq lbl_fn_801CE5B0_00000808
    lwz r12, 0x0(r3)
    mr r5, r4
    lwz r4, 0x1e4(r3)
    lwz r12, 0x74(r12)
    mtctr r12
    bctrl
    lwz r3, 0xe8(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801CE5B0_000007F0
    lfs f0, lbl_808829C8
    stfs f0, 0x50(r3)
lbl_fn_801CE5B0_000007F0:
    lwz r3, 0xec(r30)
    cmpwi r3, 0x0
    beq lbl_fn_801CE5B0_00000804
    lfs f0, lbl_808829C8
    stfs f0, 0x50(r3)
lbl_fn_801CE5B0_00000804:
    stw r31, 0x1f0(r30)
lbl_fn_801CE5B0_00000808:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CE634(void)
{
    nofralloc
    lwz r0, 0x1e8(r3)
    stw r0, 0x1ec(r3)
    stw r4, 0x1e4(r3)
    stw r5, 0x1e8(r3)
    blr
}

asm void fn_801CE648(void)
{
    nofralloc
    lwz r8, 0xf4(r3)
    cmpwi r8, 0x0
    beq lbl_fn_801CE648_000008B0
    lwz r5, 0xd4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801CE648_00000868
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_00000868
    mr r7, r5
    b lbl_fn_801CE648_000008B8
lbl_fn_801CE648_00000868:
    lwz r7, 0xd8(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CE648_0000088C
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r7)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_0000088C
    b lbl_fn_801CE648_000008B8
lbl_fn_801CE648_0000088C:
    lwz r7, 0xdc(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CE648_000008B0
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r7)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_000008B0
    b lbl_fn_801CE648_000008B8
lbl_fn_801CE648_000008B0:
    lwz r5, 0xd4(r3)
    mr r7, r5
lbl_fn_801CE648_000008B8:
    cmpwi r7, 0x0
    beq lbl_fn_801CE648_00000944
    cmpwi r8, 0x0
    beq lbl_fn_801CE648_00000934
    cmpwi r5, 0x0
    beq lbl_fn_801CE648_000008EC
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_000008EC
    mr r7, r5
    b lbl_fn_801CE648_00000938
lbl_fn_801CE648_000008EC:
    lwz r7, 0xd8(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CE648_00000910
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r7)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_00000910
    b lbl_fn_801CE648_00000938
lbl_fn_801CE648_00000910:
    lwz r7, 0xdc(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CE648_00000934
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r7)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_00000934
    b lbl_fn_801CE648_00000938
lbl_fn_801CE648_00000934:
    mr r7, r5
lbl_fn_801CE648_00000938:
    lwz r0, 0x48(r7)
    cmpwi r0, 0x0
    bne lbl_fn_801CE648_0000094C
lbl_fn_801CE648_00000944:
    li r3, 0x0
    blr
lbl_fn_801CE648_0000094C:
    cmpwi r8, 0x0
    beq lbl_fn_801CE648_000009C0
    cmpwi r5, 0x0
    beq lbl_fn_801CE648_00000974
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_00000974
    b lbl_fn_801CE648_000009C0
lbl_fn_801CE648_00000974:
    lwz r7, 0xd8(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CE648_0000099C
    lwz r6, 0x104(r3)
    lwz r0, 0x4c(r7)
    lwz r6, 0x0(r6)
    cmpw r6, r0
    bne lbl_fn_801CE648_0000099C
    mr r5, r7
    b lbl_fn_801CE648_000009C0
lbl_fn_801CE648_0000099C:
    lwz r6, 0xdc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE648_000009C0
    lwz r3, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r3, 0x0(r3)
    cmpw r3, r0
    bne lbl_fn_801CE648_000009C0
    mr r5, r6
lbl_fn_801CE648_000009C0:
    lwz r3, 0x48(r5)
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x680(r3)
    blr
}

asm void fn_801CE7E8(void)
{
    nofralloc
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CE7E8_00000A4C
    lwz r6, 0xd4(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE7E8_00000A04
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE7E8_00000A04
    b lbl_fn_801CE7E8_00000A50
lbl_fn_801CE7E8_00000A04:
    lwz r6, 0xd8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE7E8_00000A28
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE7E8_00000A28
    b lbl_fn_801CE7E8_00000A50
lbl_fn_801CE7E8_00000A28:
    lwz r6, 0xdc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE7E8_00000A4C
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE7E8_00000A4C
    b lbl_fn_801CE7E8_00000A50
lbl_fn_801CE7E8_00000A4C:
    lwz r6, 0xd4(r3)
lbl_fn_801CE7E8_00000A50:
    lwz r3, 0x48(r6)
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r3, 0x680(r3)
    lwz r3, 0x430(r3)
    blr
}

asm void fn_801CE87C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    lwz r7, 0xf4(r3)
    cmpwi r7, 0x0
    beq lbl_fn_801CE87C_00000AF8
    lwz r4, 0xd4(r3)
    cmpwi r4, 0x0
    beq lbl_fn_801CE87C_00000AB0
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r4)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000AB0
    mr r6, r4
    b lbl_fn_801CE87C_00000B00
lbl_fn_801CE87C_00000AB0:
    lwz r6, 0xd8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE87C_00000AD4
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000AD4
    b lbl_fn_801CE87C_00000B00
lbl_fn_801CE87C_00000AD4:
    lwz r6, 0xdc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE87C_00000AF8
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000AF8
    b lbl_fn_801CE87C_00000B00
lbl_fn_801CE87C_00000AF8:
    lwz r4, 0xd4(r3)
    mr r6, r4
lbl_fn_801CE87C_00000B00:
    cmpwi r6, 0x0
    beq lbl_fn_801CE87C_00000B8C
    cmpwi r7, 0x0
    beq lbl_fn_801CE87C_00000B7C
    cmpwi r4, 0x0
    beq lbl_fn_801CE87C_00000B34
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r4)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000B34
    mr r6, r4
    b lbl_fn_801CE87C_00000B80
lbl_fn_801CE87C_00000B34:
    lwz r6, 0xd8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE87C_00000B58
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000B58
    b lbl_fn_801CE87C_00000B80
lbl_fn_801CE87C_00000B58:
    lwz r6, 0xdc(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE87C_00000B7C
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000B7C
    b lbl_fn_801CE87C_00000B80
lbl_fn_801CE87C_00000B7C:
    mr r6, r4
lbl_fn_801CE87C_00000B80:
    lwz r0, 0x48(r6)
    cmpwi r0, 0x0
    bne lbl_fn_801CE87C_00000B94
lbl_fn_801CE87C_00000B8C:
    li r3, 0x0
    b lbl_fn_801CE87C_00000C28
lbl_fn_801CE87C_00000B94:
    cmpwi r7, 0x0
    beq lbl_fn_801CE87C_00000C08
    cmpwi r4, 0x0
    beq lbl_fn_801CE87C_00000BBC
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r4)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000BBC
    b lbl_fn_801CE87C_00000C08
lbl_fn_801CE87C_00000BBC:
    lwz r6, 0xd8(r3)
    cmpwi r6, 0x0
    beq lbl_fn_801CE87C_00000BE4
    lwz r5, 0x104(r3)
    lwz r0, 0x4c(r6)
    lwz r5, 0x0(r5)
    cmpw r5, r0
    bne lbl_fn_801CE87C_00000BE4
    mr r4, r6
    b lbl_fn_801CE87C_00000C08
lbl_fn_801CE87C_00000BE4:
    lwz r5, 0xdc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801CE87C_00000C08
    lwz r3, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r3, 0x0(r3)
    cmpw r3, r0
    bne lbl_fn_801CE87C_00000C08
    mr r4, r5
lbl_fn_801CE87C_00000C08:
    lwz r3, 0x48(r4)
    lwz r3, 0x50(r3)
    bl fn_80219558
    mr r0, r3
    lwz r3, lbl_8087F4F0
    slwi r0, r0, 2
    add r4, r31, r0
    bl fn_8044D034
lbl_fn_801CE87C_00000C28:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CEA50(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r5, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_801CEA50_00000C74
    slwi r0, r6, 2
    mr r10, r8
    add r8, r5, r0
    lwz r8, 0x680(r8)
    stw r9, 0x8(r1)
    mr r9, r7
    lwz r7, 0x4(r8)
    lwz r8, 0x8(r8)
    bl fn_801CEA98
lbl_fn_801CEA50_00000C74:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801CEA98(void)
{
    nofralloc
    stwu r1, -0xc0(r1)
    mflr r0
    cmpwi r9, 0x0
    stw r0, 0xc4(r1)
    slwi r0, r4, 2
    stmw r19, 0x8c(r1)
    mr r23, r3
    lwz r30, 0xc8(r1)
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r31, r9
    mr r29, r10
    add r28, r6, r0
    beq lbl_fn_801CEA98_00000E30
    lwz r0, 0x210(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801CEA98_00000E10
    lwz r6, 0x214(r3)
    cmpwi r6, 0x0
    blt lbl_fn_801CEA98_00000E10
    lwz r0, 0x218(r3)
    slwi r3, r4, 6
    lwz r5, lbl_8087F4F0
    cmpwi r0, 0x0
    addis r5, r5, 0x1
    add r3, r5, r3
    beq lbl_fn_801CEA98_00000D84
    slwi r0, r6, 6
    add r6, r5, r0
    lwz r0, -0x26bc(r6)
    lwz r5, -0x26c0(r6)
    stw r5, -0x2c80(r3)
    stw r0, -0x2c7c(r3)
    lwz r0, -0x26b4(r6)
    lwz r5, -0x26b8(r6)
    stw r5, -0x2c78(r3)
    stw r0, -0x2c74(r3)
    lwz r0, -0x26ac(r6)
    lwz r5, -0x26b0(r6)
    stw r5, -0x2c70(r3)
    stw r0, -0x2c6c(r3)
    lwz r0, -0x26a4(r6)
    lwz r5, -0x26a8(r6)
    stw r5, -0x2c68(r3)
    stw r0, -0x2c64(r3)
    lwz r0, -0x269c(r6)
    lwz r5, -0x26a0(r6)
    stw r5, -0x2c60(r3)
    stw r0, -0x2c5c(r3)
    lwz r0, -0x2694(r6)
    lwz r5, -0x2698(r6)
    stw r5, -0x2c58(r3)
    stw r0, -0x2c54(r3)
    lwz r0, -0x268c(r6)
    lwz r5, -0x2690(r6)
    stw r5, -0x2c50(r3)
    stw r0, -0x2c4c(r3)
    lwz r0, -0x2684(r6)
    lwz r5, -0x2688(r6)
    stw r5, -0x2c48(r3)
    stw r0, -0x2c44(r3)
    b lbl_fn_801CEA98_00000E30
lbl_fn_801CEA98_00000D84:
    slwi r0, r6, 6
    add r6, r5, r0
    lwz r0, -0x2abc(r6)
    lwz r5, -0x2ac0(r6)
    stw r5, -0x2c80(r3)
    stw r0, -0x2c7c(r3)
    lwz r0, -0x2ab4(r6)
    lwz r5, -0x2ab8(r6)
    stw r5, -0x2c78(r3)
    stw r0, -0x2c74(r3)
    lwz r0, -0x2aac(r6)
    lwz r5, -0x2ab0(r6)
    stw r5, -0x2c70(r3)
    stw r0, -0x2c6c(r3)
    lwz r0, -0x2aa4(r6)
    lwz r5, -0x2aa8(r6)
    stw r5, -0x2c68(r3)
    stw r0, -0x2c64(r3)
    lwz r0, -0x2a9c(r6)
    lwz r5, -0x2aa0(r6)
    stw r5, -0x2c60(r3)
    stw r0, -0x2c5c(r3)
    lwz r0, -0x2a94(r6)
    lwz r5, -0x2a98(r6)
    stw r5, -0x2c58(r3)
    stw r0, -0x2c54(r3)
    lwz r0, -0x2a8c(r6)
    lwz r5, -0x2a90(r6)
    stw r5, -0x2c50(r3)
    stw r0, -0x2c4c(r3)
    lwz r0, -0x2a84(r6)
    lwz r5, -0x2a88(r6)
    stw r5, -0x2c48(r3)
    stw r0, -0x2c44(r3)
    b lbl_fn_801CEA98_00000E30
lbl_fn_801CEA98_00000E10:
    lwz r6, lbl_8087F4F0
    slwi r5, r4, 6
    lha r7, 0x21c(r3)
    slwi r0, r0, 2
    addis r3, r6, 0x1
    add r3, r3, r5
    add r3, r3, r0
    stw r7, -0x2c80(r3)
lbl_fn_801CEA98_00000E30:
    mulli r0, r4, 0x43c
    lwz r3, lbl_8087F4F0
    mr r4, r26
    mr r5, r29
    add r3, r3, r0
    addi r3, r3, 0x64ec
    bl fn_80134774
    cmpwi r31, 0x0
    beq lbl_fn_801CEA98_00000E5C
    cmpwi r29, 0x0
    bne lbl_fn_801CEA98_0000150C
lbl_fn_801CEA98_00000E5C:
    cmpwi r25, 0x0
    beq lbl_fn_801CEA98_00000F1C
    mr r4, r26
    mr r5, r29
    addi r3, r25, 0x7d4
    bl fn_80134774
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D034
    lis r5, lbl_8073BCF0@ha
    mr r19, r3
    addi r5, r5, lbl_8073BCF0@l
    li r3, 0x43c
    mr r6, r5
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_00000ED8
    li r0, 0x1
    stw r0, 0x8(r1)
    li r0, 0x0
    mr r4, r26
    stw r0, 0xc(r1)
    mr r5, r27
    mr r6, r28
    mr r7, r25
    mr r8, r19
    mr r10, r29
    li r9, 0x0
    bl fn_805634D4
lbl_fn_801CEA98_00000ED8:
    lwz r0, 0x484(r23)
    li r4, 0x0
    stw r4, 0x78(r1)
    mulli r0, r0, 0xc
    stw r3, 0x7c(r1)
    add r0, r23, r0
    stw r25, 0x80(r1)
    addic. r5, r0, 0x488
    beq lbl_fn_801CEA98_00000F08
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r25, 0x8(r5)
lbl_fn_801CEA98_00000F08:
    lwz r3, 0x484(r23)
    li r0, 0x0
    stw r0, 0xa90(r23)
    addi r0, r3, 0x1
    stw r0, 0x484(r23)
lbl_fn_801CEA98_00000F1C:
    stw r30, 0xa8c(r23)
    li r0, 0x0
    cmpwi r24, 0x0
    stw r0, 0x6c(r1)
    stw r0, 0x70(r1)
    stw r0, 0x74(r1)
    beq lbl_fn_801CEA98_00000F6C
    cmpwi r24, 0x1
    beq lbl_fn_801CEA98_00000FC4
    cmpwi r24, 0x2
    beq lbl_fn_801CEA98_0000101C
    cmpwi r24, 0x3
    beq lbl_fn_801CEA98_00001074
    cmpwi r24, 0x4
    beq lbl_fn_801CEA98_000010CC
    cmpwi r24, 0x5
    beq lbl_fn_801CEA98_00001124
    cmpwi r24, 0x6
    beq lbl_fn_801CEA98_0000117C
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_00000F6C:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x115
    bne lbl_fn_801CEA98_00000F8C
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_00000F90
lbl_fn_801CEA98_00000F8C:
    li r21, 0x0
lbl_fn_801CEA98_00000F90:
    lbz r0, 0x44(r1)
    mr r3, r20
    stb r0, 0x40(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x40
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_00000FC4:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x11d
    bne lbl_fn_801CEA98_00000FE4
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_00000FE8
lbl_fn_801CEA98_00000FE4:
    li r21, 0x0
lbl_fn_801CEA98_00000FE8:
    lbz r0, 0x3c(r1)
    mr r3, r20
    stb r0, 0x38(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x38
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_0000101C:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x125
    bne lbl_fn_801CEA98_0000103C
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_00001040
lbl_fn_801CEA98_0000103C:
    li r21, 0x0
lbl_fn_801CEA98_00001040:
    lbz r0, 0x34(r1)
    mr r3, r20
    stb r0, 0x30(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_00001074:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x12d
    bne lbl_fn_801CEA98_00001094
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_00001098
lbl_fn_801CEA98_00001094:
    li r21, 0x0
lbl_fn_801CEA98_00001098:
    lbz r0, 0x2c(r1)
    mr r3, r20
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_000010CC:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x135
    bne lbl_fn_801CEA98_000010EC
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_000010F0
lbl_fn_801CEA98_000010EC:
    li r21, 0x0
lbl_fn_801CEA98_000010F0:
    lbz r0, 0x24(r1)
    mr r3, r20
    stb r0, 0x20(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_00001124:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x13d
    bne lbl_fn_801CEA98_00001144
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_00001148
lbl_fn_801CEA98_00001144:
    li r21, 0x0
lbl_fn_801CEA98_00001148:
    lbz r0, 0x1c(r1)
    mr r3, r20
    stb r0, 0x18(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CEA98_000011D0
lbl_fn_801CEA98_0000117C:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r20, r3, 0x145
    bne lbl_fn_801CEA98_0000119C
    lbz r0, 0x6c(r1)
    clrlwi r21, r0, 25
    b lbl_fn_801CEA98_000011A0
lbl_fn_801CEA98_0000119C:
    li r21, 0x0
lbl_fn_801CEA98_000011A0:
    lbz r0, 0x14(r1)
    mr r3, r20
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r5, r21
    mr r6, r20
    addi r3, r1, 0x6c
    add r7, r20, r0
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801CEA98_000011D0:
    lwz r3, lbl_8087F8A0
    addi r31, r1, 0x6d
    lis r22, lbl_8073BCF0@ha
    li r21, 0x1
    lwz r30, 0x48(r3)
    li r20, 0x0
    b lbl_fn_801CEA98_000012E0
lbl_fn_801CEA98_000011EC:
    cmpwi r24, 0x1
    bne lbl_fn_801CEA98_00001204
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_801CEA98_000012DC
lbl_fn_801CEA98_00001204:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CEA98_000012DC
    cmplw r30, r25
    beq lbl_fn_801CEA98_000012DC
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801CEA98_00001230
    mr r19, r31
    b lbl_fn_801CEA98_00001234
lbl_fn_801CEA98_00001230:
    lwz r19, 0x74(r1)
lbl_fn_801CEA98_00001234:
    addi r3, r30, 0xb0
    bl fn_8008B130
    mr r4, r19
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_000012DC
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D034
    addi r5, r22, lbl_8073BCF0@l
    mr r19, r3
    mr r6, r5
    li r3, 0x43c
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_000012A4
    stw r21, 0x8(r1)
    mr r4, r26
    mr r5, r27
    mr r6, r28
    stw r20, 0xc(r1)
    mr r7, r30
    mr r8, r19
    mr r10, r29
    li r9, 0x0
    bl fn_805634D4
lbl_fn_801CEA98_000012A4:
    lwz r0, 0x484(r23)
    stw r20, 0x60(r1)
    mulli r0, r0, 0xc
    stw r3, 0x64(r1)
    add r0, r23, r0
    stw r30, 0x68(r1)
    addic. r4, r0, 0x488
    beq lbl_fn_801CEA98_000012D0
    stw r20, 0x0(r4)
    stw r3, 0x4(r4)
    stw r30, 0x8(r4)
lbl_fn_801CEA98_000012D0:
    lwz r3, 0x484(r23)
    addi r0, r3, 0x1
    stw r0, 0x484(r23)
lbl_fn_801CEA98_000012DC:
    lwz r30, 0x14ac(r30)
lbl_fn_801CEA98_000012E0:
    cmpwi r30, 0x0
    bne lbl_fn_801CEA98_000011EC
    lwz r3, lbl_8087F890
    lis r20, lbl_8073BCF0@ha
    li r22, 0x1
    li r21, 0x0
    lwz r30, 0x48(r3)
    b lbl_fn_801CEA98_000013F4
lbl_fn_801CEA98_00001300:
    cmpwi r24, 0x1
    bne lbl_fn_801CEA98_00001318
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_801CEA98_000013F0
lbl_fn_801CEA98_00001318:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CEA98_000013F0
    cmplw r30, r25
    beq lbl_fn_801CEA98_000013F0
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801CEA98_00001344
    mr r19, r31
    b lbl_fn_801CEA98_00001348
lbl_fn_801CEA98_00001344:
    lwz r19, 0x74(r1)
lbl_fn_801CEA98_00001348:
    addi r3, r30, 0xb0
    bl fn_8008B130
    mr r4, r19
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_000013F0
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D034
    addi r5, r20, lbl_8073BCF0@l
    mr r19, r3
    mr r6, r5
    li r3, 0x43c
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_000013B8
    stw r22, 0x8(r1)
    mr r4, r26
    mr r5, r27
    mr r6, r28
    stw r21, 0xc(r1)
    mr r7, r30
    mr r8, r19
    mr r10, r29
    li r9, 0x0
    bl fn_805634D4
lbl_fn_801CEA98_000013B8:
    lwz r0, 0x484(r23)
    stw r21, 0x54(r1)
    mulli r0, r0, 0xc
    stw r3, 0x58(r1)
    add r0, r23, r0
    stw r30, 0x5c(r1)
    addic. r4, r0, 0x488
    beq lbl_fn_801CEA98_000013E4
    stw r21, 0x0(r4)
    stw r3, 0x4(r4)
    stw r30, 0x8(r4)
lbl_fn_801CEA98_000013E4:
    lwz r3, 0x484(r23)
    addi r0, r3, 0x1
    stw r0, 0x484(r23)
lbl_fn_801CEA98_000013F0:
    lwz r30, 0x1424(r30)
lbl_fn_801CEA98_000013F4:
    cmpwi r30, 0x0
    bne lbl_fn_801CEA98_00001300
    lwz r3, lbl_8087F408
    lis r21, lbl_8073BCF0@ha
    li r22, 0x1
    li r24, 0x0
    lwz r30, 0x48(r3)
    b lbl_fn_801CEA98_000014F0
lbl_fn_801CEA98_00001414:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CEA98_000014EC
    cmplw r30, r25
    beq lbl_fn_801CEA98_000014EC
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801CEA98_00001440
    mr r19, r31
    b lbl_fn_801CEA98_00001444
lbl_fn_801CEA98_00001440:
    lwz r19, 0x74(r1)
lbl_fn_801CEA98_00001444:
    addi r3, r30, 0xb0
    bl fn_8008B130
    mr r4, r19
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_000014EC
    lwz r3, lbl_8087F4F0
    mr r4, r28
    bl fn_8044D034
    addi r5, r21, lbl_8073BCF0@l
    mr r19, r3
    mr r6, r5
    li r3, 0x43c
    li r4, 0x6
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801CEA98_000014B4
    stw r22, 0x8(r1)
    mr r4, r26
    mr r5, r27
    mr r6, r28
    stw r24, 0xc(r1)
    mr r7, r30
    mr r8, r19
    mr r10, r29
    li r9, 0x0
    bl fn_805634D4
lbl_fn_801CEA98_000014B4:
    lwz r0, 0x484(r23)
    stw r24, 0x48(r1)
    mulli r0, r0, 0xc
    stw r3, 0x4c(r1)
    add r0, r23, r0
    stw r30, 0x50(r1)
    addic. r4, r0, 0x488
    beq lbl_fn_801CEA98_000014E0
    stw r24, 0x0(r4)
    stw r3, 0x4(r4)
    stw r30, 0x8(r4)
lbl_fn_801CEA98_000014E0:
    lwz r3, 0x484(r23)
    addi r0, r3, 0x1
    stw r0, 0x484(r23)
lbl_fn_801CEA98_000014EC:
    lwz r30, 0x14ac(r30)
lbl_fn_801CEA98_000014F0:
    cmpwi r30, 0x0
    bne lbl_fn_801CEA98_00001414
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801CEA98_0000150C
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_801CEA98_0000150C:
    lmw r19, 0x8c(r1)
    lwz r0, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xc0
    blr
}

asm void fn_801CF334(void)
{
    nofralloc
    lwz r0, 0xf4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801CF334_000015A4
    lwz r5, 0xd4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801CF334_00001554
    lwz r4, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r4, 0x0(r4)
    cmpw r4, r0
    bne lbl_fn_801CF334_00001554
    mr r3, r5
    blr
lbl_fn_801CF334_00001554:
    lwz r5, 0xd8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801CF334_0000157C
    lwz r4, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r4, 0x0(r4)
    cmpw r4, r0
    bne lbl_fn_801CF334_0000157C
    mr r3, r5
    blr
lbl_fn_801CF334_0000157C:
    lwz r5, 0xdc(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801CF334_000015A4
    lwz r4, 0x104(r3)
    lwz r0, 0x4c(r5)
    lwz r4, 0x0(r4)
    cmpw r4, r0
    bne lbl_fn_801CF334_000015A4
    mr r3, r5
    blr
lbl_fn_801CF334_000015A4:
    lwz r3, 0xd4(r3)
    blr
}

asm void fn_801CF3C0(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stmw r23, 0x7c(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r30, r6
    mr r28, r7
    mr r23, r8
    mr r29, r9
    lwz r3, 0x4(r6)
    bl fn_80206C50
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_801CF3C0_000015F4
    li r3, 0x0
    b lbl_fn_801CF3C0_00001C34
lbl_fn_801CF3C0_000015F4:
    lwz r3, lbl_8087F4F0
    cmpwi r26, 0x0
    slwi r0, r26, 6
    addis r3, r3, 0x1
    add r3, r3, r0
    subi r4, r3, 0x7d70
    bne lbl_fn_801CF3C0_00001630
    cmpwi r28, 0x1
    bne lbl_fn_801CF3C0_00001630
    slwi r0, r28, 3
    li r3, 0x1
    add r4, r4, r0
    lwz r4, 0x20(r4)
    bl fn_80206B14
    b lbl_fn_801CF3C0_00001644
lbl_fn_801CF3C0_00001630:
    slwi r0, r28, 3
    li r3, 0x0
    add r4, r4, r0
    lwz r4, 0x20(r4)
    bl fn_80206B14
lbl_fn_801CF3C0_00001644:
    cmpwi r3, 0x0
    beq lbl_fn_801CF3C0_0000165C
    cmplw r3, r31
    bne lbl_fn_801CF3C0_0000165C
    li r3, 0x0
    b lbl_fn_801CF3C0_00001C34
lbl_fn_801CF3C0_0000165C:
    cmpwi r23, 0x0
    beq lbl_fn_801CF3C0_0000169C
    cmpwi r3, 0x0
    beq lbl_fn_801CF3C0_0000169C
    bl fn_80206BE4
    cmpwi r3, 0x0
    mr r4, r3
    ble lbl_fn_801CF3C0_0000169C
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_804439FC
lbl_fn_801CF3C0_0000169C:
    lwz r3, lbl_8087F4F0
    mr r4, r28
    lwz r5, 0x80(r31)
    mr r7, r26
    li r6, -0x1
    bl fn_8044D184
    cmpwi r27, 0x0
    beq lbl_fn_801CF3C0_00001770
    lwz r0, 0x48(r27)
    cmpwi r0, 0x0
    beq lbl_fn_801CF3C0_000016D0
    cmpwi r0, 0x3
    bne lbl_fn_801CF3C0_00001768
lbl_fn_801CF3C0_000016D0:
    lwz r24, 0x674(r27)
    mr r3, r27
    li r4, 0x1
    bl fn_8014EEC4
    lwz r5, 0x78(r31)
    mr r3, r27
    lwz r6, 0x80(r31)
    mr r4, r28
    bl fn_8014F5D4
    cmpwi r24, 0x0
    blt lbl_fn_801CF3C0_00001714
    mr r3, r27
    mr r4, r24
    li r5, 0x0
    li r6, 0x1
    bl fn_8014DEE4
    b lbl_fn_801CF3C0_00001724
lbl_fn_801CF3C0_00001714:
    cmpwi r28, 0x1
    bne lbl_fn_801CF3C0_00001724
    mr r3, r27
    bl fn_8014EE48
lbl_fn_801CF3C0_00001724:
    lwz r0, 0x484(r25)
    li r4, 0x1
    li r3, 0x0
    stw r4, 0x64(r1)
    mulli r0, r0, 0xc
    stw r3, 0x68(r1)
    add r0, r25, r0
    stw r27, 0x6c(r1)
    addic. r5, r0, 0x488
    beq lbl_fn_801CF3C0_00001758
    stw r4, 0x0(r5)
    stw r3, 0x4(r5)
    stw r27, 0x8(r5)
lbl_fn_801CF3C0_00001758:
    lwz r3, 0x484(r25)
    addi r0, r3, 0x1
    stw r0, 0x484(r25)
    b lbl_fn_801CF3C0_00001770
lbl_fn_801CF3C0_00001768:
    addi r3, r27, 0x7d4
    bl fn_8012B988
lbl_fn_801CF3C0_00001770:
    cmpwi r29, 0x0
    beq lbl_fn_801CF3C0_000017A0
    lwz r4, 0x8(r30)
    cmpwi r4, 0x0
    bge lbl_fn_801CF3C0_00001798
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    lwz r4, 0x4(r30)
    bl fn_8044441C
    b lbl_fn_801CF3C0_000017A0
lbl_fn_801CF3C0_00001798:
    lwz r3, lbl_8087F4F0
    bl fn_8044D490
lbl_fn_801CF3C0_000017A0:
    li r0, 0xe
    stw r0, 0xa8c(r25)
    li r0, 0x0
    cmpwi r26, 0x0
    stw r0, 0x58(r1)
    stw r0, 0x5c(r1)
    stw r0, 0x60(r1)
    beq lbl_fn_801CF3C0_000017F4
    cmpwi r26, 0x1
    beq lbl_fn_801CF3C0_0000184C
    cmpwi r26, 0x2
    beq lbl_fn_801CF3C0_000018A4
    cmpwi r26, 0x3
    beq lbl_fn_801CF3C0_000018FC
    cmpwi r26, 0x4
    beq lbl_fn_801CF3C0_00001954
    cmpwi r26, 0x5
    beq lbl_fn_801CF3C0_000019AC
    cmpwi r26, 0x6
    beq lbl_fn_801CF3C0_00001A04
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_000017F4:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x115
    bne lbl_fn_801CF3C0_00001814
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_00001818
lbl_fn_801CF3C0_00001814:
    li r26, 0x0
lbl_fn_801CF3C0_00001818:
    lbz r0, 0x3c(r1)
    mr r3, r24
    stb r0, 0x38(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x38
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_0000184C:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x11d
    bne lbl_fn_801CF3C0_0000186C
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_00001870
lbl_fn_801CF3C0_0000186C:
    li r26, 0x0
lbl_fn_801CF3C0_00001870:
    lbz r0, 0x34(r1)
    mr r3, r24
    stb r0, 0x30(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_000018A4:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x125
    bne lbl_fn_801CF3C0_000018C4
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_000018C8
lbl_fn_801CF3C0_000018C4:
    li r26, 0x0
lbl_fn_801CF3C0_000018C8:
    lbz r0, 0x2c(r1)
    mr r3, r24
    stb r0, 0x28(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x28
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_000018FC:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x12d
    bne lbl_fn_801CF3C0_0000191C
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_00001920
lbl_fn_801CF3C0_0000191C:
    li r26, 0x0
lbl_fn_801CF3C0_00001920:
    lbz r0, 0x24(r1)
    mr r3, r24
    stb r0, 0x20(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x20
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_00001954:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x135
    bne lbl_fn_801CF3C0_00001974
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_00001978
lbl_fn_801CF3C0_00001974:
    li r26, 0x0
lbl_fn_801CF3C0_00001978:
    lbz r0, 0x1c(r1)
    mr r3, r24
    stb r0, 0x18(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_000019AC:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x13d
    bne lbl_fn_801CF3C0_000019CC
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_000019D0
lbl_fn_801CF3C0_000019CC:
    li r26, 0x0
lbl_fn_801CF3C0_000019D0:
    lbz r0, 0x14(r1)
    mr r3, r24
    stb r0, 0x10(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    b lbl_fn_801CF3C0_00001A58
lbl_fn_801CF3C0_00001A04:
    lis r3, lbl_8073BCF0@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_8073BCF0@l
    addi r24, r3, 0x145
    bne lbl_fn_801CF3C0_00001A24
    lbz r0, 0x58(r1)
    clrlwi r26, r0, 25
    b lbl_fn_801CF3C0_00001A28
lbl_fn_801CF3C0_00001A24:
    li r26, 0x0
lbl_fn_801CF3C0_00001A28:
    lbz r0, 0xc(r1)
    mr r3, r24
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r26
    mr r6, r24
    addi r3, r1, 0x58
    add r7, r24, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_801CF3C0_00001A58:
    lwz r3, lbl_8087F8A0
    addi r30, r1, 0x59
    li r26, 0x1
    li r24, 0x0
    lwz r29, 0x48(r3)
    b lbl_fn_801CF3C0_00001B34
lbl_fn_801CF3C0_00001A70:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CF3C0_00001B30
    cmplw r29, r27
    beq lbl_fn_801CF3C0_00001B30
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801CF3C0_00001A9C
    mr r23, r30
    b lbl_fn_801CF3C0_00001AA0
lbl_fn_801CF3C0_00001A9C:
    lwz r23, 0x60(r1)
lbl_fn_801CF3C0_00001AA0:
    addi r3, r29, 0xb0
    bl fn_8008B130
    mr r4, r23
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801CF3C0_00001B30
    lwz r23, 0x674(r29)
    mr r3, r29
    li r4, 0x1
    bl fn_8014EEC4
    lwz r5, 0x78(r31)
    mr r3, r29
    lwz r6, 0x80(r31)
    mr r4, r28
    bl fn_8014F5D4
    cmpwi r23, 0x0
    blt lbl_fn_801CF3C0_00001AF8
    mr r3, r29
    mr r4, r23
    li r5, 0x0
    li r6, 0x1
    bl fn_8014DEE4
lbl_fn_801CF3C0_00001AF8:
    lwz r0, 0x484(r25)
    stw r26, 0x4c(r1)
    mulli r0, r0, 0xc
    stw r24, 0x50(r1)
    add r0, r25, r0
    stw r29, 0x54(r1)
    addic. r3, r0, 0x488
    beq lbl_fn_801CF3C0_00001B24
    stw r26, 0x0(r3)
    stw r24, 0x4(r3)
    stw r29, 0x8(r3)
lbl_fn_801CF3C0_00001B24:
    lwz r3, 0x484(r25)
    addi r0, r3, 0x1
    stw r0, 0x484(r25)
lbl_fn_801CF3C0_00001B30:
    lwz r29, 0x14ac(r29)
lbl_fn_801CF3C0_00001B34:
    cmpwi r29, 0x0
    bne lbl_fn_801CF3C0_00001A70
    lwz r3, lbl_8087F408
    li r24, 0x1
    li r26, 0x0
    lwz r29, 0x48(r3)
    b lbl_fn_801CF3C0_00001C14
lbl_fn_801CF3C0_00001B50:
    lwz r0, 0x38(r29)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801CF3C0_00001C10
    cmplw r29, r27
    beq lbl_fn_801CF3C0_00001C10
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801CF3C0_00001B7C
    mr r23, r30
    b lbl_fn_801CF3C0_00001B80
lbl_fn_801CF3C0_00001B7C:
    lwz r23, 0x60(r1)
lbl_fn_801CF3C0_00001B80:
    addi r3, r29, 0xb0
    bl fn_8008B130
    mr r4, r23
    bl fn_806827C4
    cmpwi r3, 0x0
    beq lbl_fn_801CF3C0_00001C10
    lwz r23, 0x674(r29)
    mr r3, r29
    li r4, 0x1
    bl fn_8014EEC4
    lwz r5, 0x78(r31)
    mr r3, r29
    lwz r6, 0x80(r31)
    mr r4, r28
    bl fn_8014F5D4
    cmpwi r23, 0x0
    blt lbl_fn_801CF3C0_00001BD8
    mr r3, r29
    mr r4, r23
    li r5, 0x0
    li r6, 0x1
    bl fn_8014DEE4
lbl_fn_801CF3C0_00001BD8:
    lwz r0, 0x484(r25)
    stw r24, 0x40(r1)
    mulli r0, r0, 0xc
    stw r26, 0x44(r1)
    add r0, r25, r0
    stw r29, 0x48(r1)
    addic. r3, r0, 0x488
    beq lbl_fn_801CF3C0_00001C04
    stw r24, 0x0(r3)
    stw r26, 0x4(r3)
    stw r29, 0x8(r3)
lbl_fn_801CF3C0_00001C04:
    lwz r3, 0x484(r25)
    addi r0, r3, 0x1
    stw r0, 0x484(r25)
lbl_fn_801CF3C0_00001C10:
    lwz r29, 0x14ac(r29)
lbl_fn_801CF3C0_00001C14:
    cmpwi r29, 0x0
    bne lbl_fn_801CF3C0_00001B50
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801CF3C0_00001C30
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_801CF3C0_00001C30:
    li r3, 0x1
lbl_fn_801CF3C0_00001C34:
    lmw r23, 0x7c(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}
