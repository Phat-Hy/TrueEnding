#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_19(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A56A8(void);
extern void fn_800CB3A0(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_80117228(void);
extern void fn_801D082C(void);
extern void fn_801F3FF8(void);
extern void fn_801FECE0(void);
extern void fn_80201E78(void);
extern void fn_802020B4(void);
extern void fn_80202118(void);
extern void fn_80202CA4(void);
extern void fn_80216544(void);
extern void fn_80216700(void);
extern void fn_80216954(void);
extern void fn_80216988(void);
extern void fn_80232B7C(void);
extern void fn_80239DAC(void);
extern void fn_8023A680(void);
extern void fn_8023A8B4(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_80375184(void);
extern void fn_80473E74(void);
extern void fn_8050F940(void);
extern void fn_8050FB3C(void);
extern void fn_8050FC8C(void);
extern void fn_805201F0(void);
extern void fn_805226A8(void);
extern void fn_80522714(void);
extern void fn_80522768(void);
extern void fn_80526660(void);
extern void fn_80526694(void);
extern void fn_805266C0(void);
extern void fn_80530D8C(void);
extern void fn_805F98D0(void);
extern void fn_80695720(void);
extern void fn_806958E0(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075BEC8[];
extern u8 lbl_8075BF40[];
extern u8 lbl_8075C300[];
extern u8 lbl_8075C6C4[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80793610[];
extern u8 lbl_807C9100[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F430;
extern u32 lbl_80887904;
extern u32 lbl_80887908;
extern u32 lbl_80887928;
extern u32 lbl_80887934;
extern u32 lbl_80887938;
extern u32 lbl_80887940;
extern u32 lbl_80887994;
extern u32 lbl_808879A4;
extern u32 lbl_808879C0;
extern u32 lbl_808879C4;
extern u32 lbl_808879C8;
extern u32 lbl_808879CC;
extern u32 lbl_808879D0;
extern u32 lbl_808879D4;
extern u32 lbl_808879D8;
extern u32 lbl_808879DC;
extern u32 lbl_808879E0;
extern u32 lbl_808879E4;
extern u32 lbl_808879F0;
extern u32 lbl_808879F4;
extern u32 lbl_808879F8;

/* Function declarations */
void fn_80520B08(void);
void fn_80521014(void);
void fn_805212C0(void);
void fn_8052190C(void);
void fn_80521A04(void);
void fn_80521CA0(void);
void fn_80521D48(void);
void fn_80521DFC(void);
void fn_80521E20(void);
void fn_80521E84(void);

asm void fn_80520B08(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stmw r20, 0x10(r1)
    mr r20, r3
    li r24, 0x0
    li r23, 0x0
    stw r0, 0x3ed0(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80520B08_00000040
    lwz r24, 0x10d0(r3)
    li r4, 0x63
    bl fn_80370174
    mr r23, r3
lbl_fn_80520B08_00000040:
    li r22, 0x0
    b lbl_fn_80520B08_000001F0
lbl_fn_80520B08_00000048:
    mr r3, r22
    bl fn_80216954
    mr r21, r3
    mr r4, r24
    mr r5, r23
    bl fn_80216544
    mr r31, r3
    mr r3, r21
    mr r4, r24
    mr r5, r23
    bl fn_80216700
    cmpwi r21, 0x0
    ble lbl_fn_80520B08_000001EC
    cmpwi r31, 0x0
    beq lbl_fn_80520B08_000001EC
    cmpwi r3, 0x0
    beq lbl_fn_80520B08_000001EC
    lbz r0, 0x0(r3)
    extsb. r28, r0
    beq lbl_fn_80520B08_000001EC
    cmpwi r21, 0x1f4
    bge lbl_fn_80520B08_000001EC
    lwz r0, 0x19cc(r20)
    mr r4, r20
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80520B08_000000E0
lbl_fn_80520B08_000000B8:
    lwz r0, 0x19d0(r4)
    cmpw r21, r0
    bne lbl_fn_80520B08_000000D4
    mulli r0, r3, 0x94
    add r3, r20, r0
    addi r30, r3, 0x19d0
    b lbl_fn_80520B08_000000E4
lbl_fn_80520B08_000000D4:
    addi r4, r4, 0x94
    addi r3, r3, 0x1
    bdnz lbl_fn_80520B08_000000B8
lbl_fn_80520B08_000000E0:
    li r30, 0x0
lbl_fn_80520B08_000000E4:
    cmpwi r28, 0x2
    bne lbl_fn_80520B08_0000013C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80520B08_0000013C
    bl fn_80375184
    cmpwi r3, 0x0
    bne lbl_fn_80520B08_00000138
    lwz r3, lbl_8087F430
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80520B08_00000138
    li r4, 0x394
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80520B08_00000138
    lwz r3, lbl_8087F430
    li r4, 0x62
    bl fn_80370174
    cmpwi r3, 0x0
    beq lbl_fn_80520B08_0000013C
lbl_fn_80520B08_00000138:
    li r28, 0x1
lbl_fn_80520B08_0000013C:
    lwz r3, 0x48(r20)
    li r29, 0x1
    lbz r27, 0x0(r31)
    lwz r0, 0x1350(r3)
    lbz r26, 0x1(r31)
    cmpwi r0, 0x0
    lbz r25, 0x2(r31)
    lwz r31, 0x4(r31)
    bne lbl_fn_80520B08_00000190
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80520B08_00000190
    cmpwi r30, 0x0
    beq lbl_fn_80520B08_00000190
    lwz r4, 0x4(r30)
    cmpwi r4, 0x0
    ble lbl_fn_80520B08_00000190
    bl fn_80370174
    cmpwi r3, 0x0
    bne lbl_fn_80520B08_00000190
    li r29, 0x0
lbl_fn_80520B08_00000190:
    cmpwi r30, 0x0
    beq lbl_fn_80520B08_000001A4
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    bne lbl_fn_80520B08_000001A8
lbl_fn_80520B08_000001A4:
    li r29, 0x0
lbl_fn_80520B08_000001A8:
    cmpwi r29, 0x0
    beq lbl_fn_80520B08_000001EC
    lwz r0, 0x3ed0(r20)
    mulli r0, r0, 0x1c
    add r0, r20, r0
    addic. r3, r0, 0x3ed4
    beq lbl_fn_80520B08_000001E0
    stw r30, 0x0(r3)
    stw r21, 0x4(r3)
    stw r28, 0x8(r3)
    stw r27, 0xc(r3)
    stw r26, 0x10(r3)
    stw r25, 0x14(r3)
    stw r31, 0x18(r3)
lbl_fn_80520B08_000001E0:
    lwz r3, 0x3ed0(r20)
    addi r0, r3, 0x1
    stw r0, 0x3ed0(r20)
lbl_fn_80520B08_000001EC:
    addi r22, r22, 0x1
lbl_fn_80520B08_000001F0:
    bl fn_80216988
    cmpw r22, r3
    blt lbl_fn_80520B08_00000048
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x48(r3)
    lwz r3, 0x4c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80520B08_0000022C
    cmpwi r3, 0xf
    beq lbl_fn_80520B08_00000224
    cmpwi r3, 0x37
    bne lbl_fn_80520B08_0000022C
lbl_fn_80520B08_00000224:
    li r29, 0x1
    b lbl_fn_80520B08_00000230
lbl_fn_80520B08_0000022C:
    li r29, 0x0
lbl_fn_80520B08_00000230:
    li r0, 0xc9
    stw r0, 0x8(r1)
    mr r3, r20
    addi r4, r1, 0x8
    bl fn_805201F0
    lwz r0, 0x19cc(r20)
    mr r5, r20
    lwz r3, 0x8(r1)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80520B08_00000288
lbl_fn_80520B08_00000260:
    lwz r0, 0x19d0(r5)
    cmpw r3, r0
    bne lbl_fn_80520B08_0000027C
    mulli r0, r4, 0x94
    add r3, r20, r0
    addi r6, r3, 0x19d0
    b lbl_fn_80520B08_0000028C
lbl_fn_80520B08_0000027C:
    addi r5, r5, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_80520B08_00000260
lbl_fn_80520B08_00000288:
    li r6, 0x0
lbl_fn_80520B08_0000028C:
    addi r7, r20, 0x3ed4
    li r8, 0x0
    li r4, 0x1
    li r3, 0x0
    b lbl_fn_80520B08_00000378
lbl_fn_80520B08_000002A0:
    lwz r5, 0x8(r7)
    lwz r9, 0x0(r7)
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    bgt lbl_fn_80520B08_00000370
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_80520B08_00000370
    cmpwi r29, 0x0
    beq lbl_fn_80520B08_000002E4
    cmpwi r9, 0x0
    stw r4, 0x8(r7)
    beq lbl_fn_80520B08_000002E0
    lwz r0, 0xc(r9)
    cmpwi r0, 0x2
    bne lbl_fn_80520B08_000002E4
lbl_fn_80520B08_000002E0:
    stw r3, 0x8(r7)
lbl_fn_80520B08_000002E4:
    cmpwi r6, 0x0
    beq lbl_fn_80520B08_00000370
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    beq lbl_fn_80520B08_0000031C
    cmpwi r0, 0x3
    beq lbl_fn_80520B08_0000031C
    cmpwi r0, 0x1
    beq lbl_fn_80520B08_0000033C
    cmpwi r0, 0x4
    beq lbl_fn_80520B08_0000033C
    cmpwi r0, 0x2
    beq lbl_fn_80520B08_00000358
    b lbl_fn_80520B08_00000370
lbl_fn_80520B08_0000031C:
    cmpwi r9, 0x0
    stw r4, 0x8(r7)
    beq lbl_fn_80520B08_00000334
    lwz r0, 0xc(r9)
    cmpwi r0, 0x2
    bne lbl_fn_80520B08_00000370
lbl_fn_80520B08_00000334:
    stw r3, 0x8(r7)
    b lbl_fn_80520B08_00000370
lbl_fn_80520B08_0000033C:
    cmpwi r9, 0x0
    beq lbl_fn_80520B08_00000350
    lwz r0, 0xc(r9)
    cmpwi r0, 0x2
    bne lbl_fn_80520B08_00000370
lbl_fn_80520B08_00000350:
    stw r3, 0x8(r7)
    b lbl_fn_80520B08_00000370
lbl_fn_80520B08_00000358:
    cmpwi r9, 0x0
    beq lbl_fn_80520B08_0000036C
    lwz r0, 0xc(r9)
    cmpwi r0, 0x2
    beq lbl_fn_80520B08_00000370
lbl_fn_80520B08_0000036C:
    stw r3, 0x8(r7)
lbl_fn_80520B08_00000370:
    addi r7, r7, 0x1c
    addi r8, r8, 0x1
lbl_fn_80520B08_00000378:
    lwz r0, 0x3ed0(r20)
    cmplw r8, r0
    blt lbl_fn_80520B08_000002A0
    lis r6, lbl_8075BEC8@ha
    li r8, 0x0
    addi r6, r6, lbl_8075BEC8@l
    li r4, 0x2
lbl_fn_80520B08_00000394:
    lwz r0, 0x19cc(r20)
    mr r7, r20
    addi r5, r8, 0x1f4
    li r3, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80520B08_000003D8
lbl_fn_80520B08_000003B0:
    lwz r0, 0x19d0(r7)
    cmpw r5, r0
    bne lbl_fn_80520B08_000003CC
    mulli r0, r3, 0x94
    add r3, r20, r0
    addi r3, r3, 0x19d0
    b lbl_fn_80520B08_000003DC
lbl_fn_80520B08_000003CC:
    addi r7, r7, 0x94
    addi r3, r3, 0x1
    bdnz lbl_fn_80520B08_000003B0
lbl_fn_80520B08_000003D8:
    li r3, 0x0
lbl_fn_80520B08_000003DC:
    lwz r0, 0x4(r6)
    cmpw r0, r24
    bgt lbl_fn_80520B08_00000430
    lwz r0, 0x8(r6)
    cmpw r0, r24
    ble lbl_fn_80520B08_00000430
    lwz r0, 0x3ed0(r20)
    mulli r0, r0, 0x1c
    add r0, r20, r0
    addic. r7, r0, 0x3ed4
    beq lbl_fn_80520B08_00000424
    stw r3, 0x0(r7)
    stw r5, 0x4(r7)
    stw r4, 0x8(r7)
    stw r24, 0xc(r7)
    stw r24, 0x10(r7)
    stw r24, 0x14(r7)
    stw r24, 0x18(r7)
lbl_fn_80520B08_00000424:
    lwz r3, 0x3ed0(r20)
    addi r0, r3, 0x1
    stw r0, 0x3ed0(r20)
lbl_fn_80520B08_00000430:
    addi r8, r8, 0x1
    addi r6, r6, 0xc
    cmpwi r8, 0x5
    blt lbl_fn_80520B08_00000394
    addi r7, r20, 0x3ed4
    lis r4, 0x9249
    b lbl_fn_80520B08_000004E0
lbl_fn_80520B08_0000044C:
    lwz r0, 0x8(r7)
    cmpwi r0, 0x0
    bne lbl_fn_80520B08_000004DC
    addi r3, r20, 0x3ed4
    addi r0, r4, 0x2493
    subf r3, r3, r7
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r6, r0, r3
    mulli r0, r6, 0x1c
    add r5, r20, r0
    b lbl_fn_80520B08_000004C4
lbl_fn_80520B08_00000484:
    lwz r0, 0x3ef0(r5)
    addi r6, r6, 0x1
    stw r0, 0x3ed4(r5)
    lwz r0, 0x3ef4(r5)
    stw r0, 0x3ed8(r5)
    lwz r0, 0x3ef8(r5)
    stw r0, 0x3edc(r5)
    lwz r0, 0x3efc(r5)
    stw r0, 0x3ee0(r5)
    lwz r0, 0x3f00(r5)
    stw r0, 0x3ee4(r5)
    lwz r0, 0x3f04(r5)
    stw r0, 0x3ee8(r5)
    lwz r0, 0x3f08(r5)
    stw r0, 0x3eec(r5)
    addi r5, r5, 0x1c
lbl_fn_80520B08_000004C4:
    lwz r3, 0x3ed0(r20)
    subi r0, r3, 0x1
    cmplw r6, r0
    blt lbl_fn_80520B08_00000484
    stw r0, 0x3ed0(r20)
    b lbl_fn_80520B08_000004E0
lbl_fn_80520B08_000004DC:
    addi r7, r7, 0x1c
lbl_fn_80520B08_000004E0:
    lwz r0, 0x3ed0(r20)
    mulli r0, r0, 0x1c
    add r3, r20, r0
    addi r0, r3, 0x3ed4
    cmplw r7, r0
    bne lbl_fn_80520B08_0000044C
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80521014(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x1
    bne lbl_fn_80521014_00000794
    bl fn_80520B08
    addi r3, r31, 0x45d4
    li r4, 0x0
    li r5, 0x100
    bl memset
    li r0, 0x0
    stw r0, 0x46d4(r31)
    addi r5, r31, 0x3ed4
    li r6, 0x0
    b lbl_fn_80521014_00000580
lbl_fn_80521014_00000558:
    lwz r0, 0x46d4(r31)
    addi r6, r6, 0x1
    lwz r4, 0x4(r5)
    addi r5, r5, 0x1c
    slwi r0, r0, 2
    add r3, r31, r0
    stw r4, 0x45d4(r3)
    lwz r3, 0x46d4(r31)
    addi r0, r3, 0x1
    stw r0, 0x46d4(r31)
lbl_fn_80521014_00000580:
    lwz r0, 0x3ed0(r31)
    cmplw r6, r0
    blt lbl_fn_80521014_00000558
    li r3, 0x0
    li r6, 0x0
    li r8, 0x1
    li r5, 0x20
    li r4, 0x20
    li r0, 0x20
    b lbl_fn_80521014_00000768
lbl_fn_80521014_000005A8:
    lwz r7, 0x19cc(r31)
    add r9, r31, r6
    mr r12, r31
    lwz r10, 0x3ed8(r9)
    li r11, 0x0
    mtctr r7
    cmplwi r7, 0x0
    ble lbl_fn_80521014_000005F0
lbl_fn_80521014_000005C8:
    lwz r7, 0x19d0(r12)
    cmpw r10, r7
    bne lbl_fn_80521014_000005E4
    mulli r7, r11, 0x94
    add r7, r31, r7
    addi r10, r7, 0x19d0
    b lbl_fn_80521014_000005F4
lbl_fn_80521014_000005E4:
    addi r12, r12, 0x94
    addi r11, r11, 0x1
    bdnz lbl_fn_80521014_000005C8
lbl_fn_80521014_000005F0:
    li r10, 0x0
lbl_fn_80521014_000005F4:
    cmpwi r10, 0x0
    beq lbl_fn_80521014_00000760
    lwz r7, 0x3edc(r9)
    cmpwi r7, 0x2
    bne lbl_fn_80521014_000006F8
    lwz r7, 0x8(r10)
    cmpwi r7, 0x0
    ble lbl_fn_80521014_00000680
    addi r9, r31, 0xe0
    mtctr r5
lbl_fn_80521014_0000061C:
    lbz r7, 0x3c(r9)
    cmpwi r7, 0x0
    bne lbl_fn_80521014_00000674
    stw r9, 0x1c(r10)
    lwz r7, 0x18(r10)
    lwz r7, 0x8(r7)
    stw r7, 0x8(r9)
    lwz r7, 0x18(r10)
    psq_l f2, 0x14(r7), 0, 0
    psq_l f3, 0x1c(r7), 0, 0
    psq_l f4, 0x24(r7), 0, 0
    psq_l f5, 0x2c(r7), 0, 0
    psq_l f6, 0x34(r7), 0, 0
    psq_l f1, 0xc(r7), 0, 0
    psq_st f1, 0xc(r9), 0, 0
    psq_st f2, 0x14(r9), 0, 0
    psq_st f3, 0x1c(r9), 0, 0
    psq_st f4, 0x24(r9), 0, 0
    psq_st f5, 0x2c(r9), 0, 0
    psq_st f6, 0x34(r9), 0, 0
    stb r8, 0x3c(r9)
    b lbl_fn_80521014_00000760
lbl_fn_80521014_00000674:
    addi r9, r9, 0x40
    bdnz lbl_fn_80521014_0000061C
    b lbl_fn_80521014_00000760
lbl_fn_80521014_00000680:
    lwz r7, 0x3ed8(r9)
    cmpwi r7, 0x1f4
    bge lbl_fn_80521014_00000760
    addi r9, r31, 0x8e0
    mtctr r4
lbl_fn_80521014_00000694:
    lbz r7, 0x3c(r9)
    cmpwi r7, 0x0
    bne lbl_fn_80521014_000006EC
    stw r9, 0x20(r10)
    lwz r7, 0x18(r10)
    lwz r7, 0x8(r7)
    stw r7, 0x8(r9)
    lwz r7, 0x18(r10)
    psq_l f2, 0x14(r7), 0, 0
    psq_l f3, 0x1c(r7), 0, 0
    psq_l f4, 0x24(r7), 0, 0
    psq_l f5, 0x2c(r7), 0, 0
    psq_l f6, 0x34(r7), 0, 0
    psq_l f1, 0xc(r7), 0, 0
    psq_st f1, 0xc(r9), 0, 0
    psq_st f2, 0x14(r9), 0, 0
    psq_st f3, 0x1c(r9), 0, 0
    psq_st f4, 0x24(r9), 0, 0
    psq_st f5, 0x2c(r9), 0, 0
    psq_st f6, 0x34(r9), 0, 0
    stb r8, 0x3c(r9)
    b lbl_fn_80521014_00000760
lbl_fn_80521014_000006EC:
    addi r9, r9, 0x40
    bdnz lbl_fn_80521014_00000694
    b lbl_fn_80521014_00000760
lbl_fn_80521014_000006F8:
    addi r9, r31, 0x10e0
    mtctr r0
lbl_fn_80521014_00000700:
    lbz r7, 0x3c(r9)
    cmpwi r7, 0x0
    bne lbl_fn_80521014_00000758
    stw r9, 0x24(r10)
    lwz r7, 0x18(r10)
    lwz r7, 0x8(r7)
    stw r7, 0x8(r9)
    lwz r7, 0x18(r10)
    psq_l f2, 0x14(r7), 0, 0
    psq_l f3, 0x1c(r7), 0, 0
    psq_l f4, 0x24(r7), 0, 0
    psq_l f5, 0x2c(r7), 0, 0
    psq_l f6, 0x34(r7), 0, 0
    psq_l f1, 0xc(r7), 0, 0
    psq_st f1, 0xc(r9), 0, 0
    psq_st f2, 0x14(r9), 0, 0
    psq_st f3, 0x1c(r9), 0, 0
    psq_st f4, 0x24(r9), 0, 0
    psq_st f5, 0x2c(r9), 0, 0
    psq_st f6, 0x34(r9), 0, 0
    stb r8, 0x3c(r9)
    b lbl_fn_80521014_00000760
lbl_fn_80521014_00000758:
    addi r9, r9, 0x40
    bdnz lbl_fn_80521014_00000700
lbl_fn_80521014_00000760:
    addi r3, r3, 0x1
    addi r6, r6, 0x1c
lbl_fn_80521014_00000768:
    lwz r7, 0x3ed0(r31)
    cmplw r3, r7
    blt lbl_fn_80521014_000005A8
    lwz r4, 0x46d4(r31)
    li r3, -0x1
    li r0, 0x2
    stw r4, 0x84(r31)
    li r4, 0x0
    stw r3, 0x19a4(r31)
    stw r0, 0xd8(r31)
    b lbl_fn_80521014_000007A0
lbl_fn_80521014_00000794:
    cmpwi r0, 0x2
    bne lbl_fn_80521014_000007A0
    li r4, 0x0
lbl_fn_80521014_000007A0:
    lwz r31, 0xc(r1)
    mr r3, r4
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_805212C0(void)
{
    nofralloc
    stwu r1, -0xe0(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x0
    stw r0, 0xe4(r1)
    li r6, 0x0
    stfd f31, 0xd0(r1)
    psq_st f31, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    mr r30, r3
    stw r29, 0xc4(r1)
    lwz r3, lbl_8087EF70
    bl fn_800A56A8
    stfs f1, 0xb4(r1)
    li r4, 0x0
    lwz r3, lbl_8087EF70
    li r5, 0x1
    li r6, 0x0
    bl fn_800A56A8
    lfs f0, 0xb4(r1)
    lfs f3, lbl_80887904
    fabs f4, f0
    lfs f0, lbl_808879C0
    stfs f1, 0xb8(r1)
    frsp f4, f4
    stfs f3, 0xbc(r1)
    fcmpo cr0, f4, f0
    bge lbl_fn_805212C0_00000830
    stfs f3, 0xb4(r1)
lbl_fn_805212C0_00000830:
    lfs f3, 0xb8(r1)
    lfs f0, lbl_808879C0
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805212C0_00000850
    lfs f0, lbl_80887904
    stfs f0, 0xb8(r1)
lbl_fn_805212C0_00000850:
    lwz r0, 0x19cc(r30)
    mr r5, r30
    lwz r3, 0x19a4(r30)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805212C0_00000894
lbl_fn_805212C0_0000086C:
    lwz r0, 0x19d0(r5)
    cmpw r3, r0
    bne lbl_fn_805212C0_00000888
    mulli r0, r4, 0x94
    add r3, r30, r0
    addi r29, r3, 0x19d0
    b lbl_fn_805212C0_00000898
lbl_fn_805212C0_00000888:
    addi r5, r5, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_805212C0_0000086C
lbl_fn_805212C0_00000894:
    li r29, 0x0
lbl_fn_805212C0_00000898:
    li r0, -0x1
    stw r0, 0x19a4(r30)
    lfs f11, lbl_808879C4
    li r31, 0x0
    li r8, 0x0
    li r3, 0x0
    b lbl_fn_805212C0_000009BC
lbl_fn_805212C0_000008B4:
    lwz r0, 0x3ed0(r30)
    add r5, r30, r3
    mr r6, r30
    lwzu r7, 0x19d0(r5)
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_805212C0_000008FC
lbl_fn_805212C0_000008D4:
    lwz r0, 0x3ed8(r6)
    cmpw r7, r0
    bne lbl_fn_805212C0_000008F0
    mulli r0, r4, 0x1c
    add r4, r30, r0
    addi r0, r4, 0x3ed4
    b lbl_fn_805212C0_00000900
lbl_fn_805212C0_000008F0:
    addi r6, r6, 0x1c
    addi r4, r4, 0x1
    bdnz lbl_fn_805212C0_000008D4
lbl_fn_805212C0_000008FC:
    li r0, 0x0
lbl_fn_805212C0_00000900:
    cmpwi r0, 0x0
    beq lbl_fn_805212C0_000009B4
    lwz r4, 0x19a8(r30)
    lwz r0, 0x10(r5)
    cmpw r4, r0
    bne lbl_fn_805212C0_000009B4
    lwz r4, 0x18(r5)
    lwz r4, 0x8(r4)
    cmpwi r4, 0x0
    beq lbl_fn_805212C0_0000092C
    b lbl_fn_805212C0_00000930
lbl_fn_805212C0_0000092C:
    li r4, 0x0
lbl_fn_805212C0_00000930:
    lfs f4, 0x4c(r4)
    lfs f3, 0x4804(r30)
    lfs f0, 0x481c(r30)
    fsubs f6, f4, f3
    lfs f3, 0x4810(r30)
    lfs f5, 0x3c(r4)
    fmuls f0, f0, f0
    lfs f4, 0x4800(r30)
    fsubs f9, f3, f6
    fsubs f7, f5, f4
    lfs f4, 0x480c(r30)
    lfs f8, 0x5c(r4)
    lfs f5, 0x4808(r30)
    fmuls f3, f9, f9
    fsubs f10, f4, f7
    fsubs f5, f8, f5
    stfs f7, 0xa8(r1)
    lfs f4, 0x4814(r30)
    fmadds f7, f10, f10, f3
    stfs f6, 0xac(r1)
    fsubs f3, f4, f5
    stfs f5, 0xb0(r1)
    fcmpo cr0, f7, f0
    stfs f10, 0x6c(r1)
    stfs f9, 0x70(r1)
    stfs f3, 0x74(r1)
    cror eq, gt, eq
    beq lbl_fn_805212C0_000009B4
    fcmpo cr0, f7, f11
    bge lbl_fn_805212C0_000009B4
    fmr f11, f7
    stw r7, 0x19a4(r30)
    mr r31, r5
lbl_fn_805212C0_000009B4:
    addi r8, r8, 0x1
    addi r3, r3, 0x94
lbl_fn_805212C0_000009BC:
    lwz r0, 0x4c(r30)
    cmpw r8, r0
    blt lbl_fn_805212C0_000008B4
    cmpwi r31, 0x0
    beq lbl_fn_805212C0_000009F0
    cmplw r31, r29
    beq lbl_fn_805212C0_000009F0
    addi r3, r1, 0x8
    li r4, 0x3
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_805212C0_000009F0:
    cmpwi r31, 0x0
    beq lbl_fn_805212C0_00000B54
    lwz r3, 0x18(r31)
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    bne lbl_fn_805212C0_00000A0C
    li r5, 0x0
lbl_fn_805212C0_00000A0C:
    lfs f3, 0x4c(r5)
    addi r4, r1, 0x60
    lfs f0, 0x4804(r30)
    addi r3, r1, 0x9c
    lfs f5, 0x3c(r5)
    fsubs f6, f3, f0
    lfs f4, 0x4800(r30)
    lfs f3, 0x4810(r30)
    fsubs f7, f5, f4
    lfs f0, 0x480c(r30)
    fsubs f5, f6, f3
    lfs f4, 0x5c(r5)
    fsubs f8, f7, f0
    stfs f5, 0x64(r1)
    lfs f3, 0x4808(r30)
    stfs f8, 0x60(r1)
    lfs f0, 0x4814(r30)
    fsubs f5, f4, f3
    psq_l f1, 0x0(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    fsubs f2, f5, f0
    lfs f0, lbl_80887994
    lfs f4, 0xa0(r1)
    lfs f3, 0x9c(r1)
    fmuls f4, f4, f4
    stfs f7, 0x90(r1)
    stfs f6, 0x94(r1)
    fmadds f31, f3, f3, f4
    stfs f5, 0x98(r1)
    fcmpo cr0, f31, f0
    stfs f2, 0x68(r1)
    stfs f2, 0xa4(r1)
    ble lbl_fn_805212C0_00000B54
    lfs f3, lbl_808879C8
    lfs f0, 0x4818(r30)
    fmuls f0, f3, f0
    fcmpo cr0, f31, f0
    ble lbl_fn_805212C0_00000AA8
    fmr f31, f0
lbl_fn_805212C0_00000AA8:
    addi r3, r1, 0x9c
    mr r4, r3
    bl fn_805F98D0
    lfs f4, 0x9c(r1)
    cmplw r29, r31
    lfs f3, 0xa0(r1)
    lfs f0, 0xa4(r1)
    fmuls f4, f4, f31
    fmuls f6, f3, f31
    fmuls f5, f0, f31
    stfs f4, 0x9c(r1)
    stfs f6, 0xa0(r1)
    stfs f5, 0xa4(r1)
    bne lbl_fn_805212C0_00000B08
    lfs f3, 0x4820(r30)
    lfs f0, 0x4824(r30)
    fmuls f0, f3, f0
    fmuls f4, f4, f0
    fmuls f3, f6, f0
    fmuls f0, f5, f0
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
    b lbl_fn_805212C0_00000B24
lbl_fn_805212C0_00000B08:
    lfs f0, 0x4820(r30)
    fmuls f4, f4, f0
    fmuls f3, f6, f0
    fmuls f0, f5, f0
    stfs f4, 0x9c(r1)
    stfs f3, 0xa0(r1)
    stfs f0, 0xa4(r1)
lbl_fn_805212C0_00000B24:
    lfs f3, 0xb4(r1)
    lfs f0, 0x9c(r1)
    lfs f5, 0xb8(r1)
    fadds f6, f3, f0
    lfs f4, 0xa0(r1)
    lfs f3, 0xbc(r1)
    lfs f0, 0xa4(r1)
    fadds f4, f5, f4
    stfs f6, 0xb4(r1)
    fadds f0, f3, f0
    stfs f4, 0xb8(r1)
    stfs f0, 0xbc(r1)
lbl_fn_805212C0_00000B54:
    lfs f5, 0x4818(r30)
    lfs f4, 0xbc(r1)
    lfs f3, 0xb8(r1)
    fmuls f6, f4, f5
    lfs f0, 0xb4(r1)
    fmuls f7, f3, f5
    lfs f3, 0x4810(r30)
    fmuls f5, f0, f5
    lfs f4, 0x480c(r30)
    lfs f0, 0x4814(r30)
    fadds f3, f3, f7
    lwz r0, 0x19a8(r30)
    fadds f4, f4, f5
    fadds f0, f0, f6
    stfs f5, 0x54(r1)
    cmpwi r0, 0x2
    stfs f7, 0x58(r1)
    stfs f6, 0x5c(r1)
    stfs f4, 0x480c(r30)
    stfs f3, 0x4810(r30)
    stfs f0, 0x4814(r30)
    bne lbl_fn_805212C0_00000C34
    lfs f0, lbl_80887904
    fcmpo cr0, f0, f4
    bge lbl_fn_805212C0_00000BBC
    b lbl_fn_805212C0_00000BC0
lbl_fn_805212C0_00000BBC:
    fmr f0, f4
lbl_fn_805212C0_00000BC0:
    lfs f3, lbl_80887928
    fcmpo cr0, f3, f0
    ble lbl_fn_805212C0_00000BD0
    b lbl_fn_805212C0_00000BE8
lbl_fn_805212C0_00000BD0:
    lfs f3, lbl_80887904
    lfs f0, 0x480c(r30)
    fcmpo cr0, f3, f0
    bge lbl_fn_805212C0_00000BE4
    b lbl_fn_805212C0_00000BE8
lbl_fn_805212C0_00000BE4:
    fmr f3, f0
lbl_fn_805212C0_00000BE8:
    lfs f4, lbl_808879CC
    lfs f0, 0x4810(r30)
    stfs f3, 0x480c(r30)
    fcmpo cr0, f4, f0
    bge lbl_fn_805212C0_00000C00
    b lbl_fn_805212C0_00000C04
lbl_fn_805212C0_00000C00:
    fmr f4, f0
lbl_fn_805212C0_00000C04:
    lfs f3, lbl_808879D0
    fcmpo cr0, f3, f4
    ble lbl_fn_805212C0_00000C14
    b lbl_fn_805212C0_00000C2C
lbl_fn_805212C0_00000C14:
    lfs f3, lbl_808879CC
    lfs f0, 0x4810(r30)
    fcmpo cr0, f3, f0
    bge lbl_fn_805212C0_00000C28
    b lbl_fn_805212C0_00000C2C
lbl_fn_805212C0_00000C28:
    fmr f3, f0
lbl_fn_805212C0_00000C2C:
    stfs f3, 0x4810(r30)
    b lbl_fn_805212C0_00000DE0
lbl_fn_805212C0_00000C34:
    lfs f12, lbl_80887904
    cmpwi r0, 0x0
    stfs f12, 0x84(r1)
    stfs f12, 0x88(r1)
    stfs f12, 0x8c(r1)
    stfs f12, 0x78(r1)
    stfs f12, 0x7c(r1)
    stfs f12, 0x80(r1)
    bne lbl_fn_805212C0_00000CEC
    lwz r4, lbl_8087F430
    lis r3, 0x6
    addi r0, r3, 0x1e68
    lwz r3, 0x10d0(r4)
    cmpw r3, r0
    blt lbl_fn_805212C0_00000D28
    lfs f11, lbl_80887940
    fadds f3, f12, f12
    lfs f10, lbl_808879D4
    fadds f0, f12, f11
    lfs f9, lbl_808879D8
    lfs f5, lbl_808879CC
    fadds f6, f3, f12
    lfs f4, lbl_808879A4
    fadds f8, f3, f10
    fadds f7, f0, f9
    stfs f12, 0x48(r1)
    fadds f3, f3, f5
    fadds f0, f0, f4
    stfs f11, 0x4c(r1)
    stfs f12, 0x50(r1)
    stfs f10, 0x3c(r1)
    stfs f9, 0x40(r1)
    stfs f12, 0x44(r1)
    stfs f8, 0x84(r1)
    stfs f7, 0x88(r1)
    stfs f6, 0x8c(r1)
    stfs f12, 0x30(r1)
    stfs f11, 0x34(r1)
    stfs f12, 0x38(r1)
    stfs f5, 0x24(r1)
    stfs f4, 0x28(r1)
    stfs f12, 0x2c(r1)
    stfs f3, 0x78(r1)
    stfs f0, 0x7c(r1)
    stfs f6, 0x80(r1)
    b lbl_fn_805212C0_00000D28
lbl_fn_805212C0_00000CEC:
    lfs f4, lbl_808879DC
    fadds f3, f12, f12
    stfs f12, 0x18(r1)
    fadds f0, f12, f4
    stfs f4, 0x1c(r1)
    stfs f12, 0x20(r1)
    stfs f3, 0x84(r1)
    stfs f0, 0x88(r1)
    stfs f3, 0x8c(r1)
    stfs f12, 0xc(r1)
    stfs f12, 0x10(r1)
    stfs f12, 0x14(r1)
    stfs f3, 0x78(r1)
    stfs f3, 0x7c(r1)
    stfs f3, 0x80(r1)
lbl_fn_805212C0_00000D28:
    lfs f4, 0x48b4(r30)
    lfs f3, 0x78(r1)
    lfs f0, 0x480c(r30)
    fadds f4, f4, f3
    fcmpo cr0, f4, f0
    bge lbl_fn_805212C0_00000D44
    b lbl_fn_805212C0_00000D48
lbl_fn_805212C0_00000D44:
    fmr f4, f0
lbl_fn_805212C0_00000D48:
    lfs f3, 0x48ac(r30)
    lfs f0, 0x84(r1)
    fadds f5, f3, f0
    fcmpo cr0, f5, f4
    ble lbl_fn_805212C0_00000D60
    b lbl_fn_805212C0_00000D80
lbl_fn_805212C0_00000D60:
    lfs f4, 0x48b4(r30)
    lfs f3, 0x78(r1)
    lfs f0, 0x480c(r30)
    fadds f5, f4, f3
    fcmpo cr0, f5, f0
    bge lbl_fn_805212C0_00000D7C
    b lbl_fn_805212C0_00000D80
lbl_fn_805212C0_00000D7C:
    fmr f5, f0
lbl_fn_805212C0_00000D80:
    lfs f4, 0x48b8(r30)
    lfs f3, 0x7c(r1)
    lfs f0, 0x4810(r30)
    fadds f4, f4, f3
    stfs f5, 0x480c(r30)
    fcmpo cr0, f4, f0
    bge lbl_fn_805212C0_00000DA0
    b lbl_fn_805212C0_00000DA4
lbl_fn_805212C0_00000DA0:
    fmr f4, f0
lbl_fn_805212C0_00000DA4:
    lfs f3, 0x48b0(r30)
    lfs f0, 0x88(r1)
    fadds f3, f3, f0
    fcmpo cr0, f3, f4
    ble lbl_fn_805212C0_00000DBC
    b lbl_fn_805212C0_00000DDC
lbl_fn_805212C0_00000DBC:
    lfs f4, 0x48b8(r30)
    lfs f3, 0x7c(r1)
    lfs f0, 0x4810(r30)
    fadds f3, f4, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_805212C0_00000DD8
    b lbl_fn_805212C0_00000DDC
lbl_fn_805212C0_00000DD8:
    fmr f3, f0
lbl_fn_805212C0_00000DDC:
    stfs f3, 0x4810(r30)
lbl_fn_805212C0_00000DE0:
    lwz r0, 0xe4(r1)
    psq_l f31, 0xd8(r1), 0, 0
    lfd f31, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0xe0
    blr
}

asm void fn_8052190C(void)
{
    nofralloc
    cmpwi r4, 0x0
    stwu r1, -0x20(r1)
    beq lbl_fn_8052190C_00000E18
    lfs f0, lbl_80887904
    stfs f0, 0x19b8(r3)
lbl_fn_8052190C_00000E18:
    li r10, 0x0
    lfs f0, lbl_80887904
    mr r6, r10
    addi r8, r1, 0x8
    li r11, 0x0
    li r5, 0x0
    b lbl_fn_8052190C_00000EE8
lbl_fn_8052190C_00000E34:
    lwz r0, 0x19a8(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8052190C_00000E54
    cmpwi r0, 0x1
    beq lbl_fn_8052190C_00000E5C
    cmpwi r0, 0x2
    beq lbl_fn_8052190C_00000E64
    b lbl_fn_8052190C_00000E68
lbl_fn_8052190C_00000E54:
    li r10, 0x1
    b lbl_fn_8052190C_00000E68
lbl_fn_8052190C_00000E5C:
    li r10, -0x1
    b lbl_fn_8052190C_00000E68
lbl_fn_8052190C_00000E64:
    li r10, -0x1
lbl_fn_8052190C_00000E68:
    cmpwi r10, 0x0
    bge lbl_fn_8052190C_00000EB0
    lfs f4, 0x4880(r3)
    add r7, r3, r5
    lfs f3, 0x487c(r3)
    addi r7, r7, 0x1914
    fneg f5, f4
    lfs f4, 0x4884(r3)
    fneg f6, f3
    fneg f3, f4
    stfs f5, 0xc(r1)
    stfs f6, 0x8(r1)
    frsp f2, f3
    psq_l f1, 0x0(r8), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f3, 0x10(r1)
    stfs f2, 0x8(r7)
    b lbl_fn_8052190C_00000ECC
lbl_fn_8052190C_00000EB0:
    addi r9, r3, 0x487c
    add r7, r3, r5
    lfs f2, 0x4884(r3)
    addi r7, r7, 0x1914
    psq_l f1, 0x0(r9), 0, 0
    psq_st f1, 0x0(r7), 0, 0
    stfs f2, 0x8(r7)
lbl_fn_8052190C_00000ECC:
    cmpwi r4, 0x0
    beq lbl_fn_8052190C_00000EE0
    add r7, r3, r5
    stfs f0, 0x1920(r7)
    stw r6, 0x1924(r7)
lbl_fn_8052190C_00000EE0:
    addi r11, r11, 0x1
    addi r5, r5, 0x14
lbl_fn_8052190C_00000EE8:
    lwz r0, 0x190c(r3)
    cmpw r11, r0
    blt lbl_fn_8052190C_00000E34
    addi r1, r1, 0x20
    blr
}

asm void fn_80521A04(void)
{
    nofralloc
    stwu r1, -0xd0(r1)
    mflr r0
    stw r0, 0xd4(r1)
    addi r11, r1, 0xa0
    stfd f31, 0xc0(r1)
    psq_st f31, 0xc8(r1), 0, 0
    stfd f30, 0xb0(r1)
    psq_st f30, 0xb8(r1), 0, 0
    stfd f29, 0xa0(r1)
    psq_st f29, 0xa8(r1), 0, 0
    bl _savegpr_19
    mr r26, r3
    lwz r3, lbl_8087F3C0
    mr r4, r26
    li r5, 0x1
    li r6, 0x0
    bl fn_80239DAC
    lwz r3, lbl_8087F430
    li r27, 0x0
    lis r31, lbl_8075BEC8@ha
    lfs f29, lbl_80887908
    lwz r28, 0x10d0(r3)
    addi r30, r1, 0x50
    lfs f30, lbl_80887904
    mr r21, r27
    lfs f31, lbl_808879E4
    mr r24, r27
    addi r29, r1, 0x38
    addi r31, r31, lbl_8075BEC8@l
    li r25, 0x0
    li r22, -0x1
    li r23, 0x1
    li r20, 0x6
lbl_fn_80521A04_00000F80:
    add r4, r31, r25
    lwz r0, 0x4(r4)
    cmpw r0, r28
    bgt lbl_fn_80521A04_00001158
    lwz r0, 0x8(r4)
    cmpw r0, r28
    ble lbl_fn_80521A04_00001158
    lwz r3, 0x19a8(r26)
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_80521A04_00001158
    lwz r0, 0x19cc(r26)
    mr r5, r26
    addi r3, r27, 0x1f4
    li r4, 0x0
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_80521A04_00000FF0
lbl_fn_80521A04_00000FC8:
    lwz r0, 0x19d0(r5)
    cmpw r3, r0
    bne lbl_fn_80521A04_00000FE4
    mulli r0, r4, 0x94
    add r3, r26, r0
    addi r19, r3, 0x19d0
    b lbl_fn_80521A04_00000FF4
lbl_fn_80521A04_00000FE4:
    addi r5, r5, 0x94
    addi r4, r4, 0x1
    bdnz lbl_fn_80521A04_00000FC8
lbl_fn_80521A04_00000FF0:
    li r19, 0x0
lbl_fn_80521A04_00000FF4:
    cmpwi r19, 0x0
    beq lbl_fn_80521A04_00001158
    lwz r0, 0x18(r19)
    cmpwi r0, 0x0
    beq lbl_fn_80521A04_00001158
    lwz r5, lbl_8087F3C0
    mr r3, r26
    li r4, 0x1
    stw r23, 0xbc(r5)
    lwz r5, lbl_8087F3C0
    stw r20, 0xb8(r5)
    bl fn_80232B7C
    add r3, r26, r25
    addi r3, r3, 0x4828
    psq_l f1, 0x0(r3), 0, 0
    lfs f2, 0x8(r3)
    stfs f2, 0x58(r1)
    psq_st f1, 0x0(r30), 0, 0
    lwz r3, 0x18(r19)
    lwz r3, 0x8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80521A04_00001050
    b lbl_fn_80521A04_00001054
lbl_fn_80521A04_00001050:
    li r3, 0x0
lbl_fn_80521A04_00001054:
    lfs f0, 0x5c(r3)
    cmpwi r27, 0x4
    lfs f3, 0x4c(r3)
    lfs f4, 0x3c(r3)
    stfs f4, 0x44(r1)
    stfs f3, 0x48(r1)
    stfs f0, 0x4c(r1)
    bne lbl_fn_80521A04_000010AC
    stw r21, 0x8(r1)
    addi r4, r26, 0x47f4
    lfs f1, lbl_808879E0
    addi r8, r1, 0x44
    stw r22, 0xc(r1)
    addi r9, r1, 0x50
    li r5, -0x1
    li r6, 0x0
    stw r23, 0x10(r1)
    li r7, 0x0
    li r10, 0x0
    lwz r3, lbl_8087F3C0
    bl fn_8023A680
    b lbl_fn_80521A04_00001148
lbl_fn_80521A04_000010AC:
    stfs f29, 0x28(r1)
    fmr f1, f29
    addi r4, r26, 0x47dc
    addi r7, r1, 0x44
    stfs f29, 0x2c(r1)
    addi r8, r1, 0x50
    addi r9, r1, 0x28
    stfs f29, 0x30(r1)
    li r5, 0x0
    li r6, 0x0
    li r10, -0x1
    stfs f29, 0x34(r1)
    stw r22, 0x8(r1)
    stw r23, 0xc(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
    stfs f30, 0x38(r1)
    fmr f2, f30
    mr r8, r30
    addi r4, r26, 0x47e8
    stfs f31, 0x3c(r1)
    addi r7, r1, 0x44
    addi r9, r1, 0x18
    psq_l f1, 0x0(r29), 0, 0
    li r5, 0x0
    psq_st f1, 0x0(r30), 0, 0
    fmr f1, f29
    li r6, 0x0
    li r10, -0x1
    stfs f2, 0x58(r1)
    stfs f29, 0x18(r1)
    stfs f29, 0x1c(r1)
    stfs f29, 0x20(r1)
    stfs f29, 0x24(r1)
    stw r22, 0x8(r1)
    stw r23, 0xc(r1)
    stfs f30, 0x40(r1)
    lwz r3, lbl_8087F3C0
    bl fn_8023A8B4
lbl_fn_80521A04_00001148:
    lwz r3, lbl_8087F3C0
    stw r24, 0xb8(r3)
    lwz r3, lbl_8087F3C0
    stw r24, 0xbc(r3)
lbl_fn_80521A04_00001158:
    addi r27, r27, 0x1
    addi r25, r25, 0xc
    cmpwi r27, 0x5
    blt lbl_fn_80521A04_00000F80
    addi r11, r1, 0xa0
    psq_l f31, 0xc8(r1), 0, 0
    lfd f31, 0xc0(r1)
    psq_l f30, 0xb8(r1), 0, 0
    lfd f30, 0xb0(r1)
    psq_l f29, 0xa8(r1), 0, 0
    lfd f29, 0xa0(r1)
    bl _restgpr_19
    lwz r0, 0xd4(r1)
    mtlr r0
    addi r1, r1, 0xd0
    blr
}

asm void fn_80521CA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    b lbl_fn_80521CA0_00001218
lbl_fn_80521CA0_000011C0:
    lwz r0, 0x50(r29)
    add r3, r0, r31
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80521CA0_000011E0
    lwz r3, 0x4(r5)
    addi r0, r3, 0x10
    b lbl_fn_80521CA0_000011E4
lbl_fn_80521CA0_000011E0:
    li r0, 0x0
lbl_fn_80521CA0_000011E4:
    cmpwi r0, 0x0
    beq lbl_fn_80521CA0_00001210
    cmpwi r5, 0x0
    lwz r3, 0x48(r29)
    li r4, 0x0
    beq lbl_fn_80521CA0_00001208
    lwz r5, 0x4(r5)
    addi r5, r5, 0x10
    b lbl_fn_80521CA0_0000120C
lbl_fn_80521CA0_00001208:
    li r5, 0x0
lbl_fn_80521CA0_0000120C:
    bl fn_80530D8C
lbl_fn_80521CA0_00001210:
    addi r31, r31, 0x40
    addi r30, r30, 0x1
lbl_fn_80521CA0_00001218:
    lwz r0, 0x4c(r29)
    cmpw r30, r0
    blt lbl_fn_80521CA0_000011C0
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80521D48(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_27
    lis r4, lbl_8075BF40@ha
    lfs f31, lbl_80887904
    addi r4, r4, lbl_8075BF40@l
    mr r27, r3
    addi r30, r4, 0x2e0
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_80521D48_000012C8
lbl_fn_80521D48_0000127C:
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    cmpwi r3, 0x0
    beq lbl_fn_80521D48_000012C0
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_80521D48_000012C0
    lwz r3, 0x50(r27)
    lwzx r3, r3, r29
    bl fn_80202118
    mr r31, r3
    mr r3, r30
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_80521D48_000012C0:
    addi r29, r29, 0x40
    addi r28, r28, 0x1
lbl_fn_80521D48_000012C8:
    lwz r0, 0x4c(r27)
    cmpw r28, r0
    blt lbl_fn_80521D48_0000127C
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80521DFC(void)
{
    nofralloc
    lis r4, lbl_807C9100@ha
    lfs f2, lbl_80887934
    addi r3, r4, lbl_807C9100@l
    lfs f1, lbl_80887904
    lfs f0, lbl_80887938
    stfs f2, lbl_807C9100@l(r4)
    stfs f1, 0x4(r3)
    stfs f0, 0x8(r3)
    blr
}

asm void fn_80521E20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80521E20_00001364
    lis r5, lbl_8075C6C4@ha
    li r3, 0x14c0
    addi r5, r5, lbl_8075C6C4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_80521E20_00001368
    mr r4, r31
    bl fn_80521E84
    b lbl_fn_80521E20_00001368
lbl_fn_80521E20_00001364:
    li r3, 0x0
lbl_fn_80521E20_00001368:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80521E84(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r31, r3
    bl fn_8050F940
    lfs f0, lbl_808879F0
    lis r3, lbl_80793610@ha
    li r29, 0x0
    lis r4, fn_80526660@ha
    addi r3, r3, lbl_80793610@l
    lis r5, fn_805226A8@ha
    stw r3, 0x0(r31)
    addi r3, r31, 0xf0
    addi r4, r4, fn_80526660@l
    addi r5, r5, fn_805226A8@l
    stfs f0, 0xd4(r31)
    li r6, 0xc
    li r7, 0x6
    stw r29, 0xd8(r31)
    stw r29, 0xdc(r31)
    stw r29, 0xe0(r31)
    stw r29, 0xe8(r31)
    bl fn_806958E0
    lfs f0, lbl_808879F0
    addi r30, r31, 0x184
    stfs f0, 0x180(r31)
    mr r3, r30
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    lis r4, fn_80522714@ha
    addi r3, r3, lbl_8078FBB0@l
    lis r5, fn_80522768@ha
    stw r3, 0x0(r30)
    addi r3, r31, 0x190
    addi r4, r4, fn_80522714@l
    addi r5, r5, fn_80522768@l
    stw r29, 0x18c(r31)
    li r6, 0x110
    li r7, 0x12
    bl fn_806958E0
    lwz r0, 0x98(r31)
    lis r3, lbl_8075C6C4@ha
    lfs f0, lbl_808879F0
    addi r3, r3, lbl_8075C6C4@l
    lfs f1, lbl_808879F4
    srwi. r0, r0, 31
    stfs f1, 0x14b0(r31)
    addi r29, r3, 0x1
    stfs f0, 0x14b4(r31)
    stfs f0, 0x14b8(r31)
    bne lbl_fn_80521E84_0000145C
    lbz r0, 0x98(r31)
    clrlwi r30, r0, 25
    b lbl_fn_80521E84_00001460
lbl_fn_80521E84_0000145C:
    lwz r30, 0x9c(r31)
lbl_fn_80521E84_00001460:
    lbz r0, 0xc(r1)
    mr r3, r29
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r30
    mr r6, r29
    addi r3, r31, 0x98
    add r7, r29, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    li r0, 0x7
    stw r0, 0x4c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_80521E84_00001520
    lis r5, lbl_8075C6C4@ha
    li r3, 0x1d0
    addi r5, r5, lbl_8075C6C4@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    li r5, 0x0
    addi r4, r4, fn_801D082C@l
    li r6, 0x40
    li r7, 0x7
    bl fn_80695720
    lwz r4, 0x50(r31)
    cmpwi r4, 0x0
    stw r3, 0x50(r31)
    beq lbl_fn_80521E84_000014EC
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_000014EC:
    lis r6, lbl_8075C300@ha
    lwz r4, 0x4c(r31)
    lwz r5, 0x50(r31)
    mr r3, r31
    addi r6, r6, lbl_8075C300@l
    li r7, 0x0
    li r8, 0x0
    bl fn_8050FB3C
    lwz r4, 0x4c(r31)
    mr r3, r31
    lwz r5, 0x50(r31)
    li r6, 0x1
    bl fn_8050FC8C
lbl_fn_80521E84_00001520:
    lwz r12, 0x5c(r31)
    lis r29, lbl_8075C6C4@ha
    addi r29, r29, lbl_8075C6C4@l
    addi r3, r31, 0x5c
    lwz r12, 0xc(r12)
    addi r4, r29, 0xe
    mtctr r12
    bctrl
    mr r3, r31
    addi r4, r29, 0x2b
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0xf0(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x1
    stw r0, 0xf4(r31)
    mr r5, r29
    mr r6, r29
    li r3, 0x30
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80526694@ha
    li r5, 0x0
    addi r4, r4, fn_80526694@l
    li r6, 0x20
    li r7, 0x1
    bl fn_80695720
    lwz r4, 0xf8(r31)
    cmpwi r4, 0x0
    stw r3, 0xf8(r31)
    beq lbl_fn_80521E84_000015AC
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_000015AC:
    mr r6, r31
    addi r3, r31, 0xf0
    li r4, 0x0
    li r5, 0x4
    bl fn_805266C0
    lis r29, lbl_8075C6C4@ha
    mr r3, r31
    addi r29, r29, lbl_8075C6C4@l
    li r5, 0x1
    addi r4, r29, 0x4f
    bl fn_80201E78
    stw r3, 0xfc(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x2
    stw r0, 0x100(r31)
    mr r5, r29
    mr r6, r29
    li r3, 0x50
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80526694@ha
    li r5, 0x0
    addi r4, r4, fn_80526694@l
    li r6, 0x20
    li r7, 0x2
    bl fn_80695720
    lwz r4, 0x104(r31)
    cmpwi r4, 0x0
    stw r3, 0x104(r31)
    beq lbl_fn_80521E84_00001634
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_00001634:
    mr r6, r31
    addi r3, r31, 0xfc
    li r4, 0x0
    li r5, 0x7
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0xfc
    li r4, 0x1
    li r5, 0x9
    bl fn_805266C0
    lis r29, lbl_8075C6C4@ha
    mr r3, r31
    addi r29, r29, lbl_8075C6C4@l
    li r5, 0x1
    addi r4, r29, 0x75
    bl fn_80201E78
    stw r3, 0x108(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x6
    stw r0, 0x10c(r31)
    mr r5, r29
    mr r6, r29
    li r3, 0xd0
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80526694@ha
    li r5, 0x0
    addi r4, r4, fn_80526694@l
    li r6, 0x20
    li r7, 0x6
    bl fn_80695720
    lwz r4, 0x110(r31)
    cmpwi r4, 0x0
    stw r3, 0x110(r31)
    beq lbl_fn_80521E84_000016D0
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_000016D0:
    mr r6, r31
    addi r3, r31, 0x108
    li r4, 0x0
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x108
    li r4, 0x1
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x108
    li r4, 0x2
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x108
    li r4, 0x3
    li r5, 0x3
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x108
    li r4, 0x4
    li r5, 0x5
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x108
    li r4, 0x5
    li r5, 0x5
    bl fn_805266C0
    lis r29, lbl_8075C6C4@ha
    mr r3, r31
    addi r29, r29, lbl_8075C6C4@l
    li r5, 0x1
    addi r4, r29, 0x9b
    bl fn_80201E78
    stw r3, 0x114(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x3
    stw r0, 0x118(r31)
    mr r5, r29
    mr r6, r29
    li r3, 0x70
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80526694@ha
    li r5, 0x0
    addi r4, r4, fn_80526694@l
    li r6, 0x20
    li r7, 0x3
    bl fn_80695720
    lwz r4, 0x11c(r31)
    cmpwi r4, 0x0
    stw r3, 0x11c(r31)
    beq lbl_fn_80521E84_000017BC
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_000017BC:
    mr r6, r31
    addi r3, r31, 0x114
    li r4, 0x0
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x114
    li r4, 0x1
    li r5, 0x5
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x114
    li r4, 0x2
    li r5, 0x5
    bl fn_805266C0
    lis r29, lbl_8075C6C4@ha
    mr r3, r31
    addi r29, r29, lbl_8075C6C4@l
    li r5, 0x1
    addi r4, r29, 0xbb
    bl fn_80201E78
    stw r3, 0x120(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x8
    stw r0, 0x124(r31)
    mr r5, r29
    mr r6, r29
    li r3, 0x110
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80526694@ha
    li r5, 0x0
    addi r4, r4, fn_80526694@l
    li r6, 0x20
    li r7, 0x8
    bl fn_80695720
    lwz r4, 0x128(r31)
    cmpwi r4, 0x0
    stw r3, 0x128(r31)
    beq lbl_fn_80521E84_0000186C
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_0000186C:
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x0
    li r5, 0x6
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x1
    li r5, 0x3
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x2
    li r5, 0x3
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x3
    li r5, 0x3
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x4
    li r5, 0x3
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x5
    li r5, 0x3
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x6
    li r5, 0x6
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x120
    li r4, 0x7
    li r5, 0x3
    bl fn_805266C0
    lis r29, lbl_8075C6C4@ha
    mr r3, r31
    addi r29, r29, lbl_8075C6C4@l
    li r5, 0x1
    addi r4, r29, 0xdb
    bl fn_80201E78
    stw r3, 0x12c(r31)
    li r4, 0x1
    bl fn_800D246C
    li r0, 0x5
    stw r0, 0x130(r31)
    mr r5, r29
    mr r6, r29
    li r3, 0xb0
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80526694@ha
    li r5, 0x0
    addi r4, r4, fn_80526694@l
    li r6, 0x20
    li r7, 0x5
    bl fn_80695720
    lwz r4, 0x134(r31)
    cmpwi r4, 0x0
    stw r3, 0x134(r31)
    beq lbl_fn_80521E84_00001980
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_80521E84_00001980:
    mr r6, r31
    addi r3, r31, 0x12c
    li r4, 0x0
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x12c
    li r4, 0x1
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x12c
    li r4, 0x2
    li r5, 0xb
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x12c
    li r4, 0x3
    li r5, 0x2
    bl fn_805266C0
    mr r6, r31
    addi r3, r31, 0x12c
    li r4, 0x4
    li r5, 0x8
    bl fn_805266C0
    lis r29, lbl_8075C6C4@ha
    mr r3, r31
    addi r29, r29, lbl_8075C6C4@l
    li r5, 0x1
    addi r4, r29, 0xfa
    bl fn_80201E78
    stw r3, 0x138(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x125
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x13c(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x14a
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x140(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x16f
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x144(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x199
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x148(r31)
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_808879F0
    li r30, 0x0
    stfs f0, 0x14c(r31)
    mr r3, r31
    addi r4, r29, 0x1c3
    li r5, 0x0
    stfs f0, 0x150(r31)
    stw r30, 0x170(r31)
    bl fn_801F3FF8
    stw r3, 0x174(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x1e5
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x178(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r29, 0x206
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x17c(r31)
    li r4, 0x1
    bl fn_800D246C
    stw r30, 0x18c(r31)
    addi r3, r31, 0x184
    addi r4, r29, 0x226
    lwz r12, 0x184(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    li r26, 0x0
    li r30, 0x0
lbl_fn_80521E84_00001B04:
    add r3, r31, r30
    li r4, 0x1
    lwz r3, 0xf0(r3)
    bl fn_802020B4
    add r27, r30, r31
    li r29, 0x0
    li r28, 0x0
    b lbl_fn_80521E84_00001B40
lbl_fn_80521E84_00001B24:
    lwz r0, 0xf8(r27)
    li r4, 0x1
    add r3, r0, r28
    lwz r3, 0x18(r3)
    bl fn_80202CA4
    addi r28, r28, 0x20
    addi r29, r29, 0x1
lbl_fn_80521E84_00001B40:
    lwz r0, 0xf4(r27)
    cmpw r29, r0
    blt lbl_fn_80521E84_00001B24
    addi r26, r26, 0x1
    addi r30, r30, 0xc
    cmpwi r26, 0x6
    blt lbl_fn_80521E84_00001B04
    lfs f1, lbl_808879F8
    li r0, 0x0
    lfs f0, lbl_808879F0
    addi r11, r1, 0x30
    stw r0, 0x154(r31)
    mr r3, r31
    stw r0, 0x158(r31)
    stfs f1, 0x160(r31)
    stfs f0, 0x168(r31)
    stw r0, 0x15c(r31)
    stfs f1, 0x164(r31)
    stfs f0, 0x16c(r31)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
