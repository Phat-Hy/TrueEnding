#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_21(void);
extern void _restgpr_22(void);
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_21(void);
extern void _savegpr_22(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013F78(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_80087BB4(void);
extern void fn_80087E9C(void);
extern void fn_80088724(void);
extern void fn_80088AF4(void);
extern void fn_8008937C(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_801D082C(void);
extern void fn_801F3FF8(void);
extern void fn_801F6C80(void);
extern void fn_801F7590(void);
extern void fn_801F837C(void);
extern void fn_801F8598(void);
extern void fn_801FECE0(void);
extern void fn_80201E78(void);
extern void fn_80202118(void);
extern void fn_80202A6C(void);
extern void fn_80202D00(void);
extern void fn_80206C50(void);
extern void fn_80211480(void);
extern void fn_8021175C(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_802376D0(void);
extern void fn_802377B8(void);
extern void fn_8023780C(void);
extern void fn_8023781C(void);
extern void fn_80237874(void);
extern void fn_804444E8(void);
extern void fn_80444BE8(void);
extern void fn_80444C48(void);
extern void fn_80444C50(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_804A3C24(void);
extern void fn_804A436C(void);
extern void fn_804A4494(void);
extern void fn_804A7DD4(void);
extern void fn_8050F940(void);
extern void fn_8050FA80(void);
extern void fn_8050FB3C(void);
extern void fn_8050FD3C(void);
extern void fn_805113EC(void);
extern void fn_805114D8(void);
extern void fn_805115D4(void);
extern void fn_80517B40(void);
extern void fn_80520638(void);
extern void fn_8052DEF0(void);
extern void fn_80695720(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_8075BB80[];
extern u8 lbl_8075BD88[];
extern u8 lbl_8075BF40[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_807934F4[];
extern u8 lbl_80793508[];
extern u8 lbl_807C90F0[];
extern u8 lbl_807C9100[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_808878B8;
extern u32 lbl_808878E0;
extern u32 lbl_808878EC;
extern u32 lbl_808878F0;
extern u32 lbl_808878F4;
extern u32 lbl_808878F8;
extern u32 lbl_808878FC;
extern u32 lbl_80887900;
extern u32 lbl_80887904;
extern u32 lbl_80887908;
extern u32 lbl_8088790C;
extern u32 lbl_80887910;
extern u32 lbl_80887914;
extern u32 lbl_80887918;
extern u32 lbl_8088791C;
extern u32 lbl_80887920;
extern u32 lbl_80887924;
extern u32 lbl_80887928;
extern u32 lbl_8088792C;
extern u32 lbl_80887930;
extern u32 lbl_80887934;
extern u32 lbl_80887938;
extern u32 lbl_8088793C;
extern u32 lbl_80887940;
extern u32 lbl_80887944;
extern u32 lbl_80887948;
extern u32 lbl_8088794C;
extern u32 lbl_80887950;
extern u32 lbl_80887954;
extern u32 lbl_80887958;
extern u32 lbl_8088795C;
extern u32 lbl_80887960;
extern u32 lbl_80887964;
extern u32 lbl_80887968;
extern u32 lbl_8088796C;
extern u32 lbl_80887970;
extern u32 lbl_80887974;
extern u32 lbl_80887978;
extern u32 lbl_8088797C;
extern u32 lbl_80887980;
extern u32 lbl_80887984;

/* Function declarations */
void fn_8051B168(void);
void fn_8051B368(void);
void fn_8051B440(void);
void fn_8051B548(void);
void fn_8051B7CC(void);
void fn_8051B904(void);
void fn_8051B924(void);
void fn_8051B988(void);
void fn_8051C2AC(void);
void fn_8051C3E0(void);
void fn_8051C754(void);
void fn_8051CA78(void);

asm void fn_8051B168(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_22
    lis r5, lbl_8075BB80@ha
    lis r4, lbl_807934F4@ha
    mr r28, r3
    addi r31, r1, 0x18
    addi r24, r5, lbl_8075BB80@l
    addi r25, r4, lbl_807934F4@l
    li r30, 0x0
    li r27, 0x0
lbl_fn_8051B168_00000034:
    add r3, r28, r27
    lwz r3, 0xf4(r3)
    bl fn_80202D00
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_8051B168_000001A8
    lwz r3, 0xe8(r28)
    li r23, 0x0
    lwz r0, 0xd8(r28)
    add r3, r3, r30
    cmpw r3, r0
    bge lbl_fn_8051B168_00000194
    mulli r0, r3, 0x18
    lwz r3, 0xd4(r28)
    add r26, r3, r0
    lwzx r3, r3, r0
    bl fn_80211480
    cmpwi r3, 0x0
    mr r22, r3
    beq lbl_fn_8051B168_00000194
    lwz r0, 0x8(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8051B168_00000104
    bl fn_8021175C
    cmpwi r3, 0x0
    beq lbl_fn_8051B168_000000B0
    mr r3, r29
    addi r4, r24, 0x157
    addi r5, r25, 0x8
    bl fn_801F837C
    b lbl_fn_8051B168_000000D0
lbl_fn_8051B168_000000B0:
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r22)
    bl fn_804444E8
    mr r5, r3
    mr r3, r29
    addi r4, r24, 0x157
    li r6, 0x0
    bl fn_801F8598
lbl_fn_8051B168_000000D0:
    lwz r5, 0x8(r22)
    mr r3, r29
    addi r4, r24, 0x15b
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    mr r4, r22
    bl fn_80444BE8
    mr r22, r3
    lwz r4, lbl_8087F4F0
    mr r5, r22
    addi r3, r1, 0x28
    bl fn_80444C50
    b lbl_fn_8051B168_00000160
lbl_fn_8051B168_00000104:
    lwz r3, 0x4(r3)
    bl fn_80206C50
    mr r26, r3
    mr r3, r29
    addi r4, r24, 0x157
    addi r5, r25, 0xe
    bl fn_801F837C
    lwz r5, 0xb8(r26)
    mr r3, r29
    lwz r6, lbl_8087F1E4
    addi r4, r24, 0x15b
    addi r0, r5, 0xeb
    slwi r0, r0, 3
    add r5, r6, r0
    lwz r5, 0x4(r5)
    cmpwi r5, 0x0
    beq lbl_fn_8051B168_0000014C
    b lbl_fn_8051B168_00000150
lbl_fn_8051B168_0000014C:
    la r5, lbl_808813D0
lbl_fn_8051B168_00000150:
    bl fn_801F837C
    lwz r3, lbl_8087F4F0
    bl fn_80444C48
    mr r22, r3
lbl_fn_8051B168_00000160:
    lwz r4, lbl_8087F4F0
    mr r5, r22
    addi r3, r1, 0x18
    bl fn_80444C50
    addi r5, r1, 0x8
    psq_l f1, 0x0(r31), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    mr r3, r29
    psq_st f1, 0x0(r5), 0, 0
    addi r4, r24, 0x160
    psq_st f2, 0x8(r5), 0, 0
    bl fn_801F7590
    li r23, 0x1
lbl_fn_8051B168_00000194:
    add r3, r28, r27
    lwz r3, 0xf4(r3)
    lwz r0, 0x104(r3)
    rlwimi r0, r23, 23, 8, 8
    stw r0, 0x104(r3)
lbl_fn_8051B168_000001A8:
    addi r30, r30, 0x1
    addi r27, r27, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_8051B168_00000034
    lwz r0, 0xd8(r28)
    cmpwi r0, 0x0
    beq lbl_fn_8051B168_000001D8
    lwz r3, 0x120(r28)
    lwz r0, 0x104(r3)
    rlwinm r0, r0, 0, 9, 7
    stw r0, 0x104(r3)
    b lbl_fn_8051B168_000001E8
lbl_fn_8051B168_000001D8:
    lwz r3, 0x120(r28)
    lwz r0, 0x104(r3)
    oris r0, r0, 0x80
    stw r0, 0x104(r3)
lbl_fn_8051B168_000001E8:
    addi r11, r1, 0x60
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8051B368(void)
{
    nofralloc
    lwz r9, 0x0(r6)
    li r12, 0x0
    lwz r8, 0x0(r5)
    mr r0, r12
    li r7, 0x0
    subf r11, r9, r8
    b lbl_fn_8051B368_00000288
lbl_fn_8051B368_0000021C:
    lwz r9, 0xd4(r3)
    lwz r8, 0x0(r4)
    add r10, r9, r7
    lwzx r9, r9, r7
    cmpw r9, r8
    bne lbl_fn_8051B368_00000280
    lwz r9, 0x8(r10)
    lwz r8, 0x8(r4)
    cmpw r9, r8
    bne lbl_fn_8051B368_00000280
    lwz r9, 0xc(r10)
    lwz r8, 0xc(r4)
    cmpw r9, r8
    bne lbl_fn_8051B368_00000280
    subf r9, r11, r12
    stw r12, 0x0(r5)
    neg r8, r9
    andc r8, r8, r9
    srawi r8, r8, 31
    and r8, r9, r8
    stw r8, 0x0(r6)
    lwz r8, 0xd8(r3)
    cmplwi r8, 0xa
    bge lbl_fn_8051B368_00000280
    stw r0, 0x0(r6)
lbl_fn_8051B368_00000280:
    addi r12, r12, 0x1
    addi r7, r7, 0x18
lbl_fn_8051B368_00000288:
    lwz r8, 0xd8(r3)
    cmpw r12, r8
    blt lbl_fn_8051B368_0000021C
    lwz r0, 0x0(r5)
    cmpw r0, r8
    blt lbl_fn_8051B368_000002B0
    subi r3, r8, 0x1
    srawi r0, r3, 31
    andc r0, r3, r0
    stw r0, 0x0(r5)
lbl_fn_8051B368_000002B0:
    cmpwi r8, 0xa
    bltlr
    lwz r3, 0x0(r6)
    subi r4, r8, 0x1
    addi r0, r3, 0x9
    cmpw r4, r0
    bgtlr
    subi r0, r8, 0xa
    stw r0, 0x0(r6)
    blr
}

asm void fn_8051B440(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x7
    li r5, 0x7
    stw r0, 0x24(r1)
    li r6, 0x1
    li r7, 0x4
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r31, lbl_8087EF70
    lwzu r30, 0xe0(r3)
    bl fn_804A436C
    lwz r0, 0xe0(r29)
    cmpw r30, r0
    beq lbl_fn_8051B440_00000338
    li r0, 0x0
    stw r0, 0xe8(r29)
    mr r3, r29
    stw r0, 0xe4(r29)
    bl fn_80517B40
    mr r3, r29
    bl fn_8051B168
lbl_fn_8051B440_00000338:
    mr r3, r31
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051B440_00000388
    lwz r0, 0xd8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8051B440_000003C4
    li r0, 0x1
    stw r0, 0x7c(r29)
    b lbl_fn_8051B440_0000036C
    bl fn_8051B168
lbl_fn_8051B440_0000036C:
    addi r3, r1, 0xc
    li r4, 0x1
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8051B440_000003C4
lbl_fn_8051B440_00000388:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051B440_000003C4
    lwz r3, 0x48(r29)
    li r4, 0x0
    bl fn_8052DEF0
    addi r3, r1, 0x8
    li r4, 0x8
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
lbl_fn_8051B440_000003C4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8051B548(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    lwz r5, 0xd8(r3)
    lwz r30, lbl_8087EF70
    cmpwi r5, 0x0
    lwz r29, 0xe4(r3)
    beq lbl_fn_8051B548_0000043C
    addi r4, r3, 0xe8
    li r6, 0xa
    li r7, 0x1
    li r8, 0x3
    addi r3, r3, 0xe4
    bl fn_804A4494
    lwz r0, 0xe4(r31)
    cmpw r29, r0
    beq lbl_fn_8051B548_0000043C
    mr r3, r31
    bl fn_8051B168
lbl_fn_8051B548_0000043C:
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051B548_00000480
    li r0, 0x0
    stw r0, 0x7c(r31)
    mr r3, r31
    bl fn_8051B168
    addi r3, r1, 0x10
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_8051B548_000005BC
lbl_fn_8051B548_00000480:
    mr r3, r30
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051B548_00000520
    addi r3, r1, 0xc
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xe4(r31)
    li r5, 0x0
    lwz r4, 0xd4(r31)
    mr r3, r31
    mulli r0, r0, 0x18
    stw r5, 0xec(r31)
    add r5, r4, r0
    lwzx r4, r4, r0
    lwz r0, 0x4(r5)
    stw r0, 0x34(r1)
    stw r4, 0x30(r1)
    lwz r4, 0x8(r5)
    lwz r0, 0xc(r5)
    stw r0, 0x3c(r1)
    stw r4, 0x38(r1)
    lwz r4, 0x10(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x44(r1)
    stw r4, 0x40(r1)
    bl fn_80517B40
    mr r3, r31
    addi r4, r1, 0x30
    addi r5, r31, 0xe4
    addi r6, r31, 0xe8
    bl fn_8051B368
    mr r3, r31
    bl fn_8051B168
    b lbl_fn_8051B548_000005BC
lbl_fn_8051B548_00000520:
    mr r3, r30
    li r4, 0x0
    li r5, 0xd
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_8051B548_000005BC
    addi r3, r1, 0x8
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xe4(r31)
    li r5, 0x1
    lwz r4, 0xd4(r31)
    mr r3, r31
    mulli r0, r0, 0x18
    stw r5, 0xec(r31)
    add r5, r4, r0
    lwzx r4, r4, r0
    lwz r0, 0x4(r5)
    stw r0, 0x1c(r1)
    stw r4, 0x18(r1)
    lwz r4, 0x8(r5)
    lwz r0, 0xc(r5)
    stw r0, 0x24(r1)
    stw r4, 0x20(r1)
    lwz r4, 0x10(r5)
    lwz r0, 0x14(r5)
    stw r0, 0x2c(r1)
    stw r4, 0x28(r1)
    bl fn_80517B40
    mr r3, r31
    addi r4, r1, 0x18
    addi r5, r31, 0xe4
    addi r6, r31, 0xe8
    bl fn_8051B368
    mr r3, r31
    bl fn_8051B168
lbl_fn_8051B548_000005BC:
    lwz r3, 0xe4(r31)
    lwz r0, 0xd8(r31)
    cmpw r3, r0
    bge lbl_fn_8051B548_00000648
    mulli r0, r3, 0x18
    lwz r3, 0xd4(r31)
    add r30, r3, r0
    lwz r0, 0x8(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8051B548_0000060C
    lwz r3, 0x0(r30)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_8051B548_0000062C
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
    b lbl_fn_8051B548_0000062C
lbl_fn_8051B548_0000060C:
    lwz r31, lbl_8087F580
    li r3, 0x1
    li r4, 0x15b
    bl fn_80116FC0
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_804A3C24
lbl_fn_8051B548_0000062C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x488(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8051B548_00000648
    lwz r3, lbl_8087F580
    lwz r4, 0x0(r30)
    bl fn_804A7DD4
lbl_fn_8051B548_00000648:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8051B7CC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    lis r4, lbl_8075BB80@ha
    lfs f31, lbl_808878B8
    mr r26, r3
    li r27, 0x0
    addi r30, r4, lbl_8075BB80@l
    li r28, 0x0
    b lbl_fn_8051B7CC_00000730
lbl_fn_8051B7CC_0000069C:
    lwz r0, 0x50(r26)
    add r3, r0, r28
    lha r0, 0x4(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8051B7CC_000006E4
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8051B7CC_00000728
    bl fn_80202D00
    cmpwi r3, 0x0
    beq lbl_fn_8051B7CC_00000728
    lwz r3, 0x50(r26)
    lwzx r3, r3, r28
    bl fn_80202D00
    fmr f1, f31
    addi r4, r30, 0x167
    bl fn_801F6C80
    b lbl_fn_8051B7CC_00000728
lbl_fn_8051B7CC_000006E4:
    lwz r3, 0x0(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8051B7CC_00000728
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051B7CC_00000728
    lwz r3, 0x50(r26)
    addi r29, r30, 0x167
    lwzx r3, r3, r28
    bl fn_80202118
    mr r31, r3
    mr r3, r29
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_8051B7CC_00000728:
    addi r28, r28, 0x40
    addi r27, r27, 0x1
lbl_fn_8051B7CC_00000730:
    lwz r0, 0x4c(r26)
    cmpw r27, r0
    blt lbl_fn_8051B7CC_0000069C
    lwz r3, 0x11c(r26)
    bl fn_80202118
    cmpwi r3, 0x0
    beq lbl_fn_8051B7CC_0000077C
    lis r4, lbl_8075BB80@ha
    lwz r3, 0x11c(r26)
    addi r4, r4, lbl_8075BB80@l
    addi r29, r4, 0x167
    bl fn_80202118
    mr r31, r3
    mr r3, r29
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r31, 0x58
    bl fn_801FECE0
lbl_fn_8051B7CC_0000077C:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8051B904(void)
{
    nofralloc
    lis r4, lbl_807C90F0@ha
    lfs f1, lbl_808878B8
    addi r3, r4, lbl_807C90F0@l
    lfs f0, lbl_808878E0
    stfs f1, lbl_807C90F0@l(r4)
    stfs f0, 0x4(r3)
    stfs f1, 0x8(r3)
    blr
}

asm void fn_8051B924(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8051B924_00000808
    lis r5, lbl_8075BF40@ha
    li r3, 0x48c0
    addi r5, r5, lbl_8075BF40@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8051B924_0000080C
    mr r4, r31
    bl fn_8051B988
    b lbl_fn_8051B924_0000080C
lbl_fn_8051B924_00000808:
    li r3, 0x0
lbl_fn_8051B924_0000080C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8051B988(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    addi r11, r1, 0xd0
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    bl _savegpr_24
    mr r31, r3
    bl fn_8050F940
    lis r4, lbl_80793508@ha
    li r3, 0x0
    addi r4, r4, lbl_80793508@l
    li r0, 0x1
    stw r4, 0x0(r31)
    addi r4, r31, 0xe0
    lfs f3, lbl_80887904
    addi r5, r31, 0x8e0
    stb r3, 0xd4(r31)
    lfs f0, lbl_80887908
    stb r3, 0xd5(r31)
    stb r3, 0xd6(r31)
    stb r3, 0xd7(r31)
    stw r3, 0xd8(r31)
    stw r0, 0xdc(r31)
lbl_fn_8051B988_00000890:
    stw r3, 0x0(r4)
    stw r3, 0x8(r4)
    stb r3, 0x3c(r4)
    stfs f3, 0x38(r4)
    stfs f3, 0x30(r4)
    stfs f3, 0x2c(r4)
    stfs f3, 0x28(r4)
    stfs f3, 0x24(r4)
    stfs f3, 0x1c(r4)
    stfs f3, 0x18(r4)
    stfs f3, 0x14(r4)
    stfs f3, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    sth r3, 0x4(r4)
    addi r4, r4, 0x40
    cmplw r4, r5
    blt lbl_fn_8051B988_00000890
    lfs f3, lbl_80887904
    addi r4, r31, 0x10e0
    lfs f0, lbl_80887908
    li r0, 0x0
lbl_fn_8051B988_000008EC:
    stw r0, 0x0(r5)
    stw r0, 0x8(r5)
    stb r0, 0x3c(r5)
    stfs f3, 0x38(r5)
    stfs f3, 0x30(r5)
    stfs f3, 0x2c(r5)
    stfs f3, 0x28(r5)
    stfs f3, 0x24(r5)
    stfs f3, 0x1c(r5)
    stfs f3, 0x18(r5)
    stfs f3, 0x14(r5)
    stfs f3, 0x10(r5)
    stfs f0, 0x34(r5)
    stfs f0, 0x20(r5)
    stfs f0, 0xc(r5)
    sth r0, 0x4(r5)
    addi r5, r5, 0x40
    cmplw r5, r4
    blt lbl_fn_8051B988_000008EC
    lfs f3, lbl_80887904
    addi r0, r31, 0x18e0
    lfs f0, lbl_80887908
    li r3, 0x0
lbl_fn_8051B988_00000948:
    stw r3, 0x0(r4)
    stw r3, 0x8(r4)
    stb r3, 0x3c(r4)
    stfs f3, 0x38(r4)
    stfs f3, 0x30(r4)
    stfs f3, 0x2c(r4)
    stfs f3, 0x28(r4)
    stfs f3, 0x24(r4)
    stfs f3, 0x1c(r4)
    stfs f3, 0x18(r4)
    stfs f3, 0x14(r4)
    stfs f3, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    sth r3, 0x4(r4)
    addi r4, r4, 0x40
    cmplw r4, r0
    blt lbl_fn_8051B988_00000948
    lfs f0, lbl_8088790C
    li r29, 0x0
    li r0, 0x4
    li r30, -0x1
    addi r28, r31, 0x19c4
    stw r29, 0x1910(r31)
    mr r3, r28
    stw r29, 0x198c(r31)
    stw r29, 0x1990(r31)
    stw r0, 0x1998(r31)
    stw r0, 0x199c(r31)
    stw r30, 0x19a0(r31)
    stw r30, 0x19a4(r31)
    stw r29, 0x19a8(r31)
    stw r29, 0x19b4(r31)
    stfs f3, 0x19b8(r31)
    stfs f0, 0x19bc(r31)
    stfs f3, 0x19c0(r31)
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    stw r29, 0x19cc(r31)
    addi r3, r3, lbl_8078FBB0@l
    lfs f0, lbl_80887904
    stw r3, 0x0(r28)
    addi r4, r31, 0x19d0
    addi r6, r31, 0x3ed0
lbl_fn_8051B988_000009FC:
    addi r5, r4, 0x74
    addi r3, r4, 0x94
    stw r30, 0x6c(r4)
    cmplw r5, r3
    stw r30, 0x70(r4)
    bge lbl_fn_8051B988_00000A38
    addi r0, r3, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_8051B988_00000A38
lbl_fn_8051B988_00000A28:
    stw r30, 0x0(r5)
    stw r30, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_8051B988_00000A28
lbl_fn_8051B988_00000A38:
    stw r30, 0x10(r4)
    stw r29, 0x14(r4)
    stw r29, 0x18(r4)
    stw r29, 0x1c(r4)
    stw r29, 0x20(r4)
    stw r29, 0x24(r4)
    stfs f0, 0x28(r4)
    addi r4, r4, 0x94
    cmplw r4, r6
    blt lbl_fn_8051B988_000009FC
    addi r7, r31, 0x45d4
    addi r5, r31, 0x3ef0
    cmplw r5, r7
    li r0, 0x0
    stw r0, 0x3ed0(r31)
    stw r0, 0x3ed4(r31)
    bge lbl_fn_8051B988_00000B20
    addi r0, r31, 0x3ef0
    subi r6, r7, 0xe0
    cmplw r0, r7
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_8051B988_00000A98
    li r3, 0x1
lbl_fn_8051B988_00000A98:
    cmpwi r3, 0x0
    beq lbl_fn_8051B988_00000AA4
    li r0, 0x1
lbl_fn_8051B988_00000AA4:
    cmpwi r0, 0x0
    beq lbl_fn_8051B988_00000AF4
    addi r3, r6, 0xdf
    li r0, 0xe0
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r6
    bge lbl_fn_8051B988_00000AF4
lbl_fn_8051B988_00000ACC:
    stw r4, 0x0(r5)
    stw r4, 0x1c(r5)
    stw r4, 0x38(r5)
    stw r4, 0x54(r5)
    stw r4, 0x70(r5)
    stw r4, 0x8c(r5)
    stw r4, 0xa8(r5)
    stw r4, 0xc4(r5)
    addi r5, r5, 0xe0
    bdnz lbl_fn_8051B988_00000ACC
lbl_fn_8051B988_00000AF4:
    addi r3, r7, 0x1b
    li r0, 0x1c
    subf r3, r5, r3
    li r4, 0x0
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r7
    bge lbl_fn_8051B988_00000B20
lbl_fn_8051B988_00000B14:
    stw r4, 0x0(r5)
    addi r5, r5, 0x1c
    bdnz lbl_fn_8051B988_00000B14
lbl_fn_8051B988_00000B20:
    addi r3, r31, 0x45d4
    li r4, 0x0
    li r5, 0x100
    bl memset
    li r30, 0x0
    stw r30, 0x46d4(r31)
    addi r3, r31, 0x47dc
    stw r30, 0x46d8(r31)
    bl fn_802377B8
    addi r3, r31, 0x47e8
    bl fn_802377B8
    addi r3, r31, 0x47f4
    bl fn_80237518
    lis r4, lbl_807C9100@ha
    lwz r5, 0x1910(r31)
    addi r4, r4, lbl_807C9100@l
    addi r3, r31, 0x4800
    psq_l f1, 0x0(r4), 0, 0
    cmpwi r5, 0x0
    lfs f2, 0x8(r4)
    lfs f7, lbl_80887904
    lfs f11, lbl_80887910
    lfs f10, lbl_80887914
    lfs f9, lbl_80887918
    lfs f8, lbl_8088791C
    lfs f6, lbl_80887920
    lfs f5, lbl_80887924
    lfs f4, lbl_80887928
    lfs f3, lbl_8088792C
    lfs f0, lbl_80887930
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x4808(r31)
    stfs f11, 0x4818(r31)
    stfs f10, 0x481c(r31)
    stfs f9, 0x4820(r31)
    stfs f8, 0x4824(r31)
    stfs f7, 0x487c(r31)
    stfs f6, 0x4880(r31)
    stfs f7, 0x4884(r31)
    stw r30, 0x48a8(r31)
    stfs f5, 0x48ac(r31)
    stfs f4, 0x48b0(r31)
    stfs f3, 0x48b4(r31)
    stfs f0, 0x48b8(r31)
    stw r30, 0x1910(r31)
    beq lbl_fn_8051B988_00000BE0
    subi r3, r5, 0x10
    bl fn_80084C24
lbl_fn_8051B988_00000BE0:
    lfs f29, lbl_80887904
    addi r3, r1, 0xa0
    lfs f31, lbl_80887908
    addi r4, r1, 0x94
    lfs f30, lbl_80887938
    addi r6, r1, 0x88
    lfs f12, lbl_80887930
    addi r5, r31, 0x4828
    lfs f13, lbl_8088793C
    fmr f2, f30
    lfs f0, lbl_80887934
    addi r8, r1, 0x7c
    stfs f0, 0xa0(r1)
    addi r7, r31, 0x4834
    lfs f11, lbl_80887940
    stfs f29, 0xa4(r1)
    addi r10, r1, 0x70
    lfs f8, lbl_8088794C
    addi r9, r31, 0x4840
    lfs f7, lbl_80887950
    addi r12, r1, 0x64
    lfs f6, lbl_80887954
    addi r11, r31, 0x484c
    lfs f5, lbl_80887958
    addi r29, r1, 0x58
    lfs f4, lbl_8088795C
    addi r28, r31, 0x4858
    lfs f3, lbl_80887960
    psq_l f1, 0x0(r3), 0, 0
    stfs f2, 0xd0(r31)
    fmr f2, f31
    lfs f10, lbl_80887944
    stfs f2, 0xc4(r31)
    fmr f2, f29
    lfs f9, lbl_80887948
    stfs f31, 0x94(r1)
    lfs f0, lbl_80887964
    stfs f31, 0x98(r1)
    psq_st f1, 0xc8(r31), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f29, 0x88(r1)
    stfs f13, 0x8c(r1)
    psq_st f1, 0xbc(r31), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f12, 0x7c(r1)
    stfs f11, 0x80(r1)
    psq_st f1, 0x0(r5), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f29, 0x70(r1)
    stfs f10, 0x74(r1)
    psq_st f1, 0x0(r7), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f12, 0x64(r1)
    stfs f13, 0x68(r1)
    psq_st f1, 0x0(r9), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f29, 0x58(r1)
    stfs f12, 0x5c(r1)
    psq_st f1, 0x0(r11), 0, 0
    psq_l f1, 0x0(r29), 0, 0
    stfs f2, 0x4830(r31)
    stfs f2, 0x483c(r31)
    stfs f2, 0x4848(r31)
    stfs f2, 0x4854(r31)
    fmr f2, f9
    stfs f30, 0xa8(r1)
    stfs f31, 0x9c(r1)
    stfs f29, 0x90(r1)
    stfs f29, 0x84(r1)
    stfs f29, 0x78(r1)
    stfs f29, 0x6c(r1)
    stfs f9, 0x60(r1)
    psq_st f1, 0x0(r28), 0, 0
    stfs f2, 0x4860(r31)
    stfs f8, 0x48(r1)
    stfs f7, 0x4c(r1)
    stfs f6, 0x50(r1)
    stfs f31, 0x54(r1)
    stfs f8, 0x4888(r31)
    stfs f7, 0x488c(r31)
    stfs f6, 0x4890(r31)
    stfs f31, 0x4894(r31)
    stfs f5, 0x38(r1)
    stfs f4, 0x3c(r1)
    stfs f3, 0x40(r1)
    stfs f31, 0x44(r1)
    stfs f5, 0x4898(r31)
    stfs f4, 0x489c(r31)
    stfs f3, 0x48a0(r31)
    stfs f31, 0x48a4(r31)
    lfs f3, 0x4828(r31)
    lis r3, lbl_8075BF40@ha
    addi r3, r3, lbl_8075BF40@l
    fmuls f3, f0, f3
    addi r28, r3, 0x1
    stfs f3, 0x4828(r31)
    lfs f3, 0x482c(r31)
    fmuls f3, f0, f3
    stfs f3, 0x482c(r31)
    lfs f3, 0x4830(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4830(r31)
    lfs f3, 0x4834(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4834(r31)
    lfs f3, 0x4838(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4838(r31)
    lfs f3, 0x483c(r31)
    fmuls f3, f0, f3
    stfs f3, 0x483c(r31)
    lfs f3, 0x4840(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4840(r31)
    lfs f3, 0x4844(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4844(r31)
    lfs f3, 0x4848(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4848(r31)
    lfs f3, 0x484c(r31)
    fmuls f3, f0, f3
    stfs f3, 0x484c(r31)
    lfs f3, 0x4850(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4850(r31)
    lfs f3, 0x4854(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4854(r31)
    lfs f3, 0x4858(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4858(r31)
    lfs f3, 0x485c(r31)
    fmuls f3, f0, f3
    stfs f3, 0x485c(r31)
    lfs f3, 0x4860(r31)
    fmuls f3, f0, f3
    stfs f3, 0x4860(r31)
    lwz r0, 0x98(r31)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8051B988_00000E30
    lbz r0, 0x98(r31)
    clrlwi r29, r0, 25
    b lbl_fn_8051B988_00000E34
lbl_fn_8051B988_00000E30:
    lwz r29, 0x9c(r31)
lbl_fn_8051B988_00000E34:
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    bl strlen
    mr r0, r3
    mr r5, r29
    mr r6, r28
    addi r3, r31, 0x98
    add r7, r28, r0
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
    lwz r12, 0x19c4(r31)
    lis r30, lbl_8075BF40@ha
    addi r30, r30, lbl_8075BF40@l
    addi r3, r31, 0x19c4
    lwz r12, 0xc(r12)
    addi r4, r30, 0xb
    mtctr r12
    bctrl
    li r0, 0x6
    stw r0, 0x190c(r31)
    cmpwi r0, 0x0
    ble lbl_fn_8051B988_00000EFC
    mr r5, r30
    mr r6, r30
    li r3, 0x190
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    li r5, 0x0
    addi r4, r4, fn_801D082C@l
    li r6, 0x40
    li r7, 0x6
    bl fn_80695720
    lwz r4, 0x1910(r31)
    cmpwi r4, 0x0
    stw r3, 0x1910(r31)
    beq lbl_fn_8051B988_00000EDC
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8051B988_00000EDC:
    lis r6, lbl_8075BD88@ha
    lwz r5, 0x1910(r31)
    lwz r4, 0x190c(r31)
    mr r3, r31
    addi r6, r6, lbl_8075BD88@l
    li r7, 0x1
    li r8, 0x0
    bl fn_8050FB3C
lbl_fn_8051B988_00000EFC:
    lis r4, lbl_8075BF40@ha
    mr r3, r31
    addi r4, r4, lbl_8075BF40@l
    li r5, 0x0
    addi r4, r4, 0x31
    bl fn_801F3FF8
    stw r3, 0x1994(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r29, lbl_808878F0
    li r24, 0x0
    lwz r27, lbl_808878F4
    li r28, 0x0
    lwz r26, lbl_808878F8
    li r30, 0x1
lbl_fn_8051B988_00000F38:
    add r25, r31, r28
    mr r3, r31
    sth r30, 0xe4(r25)
    mr r4, r29
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0xe0(r25)
    li r4, 0x1
    bl fn_800D246C
    sth r30, 0x8e4(r25)
    mr r3, r31
    mr r4, r27
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x8e0(r25)
    li r4, 0x1
    bl fn_800D246C
    sth r30, 0x10e4(r25)
    mr r3, r31
    mr r4, r26
    li r5, 0x1
    bl fn_80202A6C
    stw r3, 0x10e0(r25)
    li r4, 0x1
    bl fn_800D246C
    addi r24, r24, 0x1
    addi r28, r28, 0x40
    cmpwi r24, 0x20
    blt lbl_fn_8051B988_00000F38
    lwz r4, lbl_808878FC
    mr r3, r31
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x18e0(r31)
    li r4, 0x1
    bl fn_800D246C
    lwz r4, lbl_80887900
    mr r3, r31
    li r5, 0x1
    bl fn_80201E78
    stw r3, 0x18e4(r31)
    li r4, 0x1
    bl fn_800D246C
    lis r30, lbl_8075BF40@ha
    mr r3, r31
    addi r30, r30, lbl_8075BF40@l
    li r5, 0x0
    addi r4, r30, 0x4d
    bl fn_801F3FF8
    stw r3, 0x18e8(r31)
    li r4, 0x1
    bl fn_800D246C
    mr r3, r31
    addi r4, r30, 0x64
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x18ec(r31)
    li r4, 0x1
    bl fn_800D246C
    lfs f2, lbl_80887904
    addi r7, r1, 0x28
    stfs f2, 0x28(r1)
    addi r6, r31, 0x18f0
    mr r3, r31
    addi r4, r30, 0x71
    stfs f2, 0x2c(r1)
    li r5, 0x0
    psq_l f1, 0x0(r7), 0, 0
    stfs f2, 0x30(r1)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x18f8(r31)
    stfs f2, 0x18fc(r31)
    bl fn_801F3FF8
    stw r3, 0x1904(r31)
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887904
    addi r3, r31, 0x5c
    stfs f0, 0x1900(r31)
    addi r4, r30, 0x8c
    lwz r12, 0x5c(r31)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r3, r31, 0x47dc
    addi r4, r30, 0xac
    bl fn_8023780C
    addi r3, r31, 0x47e8
    addi r4, r30, 0xbb
    bl fn_8023780C
    addi r3, r31, 0x47f4
    addi r4, r30, 0xc9
    bl fn_80237654
    lfs f4, lbl_80887924
    li r0, 0x0
    lfs f5, lbl_80887904
    addi r5, r1, 0x1c
    fmr f2, f4
    lfs f3, lbl_80887968
    lfs f0, lbl_8088796C
    addi r4, r31, 0x4864
    stfs f2, 0x486c(r31)
    addi r7, r1, 0x10
    fmr f2, f0
    stfs f5, 0x1c(r1)
    addi r6, r31, 0x4870
    mr r3, r31
    stfs f5, 0x20(r1)
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x10(r1)
    stfs f5, 0x14(r1)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stw r0, 0x46d8(r31)
    stw r0, 0x1908(r31)
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x4878(r31)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    addi r11, r1, 0xd0
    stfs f4, 0x24(r1)
    stfs f0, 0x18(r1)
    bl _restgpr_24
    lwz r0, 0x104(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_8051C2AC(void)
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
    beq lbl_fn_8051C2AC_00001258
    lwz r0, 0x198c(r3)
    lis r4, lbl_80793508@ha
    addi r4, r4, lbl_80793508@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8051C2AC_000011A0
    mr r3, r0
    bl fn_80084C24
    lwz r3, 0x1990(r29)
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x198c(r29)
    stw r0, 0x1990(r29)
lbl_fn_8051C2AC_000011A0:
    lwz r3, 0x1908(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8051C2AC_000011B8
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1908(r29)
lbl_fn_8051C2AC_000011B8:
    li r0, 0x0
    stw r0, 0x3ed0(r29)
    addi r3, r29, 0x47f4
    li r4, -0x1
    stw r0, 0x46d8(r29)
    bl fn_802375C4
    addic. r31, r29, 0x47e8
    beq lbl_fn_8051C2AC_000011F0
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8051C2AC_000011F0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8051C2AC_000011F0:
    addic. r31, r29, 0x47dc
    beq lbl_fn_8051C2AC_00001210
    mr r3, r31
    bl fn_8023781C
    addic. r3, r31, 0x4
    beq lbl_fn_8051C2AC_00001210
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8051C2AC_00001210:
    addic. r3, r29, 0x19c4
    beq lbl_fn_8051C2AC_00001220
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8051C2AC_00001220:
    addic. r0, r29, 0x1910
    beq lbl_fn_8051C2AC_0000123C
    lwz r3, 0x1910(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8051C2AC_0000123C
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_8051C2AC_0000123C:
    mr r3, r29
    li r4, 0x0
    bl fn_8050FA80
    cmpwi r30, 0x0
    ble lbl_fn_8051C2AC_00001258
    mr r3, r29
    bl dtor_80084684
lbl_fn_8051C2AC_00001258:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8051C3E0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r4
    lwz r0, 0x98(r28)
    srwi. r0, r0, 31
    bne lbl_fn_8051C3E0_000012B0
    addi r4, r28, 0x99
    b lbl_fn_8051C3E0_000012B4
lbl_fn_8051C3E0_000012B0:
    lwz r4, 0xa0(r28)
lbl_fn_8051C3E0_000012B4:
    bl fn_8008937C
    lis r31, lbl_8075BF40@ha
    lfs f1, lbl_80887970
    addi r31, r31, lbl_8075BF40@l
    lfs f2, lbl_80887974
    lfs f3, lbl_80887908
    mr r30, r3
    addi r4, r31, 0xd7
    addi r5, r28, 0x4864
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0xe2
    lfs f3, lbl_80887908
    addi r5, r28, 0x4870
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0xee
    addi r5, r28, 0x48a8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0xfa
    lfs f3, lbl_80887908
    addi r5, r28, 0x48ac
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0x104
    lfs f3, lbl_80887908
    addi r5, r28, 0x48b4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087BB4
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0x10e
    lfs f3, lbl_80887908
    addi r5, r28, 0x487c
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    mr r3, r30
    addi r4, r31, 0x119
    bl fn_8008937C
    lfs f2, lbl_80887908
    mr r29, r3
    lfs f1, lbl_80887904
    addi r4, r31, 0x127
    fmr f3, f2
    addi r5, r28, 0x4888
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    lfs f2, lbl_80887908
    mr r3, r29
    lfs f1, lbl_80887904
    addi r4, r31, 0x12d
    fmr f3, f2
    addi r5, r28, 0x4898
    li r6, 0x0
    li r7, 0x0
    bl fn_80088AF4
    mr r3, r30
    addi r4, r31, 0x133
    bl fn_8008937C
    lfs f1, lbl_80887978
    mr r29, r3
    lfs f2, lbl_8088797C
    addi r4, r31, 0x13d
    lfs f3, lbl_80887908
    addi r5, r28, 0x4828
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80887978
    mr r3, r29
    lfs f2, lbl_8088797C
    addi r4, r31, 0x14b
    lfs f3, lbl_80887908
    addi r5, r28, 0x4834
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80887978
    mr r3, r29
    lfs f2, lbl_8088797C
    addi r4, r31, 0x159
    lfs f3, lbl_80887908
    addi r5, r28, 0x4840
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80887978
    mr r3, r29
    lfs f2, lbl_8088797C
    addi r4, r31, 0x167
    lfs f3, lbl_80887908
    addi r5, r28, 0x484c
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    lfs f1, lbl_80887978
    mr r3, r29
    lfs f2, lbl_8088797C
    addi r4, r31, 0x175
    lfs f3, lbl_80887908
    addi r5, r28, 0x4858
    li r6, 0x0
    li r7, 0x0
    bl fn_80088724
    mr r3, r30
    addi r4, r31, 0x184
    bl fn_8008937C
    lfs f1, lbl_80887904
    mr r29, r3
    lfs f2, lbl_80887980
    addi r4, r31, 0x18b
    lfs f3, lbl_80887908
    addi r5, r28, 0x4818
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887904
    mr r3, r29
    lfs f2, lbl_80887980
    addi r4, r31, 0x195
    lfs f3, lbl_80887908
    addi r5, r28, 0x481c
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887904
    mr r3, r29
    lfs f2, lbl_80887980
    addi r4, r31, 0x1a0
    lfs f3, lbl_80887908
    addi r5, r28, 0x4820
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887904
    mr r3, r29
    lfs f2, lbl_80887980
    addi r4, r31, 0x1aa
    lfs f3, lbl_80887908
    addi r5, r28, 0x4824
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0x1b3
    lfs f3, lbl_80887908
    addi r5, r28, 0xa4
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0x1bd
    lfs f3, lbl_80887908
    addi r5, r28, 0xb0
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0x1c7
    lfs f3, lbl_80887908
    addi r5, r28, 0xbc
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lfs f1, lbl_80887970
    mr r3, r30
    lfs f2, lbl_80887974
    addi r4, r31, 0x1d2
    lfs f3, lbl_80887908
    addi r5, r28, 0xc8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087E9C
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8051C754(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    mr r24, r3
    addi r3, r3, 0x19c4
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8051C754_0000161C
    li r3, 0x1
    b lbl_fn_8051C754_000018F8
lbl_fn_8051C754_0000161C:
    lbz r0, 0xd4(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8051C754_0000189C
    mr r3, r24
    bl fn_80520638
    lwz r21, 0x19cc(r24)
    li r0, 0x1
    stb r0, 0xd4(r24)
    cmpwi r21, 0x0
    stw r21, 0x4c(r24)
    ble lbl_fn_8051C754_00001704
    lis r5, lbl_8075BF40@ha
    slwi r3, r21, 6
    addi r5, r5, lbl_8075BF40@l
    li r4, 0x1
    mr r6, r5
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801D082C@ha
    mr r7, r21
    addi r4, r4, fn_801D082C@l
    li r5, 0x0
    li r6, 0x40
    bl fn_80695720
    lwz r4, 0x50(r24)
    cmpwi r4, 0x0
    stw r3, 0x50(r24)
    beq lbl_fn_8051C754_00001698
    subi r3, r4, 0x10
    bl fn_80084C24
lbl_fn_8051C754_00001698:
    lwz r0, 0x4c(r24)
    lis r21, lbl_8075BF40@ha
    addi r5, r21, lbl_8075BF40@l
    li r4, 0x1
    mulli r3, r0, 0xc
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    lwz r0, 0x4c(r24)
    addi r5, r21, lbl_8075BF40@l
    stw r3, 0x198c(r24)
    mr r6, r5
    slwi r3, r0, 6
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x4c(r24)
    li r4, 0x0
    stw r3, 0x1990(r24)
    mulli r5, r0, 0xc
    lwz r3, 0x198c(r24)
    bl memset
    lwz r0, 0x4c(r24)
    li r4, 0x0
    lwz r3, 0x1990(r24)
    slwi r5, r0, 6
    bl memset
lbl_fn_8051C754_00001704:
    li r25, 0x0
    lis r3, lbl_8075BF40@ha
    li r22, 0x0
    li r27, 0x0
    mr r30, r25
    mr r31, r25
    addi r29, r3, lbl_8075BF40@l
    li r23, 0x20
    li r26, 0x0
    b lbl_fn_8051C754_00001870
lbl_fn_8051C754_0000172C:
    lwz r0, 0x1990(r24)
    add r28, r24, r22
    lwz r3, 0x198c(r24)
    add r0, r0, r26
    stwx r0, r3, r27
    lwz r0, 0x198c(r24)
    lwz r4, 0x1990(r24)
    add r3, r0, r27
    add r0, r4, r23
    stw r0, 0x4(r3)
    lwz r0, 0x19e0(r28)
    cmpwi r0, 0x0
    blt lbl_fn_8051C754_0000185C
    lwz r0, 0x19d0(r28)
    cmpwi r0, 0x1f4
    bge lbl_fn_8051C754_0000179C
    lwz r0, 0x1990(r24)
    addi r4, r29, 0x1da
    lwz r5, 0x19e4(r28)
    add r3, r0, r26
    crclr 6
    bl sprintf
    lwz r0, 0x1990(r24)
    addi r4, r29, 0x1ec
    add r3, r0, r23
    crclr 6
    bl sprintf
    b lbl_fn_8051C754_000017C8
lbl_fn_8051C754_0000179C:
    lwz r0, 0x1990(r24)
    addi r4, r29, 0x1fd
    lwz r5, 0x19e4(r28)
    add r3, r0, r26
    crclr 6
    bl sprintf
    lwz r0, 0x1990(r24)
    addi r4, r29, 0x211
    add r3, r0, r23
    crclr 6
    bl sprintf
lbl_fn_8051C754_000017C8:
    lwz r0, 0x198c(r24)
    add r3, r0, r27
    stb r30, 0x8(r3)
    lwz r0, 0x198c(r24)
    add r3, r0, r27
    lwz r4, 0x4(r3)
    lbz r0, 0x0(r4)
    extsb. r0, r0
    beq lbl_fn_8051C754_00001814
    lwz r21, 0x50(r24)
    mr r3, r24
    li r5, 0x1
    bl fn_80201E78
    stwx r3, r21, r26
    li r4, 0x1
    lwz r3, 0x50(r24)
    lwzx r3, r3, r26
    bl fn_800D246C
    b lbl_fn_8051C754_0000181C
lbl_fn_8051C754_00001814:
    lwz r3, 0x50(r24)
    stwx r31, r3, r26
lbl_fn_8051C754_0000181C:
    lwz r0, 0x50(r24)
    add r0, r0, r26
    stw r0, 0x19e8(r28)
    lwz r0, 0x19d4(r28)
    cmpwi r0, 0x0
    ble lbl_fn_8051C754_0000185C
    lwz r0, 0x46d8(r24)
    slwi r0, r0, 2
    add r0, r24, r0
    addic. r3, r0, 0x46dc
    beq lbl_fn_8051C754_00001850
    lwz r0, 0x19d4(r28)
    stw r0, 0x0(r3)
lbl_fn_8051C754_00001850:
    lwz r3, 0x46d8(r24)
    addi r0, r3, 0x1
    stw r0, 0x46d8(r24)
lbl_fn_8051C754_0000185C:
    addi r27, r27, 0xc
    addi r23, r23, 0x40
    addi r26, r26, 0x40
    addi r25, r25, 0x1
    addi r22, r22, 0x94
lbl_fn_8051C754_00001870:
    lwz r0, 0x4c(r24)
    cmpw r25, r0
    blt lbl_fn_8051C754_0000172C
    lwz r3, 0x1994(r24)
    li r4, 0x1
    lfs f1, lbl_80887904
    li r5, 0x0
    lfs f2, lbl_80887984
    bl fn_805115D4
    li r3, 0x1
    b lbl_fn_8051C754_000018F8
lbl_fn_8051C754_0000189C:
    mr r3, r24
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_8051C754_000018B4
    li r3, 0x1
    b lbl_fn_8051C754_000018F8
lbl_fn_8051C754_000018B4:
    addi r3, r24, 0x47dc
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8051C754_000018CC
    li r3, 0x1
    b lbl_fn_8051C754_000018F8
lbl_fn_8051C754_000018CC:
    addi r3, r24, 0x47e8
    bl fn_80237874
    cmpwi r3, 0x0
    beq lbl_fn_8051C754_000018E4
    li r3, 0x1
    b lbl_fn_8051C754_000018F8
lbl_fn_8051C754_000018E4:
    addi r3, r24, 0x47f4
    bl fn_802376D0
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8051C754_000018F8:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8051CA78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r6, lbl_8075BD88@ha
    stw r0, 0x24(r1)
    addi r6, r6, lbl_8075BD88@l
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r30, lbl_808878EC
    stw r29, 0x14(r1)
    mr r29, r4
    mr r8, r30
    lwz r5, 0x1910(r3)
    lwz r7, 0x190c(r3)
    bl fn_8050FD3C
    lwz r5, 0x50(r31)
    mr r3, r31
    lwz r6, 0x198c(r31)
    mr r4, r29
    lwz r7, 0x4c(r31)
    mr r8, r30
    bl fn_8050FD3C
    li r0, 0x8
    li r3, 0x0
    stw r3, 0x80(r31)
    addi r4, r31, 0xe0
    lfs f1, lbl_80887904
    lfs f0, lbl_80887908
    mtctr r0
lbl_fn_8051CA78_00001984:
    stw r3, 0x8(r4)
    stfs f1, 0x38(r4)
    stfs f1, 0x30(r4)
    stfs f1, 0x2c(r4)
    stfs f1, 0x28(r4)
    stfs f1, 0x24(r4)
    stfs f1, 0x1c(r4)
    stfs f1, 0x18(r4)
    stfs f1, 0x14(r4)
    stfs f1, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    stb r3, 0x3c(r4)
    stw r3, 0x48(r4)
    stfs f1, 0x78(r4)
    stfs f1, 0x70(r4)
    stfs f1, 0x6c(r4)
    stfs f1, 0x68(r4)
    stfs f1, 0x64(r4)
    stfs f1, 0x5c(r4)
    stfs f1, 0x58(r4)
    stfs f1, 0x54(r4)
    stfs f1, 0x50(r4)
    stfs f0, 0x74(r4)
    stfs f0, 0x60(r4)
    stfs f0, 0x4c(r4)
    stb r3, 0x7c(r4)
    stw r3, 0x88(r4)
    stfs f1, 0xb8(r4)
    stfs f1, 0xb0(r4)
    stfs f1, 0xac(r4)
    stfs f1, 0xa8(r4)
    stfs f1, 0xa4(r4)
    stfs f1, 0x9c(r4)
    stfs f1, 0x98(r4)
    stfs f1, 0x94(r4)
    stfs f1, 0x90(r4)
    stfs f0, 0xb4(r4)
    stfs f0, 0xa0(r4)
    stfs f0, 0x8c(r4)
    stb r3, 0xbc(r4)
    stw r3, 0xc8(r4)
    stfs f1, 0xf8(r4)
    stfs f1, 0xf0(r4)
    stfs f1, 0xec(r4)
    stfs f1, 0xe8(r4)
    stfs f1, 0xe4(r4)
    stfs f1, 0xdc(r4)
    stfs f1, 0xd8(r4)
    stfs f1, 0xd4(r4)
    stfs f1, 0xd0(r4)
    stfs f0, 0xf4(r4)
    stfs f0, 0xe0(r4)
    stfs f0, 0xcc(r4)
    stb r3, 0xfc(r4)
    addi r4, r4, 0x100
    bdnz lbl_fn_8051CA78_00001984
    mr r5, r31
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8051CA78_00001A88
lbl_fn_8051CA78_00001A7C:
    stw r3, 0x19ec(r5)
    addi r5, r5, 0x94
    addi r4, r4, 0x1
lbl_fn_8051CA78_00001A88:
    lwz r0, 0x19cc(r31)
    cmplw r4, r0
    blt lbl_fn_8051CA78_00001A7C
    li r0, 0x8
    addi r4, r31, 0x8e0
    lfs f1, lbl_80887904
    li r3, 0x0
    lfs f0, lbl_80887908
    mtctr r0
lbl_fn_8051CA78_00001AAC:
    stw r3, 0x8(r4)
    stfs f1, 0x38(r4)
    stfs f1, 0x30(r4)
    stfs f1, 0x2c(r4)
    stfs f1, 0x28(r4)
    stfs f1, 0x24(r4)
    stfs f1, 0x1c(r4)
    stfs f1, 0x18(r4)
    stfs f1, 0x14(r4)
    stfs f1, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    stb r3, 0x3c(r4)
    stw r3, 0x48(r4)
    stfs f1, 0x78(r4)
    stfs f1, 0x70(r4)
    stfs f1, 0x6c(r4)
    stfs f1, 0x68(r4)
    stfs f1, 0x64(r4)
    stfs f1, 0x5c(r4)
    stfs f1, 0x58(r4)
    stfs f1, 0x54(r4)
    stfs f1, 0x50(r4)
    stfs f0, 0x74(r4)
    stfs f0, 0x60(r4)
    stfs f0, 0x4c(r4)
    stb r3, 0x7c(r4)
    stw r3, 0x88(r4)
    stfs f1, 0xb8(r4)
    stfs f1, 0xb0(r4)
    stfs f1, 0xac(r4)
    stfs f1, 0xa8(r4)
    stfs f1, 0xa4(r4)
    stfs f1, 0x9c(r4)
    stfs f1, 0x98(r4)
    stfs f1, 0x94(r4)
    stfs f1, 0x90(r4)
    stfs f0, 0xb4(r4)
    stfs f0, 0xa0(r4)
    stfs f0, 0x8c(r4)
    stb r3, 0xbc(r4)
    stw r3, 0xc8(r4)
    stfs f1, 0xf8(r4)
    stfs f1, 0xf0(r4)
    stfs f1, 0xec(r4)
    stfs f1, 0xe8(r4)
    stfs f1, 0xe4(r4)
    stfs f1, 0xdc(r4)
    stfs f1, 0xd8(r4)
    stfs f1, 0xd4(r4)
    stfs f1, 0xd0(r4)
    stfs f0, 0xf4(r4)
    stfs f0, 0xe0(r4)
    stfs f0, 0xcc(r4)
    stb r3, 0xfc(r4)
    addi r4, r4, 0x100
    bdnz lbl_fn_8051CA78_00001AAC
    mr r5, r31
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8051CA78_00001BB0
lbl_fn_8051CA78_00001BA4:
    stw r3, 0x19f0(r5)
    addi r5, r5, 0x94
    addi r4, r4, 0x1
lbl_fn_8051CA78_00001BB0:
    lwz r0, 0x19cc(r31)
    cmplw r4, r0
    blt lbl_fn_8051CA78_00001BA4
    li r0, 0x8
    addi r4, r31, 0x10e0
    lfs f1, lbl_80887904
    li r3, 0x0
    lfs f0, lbl_80887908
    mtctr r0
lbl_fn_8051CA78_00001BD4:
    stw r3, 0x8(r4)
    stfs f1, 0x38(r4)
    stfs f1, 0x30(r4)
    stfs f1, 0x2c(r4)
    stfs f1, 0x28(r4)
    stfs f1, 0x24(r4)
    stfs f1, 0x1c(r4)
    stfs f1, 0x18(r4)
    stfs f1, 0x14(r4)
    stfs f1, 0x10(r4)
    stfs f0, 0x34(r4)
    stfs f0, 0x20(r4)
    stfs f0, 0xc(r4)
    stb r3, 0x3c(r4)
    stw r3, 0x48(r4)
    stfs f1, 0x78(r4)
    stfs f1, 0x70(r4)
    stfs f1, 0x6c(r4)
    stfs f1, 0x68(r4)
    stfs f1, 0x64(r4)
    stfs f1, 0x5c(r4)
    stfs f1, 0x58(r4)
    stfs f1, 0x54(r4)
    stfs f1, 0x50(r4)
    stfs f0, 0x74(r4)
    stfs f0, 0x60(r4)
    stfs f0, 0x4c(r4)
    stb r3, 0x7c(r4)
    stw r3, 0x88(r4)
    stfs f1, 0xb8(r4)
    stfs f1, 0xb0(r4)
    stfs f1, 0xac(r4)
    stfs f1, 0xa8(r4)
    stfs f1, 0xa4(r4)
    stfs f1, 0x9c(r4)
    stfs f1, 0x98(r4)
    stfs f1, 0x94(r4)
    stfs f1, 0x90(r4)
    stfs f0, 0xb4(r4)
    stfs f0, 0xa0(r4)
    stfs f0, 0x8c(r4)
    stb r3, 0xbc(r4)
    stw r3, 0xc8(r4)
    stfs f1, 0xf8(r4)
    stfs f1, 0xf0(r4)
    stfs f1, 0xec(r4)
    stfs f1, 0xe8(r4)
    stfs f1, 0xe4(r4)
    stfs f1, 0xdc(r4)
    stfs f1, 0xd8(r4)
    stfs f1, 0xd4(r4)
    stfs f1, 0xd0(r4)
    stfs f0, 0xf4(r4)
    stfs f0, 0xe0(r4)
    stfs f0, 0xcc(r4)
    stb r3, 0xfc(r4)
    addi r4, r4, 0x100
    bdnz lbl_fn_8051CA78_00001BD4
    mr r5, r31
    li r4, 0x0
    li r3, 0x0
    b lbl_fn_8051CA78_00001CD8
lbl_fn_8051CA78_00001CCC:
    stw r3, 0x19f4(r5)
    addi r5, r5, 0x94
    addi r4, r4, 0x1
lbl_fn_8051CA78_00001CD8:
    lwz r0, 0x19cc(r31)
    cmplw r4, r0
    blt lbl_fn_8051CA78_00001CCC
    mr r30, r31
    li r29, 0x0
lbl_fn_8051CA78_00001CEC:
    lfs f1, lbl_80887904
    li r4, 0x0
    lwz r3, 0xe0(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    lfs f1, lbl_80887904
    li r4, 0x0
    lwz r3, 0x8e0(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    lfs f1, lbl_80887904
    li r4, 0x0
    lwz r3, 0x10e0(r30)
    li r5, 0x0
    fmr f2, f1
    bl fn_805114D8
    addi r29, r29, 0x1
    addi r30, r30, 0x40
    cmpwi r29, 0x20
    blt lbl_fn_8051CA78_00001CEC
    lfs f1, lbl_80887904
    li r4, 0x0
    lwz r3, 0x18ec(r31)
    li r5, 0x0
    fmr f2, f1
    bl fn_805115D4
    lwz r3, 0x18e8(r31)
    li r4, 0x0
    lfs f1, lbl_80887904
    li r5, 0x1
    lfs f2, lbl_80887908
    bl fn_805115D4
    lwz r3, 0x18e0(r31)
    li r4, 0x0
    lfs f1, lbl_80887904
    li r5, 0x1
    lfs f2, lbl_80887908
    bl fn_805113EC
    lwz r3, 0x18e4(r31)
    li r4, 0x0
    lfs f1, lbl_80887904
    li r5, 0x1
    lfs f2, lbl_80887908
    bl fn_805113EC
    lwz r3, 0x1904(r31)
    li r4, 0x1
    lfs f1, lbl_80887904
    li r5, 0x0
    lfs f2, lbl_80887908
    bl fn_805115D4
    lwz r3, 0x198c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8051CA78_00001DE0
    bl fn_80084C24
    lwz r3, 0x1990(r31)
    bl fn_80084C24
    li r0, 0x0
    stw r0, 0x198c(r31)
    stw r0, 0x1990(r31)
lbl_fn_8051CA78_00001DE0:
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x3c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
