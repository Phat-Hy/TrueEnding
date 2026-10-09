#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8006A250(void);
extern void fn_80084320(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC6B4(void);
extern void fn_800DD3FC(void);
extern void fn_801F3FF8(void);
extern void fn_801F4CB4(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEDBC(void);
extern void fn_801FEE08(void);
extern void fn_804A5CD8(void);
extern void fn_804AC96C(void);
extern void fn_804ACAF8(void);
extern void fn_804ACD10(void);
extern void fn_804ACDBC(void);
extern void fn_804AD000(void);
extern void fn_804BD9B8(void);
extern void fn_804BF550(void);
extern void fn_804BFB54(void);
extern void fn_804C18A8(void);
extern void fn_804C23E4(void);
extern void fn_804CD97C(void);
extern void fn_804CDE1C(void);
extern void fn_804DBD0C(void);
extern void fn_804DDD54(void);
extern void fn_804DE2FC(void);
extern void fn_804EA5E0(void);
extern void fn_804EB874(void);
extern void fn_8050A638(void);
extern void fn_8050BA6C(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void fn_806A8E40(void);
extern void fn_806A8E70(void);
extern void fn_806B0DE0(void);
extern void fn_806B0E30(void);
extern void fn_806B1250(void);

/* External data declarations */
extern u8 jumptable_80790C48[];
extern u8 lbl_80758848[];
extern u8 lbl_807588DC[];
extern u8 lbl_80790CCC[];
extern u8 lbl_80790D74[];

/* Small data declarations */
extern u32 lbl_8087F580;
extern u32 lbl_8087F588;
extern u32 lbl_8087F59C;
extern u32 lbl_8087F5C4;
extern u32 lbl_8087F5F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F628;
extern u32 lbl_8087F86C;
extern u32 lbl_808813D0;
extern u32 lbl_808873F8;
extern u32 lbl_808873FC;
extern u32 lbl_80887400;
extern u32 lbl_80887404;
extern u32 lbl_80887408;
extern u32 lbl_8088740C;

/* Function declarations */
void fn_804BBB60(void);
void fn_804BBBA0(void);
void fn_804BBC28(void);
void fn_804BC30C(void);
void fn_804BC330(void);
void fn_804BC390(void);
void fn_804BC458(void);
void fn_804BC628(void);

asm void fn_804BBB60(void)
{
    nofralloc
    li r6, 0x0
    li r4, 0x0
    b lbl_fn_804BBB60_00000028
lbl_fn_804BBB60_0000000C:
    add r5, r3, r4
    addi r6, r6, 0x1
    lwz r5, 0xbc(r5)
    addi r4, r4, 0x4
    lwz r0, 0x38(r5)
    ori r0, r0, 0x4
    stw r0, 0x38(r5)
lbl_fn_804BBB60_00000028:
    lwz r0, 0xb8(r3)
    cmplw r6, r0
    blt lbl_fn_804BBB60_0000000C
    li r0, 0xa
    stw r0, 0x88(r3)
    blr
}

asm void fn_804BBBA0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, lbl_8087F5C4
    cmpwi r0, 0x0
    bne lbl_fn_804BBBA0_000000A8
    lis r5, lbl_807588DC@ha
    li r3, 0xf98
    addi r5, r5, lbl_807588DC@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_804BBBA0_000000A4
    mr r4, r29
    mr r5, r30
    mr r6, r31
    bl fn_804BBC28
lbl_fn_804BBBA0_000000A4:
    stw r3, lbl_8087F5C4
lbl_fn_804BBBA0_000000A8:
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F5C4
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804BBC28(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    mr r27, r3
    mr r28, r5
    mr r26, r6
    bl fn_800D1D3C
    lis r3, lbl_80790CCC@ha
    lis r4, fn_804BC30C@ha
    addi r3, r3, lbl_80790CCC@l
    lis r5, fn_804BC330@ha
    stw r3, 0x0(r27)
    addi r3, r27, 0x80
    addi r4, r4, fn_804BC30C@l
    addi r5, r5, fn_804BC330@l
    li r6, 0x22c
    li r7, 0x6
    bl fn_806958E0
    lis r3, 0x8000
    lis r4, lbl_807588DC@ha
    li r7, 0x0
    li r6, -0x1
    subi r0, r3, 0x1
    addi r4, r4, lbl_807588DC@l
    stw r7, 0xd88(r27)
    mr r3, r27
    addi r4, r4, 0x1
    li r5, 0x0
    stw r7, 0xd8c(r27)
    stw r7, 0xd90(r27)
    stw r7, 0xd98(r27)
    stw r7, 0xd9c(r27)
    stw r7, 0xda0(r27)
    stw r7, 0xda4(r27)
    stw r7, 0xda8(r27)
    stw r7, 0xdac(r27)
    stw r7, 0xdb0(r27)
    stw r7, 0xdb4(r27)
    stw r7, 0xdcc(r27)
    stw r7, 0xdd0(r27)
    stw r6, 0xe58(r27)
    stw r7, 0xe5c(r27)
    stw r7, 0xe60(r27)
    stw r6, 0xe64(r27)
    stw r6, 0xe68(r27)
    stw r0, 0xe78(r27)
    stw r7, 0xe7c(r27)
    stw r7, 0xe80(r27)
    stw r7, 0xf84(r27)
    stw r7, 0xf88(r27)
    stw r7, 0xf8c(r27)
    stw r7, 0xf90(r27)
    stw r26, 0xe74(r27)
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x4c(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000001DC
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_000001D0
    stw r3, 0x0(r4)
lbl_fn_804BBC28_000001D0:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000001DC:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x24
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x50(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000228
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_0000021C
    stw r3, 0x0(r4)
lbl_fn_804BBC28_0000021C:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000228:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x47
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x54(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000274
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_00000268
    stw r3, 0x0(r4)
lbl_fn_804BBC28_00000268:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000274:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x6a
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x58(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000002C0
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_000002B4
    stw r3, 0x0(r4)
lbl_fn_804BBC28_000002B4:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000002C0:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x8f
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x64(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_0000030C
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_00000300
    stw r3, 0x0(r4)
lbl_fn_804BBC28_00000300:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_0000030C:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0xb3
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x6c(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000358
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_0000034C
    stw r3, 0x0(r4)
lbl_fn_804BBC28_0000034C:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000358:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0xd5
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x70(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000003A4
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_00000398
    stw r3, 0x0(r4)
lbl_fn_804BBC28_00000398:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000003A4:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0xf7
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x74(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000003F0
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_000003E4
    stw r3, 0x0(r4)
lbl_fn_804BBC28_000003E4:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000003F0:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x11f
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x78(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_0000043C
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_00000430
    stw r3, 0x0(r4)
lbl_fn_804BBC28_00000430:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_0000043C:
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x147
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x68(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000488
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_0000047C
    stw r3, 0x0(r4)
lbl_fn_804BBC28_0000047C:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000488:
    lis r3, lbl_807588DC@ha
    li r29, 0x0
    li r30, 0x0
    addi r31, r3, lbl_807588DC@l
lbl_fn_804BBC28_00000498:
    mr r3, r27
    add r26, r27, r30
    addi r4, r31, 0x16d
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x80(r26)
    lwz r0, 0xe80(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000004E0
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_000004D4
    stw r3, 0x0(r4)
lbl_fn_804BBC28_000004D4:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000004E0:
    mr r3, r27
    add r26, r27, r30
    addi r4, r31, 0x194
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x84(r26)
    lwz r0, 0xe80(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000528
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_0000051C
    stw r3, 0x0(r4)
lbl_fn_804BBC28_0000051C:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000528:
    mr r3, r27
    add r26, r27, r30
    addi r4, r31, 0x1b7
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x88(r26)
    lwz r0, 0xe80(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000570
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_00000564
    stw r3, 0x0(r4)
lbl_fn_804BBC28_00000564:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000570:
    mr r3, r27
    add r26, r27, r30
    addi r4, r31, 0x1db
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x8c(r26)
    lwz r0, 0xe80(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000005B8
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_000005AC
    stw r3, 0x0(r4)
lbl_fn_804BBC28_000005AC:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000005B8:
    mr r3, r27
    add r26, r27, r30
    addi r4, r31, 0x1fd
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x90(r26)
    lwz r0, 0xe80(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000600
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_000005F4
    stw r3, 0x0(r4)
lbl_fn_804BBC28_000005F4:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000600:
    mr r3, r27
    add r26, r27, r30
    addi r4, r31, 0x220
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x94(r26)
    lwz r0, 0xe80(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_00000648
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_0000063C
    stw r3, 0x0(r4)
lbl_fn_804BBC28_0000063C:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_00000648:
    addi r29, r29, 0x1
    addi r30, r30, 0x22c
    cmpwi r29, 0x6
    blt lbl_fn_804BBC28_00000498
    lis r4, lbl_807588DC@ha
    mr r3, r27
    addi r4, r4, lbl_807588DC@l
    li r5, 0x0
    addi r4, r4, 0x243
    bl fn_801F3FF8
    lwz r0, 0xe80(r27)
    stw r3, 0x5c(r27)
    cmplwi r0, 0x40
    bge lbl_fn_804BBC28_000006A4
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r0, r27, r0
    addic. r4, r0, 0xe84
    beq lbl_fn_804BBC28_00000698
    stw r3, 0x0(r4)
lbl_fn_804BBC28_00000698:
    lwz r3, 0xe80(r27)
    addi r0, r3, 0x1
    stw r0, 0xe80(r27)
lbl_fn_804BBC28_000006A4:
    addi r29, r27, 0xe84
    b lbl_fn_804BBC28_000006C4
lbl_fn_804BBC28_000006AC:
    lwz r3, 0x0(r29)
    cmpwi r3, 0x0
    beq lbl_fn_804BBC28_000006C0
    li r4, 0x1
    bl fn_800D246C
lbl_fn_804BBC28_000006C0:
    addi r29, r29, 0x4
lbl_fn_804BBC28_000006C4:
    lwz r0, 0xe80(r27)
    slwi r0, r0, 2
    add r3, r27, r0
    addi r0, r3, 0xe84
    cmplw r29, r0
    bne lbl_fn_804BBC28_000006AC
    lfs f0, lbl_808873F8
    li r5, 0x0
    li r3, 0x0
    b lbl_fn_804BBC28_00000700
lbl_fn_804BBC28_000006EC:
    add r4, r27, r3
    addi r5, r5, 0x1
    lwz r4, 0xe84(r4)
    addi r3, r3, 0x4
    stfs f0, 0x104(r4)
lbl_fn_804BBC28_00000700:
    lwz r0, 0xe80(r27)
    cmplw r5, r0
    blt lbl_fn_804BBC28_000006EC
    cmpwi r28, 0x0
    beq lbl_fn_804BBC28_00000724
    li r0, 0x0
    stw r0, 0xe6c(r27)
    stw r0, 0xe70(r27)
    b lbl_fn_804BBC28_00000754
lbl_fn_804BBC28_00000724:
    lwz r3, lbl_8087F610
    bl fn_804EB874
    cmpwi r3, 0x0
    beq lbl_fn_804BBC28_00000748
    lwz r0, 0xb0(r3)
    stw r0, 0xe6c(r27)
    lwz r0, 0xb0(r3)
    stw r0, 0xe70(r27)
    b lbl_fn_804BBC28_00000754
lbl_fn_804BBC28_00000748:
    li r0, 0x0
    stw r0, 0xe6c(r27)
    stw r0, 0xe70(r27)
lbl_fn_804BBC28_00000754:
    li r0, -0x1
    stw r0, 0xdbc(r27)
    mr r3, r27
    stw r0, 0xdc0(r27)
    stw r0, 0xdc4(r27)
    stw r0, 0xdc8(r27)
    bl fn_804CD97C
    lwz r3, lbl_8087F610
    li r4, 0xf
    li r5, 0x0
    lis r6, 0xff00
    bl fn_8006A250
    stw r3, 0x7c(r27)
    addi r11, r1, 0x20
    lfs f0, lbl_808873FC
    stfs f0, 0x74(r3)
    mr r3, r27
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804BC30C(void)
{
    nofralloc
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    sth r0, 0x2c(r3)
    blr
}

asm void fn_804BC330(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_804BC330_00000818
    cmpwi r4, 0x0
    li r0, 0x0
    li r4, 0x1
    stw r4, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    sth r0, 0x2c(r3)
    ble lbl_fn_804BC330_00000818
    bl dtor_80084684
lbl_fn_804BC330_00000818:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804BC390(void)
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
    beq lbl_fn_804BC390_000008DC
    lis r5, lbl_80790CCC@ha
    li r4, 0x0
    addi r5, r5, lbl_80790CCC@l
    stw r5, 0x0(r3)
    stw r4, 0xe80(r3)
    lwz r0, lbl_8087F5C4
    cmpwi r0, 0x0
    beq lbl_fn_804BC390_00000878
    stw r4, lbl_8087F5C4
lbl_fn_804BC390_00000878:
    addic. r4, r3, 0xf84
    beq lbl_fn_804BC390_000008A8
    beq lbl_fn_804BC390_000008A8
    beq lbl_fn_804BC390_000008A8
    beq lbl_fn_804BC390_000008A8
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_804BC390_000008A8
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_804BC390_000008A8:
    lis r4, fn_804BC330@ha
    addi r3, r30, 0x80
    addi r4, r4, fn_804BC330@l
    li r5, 0x22c
    li r6, 0x6
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_804BC390_000008DC
    mr r3, r30
    bl dtor_80084684
lbl_fn_804BC390_000008DC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804BC458(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_804BC458_00000AAC
    li r31, 0x0
    b lbl_fn_804BC458_000009D4
lbl_fn_804BC458_00000924:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC458_0000093C
    li r4, 0x0
    b lbl_fn_804BC458_0000095C
lbl_fn_804BC458_0000093C:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r31
    ble lbl_fn_804BC458_00000958
    lwz r3, 0x8(r1)
    lbzx r4, r3, r31
    b lbl_fn_804BC458_0000095C
lbl_fn_804BC458_00000958:
    li r4, 0xff
lbl_fn_804BC458_0000095C:
    lwz r6, lbl_8087F610
    li r3, 0x0
    lwz r0, 0x5e8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BC458_000009A4
lbl_fn_804BC458_00000974:
    lwz r0, 0x5e4(r6)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BC458_0000099C
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804BC458_0000099C
    b lbl_fn_804BC458_000009A8
lbl_fn_804BC458_0000099C:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BC458_00000974
lbl_fn_804BC458_000009A4:
    li r5, 0x0
lbl_fn_804BC458_000009A8:
    cmpwi r5, 0x0
    bne lbl_fn_804BC458_000009B8
    li r0, 0x0
    b lbl_fn_804BC458_00000A28
lbl_fn_804BC458_000009B8:
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_804BC458_000009D0
    li r0, 0x0
    b lbl_fn_804BC458_00000A28
lbl_fn_804BC458_000009D0:
    addi r31, r31, 0x1
lbl_fn_804BC458_000009D4:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BC458_00000A04
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC458_000009FC
    li r3, 0x1
    b lbl_fn_804BC458_00000A1C
lbl_fn_804BC458_000009FC:
    bl fn_806B0DE0
    b lbl_fn_804BC458_00000A1C
lbl_fn_804BC458_00000A04:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC458_00000A18
    li r3, 0x1
    b lbl_fn_804BC458_00000A1C
lbl_fn_804BC458_00000A18:
    bl fn_806A8E70
lbl_fn_804BC458_00000A1C:
    cmpw r31, r3
    blt lbl_fn_804BC458_00000924
    li r0, 0x1
lbl_fn_804BC458_00000A28:
    cmpwi r0, 0x0
    beq lbl_fn_804BC458_00000AAC
    addi r31, r30, 0xe84
    b lbl_fn_804BC458_00000A50
lbl_fn_804BC458_00000A38:
    lwz r3, 0x0(r31)
    cmpwi r3, 0x0
    beq lbl_fn_804BC458_00000A4C
    li r4, 0x0
    bl fn_800D246C
lbl_fn_804BC458_00000A4C:
    addi r31, r31, 0x4
lbl_fn_804BC458_00000A50:
    lwz r0, 0xe80(r30)
    slwi r0, r0, 2
    add r3, r30, r0
    addi r0, r3, 0xe84
    cmplw r31, r0
    bne lbl_fn_804BC458_00000A38
    lwz r4, 0x70(r30)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    li r0, 0x1
    stw r0, 0xda0(r30)
    addi r3, r3, 0x268
    addi r31, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r31
    bl fn_801FECE0
    mr r3, r30
    li r4, 0x1
    bl fn_804BC628
    li r3, 0x1
    b lbl_fn_804BC458_00000AB0
lbl_fn_804BC458_00000AAC:
    li r3, 0x0
lbl_fn_804BC458_00000AB0:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804BC628(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    addi r11, r1, 0x280
    stfd f31, 0x2a0(r1)
    psq_st f31, 0x2a8(r1), 0, 0
    stfd f30, 0x290(r1)
    psq_st f30, 0x298(r1), 0, 0
    stfd f29, 0x280(r1)
    psq_st f29, 0x288(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0xd88(r3)
    mr r28, r3
    mr r25, r4
    cmpw r0, r4
    beq lbl_fn_804BC628_00001E20
    cmpwi r4, 0x0
    blt lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F610
    bl fn_804EB874
    lwz r4, lbl_8087F59C
    mr r30, r3
    lwz r24, 0xdb4(r28)
    li r31, 0x0
    lwz r29, 0xc4(r4)
    mr r3, r28
    lwz r0, 0xd88(r28)
    stw r31, 0xdb4(r28)
    stw r0, 0xd8c(r28)
    stw r25, 0xd88(r28)
    bl fn_804BD9B8
    lwz r0, 0xd88(r28)
    cmplwi r0, 0xa
    bgt lbl_fn_804BC628_00001E20
    lis r3, jumptable_80790C48@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80790C48@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    mr r3, r28
    bl fn_804BF550
    stw r31, 0x10(r1)
    lis r26, lbl_807588DC@ha
    lwz r4, lbl_8087F610
    addi r26, r26, lbl_807588DC@l
    stw r31, 0x14(r1)
    addi r3, r26, 0x272
    lwz r7, lbl_8087F59C
    stw r31, 0x18(r1)
    stw r31, 0x1c(r1)
    stw r31, 0x20(r1)
    stw r31, 0x24(r1)
    stw r31, 0x28(r1)
    stw r31, 0x2c(r1)
    stw r31, 0x30(r1)
    stw r31, 0x34(r1)
    stw r31, 0x38(r1)
    stw r31, 0x3c(r1)
    stw r31, 0x40(r1)
    stw r31, 0x44(r1)
    stw r31, 0x48(r1)
    stw r31, 0x4c(r1)
    lwz r6, 0x564(r4)
    lwz r4, 0x4c(r28)
    addi r5, r6, 0x1
    subfic r0, r6, -0x1
    or r0, r5, r0
    lwz r25, 0xc4(r7)
    srawi r0, r0, 31
    addi r24, r4, 0x58
    clrlwi r27, r0, 24
    bl fn_800DC6B4
    xoris r0, r27, 0x8000
    lis r27, 0x4330
    lis r31, lbl_80758848@ha
    stw r0, 0x254(r1)
    lfd f1, lbl_80758848@l(r31)
    mr r4, r3
    stw r27, 0x250(r1)
    mr r3, r24
    li r5, 0x0
    lfd f0, 0x250(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    subi r3, r25, 0x2
    subfic r0, r25, 0x2
    nor r0, r3, r0
    lwz r4, 0x4c(r28)
    srawi r0, r0, 31
    addi r3, r26, 0x27d
    addi r24, r4, 0x58
    clrlwi r25, r0, 24
    bl fn_800DC6B4
    xoris r0, r25, 0x8000
    stw r0, 0x25c(r1)
    mr r4, r3
    lfd f1, lbl_80758848@l(r31)
    stw r27, 0x258(r1)
    mr r3, r24
    li r5, 0x0
    lfd f0, 0x258(r1)
    fsubs f1, f0, f1
    bl fn_801FEDBC
    lwz r5, lbl_8087F610
    addi r4, r26, 0x28a
    lwz r3, 0x4c(r28)
    li r6, 0x0
    lwz r5, 0x5a4(r5)
    bl fn_801F4CB4
    lwz r4, lbl_8087F610
    lis r3, lbl_80790D74@ha
    addi r3, r3, lbl_80790D74@l
    lwz r0, 0x5b0(r4)
    addi r27, r3, 0x6
    cmpwi r0, 0x0
    beq lbl_fn_804BC628_00000CB4
    mr r27, r3
lbl_fn_804BC628_00000CB4:
    lwz r4, 0x4c(r28)
    lis r31, lbl_807588DC@ha
    addi r31, r31, lbl_807588DC@l
    addi r3, r31, 0x298
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r27
    bl fn_801FEE08
    lwz r3, lbl_8087F610
    lwz r5, 0x564(r3)
    cmpwi r5, -0x1
    beq lbl_fn_804BC628_00000D40
    lis r3, 0x8889
    lis r4, lbl_80790D74@ha
    subi r0, r3, 0x7777
    mulhw r0, r0, r5
    addi r4, r4, lbl_80790D74@l
    addi r3, r1, 0x10
    addi r4, r4, 0xe
    add r0, r0, r5
    srawi r0, r0, 5
    srwi r5, r0, 31
    add r5, r0, r5
    crclr 6
    bl fn_800DD3FC
    lwz r4, 0x4c(r28)
    addi r3, r31, 0x2a6
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    addi r5, r1, 0x10
    bl fn_801FEE08
lbl_fn_804BC628_00000D40:
    lwz r3, lbl_8087F580
    lfs f1, lbl_808873FC
    bl fn_804A5CD8
    cmpwi r29, 0x2
    bne lbl_fn_804BC628_00000D84
    lwz r26, 0x54(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000DB0
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
    b lbl_fn_804BC628_00000DB0
lbl_fn_804BC628_00000D84:
    lwz r26, 0x58(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000DB0
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00000DB0:
    lwz r26, 0x4c(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000DDC
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00000DDC:
    lwz r26, 0x50(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000E08
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00000E08:
    lwz r26, 0x64(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000E34
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00000E34:
    cmpwi r29, 0x2
    bne lbl_fn_804BC628_00000E94
    lwz r3, 0x64(r28)
    lis r31, lbl_80790D74@ha
    lis r29, lbl_807588DC@ha
    addi r31, r31, lbl_80790D74@l
    addi r24, r3, 0x58
    addi r29, r29, lbl_807588DC@l
    addi r26, r31, 0x18
    addi r3, r29, 0x2b4
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0x64(r28)
    addi r3, r29, 0x2c2
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    b lbl_fn_804BC628_00000F3C
lbl_fn_804BC628_00000E94:
    lwz r3, 0x64(r28)
    lis r5, lbl_80790D74@ha
    lis r4, lbl_807588DC@ha
    addi r5, r5, lbl_80790D74@l
    addi r24, r3, 0x58
    addi r4, r4, lbl_807588DC@l
    addi r26, r5, 0x1a
    addi r3, r4, 0x2b4
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    cmpwi r29, 0x1
    lwz r4, lbl_8087F86C
    li r0, 0xd1
    bne lbl_fn_804BC628_00000EDC
    li r0, 0xd0
lbl_fn_804BC628_00000EDC:
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BC628_00000F10
    cmpwi r29, 0x1
    li r0, 0xd1
    bne lbl_fn_804BC628_00000F00
    li r0, 0xd0
lbl_fn_804BC628_00000F00:
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r24, 0x4c(r3)
    b lbl_fn_804BC628_00000F14
lbl_fn_804BC628_00000F10:
    la r24, lbl_808813D0
lbl_fn_804BC628_00000F14:
    lwz r4, 0x64(r28)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x2c2
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
lbl_fn_804BC628_00000F3C:
    lfs f29, lbl_80887400
    mr r24, r28
    lfs f31, lbl_80887404
    li r25, 0x0
    lfs f30, lbl_808873F8
lbl_fn_804BC628_00000F50:
    lwz r0, 0x98(r24)
    cmpwi r0, 0x0
    beq lbl_fn_804BC628_00000FC4
    lwz r26, 0x88(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000F84
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f29, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00000F84:
    lwz r26, 0x8c(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000FA4
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r26)
    stfs f30, 0x100(r26)
lbl_fn_804BC628_00000FA4:
    lwz r26, 0x90(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00000FC4
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f31, 0x104(r26)
    stfs f30, 0x100(r26)
lbl_fn_804BC628_00000FC4:
    addi r25, r25, 0x1
    addi r24, r24, 0x22c
    cmpwi r25, 0x6
    blt lbl_fn_804BC628_00000F50
    cmpwi r30, 0x0
    beq lbl_fn_804BC628_0000100C
    lwz r3, lbl_8087F610
    lwz r4, 0x540(r3)
    bl fn_804EA5E0
    stw r3, 0xe5c(r28)
    lwz r0, 0xd0(r30)
    extrwi r4, r0, 4, 22
    cmplw r4, r3
    ble lbl_fn_804BC628_00001008
    rlwimi r0, r3, 6, 22, 25
    stw r0, 0xd0(r30)
    b lbl_fn_804BC628_0000100C
lbl_fn_804BC628_00001008:
    stw r4, 0xe5c(r28)
lbl_fn_804BC628_0000100C:
    li r0, 0x0
    stw r0, 0xe7c(r28)
    b lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x1
    li r6, 0x0
    bl fn_804AC96C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    lwz r4, lbl_8087F86C
    lwz r3, lbl_8087F588
    lwz r4, 0x7d4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804BC628_00001060
    b lbl_fn_804BC628_00001064
lbl_fn_804BC628_00001060:
    la r4, lbl_808813D0
lbl_fn_804BC628_00001064:
    li r5, 0x0
    bl fn_804AD000
    b lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r3, lbl_8087F588
    li r4, 0x0
    lfs f1, lbl_80887400
    li r5, 0x0
    li r6, 0x0
    bl fn_804AC96C
    lwz r3, lbl_8087F588
    bl fn_804ACD10
    addi r3, r1, 0x50
    li r4, 0x0
    li r5, 0x200
    bl memset
    cmpwi r29, 0x1
    lwz r4, lbl_8087F86C
    li r0, 0xd1
    bne lbl_fn_804BC628_000010C4
    li r0, 0xd0
lbl_fn_804BC628_000010C4:
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BC628_000010F8
    cmpwi r29, 0x1
    li r0, 0xd1
    bne lbl_fn_804BC628_000010E8
    li r0, 0xd0
lbl_fn_804BC628_000010E8:
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r5, 0x4c(r3)
    b lbl_fn_804BC628_000010FC
lbl_fn_804BC628_000010F8:
    la r5, lbl_808813D0
lbl_fn_804BC628_000010FC:
    lwz r4, lbl_8087F86C
    addi r3, r1, 0x50
    lwz r4, 0x6c4(r4)
    cmpwi r4, 0x0
    beq lbl_fn_804BC628_00001114
    b lbl_fn_804BC628_00001118
lbl_fn_804BC628_00001114:
    la r4, lbl_808813D0
lbl_fn_804BC628_00001118:
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F588
    addi r4, r1, 0x50
    li r5, 0x0
    bl fn_804AD000
    b lbl_fn_804BC628_00001E20
    lwz r26, 0x5c(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001160
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001160:
    lwz r26, 0x64(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_0000118C
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_0000118C:
    cmpwi r29, 0x2
    bne lbl_fn_804BC628_000011EC
    lwz r3, 0x64(r28)
    lis r31, lbl_80790D74@ha
    lis r29, lbl_807588DC@ha
    addi r31, r31, lbl_80790D74@l
    addi r24, r3, 0x58
    addi r29, r29, lbl_807588DC@l
    addi r26, r31, 0x18
    addi r3, r29, 0x2b4
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    lwz r4, 0x64(r28)
    addi r3, r29, 0x2c2
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    b lbl_fn_804BC628_00001294
lbl_fn_804BC628_000011EC:
    lwz r3, 0x64(r28)
    lis r5, lbl_80790D74@ha
    lis r4, lbl_807588DC@ha
    addi r5, r5, lbl_80790D74@l
    addi r24, r3, 0x58
    addi r4, r4, lbl_807588DC@l
    addi r26, r5, 0x1a
    addi r3, r4, 0x2b4
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    cmpwi r29, 0x1
    lwz r4, lbl_8087F86C
    li r0, 0xd1
    bne lbl_fn_804BC628_00001234
    li r0, 0xd0
lbl_fn_804BC628_00001234:
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804BC628_00001268
    cmpwi r29, 0x1
    li r0, 0xd1
    bne lbl_fn_804BC628_00001258
    li r0, 0xd0
lbl_fn_804BC628_00001258:
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r24, 0x4c(r3)
    b lbl_fn_804BC628_0000126C
lbl_fn_804BC628_00001268:
    la r24, lbl_808813D0
lbl_fn_804BC628_0000126C:
    lwz r4, 0x64(r28)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x2c2
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
lbl_fn_804BC628_00001294:
    li r0, -0x1
    stw r0, 0xe68(r28)
    mr r3, r28
    bl fn_804C18A8
    mr r3, r28
    bl fn_804BFB54
    lwz r0, 0xe60(r28)
    lis r31, lbl_807588DC@ha
    addi r31, r31, lbl_807588DC@l
    mulli r0, r0, 0x22c
    addi r3, r31, 0x2d0
    add r4, r28, r0
    lwz r4, 0x80(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r24
    li r5, 0x0
    bl fn_801FEDBC
    lwz r0, 0xe60(r28)
    addi r3, r31, 0x2db
    mulli r0, r0, 0x22c
    add r4, r28, r0
    lwz r4, 0x80(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r24
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x5c(r28)
    addi r3, r31, 0x2e6
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r24
    li r5, 0x0
    bl fn_801FEDBC
    lwz r4, 0x5c(r28)
    addi r3, r31, 0x2db
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_808873F8
    mr r4, r3
    mr r3, r24
    li r5, 0x0
    bl fn_801FEDBC
    lwz r0, 0xe60(r28)
    addi r3, r31, 0x2f1
    mulli r0, r0, 0x22c
    add r4, r28, r0
    lwz r4, 0x80(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887408
    mr r4, r3
    mr r3, r24
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0xe60(r28)
    addi r3, r31, 0x302
    mulli r0, r0, 0x22c
    add r4, r28, r0
    lwz r4, 0x80(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_80887408
    mr r4, r3
    mr r3, r24
    li r5, 0x4
    bl fn_801FED24
    cmpwi r30, 0x0
    beq lbl_fn_804BC628_000013D8
    lwz r0, 0xd0(r30)
    li r3, 0x1
    rlwimi r0, r3, 10, 20, 21
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xd0(r30)
lbl_fn_804BC628_000013D8:
    lis r3, 0x8000
    subi r0, r3, 0x1
    stw r0, 0xe78(r28)
    b lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F5F0
    li r4, 0x1
    bl fn_804CDE1C
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BC628_00001424
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_00001418
    b lbl_fn_804BC628_00001440
lbl_fn_804BC628_00001418:
    bl fn_806B0E30
    clrlwi r31, r3, 24
    b lbl_fn_804BC628_00001440
lbl_fn_804BC628_00001424:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_00001434
    b lbl_fn_804BC628_0000143C
lbl_fn_804BC628_00001434:
    bl fn_806A8E40
    mr r31, r3
lbl_fn_804BC628_0000143C:
    clrlwi r31, r31, 24
lbl_fn_804BC628_00001440:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BC628_00001474
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_00001468
    li r0, 0x0
    b lbl_fn_804BC628_00001478
lbl_fn_804BC628_00001468:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804BC628_00001478
lbl_fn_804BC628_00001474:
    li r0, 0x0
lbl_fn_804BC628_00001478:
    clrlwi r3, r31, 24
    clrlwi r0, r0, 24
    subf r0, r3, r0
    cntlzw r0, r0
    srwi r0, r0, 5
    cmpwi r0, 0x1
    bne lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F610
    bl fn_804DDD54
    b lbl_fn_804BC628_00001E20
    lwz r0, 0xe60(r28)
    lis r29, lbl_807588DC@ha
    addi r29, r29, lbl_807588DC@l
    stw r31, 0xdd0(r28)
    mulli r0, r0, 0x22c
    addi r3, r29, 0x2f1
    add r4, r28, r0
    lwz r4, 0x80(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088740C
    mr r4, r3
    mr r3, r24
    li r5, 0x4
    bl fn_801FED24
    lwz r0, 0xe60(r28)
    addi r3, r29, 0x302
    mulli r0, r0, 0x22c
    add r4, r28, r0
    lwz r4, 0x80(r4)
    addi r24, r4, 0x58
    bl fn_800DC6B4
    lfs f1, lbl_8088740C
    mr r4, r3
    mr r3, r24
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x64(r28)
    lis r5, lbl_80790D74@ha
    addi r5, r5, lbl_80790D74@l
    addi r3, r29, 0x2b4
    addi r26, r5, 0x22
    addi r24, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r24
    mr r5, r26
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r24, 0x6bc(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804BC628_0000154C
    b lbl_fn_804BC628_00001550
lbl_fn_804BC628_0000154C:
    la r24, lbl_808813D0
lbl_fn_804BC628_00001550:
    lwz r4, 0x64(r28)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x2c2
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    mr r3, r28
    bl fn_804BF550
    cmpwi r30, 0x0
    beq lbl_fn_804BC628_00001594
    lwz r0, 0xd0(r30)
    oris r0, r0, 0x1000
    stw r0, 0xd0(r30)
lbl_fn_804BC628_00001594:
    lis r3, 0x8000
    subi r0, r3, 0x1
    stw r0, 0xe78(r28)
    b lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F610
    li r0, 0x1
    li r4, 0x1
    stw r0, 0x53c(r3)
    lwz r3, lbl_8087F628
    bl fn_8050A638
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r26, 0x68(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000015F8
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    oris r0, r0, 0x1000
    stw r0, 0xfc(r26)
lbl_fn_804BC628_000015F8:
    lwz r3, lbl_8087F86C
    lwz r24, 0x85c(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804BC628_0000160C
    b lbl_fn_804BC628_00001610
lbl_fn_804BC628_0000160C:
    la r24, lbl_808813D0
lbl_fn_804BC628_00001610:
    lwz r4, 0x68(r28)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x310
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    lwz r3, lbl_8087F86C
    lwz r24, 0x85c(r3)
    cmpwi r24, 0x0
    beq lbl_fn_804BC628_0000164C
    b lbl_fn_804BC628_00001650
lbl_fn_804BC628_0000164C:
    la r24, lbl_808813D0
lbl_fn_804BC628_00001650:
    lwz r4, 0x68(r28)
    lis r3, lbl_807588DC@ha
    addi r3, r3, lbl_807588DC@l
    addi r3, r3, 0x316
    addi r25, r4, 0x58
    bl fn_800DC6B4
    mr r4, r3
    mr r3, r25
    mr r5, r24
    bl fn_801FEE08
    li r0, 0x1e
    stw r0, 0xdb8(r28)
    b lbl_fn_804BC628_00001E20
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    li r31, 0x1
    li r30, 0x0
    b lbl_fn_804BC628_00001764
lbl_fn_804BC628_000016A0:
    lwz r3, lbl_8087F628
    lwz r0, 0x1f8(r3)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_000016B8
    li r5, 0x0
    b lbl_fn_804BC628_000016D8
lbl_fn_804BC628_000016B8:
    addi r3, r1, 0x8
    bl fn_8050BA6C
    cmpw r3, r30
    ble lbl_fn_804BC628_000016D4
    lwz r3, 0x8(r1)
    lbzx r5, r3, r30
    b lbl_fn_804BC628_000016D8
lbl_fn_804BC628_000016D4:
    li r5, 0xff
lbl_fn_804BC628_000016D8:
    lwz r3, lbl_8087F610
    li r4, 0x0
    lwz r0, 0x5e8(r3)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BC628_00001720
lbl_fn_804BC628_000016F0:
    lwz r0, 0x5e4(r3)
    add r24, r0, r4
    lwz r0, 0xd0(r24)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BC628_00001718
    lbz r0, 0xcc(r24)
    cmplw r5, r0
    bne lbl_fn_804BC628_00001718
    b lbl_fn_804BC628_00001724
lbl_fn_804BC628_00001718:
    addi r4, r4, 0xd5c
    bdnz lbl_fn_804BC628_000016F0
lbl_fn_804BC628_00001720:
    li r24, 0x0
lbl_fn_804BC628_00001724:
    cmpwi r24, 0x0
    beq lbl_fn_804BC628_00001760
    lwz r0, 0xd0(r24)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BC628_00001760
    lwz r4, lbl_8087F610
    lwz r4, 0x540(r4)
    bl fn_804EA5E0
    lwz r0, 0xd0(r24)
    extrwi r0, r0, 4, 22
    cmplw r0, r3
    beq lbl_fn_804BC628_00001760
    li r31, 0x0
    b lbl_fn_804BC628_000017B4
lbl_fn_804BC628_00001760:
    addi r30, r30, 0x1
lbl_fn_804BC628_00001764:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BC628_00001794
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_0000178C
    li r3, 0x1
    b lbl_fn_804BC628_000017AC
lbl_fn_804BC628_0000178C:
    bl fn_806B0DE0
    b lbl_fn_804BC628_000017AC
lbl_fn_804BC628_00001794:
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_000017A8
    li r3, 0x1
    b lbl_fn_804BC628_000017AC
lbl_fn_804BC628_000017A8:
    bl fn_806A8E70
lbl_fn_804BC628_000017AC:
    cmpw r30, r3
    blt lbl_fn_804BC628_000016A0
lbl_fn_804BC628_000017B4:
    li r0, 0x0
    stw r31, 0xda8(r28)
    mr r3, r28
    stw r0, 0xda4(r28)
    bl fn_804C23E4
    lwz r26, 0x6c(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000017F4
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_000017F4:
    lwz r3, lbl_8087F610
    lwz r0, 0x540(r3)
    cmpwi r0, 0x2
    beq lbl_fn_804BC628_0000185C
    lwz r26, 0x74(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001830
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001830:
    lwz r26, 0x78(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000018B0
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
    b lbl_fn_804BC628_000018B0
lbl_fn_804BC628_0000185C:
    lwz r26, 0x74(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001884
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
lbl_fn_804BC628_00001884:
    lwz r26, 0x78(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000018B0
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_000018B0:
    lwz r26, 0x70(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000018DC
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_808873F8
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_000018DC:
    lwz r26, 0x64(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001904
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
lbl_fn_804BC628_00001904:
    lwz r26, 0x4c(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_0000192C
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
lbl_fn_804BC628_0000192C:
    lwz r26, 0x50(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001954
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
lbl_fn_804BC628_00001954:
    cmpwi r29, 0x2
    bne lbl_fn_804BC628_00001988
    lwz r26, 0x54(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000019B0
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
    b lbl_fn_804BC628_000019B0
lbl_fn_804BC628_00001988:
    lwz r26, 0x58(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000019B0
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lfs f0, lbl_808873F8
    stfs f0, 0x100(r26)
lbl_fn_804BC628_000019B0:
    lfs f30, lbl_80887404
    li r24, 0x0
    lfs f31, lbl_808873F8
    li r29, 0x1
lbl_fn_804BC628_000019C0:
    lwz r26, 0x80(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_000019E0
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r26)
    stfs f31, 0x100(r26)
lbl_fn_804BC628_000019E0:
    lwz r26, 0x88(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001A00
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r26)
    stfs f31, 0x100(r26)
lbl_fn_804BC628_00001A00:
    lwz r26, 0x84(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001A20
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r26)
    stfs f31, 0x100(r26)
lbl_fn_804BC628_00001A20:
    lwz r26, 0x8c(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001A40
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r26)
    stfs f31, 0x100(r26)
lbl_fn_804BC628_00001A40:
    lwz r26, 0x90(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001A60
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r26)
    stfs f31, 0x100(r26)
lbl_fn_804BC628_00001A60:
    lwz r26, 0x94(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001A80
    mr r3, r26
    li r4, 0x1
    bl fn_800D246C
    stfs f30, 0x104(r26)
    stfs f31, 0x100(r26)
lbl_fn_804BC628_00001A80:
    addi r24, r24, 0x1
    stw r29, 0x98(r28)
    cmpwi r24, 0x6
    addi r28, r28, 0x22c
    blt lbl_fn_804BC628_000019C0
    b lbl_fn_804BC628_00001E20
    stw r24, 0xdb4(r28)
    lwz r3, lbl_8087F588
    bl fn_804ACAF8
    lwz r3, lbl_8087F588
    bl fn_804ACDBC
    lwz r12, 0x0(r28)
    mr r3, r28
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r26, 0x70(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001AEC
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887400
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001AEC:
    lwz r26, 0x4c(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001B18
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001B18:
    lwz r0, 0xd90(r28)
    cmpwi r0, 0x5
    beq lbl_fn_804BC628_00001BB4
    cmpwi r29, 0x2
    bne lbl_fn_804BC628_00001B5C
    lwz r26, 0x54(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001B88
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
    b lbl_fn_804BC628_00001B88
lbl_fn_804BC628_00001B5C:
    lwz r26, 0x58(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001B88
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001B88:
    lwz r26, 0x50(r28)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001BB4
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    lfs f0, lbl_80887404
    stfs f0, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001BB4:
    lfs f31, lbl_80887404
    mr r24, r28
    li r25, 0x0
lbl_fn_804BC628_00001BC0:
    lwz r26, 0x80(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001BE8
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001BE8:
    lwz r26, 0x88(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001C10
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001C10:
    lwz r26, 0x84(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001C38
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001C38:
    lwz r26, 0x8c(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001C60
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001C60:
    lwz r26, 0x90(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001C88
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001C88:
    lwz r26, 0x94(r24)
    cmpwi r26, 0x0
    beq lbl_fn_804BC628_00001CB0
    mr r3, r26
    li r4, 0x0
    bl fn_800D246C
    stfs f31, 0x104(r26)
    lwz r0, 0xfc(r26)
    rlwinm r0, r0, 0, 4, 2
    stw r0, 0xfc(r26)
lbl_fn_804BC628_00001CB0:
    addi r25, r25, 0x1
    addi r24, r24, 0x22c
    cmpwi r25, 0x6
    blt lbl_fn_804BC628_00001BC0
    lwz r0, 0xda4(r28)
    cmpwi r0, 0x0
    beq lbl_fn_804BC628_00001E20
    lwz r4, lbl_8087F59C
    lwz r3, lbl_8087F610
    lwz r4, 0xc4(r4)
    bl fn_804DE2FC
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BC628_00001D10
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_00001D04
    li r0, 0x0
    b lbl_fn_804BC628_00001D14
lbl_fn_804BC628_00001D04:
    bl fn_806B1250
    clrlwi r0, r3, 24
    b lbl_fn_804BC628_00001D14
lbl_fn_804BC628_00001D10:
    li r0, 0x0
lbl_fn_804BC628_00001D14:
    lwz r6, lbl_8087F610
    clrlwi r4, r0, 24
    li r3, 0x0
    lwz r0, 0x5e8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BC628_00001D60
lbl_fn_804BC628_00001D30:
    lwz r0, 0x5e4(r6)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BC628_00001D58
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804BC628_00001D58
    b lbl_fn_804BC628_00001D64
lbl_fn_804BC628_00001D58:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BC628_00001D30
lbl_fn_804BC628_00001D60:
    li r5, 0x0
lbl_fn_804BC628_00001D64:
    lwz r0, 0xd0(r5)
    extrwi r0, r0, 4, 26
    stw r0, 0xdb4(r28)
    b lbl_fn_804BC628_00001E20
    lwz r0, 0xda4(r28)
    cmpwi r0, 0x0
    bne lbl_fn_804BC628_00001D90
    lwz r3, lbl_8087F610
    li r4, 0x0
    bl fn_804DBD0C
    b lbl_fn_804BC628_00001E20
lbl_fn_804BC628_00001D90:
    lwz r4, lbl_8087F628
    addis r3, r4, 0x1
    lbz r0, -0x3deb(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804BC628_00001DC0
    lwz r0, 0x1f8(r4)
    extrwi. r0, r0, 1, 12
    beq lbl_fn_804BC628_00001DB4
    b lbl_fn_804BC628_00001DC4
lbl_fn_804BC628_00001DB4:
    bl fn_806B1250
    clrlwi r31, r3, 24
    b lbl_fn_804BC628_00001DC4
lbl_fn_804BC628_00001DC0:
    li r31, 0x0
lbl_fn_804BC628_00001DC4:
    lwz r6, lbl_8087F610
    clrlwi r4, r31, 24
    li r3, 0x0
    lwz r0, 0x5e8(r6)
    mtctr r0
    cmpwi r0, 0x0
    ble lbl_fn_804BC628_00001E10
lbl_fn_804BC628_00001DE0:
    lwz r0, 0x5e4(r6)
    add r5, r0, r3
    lwz r0, 0xd0(r5)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804BC628_00001E08
    lbz r0, 0xcc(r5)
    cmplw r4, r0
    bne lbl_fn_804BC628_00001E08
    b lbl_fn_804BC628_00001E14
lbl_fn_804BC628_00001E08:
    addi r3, r3, 0xd5c
    bdnz lbl_fn_804BC628_00001DE0
lbl_fn_804BC628_00001E10:
    li r5, 0x0
lbl_fn_804BC628_00001E14:
    lwz r0, 0xd0(r5)
    extrwi r0, r0, 4, 26
    stw r0, 0xdb4(r28)
lbl_fn_804BC628_00001E20:
    addi r11, r1, 0x280
    psq_l f31, 0x2a8(r1), 0, 0
    lfd f31, 0x2a0(r1)
    psq_l f30, 0x298(r1), 0, 0
    lfd f30, 0x290(r1)
    psq_l f29, 0x288(r1), 0, 0
    lfd f29, 0x280(r1)
    bl _restgpr_24
    lwz r0, 0x2b4(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}
