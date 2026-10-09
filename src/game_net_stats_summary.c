#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_20(void);
extern void _restgpr_27(void);
extern void _savegpr_20(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000EE8C(void);
extern void fn_8000FAE8(void);
extern void fn_800127CC(void);
extern void fn_800128FC(void);
extern void fn_80013F78(void);
extern void fn_8004B0E4(void);
extern void fn_80069BF4(void);
extern void fn_8006A250(void);
extern void fn_8006AA20(void);
extern void fn_8006B2D8(void);
extern void fn_8006D008(void);
extern void fn_8006EF48(void);
extern void fn_800827E0(void);
extern void fn_80084F84(void);
extern void fn_800A4450(void);
extern void fn_800C3094(void);
extern void fn_800C310C(void);
extern void fn_800C3124(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800DC6B4(void);
extern void fn_801231D0(void);
extern void fn_8013655C(void);
extern void fn_801F3FF8(void);
extern void fn_801FEC74(void);
extern void fn_801FECE0(void);
extern void fn_80204230(void);
extern void fn_8020F130(void);
extern void fn_8020F71C(void);
extern void fn_802288D0(void);
extern void fn_802297AC(void);
extern void fn_803B3AC4(void);
extern void fn_803B3C10(void);
extern void fn_803B3CA8(void);
extern void fn_803B5470(void);
extern void fn_803CCCC0(void);
extern void fn_803EB234(void);
extern void fn_80470364(void);
extern void fn_80470528(void);
extern void fn_8047054C(void);
extern void fn_80473F50(void);
extern void fn_8047F580(void);
extern void fn_80483E94(void);
extern void fn_80489A50(void);
extern void fn_8048FE88(void);
extern void fn_8048FEF0(void);
extern void fn_8048FF34(void);
extern void fn_8053E8D4(void);
extern void fn_8053ED50(void);
extern void fn_8054158C(void);
extern void fn_80541F1C(void);
extern void fn_80550258(void);
extern void fn_80575FD0(void);
extern void fn_8057625C(void);
extern void fn_8057D8C4(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 jumptable_80794378[];
extern u8 lbl_8075E148[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F128;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F498;
extern u32 lbl_8087F540;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80887CA0;
extern u32 lbl_80887CA4;
extern u32 lbl_80887CB0;
extern u32 lbl_80887CB4;
extern u32 lbl_80887CB8;
extern u32 lbl_80887CBC;
extern u32 lbl_80887CC0;
extern u32 lbl_80887CC4;
extern u32 lbl_80887CC8;

/* Function declarations */
void fn_8053EF74(void);
void fn_8053F114(void);
void fn_8053F1B8(void);
void fn_8053F4F4(void);
void fn_8053F6F0(void);
void fn_8053F81C(void);
void fn_80540120(void);
void fn_80540668(void);
void fn_805406A4(void);
void fn_805406C0(void);

asm void fn_8053EF74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r0, lbl_8087F540
    cmpwi r0, 0x0
    beq lbl_fn_8053EF74_00000184
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8053EF74_00000048
lbl_fn_8053EF74_00000034:
    lwz r0, 0x164(r31)
    add r3, r0, r30
    bl fn_8000FAE8
    addi r29, r29, 0x1
    addi r30, r30, 0x1c0
lbl_fn_8053EF74_00000048:
    lwz r0, 0x168(r31)
    cmpw r29, r0
    blt lbl_fn_8053EF74_00000034
    lwz r0, 0x50(r31)
    cmpwi r0, 0x1
    beq lbl_fn_8053EF74_00000068
    cmpwi r0, 0x3
    bne lbl_fn_8053EF74_00000184
lbl_fn_8053EF74_00000068:
    bl fn_8020F130
    lwz r4, 0x190(r31)
    bl fn_8020F71C
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8053EF74_00000158
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_00000094
    lwz r3, 0x10d8(r3)
    b lbl_fn_8053EF74_000000AC
lbl_fn_8053EF74_00000094:
    lwz r3, lbl_8087F540
    lwz r3, 0x1a6c(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_000000A8
    b lbl_fn_8053EF74_000000AC
lbl_fn_8053EF74_000000A8:
    li r3, 0x0
lbl_fn_8053EF74_000000AC:
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_000000B8
    bl fn_803CCCC0
lbl_fn_8053EF74_000000B8:
    lwz r0, 0x4c(r30)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8053EF74_000000E0
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_000000E0
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8053EF74_000000E0:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_8053EF74_00000108
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_00000108
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8053EF74_00000108:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8053EF74_00000130
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_00000130
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8053EF74_00000130:
    lwz r0, 0x4c(r30)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    bne lbl_fn_8053EF74_00000158
    lwz r3, lbl_8087F128
    cmpwi r3, 0x0
    beq lbl_fn_8053EF74_00000158
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8053EF74_00000158:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053EF74_00000174
    lwz r0, 0x190(r31)
    cmpwi r0, 0x19d
    beq lbl_fn_8053EF74_00000184
lbl_fn_8053EF74_00000174:
    lwz r0, 0x98(r31)
    lwz r3, lbl_8087F540
    extrwi r4, r0, 1, 7
    bl fn_80483E94
lbl_fn_8053EF74_00000184:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053F114(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_8053F1B8
    li r30, 0x0
    li r31, 0x0
    b lbl_fn_8053F114_000001E0
lbl_fn_8053F114_000001CC:
    lwz r0, 0x164(r29)
    add r3, r0, r31
    bl fn_8000EE8C
    addi r30, r30, 0x1
    addi r31, r31, 0x1c0
lbl_fn_8053F114_000001E0:
    lwz r0, 0x168(r29)
    cmpw r30, r0
    blt lbl_fn_8053F114_000001CC
    lwz r3, 0x280(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8053F114_00000228
    lwz r4, 0x194(r29)
    cmpwi r4, 0x5
    blt lbl_fn_8053F114_00000228
    cmpwi r4, 0xb
    li r0, 0x0
    beq lbl_fn_8053F114_00000218
    cmpwi r4, 0xc
    bne lbl_fn_8053F114_0000021C
lbl_fn_8053F114_00000218:
    li r0, 0x1
lbl_fn_8053F114_0000021C:
    cmpwi r0, 0x0
    bne lbl_fn_8053F114_00000228
    bl fn_802297AC
lbl_fn_8053F114_00000228:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8053F1B8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    lwz r0, 0x194(r3)
    cmplwi r0, 0xd
    bgt lbl_fn_8053F1B8_00000560
    lis r4, jumptable_80794378@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_80794378@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    addi r3, r3, 0x1c4
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8053F1B8_00000560
    mr r3, r31
    bl fn_8057D8C4
    mr r3, r31
    bl fn_80575FD0
    mr r3, r31
    bl fn_80541F1C
    li r0, 0x4
    stw r0, 0x194(r31)
    mr r3, r31
    bl fn_8057625C
    b lbl_fn_8053F1B8_00000560
    lwz r0, 0x98(r3)
    li r4, 0x5
    stw r4, 0x194(r3)
    extrwi r0, r0, 1, 10
    cmplwi r0, 0x1
    bne lbl_fn_8053F1B8_000002F0
    bl fn_8053F6F0
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 11, 9
    stw r0, 0x98(r31)
    b lbl_fn_8053F1B8_00000560
lbl_fn_8053F1B8_000002F0:
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8053F1B8_00000560
    lwz r3, lbl_8087F540
    li r4, 0x0
    li r5, 0x0
    bl fn_80489A50
    lwz r0, 0x98(r31)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_8053F1B8_00000344
    addi r3, r31, 0x29c
    bl fn_8047054C
    cmpwi r3, 0x0
    bne lbl_fn_8053F1B8_00000560
    mr r3, r31
    bl fn_8053F81C
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x98(r31)
    b lbl_fn_8053F1B8_00000560
lbl_fn_8053F1B8_00000344:
    mr r3, r31
    bl fn_80540120
    cmpwi r3, 0x0
    beq lbl_fn_8053F1B8_00000560
    addi r3, r31, 0x29c
    bl fn_80470528
    lwz r0, 0x98(r31)
    extrwi r0, r0, 1, 11
    cmplwi r0, 0x1
    bne lbl_fn_8053F1B8_00000384
    lwz r0, 0x98(r31)
    li r3, 0x9
    stw r3, 0x194(r31)
    rlwinm r0, r0, 0, 12, 10
    stw r0, 0x98(r31)
    b lbl_fn_8053F1B8_00000560
lbl_fn_8053F1B8_00000384:
    li r0, 0x8
    stw r0, 0x194(r31)
    b lbl_fn_8053F1B8_00000560
    bl fn_8053ED50
    li r0, 0x8
    stw r0, 0x194(r31)
    b lbl_fn_8053F1B8_00000560
    lwz r3, lbl_8087F540
    lwz r0, 0x2380(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8053F1B8_000003B4
    bl fn_8047F580
lbl_fn_8053F1B8_000003B4:
    mr r3, r31
    bl fn_8053E8D4
    lwz r3, 0x190(r31)
    li r0, 0xa
    stw r0, 0x194(r31)
    subi r0, r3, 0x238d
    cmplwi r0, 0x5
    bgt lbl_fn_8053F1B8_0000046C
    lwz r4, 0xd4(r31)
    lis r3, lbl_8075E148@ha
    addi r3, r3, lbl_8075E148@l
    lwz r30, 0x18(r4)
    addi r4, r3, 0x1b
    addi r3, r30, 0x58
    bl fn_801FEC74
    mr r4, r3
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, 0x0
    bl fn_800A4450
    lwz r0, 0x8(r1)
    lwz r3, lbl_8087EEC8
    srwi. r0, r0, 31
    lfs f1, lbl_80887CB0
    bne lbl_fn_8053F1B8_00000420
    addi r4, r1, 0xa
    b lbl_fn_8053F1B8_00000424
lbl_fn_8053F1B8_00000420:
    lwz r4, 0x10(r1)
lbl_fn_8053F1B8_00000424:
    lfs f2, lbl_80887CA0
    li r5, 0x1
    li r6, 0x1
    bl fn_8006EF48
    lwz r0, 0x8(r1)
    fmr f31, f1
    srwi. r0, r0, 31
    beq lbl_fn_8053F1B8_0000044C
    lwz r3, 0x10(r1)
    bl dtor_80084684
lbl_fn_8053F1B8_0000044C:
    lis r3, lbl_8075E148@ha
    addi r3, r3, lbl_8075E148@l
    addi r3, r3, 0x23
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    addi r3, r30, 0x58
    bl fn_801FECE0
lbl_fn_8053F1B8_0000046C:
    mr r3, r31
    bl fn_80550258
    b lbl_fn_8053F1B8_00000560
    li r4, 0xc
    li r0, 0x0
    stw r4, 0x194(r3)
    stw r0, 0x2c4(r3)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8053F1B8_00000560
    lwz r0, 0x190(r3)
    cmpwi r0, 0x19d
    bne lbl_fn_8053F1B8_00000560
    lwz r0, 0x2c4(r3)
    cmpwi r0, 0x0
    ble lbl_fn_8053F1B8_000004C8
    subic. r0, r0, 0x1
    stw r0, 0x2c4(r3)
    bne lbl_fn_8053F1B8_00000560
    li r0, 0xd
    stw r0, 0x194(r3)
    b lbl_fn_8053F1B8_00000560
lbl_fn_8053F1B8_000004C8:
    lwz r3, 0x2c0(r3)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x2c0(r31)
    lfs f1, 0xa0(r3)
    lfs f0, 0x100(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    mfcr r0
    extrwi. r0, r0, 1, 2
    beq lbl_fn_8053F1B8_00000560
    lwz r3, lbl_8087F0A8
    li r4, 0x0
    addi r3, r3, 0x48c
    bl fn_801231D0
    cmpwi r3, 0x0
    beq lbl_fn_8053F1B8_00000560
    lwz r4, 0x2c0(r31)
    li r0, 0x1e
    lfs f0, lbl_80887CB4
    mr r3, r31
    stfs f0, 0x104(r4)
    li r4, 0x1e
    li r5, -0x1
    lis r6, 0xff00
    stw r0, 0x2c4(r31)
    bl fn_8006A250
    li r4, 0x1
    stw r4, 0x48(r3)
    li r0, 0xa
    lfs f0, lbl_80887CB8
    stw r0, 0x5c(r3)
    stw r4, 0x68(r3)
    stfs f0, 0x74(r3)
    b lbl_fn_8053F1B8_00000560
    bl fn_8053ED50
    li r0, 0xe
    stw r0, 0x194(r31)
lbl_fn_8053F1B8_00000560:
    lwz r0, 0x34(r1)
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8053F4F4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x20
    stfd f31, 0x40(r1)
    psq_st f31, 0x48(r1), 0, 0
    stfd f30, 0x30(r1)
    psq_st f30, 0x38(r1), 0, 0
    stfd f29, 0x20(r1)
    psq_st f29, 0x28(r1), 0, 0
    bl _savegpr_27
    lwz r0, 0x194(r3)
    mr r31, r3
    cmpwi r0, 0xa
    bne lbl_fn_8053F4F4_000006B4
    lfs f31, lbl_80887CC0
    mr r28, r31
    lfs f29, lbl_80887CA0
    li r27, 0x0
    lfs f30, lbl_80887CA4
    li r29, 0x0
    li r30, -0x1
lbl_fn_8053F4F4_000005D8:
    lwz r3, 0x1f0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_8053F4F4_000006A4
    lfs f1, 0x198(r31)
    lfs f2, 0x1f4(r28)
    lfs f0, 0x1f8(r28)
    fcmpo cr0, f1, f2
    fadds f4, f0, f2
    blt lbl_fn_8053F4F4_00000604
    fcmpo cr0, f4, f1
    bge lbl_fn_8053F4F4_00000638
lbl_fn_8053F4F4_00000604:
    lwz r0, 0x210(r28)
    rlwinm. r0, r0, 0, 7, 7
    bne lbl_fn_8053F4F4_00000638
    stw r29, 0x1f0(r28)
    stfs f29, 0x200(r28)
    stfs f29, 0x1f8(r28)
    stfs f29, 0x1f4(r28)
    stfs f30, 0x1fc(r28)
    stw r29, 0x204(r28)
    stw r29, 0x208(r28)
    stw r30, 0x20c(r28)
    stw r29, 0x210(r28)
    b lbl_fn_8053F4F4_000006A4
lbl_fn_8053F4F4_00000638:
    fadds f0, f31, f2
    lfs f3, lbl_80887CBC
    fcmpo cr0, f1, f0
    bge lbl_fn_8053F4F4_00000660
    lwz r0, 0x210(r28)
    rlwinm. r0, r0, 0, 6, 6
    bne lbl_fn_8053F4F4_00000660
    fsubs f0, f1, f2
    fdivs f3, f0, f31
    b lbl_fn_8053F4F4_00000680
lbl_fn_8053F4F4_00000660:
    fsubs f0, f4, f31
    fcmpo cr0, f1, f0
    ble lbl_fn_8053F4F4_00000680
    lwz r0, 0x210(r28)
    rlwinm. r0, r0, 0, 7, 7
    bne lbl_fn_8053F4F4_00000680
    fsubs f0, f4, f1
    fdivs f3, f0, f31
lbl_fn_8053F4F4_00000680:
    lwz r4, 0x8(r3)
    mr r3, r31
    lfs f1, 0x1fc(r28)
    lfs f2, 0x200(r28)
    lwz r5, 0x204(r28)
    lwz r6, 0x208(r28)
    lwz r7, 0x20c(r28)
    lwz r8, 0x210(r28)
    bl fn_8054158C
lbl_fn_8053F4F4_000006A4:
    addi r27, r27, 0x1
    addi r28, r28, 0x24
    cmpwi r27, 0x4
    blt lbl_fn_8053F4F4_000005D8
lbl_fn_8053F4F4_000006B4:
    lwz r0, 0x98(r31)
    extrwi r0, r0, 1, 6
    cmplwi r0, 0x1
    bne lbl_fn_8053F4F4_000006DC
    mr r3, r31
    li r4, 0x1
    bl fn_805406C0
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x98(r31)
lbl_fn_8053F4F4_000006DC:
    lwz r3, 0x98(r31)
    extrwi r0, r3, 1, 16
    cmplwi r0, 0x1
    bne lbl_fn_8053F4F4_0000074C
    extrwi r0, r3, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_8053F4F4_00000740
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_8053F4F4_00000724
lbl_fn_8053F4F4_00000704:
    lwz r0, 0x164(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r29, r29, 0x1
    addi r30, r30, 0x1c0
lbl_fn_8053F4F4_00000724:
    lwz r0, 0x168(r31)
    cmpw r29, r0
    blt lbl_fn_8053F4F4_00000704
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 2, 0
    rlwinm r0, r0, 0, 17, 14
    stw r0, 0x98(r31)
lbl_fn_8053F4F4_00000740:
    lwz r0, 0x98(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0x98(r31)
lbl_fn_8053F4F4_0000074C:
    addi r11, r1, 0x20
    psq_l f31, 0x48(r1), 0, 0
    lfd f31, 0x40(r1)
    psq_l f30, 0x38(r1), 0, 0
    lfd f30, 0x30(r1)
    psq_l f29, 0x28(r1), 0, 0
    lfd f29, 0x20(r1)
    bl _restgpr_27
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_8053F6F0(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    stw r0, 0x114(r1)
    stw r31, 0x10c(r1)
    stw r30, 0x108(r1)
    mr r30, r3
    bl fn_800827E0
    addi r3, r3, 0x150
    bl fn_80084F84
    mr r31, r3
    bl fn_800827E0
    addi r3, r3, 0x138
    bl fn_80084F84
    lwz r0, 0x194(r30)
    add r3, r3, r31
    stw r3, 0x284(r30)
    cmpwi r0, 0x5
    bge lbl_fn_8053F6F0_000007D4
    lwz r0, 0x98(r30)
    oris r0, r0, 0x20
    stw r0, 0x98(r30)
    b lbl_fn_8053F6F0_00000890
lbl_fn_8053F6F0_000007D4:
    lwz r0, 0x98(r30)
    extrwi r0, r0, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_8053F6F0_00000890
    lis r4, lbl_8075E148@ha
    addi r3, r1, 0x8
    addi r4, r4, lbl_8075E148@l
    addi r5, r30, 0x2a0
    addi r4, r4, 0x2d
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl fn_8006AA20
    cmpwi r3, 0x0
    beq lbl_fn_8053F6F0_00000838
    addi r3, r30, 0x29c
    addi r4, r1, 0x8
    li r5, 0x0
    li r6, 0x1
    li r7, 0x0
    bl fn_80470364
    lwz r0, 0x98(r30)
    oris r0, r0, 0x8
    stw r0, 0x98(r30)
    b lbl_fn_8053F6F0_0000084C
lbl_fn_8053F6F0_00000838:
    mr r3, r30
    bl fn_8053F81C
    lwz r0, 0x98(r30)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x98(r30)
lbl_fn_8053F6F0_0000084C:
    lis r4, lbl_8075E148@ha
    lwz r5, 0x190(r30)
    addi r4, r4, lbl_8075E148@l
    addi r3, r30, 0x74
    addi r4, r4, 0x3c
    crclr 6
    bl sprintf
    addi r3, r30, 0x74
    bl fn_800C3094
    lwz r4, 0x98(r30)
    li r3, 0x6
    lwz r0, 0x38(r30)
    oris r4, r4, 0x4000
    stw r4, 0x98(r30)
    rlwinm r0, r0, 0, 30, 28
    stw r3, 0x194(r30)
    stw r0, 0x38(r30)
lbl_fn_8053F6F0_00000890:
    lwz r0, 0x114(r1)
    lwz r31, 0x10c(r1)
    lwz r30, 0x108(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_8053F81C(void)
{
    nofralloc
    stwu r1, -0xb0(r1)
    mflr r0
    stw r0, 0xb4(r1)
    addi r11, r1, 0xb0
    bl _savegpr_20
    mr r24, r3
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_000008EC
lbl_fn_8053F81C_000008CC:
    lwz r0, 0xc4(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x1c
lbl_fn_8053F81C_000008EC:
    lwz r0, 0xc8(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_000008CC
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000924
lbl_fn_8053F81C_00000904:
    lwz r0, 0xd4(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x20
lbl_fn_8053F81C_00000924:
    lwz r0, 0xd8(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_00000904
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_0000095C
lbl_fn_8053F81C_0000093C:
    lwz r0, 0xe4(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x20
lbl_fn_8053F81C_0000095C:
    lwz r0, 0xe8(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_0000093C
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000994
lbl_fn_8053F81C_00000974:
    lwz r0, 0xf4(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x28
lbl_fn_8053F81C_00000994:
    lwz r0, 0xf8(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_00000974
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_000009CC
lbl_fn_8053F81C_000009AC:
    lwz r0, 0x104(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x48
lbl_fn_8053F81C_000009CC:
    lwz r0, 0x108(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_000009AC
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000A04
lbl_fn_8053F81C_000009E4:
    lwz r0, 0x124(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x1c
lbl_fn_8053F81C_00000A04:
    lwz r0, 0x128(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_000009E4
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000A3C
lbl_fn_8053F81C_00000A1C:
    lwz r0, 0x134(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x20
lbl_fn_8053F81C_00000A3C:
    lwz r0, 0x138(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_00000A1C
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000A74
lbl_fn_8053F81C_00000A54:
    lwz r0, 0x144(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x1c
lbl_fn_8053F81C_00000A74:
    lwz r0, 0x148(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_00000A54
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000AAC
lbl_fn_8053F81C_00000A8C:
    lwz r0, 0x154(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x84
lbl_fn_8053F81C_00000AAC:
    lwz r0, 0x158(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_00000A8C
    li r21, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_00000AE4
lbl_fn_8053F81C_00000AC4:
    lwz r0, 0x164(r24)
    lwzx r12, r20, r0
    add r3, r0, r20
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    addi r21, r21, 0x1
    addi r20, r20, 0x1c0
lbl_fn_8053F81C_00000AE4:
    lwz r0, 0x168(r24)
    cmpw r21, r0
    blt lbl_fn_8053F81C_00000AC4
    lwz r0, 0x68(r24)
    srwi. r3, r0, 31
    bne lbl_fn_8053F81C_00000B08
    lbz r0, 0x68(r24)
    clrlwi r0, r0, 25
    b lbl_fn_8053F81C_00000B0C
lbl_fn_8053F81C_00000B08:
    lwz r0, 0x6c(r24)
lbl_fn_8053F81C_00000B0C:
    cmpwi r0, 0x0
    beq lbl_fn_8053F81C_00000E8C
    cmpwi r3, 0x0
    li r5, -0x1
    bne lbl_fn_8053F81C_00000B30
    lbz r0, 0x68(r24)
    addi r4, r24, 0x69
    clrlwi r3, r0, 25
    b lbl_fn_8053F81C_00000B38
lbl_fn_8053F81C_00000B30:
    lwz r4, 0x70(r24)
    lwz r3, 0x6c(r24)
lbl_fn_8053F81C_00000B38:
    cmpwi r3, 0x0
    beq lbl_fn_8053F81C_00000B7C
    subi r3, r3, 0x1
    li r0, -0x1
    cmplw r3, r0
    bge lbl_fn_8053F81C_00000B54
    mr r5, r3
lbl_fn_8053F81C_00000B54:
    add r3, r4, r5
lbl_fn_8053F81C_00000B58:
    lbz r0, 0x0(r3)
    cmpwi r0, 0x5f
    bne lbl_fn_8053F81C_00000B6C
    subf r21, r4, r3
    b lbl_fn_8053F81C_00000B80
lbl_fn_8053F81C_00000B6C:
    cmplw r3, r4
    ble lbl_fn_8053F81C_00000B7C
    subi r3, r3, 0x1
    b lbl_fn_8053F81C_00000B58
lbl_fn_8053F81C_00000B7C:
    li r21, -0x1
lbl_fn_8053F81C_00000B80:
    addis r0, r21, 0x1
    cmplwi r0, 0xffff
    bne lbl_fn_8053F81C_00000C64
    addi r3, r1, 0x68
    addi r4, r24, 0x68
    bl fn_8006B2D8
    lis r5, lbl_8075E148@ha
    addi r3, r1, 0x5c
    addi r5, r5, lbl_8075E148@l
    addi r4, r1, 0x68
    addi r5, r5, 0x4a
    bl fn_8006D008
    lwz r0, 0x68(r24)
    srwi. r4, r0, 31
    bne lbl_fn_8053F81C_00000BE0
    lwz r3, 0x5c(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8053F81C_00000BE0
    lwz r0, 0x60(r1)
    stw r0, 0x6c(r24)
    stw r3, 0x68(r24)
    lwz r0, 0x64(r1)
    stw r0, 0x70(r24)
    b lbl_fn_8053F81C_00000C38
lbl_fn_8053F81C_00000BE0:
    cmpwi r4, 0x0
    beq lbl_fn_8053F81C_00000BF0
    lwz r5, 0x6c(r24)
    b lbl_fn_8053F81C_00000BF8
lbl_fn_8053F81C_00000BF0:
    lbz r0, 0x68(r24)
    clrlwi r5, r0, 25
lbl_fn_8053F81C_00000BF8:
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8053F81C_00000C14
    lbz r0, 0x5c(r1)
    addi r6, r1, 0x5d
    clrlwi r4, r0, 25
    b lbl_fn_8053F81C_00000C1C
lbl_fn_8053F81C_00000C14:
    lwz r6, 0x64(r1)
    lwz r4, 0x60(r1)
lbl_fn_8053F81C_00000C1C:
    lbz r0, 0x1c(r1)
    add r7, r6, r4
    stb r0, 0x18(r1)
    addi r3, r24, 0x68
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8053F81C_00000C38:
    lwz r0, 0x5c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8053F81C_00000C4C
    lwz r3, 0x64(r1)
    bl dtor_80084684
lbl_fn_8053F81C_00000C4C:
    lwz r0, 0x68(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8053F81C_00000E6C
    lwz r3, 0x70(r1)
    bl dtor_80084684
    b lbl_fn_8053F81C_00000E6C
lbl_fn_8053F81C_00000C64:
    mr r5, r21
    addi r3, r1, 0x50
    addi r4, r24, 0x68
    li r6, -0x1
    bl fn_80069BF4
    lwz r0, 0x50(r1)
    srwi. r4, r0, 31
    bne lbl_fn_8053F81C_00000C90
    lbz r0, 0x50(r1)
    clrlwi r3, r0, 25
    b lbl_fn_8053F81C_00000C94
lbl_fn_8053F81C_00000C90:
    lwz r3, 0x54(r1)
lbl_fn_8053F81C_00000C94:
    subi r0, r3, 0x7
    cmpwi r4, 0x0
    cntlzw r0, r0
    srwi r20, r0, 5
    beq lbl_fn_8053F81C_00000CB0
    lwz r3, 0x58(r1)
    bl dtor_80084684
lbl_fn_8053F81C_00000CB0:
    cmpwi r20, 0x0
    beq lbl_fn_8053F81C_00000D98
    mr r6, r21
    addi r3, r1, 0x44
    addi r4, r24, 0x68
    li r5, 0x0
    bl fn_80069BF4
    lis r5, lbl_8075E148@ha
    addi r3, r1, 0x38
    addi r5, r5, lbl_8075E148@l
    addi r4, r1, 0x44
    addi r5, r5, 0x4a
    bl fn_8006D008
    lwz r0, 0x68(r24)
    srwi. r4, r0, 31
    bne lbl_fn_8053F81C_00000D14
    lwz r3, 0x38(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8053F81C_00000D14
    lwz r0, 0x3c(r1)
    stw r0, 0x6c(r24)
    stw r3, 0x68(r24)
    lwz r0, 0x40(r1)
    stw r0, 0x70(r24)
    b lbl_fn_8053F81C_00000D6C
lbl_fn_8053F81C_00000D14:
    cmpwi r4, 0x0
    beq lbl_fn_8053F81C_00000D24
    lwz r5, 0x6c(r24)
    b lbl_fn_8053F81C_00000D2C
lbl_fn_8053F81C_00000D24:
    lbz r0, 0x68(r24)
    clrlwi r5, r0, 25
lbl_fn_8053F81C_00000D2C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8053F81C_00000D48
    lbz r0, 0x38(r1)
    addi r6, r1, 0x39
    clrlwi r4, r0, 25
    b lbl_fn_8053F81C_00000D50
lbl_fn_8053F81C_00000D48:
    lwz r6, 0x40(r1)
    lwz r4, 0x3c(r1)
lbl_fn_8053F81C_00000D50:
    lbz r0, 0x14(r1)
    add r7, r6, r4
    stb r0, 0x10(r1)
    addi r3, r24, 0x68
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8053F81C_00000D6C:
    lwz r0, 0x38(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8053F81C_00000D80
    lwz r3, 0x40(r1)
    bl dtor_80084684
lbl_fn_8053F81C_00000D80:
    lwz r0, 0x44(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8053F81C_00000E6C
    lwz r3, 0x4c(r1)
    bl dtor_80084684
    b lbl_fn_8053F81C_00000E6C
lbl_fn_8053F81C_00000D98:
    addi r3, r1, 0x2c
    addi r4, r24, 0x68
    bl fn_8006B2D8
    lis r5, lbl_8075E148@ha
    addi r3, r1, 0x20
    addi r5, r5, lbl_8075E148@l
    addi r4, r1, 0x2c
    addi r5, r5, 0x4a
    bl fn_8006D008
    lwz r0, 0x68(r24)
    srwi. r4, r0, 31
    bne lbl_fn_8053F81C_00000DEC
    lwz r3, 0x20(r1)
    srwi. r0, r3, 31
    bne lbl_fn_8053F81C_00000DEC
    lwz r0, 0x24(r1)
    stw r0, 0x6c(r24)
    stw r3, 0x68(r24)
    lwz r0, 0x28(r1)
    stw r0, 0x70(r24)
    b lbl_fn_8053F81C_00000E44
lbl_fn_8053F81C_00000DEC:
    cmpwi r4, 0x0
    beq lbl_fn_8053F81C_00000DFC
    lwz r5, 0x6c(r24)
    b lbl_fn_8053F81C_00000E04
lbl_fn_8053F81C_00000DFC:
    lbz r0, 0x68(r24)
    clrlwi r5, r0, 25
lbl_fn_8053F81C_00000E04:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    bne lbl_fn_8053F81C_00000E20
    lbz r0, 0x20(r1)
    addi r6, r1, 0x21
    clrlwi r4, r0, 25
    b lbl_fn_8053F81C_00000E28
lbl_fn_8053F81C_00000E20:
    lwz r6, 0x28(r1)
    lwz r4, 0x24(r1)
lbl_fn_8053F81C_00000E28:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r24, 0x68
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_8053F81C_00000E44:
    lwz r0, 0x20(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8053F81C_00000E58
    lwz r3, 0x28(r1)
    bl dtor_80084684
lbl_fn_8053F81C_00000E58:
    lwz r0, 0x2c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8053F81C_00000E6C
    lwz r3, 0x34(r1)
    bl dtor_80084684
lbl_fn_8053F81C_00000E6C:
    lwz r0, 0x68(r24)
    addi r3, r24, 0x1d4
    srwi. r0, r0, 31
    bne lbl_fn_8053F81C_00000E84
    addi r4, r24, 0x69
    b lbl_fn_8053F81C_00000E88
lbl_fn_8053F81C_00000E84:
    lwz r4, 0x70(r24)
lbl_fn_8053F81C_00000E88:
    bl fn_803B3C10
lbl_fn_8053F81C_00000E8C:
    lwz r0, 0x1ec(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8053F81C_00001194
    mr r3, r24
    bl fn_803B5470
    lwz r0, 0x280(r24)
    stw r3, 0x1ec(r24)
    cmpwi r0, 0x0
    bne lbl_fn_8053F81C_00001194
    lwz r0, 0x98(r24)
    extrwi r0, r0, 1, 8
    cmplwi r0, 0x1
    bne lbl_fn_8053F81C_00000EE0
    lwz r0, 0x50(r24)
    cmpwi r0, 0x1
    beq lbl_fn_8053F81C_00000ED4
    cmpwi r0, 0x3
    bne lbl_fn_8053F81C_00000EE0
lbl_fn_8053F81C_00000ED4:
    mr r3, r24
    bl fn_802288D0
    stw r3, 0x280(r24)
lbl_fn_8053F81C_00000EE0:
    li r28, 0x0
    li r23, 0x0
    b lbl_fn_8053F81C_000010C8
lbl_fn_8053F81C_00000EEC:
    cmpwi r28, 0x0
    li r0, 0x0
    blt lbl_fn_8053F81C_00000F04
    cmpw r28, r3
    bge lbl_fn_8053F81C_00000F04
    li r0, 0x1
lbl_fn_8053F81C_00000F04:
    cmpwi r0, 0x0
    beq lbl_fn_8053F81C_00000F18
    lwz r3, 0xb8(r24)
    lwzx r31, r3, r23
    b lbl_fn_8053F81C_00000F1C
lbl_fn_8053F81C_00000F18:
    li r31, 0x0
lbl_fn_8053F81C_00000F1C:
    li r27, 0x0
    li r22, 0x0
    b lbl_fn_8053F81C_000010B4
lbl_fn_8053F81C_00000F28:
    cmpwi r27, 0x0
    li r0, 0x0
    blt lbl_fn_8053F81C_00000F40
    cmpw r27, r3
    bge lbl_fn_8053F81C_00000F40
    li r0, 0x1
lbl_fn_8053F81C_00000F40:
    cmpwi r0, 0x0
    beq lbl_fn_8053F81C_00000F54
    lwz r3, 0x3c(r31)
    lwzx r30, r3, r22
    b lbl_fn_8053F81C_00000F58
lbl_fn_8053F81C_00000F54:
    li r30, 0x0
lbl_fn_8053F81C_00000F58:
    lwz r0, 0xc(r30)
    cmpwi r0, 0x3
    bne lbl_fn_8053F81C_000010AC
    li r26, 0x0
    li r21, 0x0
    b lbl_fn_8053F81C_000010A0
lbl_fn_8053F81C_00000F70:
    cmpwi r26, 0x0
    li r0, 0x0
    blt lbl_fn_8053F81C_00000F88
    cmpw r26, r3
    bge lbl_fn_8053F81C_00000F88
    li r0, 0x1
lbl_fn_8053F81C_00000F88:
    cmpwi r0, 0x0
    beq lbl_fn_8053F81C_00000F9C
    lwz r3, 0x18(r30)
    lwzx r29, r3, r21
    b lbl_fn_8053F81C_00000FA0
lbl_fn_8053F81C_00000F9C:
    li r29, 0x0
lbl_fn_8053F81C_00000FA0:
    lwz r0, 0xc(r29)
    cmpwi r0, 0x26
    bne lbl_fn_8053F81C_00001098
    li r25, 0x0
    li r20, 0x0
    b lbl_fn_8053F81C_0000108C
lbl_fn_8053F81C_00000FB8:
    cmpwi r25, 0x0
    li r0, 0x0
    blt lbl_fn_8053F81C_00000FD0
    cmpw r25, r3
    bge lbl_fn_8053F81C_00000FD0
    li r0, 0x1
lbl_fn_8053F81C_00000FD0:
    cmpwi r0, 0x0
    beq lbl_fn_8053F81C_00000FE4
    lwz r3, 0x14(r29)
    lwzx r6, r3, r20
    b lbl_fn_8053F81C_00000FE8
lbl_fn_8053F81C_00000FE4:
    li r6, 0x0
lbl_fn_8053F81C_00000FE8:
    lwz r7, 0x30(r6)
    cmpwi r7, 0x0
    ble lbl_fn_8053F81C_00000FFC
    lwz r3, 0x2c(r6)
    b lbl_fn_8053F81C_00001000
lbl_fn_8053F81C_00000FFC:
    li r3, 0x0
lbl_fn_8053F81C_00001000:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8053F81C_00001084
    lwz r0, 0x168(r24)
    li r4, 0x0
    lwz r5, 0x10(r30)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_8053F81C_00001044
lbl_fn_8053F81C_00001024:
    lwz r0, 0x164(r24)
    add r3, r0, r4
    lwz r0, 0x14(r3)
    cmpw r5, r0
    bne lbl_fn_8053F81C_0000103C
    b lbl_fn_8053F81C_00001048
lbl_fn_8053F81C_0000103C:
    addi r4, r4, 0x1c0
    bdnz lbl_fn_8053F81C_00001024
lbl_fn_8053F81C_00001044:
    li r3, 0x0
lbl_fn_8053F81C_00001048:
    cmpwi r7, 0x1
    ble lbl_fn_8053F81C_0000105C
    lwz r4, 0x2c(r6)
    addi r4, r4, 0x8
    b lbl_fn_8053F81C_00001060
lbl_fn_8053F81C_0000105C:
    li r4, 0x0
lbl_fn_8053F81C_00001060:
    cmpwi r7, 0x1
    lha r4, 0x6(r4)
    ble lbl_fn_8053F81C_00001078
    lwz r5, 0x2c(r6)
    addi r5, r5, 0x8
    b lbl_fn_8053F81C_0000107C
lbl_fn_8053F81C_00001078:
    li r5, 0x0
lbl_fn_8053F81C_0000107C:
    lha r5, 0x4(r5)
    bl fn_800127CC
lbl_fn_8053F81C_00001084:
    addi r25, r25, 0x1
    addi r20, r20, 0x8
lbl_fn_8053F81C_0000108C:
    lwz r3, 0x18(r29)
    cmpw r25, r3
    blt lbl_fn_8053F81C_00000FB8
lbl_fn_8053F81C_00001098:
    addi r26, r26, 0x1
    addi r21, r21, 0x8
lbl_fn_8053F81C_000010A0:
    lwz r3, 0x1c(r30)
    cmpw r26, r3
    blt lbl_fn_8053F81C_00000F70
lbl_fn_8053F81C_000010AC:
    addi r27, r27, 0x1
    addi r22, r22, 0x8
lbl_fn_8053F81C_000010B4:
    lwz r3, 0x40(r31)
    cmpw r27, r3
    blt lbl_fn_8053F81C_00000F28
    addi r28, r28, 0x1
    addi r23, r23, 0x8
lbl_fn_8053F81C_000010C8:
    lwz r3, 0xbc(r24)
    cmpw r28, r3
    blt lbl_fn_8053F81C_00000EEC
    lwz r0, 0x190(r24)
    cmpwi r0, 0x270e
    bne lbl_fn_8053F81C_000010F8
    lwz r3, lbl_8087F540
    bl fn_8048FE88
    lwz r3, lbl_8087F540
    li r4, 0x1
    lwz r3, 0x2400(r3)
    bl fn_800D246C
lbl_fn_8053F81C_000010F8:
    lwz r0, 0x190(r24)
    cmpwi r0, 0x151b
    bne lbl_fn_8053F81C_00001144
    lwz r3, lbl_8087F540
    bl fn_8048FE88
    lwz r3, lbl_8087F540
    li r4, 0x1
    lwz r3, 0x2400(r3)
    bl fn_800D246C
    lwz r3, lbl_8087F540
    lfs f1, lbl_80887CC4
    lwz r3, 0x2400(r3)
    lfs f0, lbl_80887CC8
    lfs f2, 0x4c(r3)
    fdivs f1, f2, f1
    stfs f1, 0x4c(r3)
    lwz r3, lbl_8087F540
    lwz r3, 0x2400(r3)
    stfs f0, 0x54(r3)
lbl_fn_8053F81C_00001144:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x194(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8053F81C_00001194
    lwz r0, 0x190(r24)
    cmpwi r0, 0x19d
    bne lbl_fn_8053F81C_00001194
    lis r4, lbl_8075E148@ha
    mr r3, r24
    addi r4, r4, lbl_8075E148@l
    li r5, 0x0
    addi r4, r4, 0x52
    bl fn_801F3FF8
    stw r3, 0x2c0(r24)
    li r4, 0x1
    bl fn_800D246C
    lwz r3, 0x2c0(r24)
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r3)
lbl_fn_8053F81C_00001194:
    addi r11, r1, 0xb0
    bl _restgpr_20
    lwz r0, 0xb4(r1)
    mtlr r0
    addi r1, r1, 0xb0
    blr
}

asm void fn_80540120(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    lwz r4, 0x98(r3)
    extrwi r0, r4, 1, 1
    cmplwi r0, 0x1
    beq lbl_fn_80540120_000011E0
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000011E0:
    extrwi. r0, r4, 1, 12
    beq lbl_fn_80540120_000011F0
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000011F0:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_00001254
lbl_fn_80540120_000011FC:
    lwz r0, 0x164(r31)
    add. r3, r0, r30
    beq lbl_fn_80540120_0000124C
    lwz r4, 0x20(r3)
    li r0, 0x1
    cmpwi r4, 0x1
    beq lbl_fn_80540120_00001224
    cmpwi r4, 0x7
    beq lbl_fn_80540120_00001224
    li r0, 0x0
lbl_fn_80540120_00001224:
    cmpwi r0, 0x0
    beq lbl_fn_80540120_0000124C
    bl fn_800128FC
    cmpwi r3, 0x0
    beq lbl_fn_80540120_0000124C
    bl fn_8013655C
    cmpwi r3, 0x0
    beq lbl_fn_80540120_0000124C
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_0000124C:
    addi r29, r29, 0x1
    addi r30, r30, 0x1c0
lbl_fn_80540120_00001254:
    lwz r0, 0x168(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_000011FC
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_0000129C
lbl_fn_80540120_0000126C:
    lwz r0, 0xc4(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_00001294
    li r0, 0x0
    b lbl_fn_80540120_000012AC
lbl_fn_80540120_00001294:
    addi r29, r29, 0x1
    addi r30, r30, 0x1c
lbl_fn_80540120_0000129C:
    lwz r0, 0xc8(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_0000126C
    li r0, 0x1
lbl_fn_80540120_000012AC:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_000012BC
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000012BC:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_000012F8
lbl_fn_80540120_000012C8:
    lwz r0, 0xd4(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_000012F0
    li r0, 0x0
    b lbl_fn_80540120_00001308
lbl_fn_80540120_000012F0:
    addi r29, r29, 0x1
    addi r30, r30, 0x20
lbl_fn_80540120_000012F8:
    lwz r0, 0xd8(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_000012C8
    li r0, 0x1
lbl_fn_80540120_00001308:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_00001318
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_00001318:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_00001354
lbl_fn_80540120_00001324:
    lwz r0, 0xe4(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_0000134C
    li r0, 0x0
    b lbl_fn_80540120_00001364
lbl_fn_80540120_0000134C:
    addi r29, r29, 0x1
    addi r30, r30, 0x20
lbl_fn_80540120_00001354:
    lwz r0, 0xe8(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_00001324
    li r0, 0x1
lbl_fn_80540120_00001364:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_00001374
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_00001374:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_000013B0
lbl_fn_80540120_00001380:
    lwz r0, 0xf4(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_000013A8
    li r0, 0x0
    b lbl_fn_80540120_000013C0
lbl_fn_80540120_000013A8:
    addi r29, r29, 0x1
    addi r30, r30, 0x28
lbl_fn_80540120_000013B0:
    lwz r0, 0xf8(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_00001380
    li r0, 0x1
lbl_fn_80540120_000013C0:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_000013D0
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000013D0:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_0000140C
lbl_fn_80540120_000013DC:
    lwz r0, 0x104(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_00001404
    li r0, 0x0
    b lbl_fn_80540120_0000141C
lbl_fn_80540120_00001404:
    addi r29, r29, 0x1
    addi r30, r30, 0x48
lbl_fn_80540120_0000140C:
    lwz r0, 0x108(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_000013DC
    li r0, 0x1
lbl_fn_80540120_0000141C:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_0000142C
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_0000142C:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_00001468
lbl_fn_80540120_00001438:
    lwz r0, 0x124(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_00001460
    li r0, 0x0
    b lbl_fn_80540120_00001478
lbl_fn_80540120_00001460:
    addi r29, r29, 0x1
    addi r30, r30, 0x1c
lbl_fn_80540120_00001468:
    lwz r0, 0x128(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_00001438
    li r0, 0x1
lbl_fn_80540120_00001478:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_00001488
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_00001488:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_000014C4
lbl_fn_80540120_00001494:
    lwz r0, 0x134(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_000014BC
    li r0, 0x0
    b lbl_fn_80540120_000014D4
lbl_fn_80540120_000014BC:
    addi r29, r29, 0x1
    addi r30, r30, 0x20
lbl_fn_80540120_000014C4:
    lwz r0, 0x138(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_00001494
    li r0, 0x1
lbl_fn_80540120_000014D4:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_000014E4
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000014E4:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_00001520
lbl_fn_80540120_000014F0:
    lwz r0, 0x144(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_00001518
    li r0, 0x0
    b lbl_fn_80540120_00001530
lbl_fn_80540120_00001518:
    addi r29, r29, 0x1
    addi r30, r30, 0x1c
lbl_fn_80540120_00001520:
    lwz r0, 0x148(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_000014F0
    li r0, 0x1
lbl_fn_80540120_00001530:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_00001540
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_00001540:
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_0000157C
lbl_fn_80540120_0000154C:
    lwz r0, 0x164(r31)
    lwzx r12, r30, r0
    add r3, r0, r30
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_80540120_00001574
    li r0, 0x0
    b lbl_fn_80540120_0000158C
lbl_fn_80540120_00001574:
    addi r29, r29, 0x1
    addi r30, r30, 0x1c0
lbl_fn_80540120_0000157C:
    lwz r0, 0x168(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_0000154C
    li r0, 0x1
lbl_fn_80540120_0000158C:
    cmpwi r0, 0x0
    bne lbl_fn_80540120_0000159C
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_0000159C:
    addi r3, r31, 0x1d4
    bl fn_803B3CA8
    cmpwi r3, 0x0
    beq lbl_fn_80540120_000015B4
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000015B4:
    lwz r3, 0x1ec(r31)
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80540120_000015D0
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000015D0:
    lwz r3, 0x280(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80540120_000015F4
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80540120_000015F4
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_000015F4:
    addi r3, r31, 0x74
    bl fn_800C310C
    cmpwi r3, 0x0
    beq lbl_fn_80540120_0000160C
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_0000160C:
    lwz r3, lbl_8087F498
    cmpwi r3, 0x0
    beq lbl_fn_80540120_0000162C
    bl fn_803EB234
    cmpwi r3, 0x0
    beq lbl_fn_80540120_0000162C
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_0000162C:
    lwz r3, lbl_8087F540
    li r30, 0x0
    lwz r0, 0x1f34(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80540120_00001654
    addi r3, r3, 0x1f20
    bl fn_8004B0E4
    cmpwi r3, 0x0
    beq lbl_fn_80540120_00001654
    li r30, 0x1
lbl_fn_80540120_00001654:
    cmpwi r30, 0x0
    beq lbl_fn_80540120_00001664
    li r3, 0x0
    b lbl_fn_80540120_000016D8
lbl_fn_80540120_00001664:
    bl fn_800827E0
    addi r3, r3, 0x150
    bl fn_80084F84
    mr r30, r3
    bl fn_800827E0
    addi r3, r3, 0x138
    bl fn_80084F84
    lwz r0, 0x284(r31)
    add r3, r3, r30
    subf. r0, r3, r0
    beq lbl_fn_80540120_00001694
    b lbl_fn_80540120_00001698
lbl_fn_80540120_00001694:
    lwz r0, 0x288(r31)
lbl_fn_80540120_00001698:
    stw r0, 0x288(r31)
    li r29, 0x0
    li r30, 0x0
    b lbl_fn_80540120_000016BC
lbl_fn_80540120_000016A8:
    lwz r0, 0x134(r31)
    add r3, r0, r30
    bl fn_80204230
    addi r29, r29, 0x1
    addi r30, r30, 0x20
lbl_fn_80540120_000016BC:
    lwz r0, 0x138(r31)
    cmpw r29, r0
    blt lbl_fn_80540120_000016A8
    lwz r3, lbl_8087F540
    bl fn_8048FF34
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_80540120_000016D8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80540668(void)
{
    nofralloc
    lwz r5, 0x98(r3)
    extrwi r0, r5, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_80540668_0000170C
    oris r0, r5, 0x200
    stw r0, 0x98(r3)
lbl_fn_80540668_0000170C:
    cmpwi r4, 0x0
    bnelr
    lwz r4, 0x98(r3)
    extrwi r0, r4, 1, 1
    cmplwi r0, 0x1
    bnelr
    ori r0, r4, 0x8000
    stw r0, 0x98(r3)
    blr
}

asm void fn_805406A4(void)
{
    nofralloc
    lwz r4, 0x98(r3)
    extrwi r0, r4, 1, 1
    cmplwi r0, 0x1
    bnelr
    ori r0, r4, 0x8000
    stw r0, 0x98(r3)
    blr
}

asm void fn_805406C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r5, 0x98(r3)
    extrwi r0, r5, 1, 1
    cmplwi r0, 0x1
    bne lbl_fn_805406C0_00001A78
    neg r0, r4
    or r0, r0, r4
    rlwimi r5, r0, 27, 5, 5
    stw r5, 0x98(r3)
    addi r3, r3, 0x29c
    bl fn_80470528
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_000017C4
lbl_fn_805406C0_000017A4:
    lwz r0, 0xc4(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x1c
lbl_fn_805406C0_000017C4:
    lwz r0, 0xc8(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_000017A4
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_000017FC
lbl_fn_805406C0_000017DC:
    lwz r0, 0xd4(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x20
lbl_fn_805406C0_000017FC:
    lwz r0, 0xd8(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_000017DC
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_00001834
lbl_fn_805406C0_00001814:
    lwz r0, 0xe4(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x20
lbl_fn_805406C0_00001834:
    lwz r0, 0xe8(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_00001814
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_0000186C
lbl_fn_805406C0_0000184C:
    lwz r0, 0xf4(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x28
lbl_fn_805406C0_0000186C:
    lwz r0, 0xf8(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_0000184C
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_000018A4
lbl_fn_805406C0_00001884:
    lwz r0, 0x104(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x48
lbl_fn_805406C0_000018A4:
    lwz r0, 0x108(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_00001884
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_000018DC
lbl_fn_805406C0_000018BC:
    lwz r0, 0x124(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x1c
lbl_fn_805406C0_000018DC:
    lwz r0, 0x128(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_000018BC
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_00001914
lbl_fn_805406C0_000018F4:
    lwz r0, 0x134(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x20
lbl_fn_805406C0_00001914:
    lwz r0, 0x138(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_000018F4
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_0000194C
lbl_fn_805406C0_0000192C:
    lwz r0, 0x144(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x1c
lbl_fn_805406C0_0000194C:
    lwz r0, 0x148(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_0000192C
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_00001984
lbl_fn_805406C0_00001964:
    lwz r0, 0x154(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x84
lbl_fn_805406C0_00001984:
    lwz r0, 0x158(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_00001964
    lwz r0, 0x98(r30)
    extrwi. r0, r0, 1, 15
    bne lbl_fn_805406C0_000019D4
    li r28, 0x0
    li r29, 0x0
    b lbl_fn_805406C0_000019C8
lbl_fn_805406C0_000019A8:
    lwz r0, 0x164(r30)
    lwzx r12, r29, r0
    add r3, r0, r29
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r28, r28, 0x1
    addi r29, r29, 0x1c0
lbl_fn_805406C0_000019C8:
    lwz r0, 0x168(r30)
    cmpw r28, r0
    blt lbl_fn_805406C0_000019A8
lbl_fn_805406C0_000019D4:
    addi r3, r30, 0x1d4
    bl fn_803B3AC4
    cmpwi r31, 0x0
    beq lbl_fn_805406C0_00001A3C
    lwz r3, 0x1ec(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805406C0_000019FC
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x1ec(r30)
lbl_fn_805406C0_000019FC:
    lwz r3, 0x280(r30)
    cmpwi r3, 0x0
    beq lbl_fn_805406C0_00001A14
    bl fn_800D2338
    li r0, 0x0
    stw r0, 0x280(r30)
lbl_fn_805406C0_00001A14:
    lwz r3, lbl_8087F540
    lwz r0, 0x2400(r3)
    cmpwi r0, 0x0
    beq lbl_fn_805406C0_00001A3C
    lwz r0, 0x190(r30)
    cmpwi r0, 0x151b
    beq lbl_fn_805406C0_00001A3C
    cmpwi r0, 0x151f
    beq lbl_fn_805406C0_00001A3C
    bl fn_8048FEF0
lbl_fn_805406C0_00001A3C:
    addi r3, r30, 0x74
    bl fn_800C3124
    lwz r3, 0x98(r30)
    lfs f0, lbl_80887CA0
    extrwi. r0, r3, 1, 15
    stfs f0, 0x198(r30)
    stfs f0, 0x19c(r30)
    bne lbl_fn_805406C0_00001A64
    rlwinm r0, r3, 0, 2, 0
    stw r0, 0x98(r30)
lbl_fn_805406C0_00001A64:
    lwz r3, 0x98(r30)
    li r0, 0x4
    stw r0, 0x194(r30)
    rlwinm r3, r3, 0, 15, 13
    stw r3, 0x98(r30)
lbl_fn_805406C0_00001A78:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
