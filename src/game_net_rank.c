#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _restgpr_23(void);
extern void _restgpr_26(void);
extern void _savegpr_22(void);
extern void _savegpr_23(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_8006F17C(void);
extern void fn_8006F72C(void);
extern void fn_8006FA4C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800A58D0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_800D5908(void);
extern void fn_800D59B8(void);
extern void fn_800DBF68(void);
extern void fn_800DC6B4(void);
extern void fn_800E0908(void);
extern void fn_801EC158(void);
extern void fn_801EC6C0(void);
extern void fn_801F0670(void);
extern void fn_801F0758(void);
extern void fn_801F3490(void);
extern void fn_801F34F8(void);
extern void fn_801F35B4(void);
extern void fn_801F362C(void);
extern void fn_801F3FF8(void);
extern void fn_801F4484(void);
extern void fn_801F465C(void);
extern void fn_801F48C8(void);
extern void fn_801FEA9C(void);
extern void fn_801FECE0(void);
extern void fn_801FED24(void);
extern void fn_801FEDBC(void);
extern void fn_80680770(void);
extern void fn_80686A48(void);
extern void fn_80686B24(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8073CE68[];
extern u8 lbl_8073CE90[];
extern u8 lbl_8073E228[];
extern u8 lbl_8073E314[];
extern u8 lbl_80782B10[];
extern u8 lbl_80782B48[];
extern u8 lbl_80782B68[];
extern u8 lbl_80782BA0[];
extern u8 lbl_807C7D48[];

/* Small data declarations */
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F138;
extern u32 lbl_80882C40;
extern u32 lbl_80882C44;
extern u32 lbl_80882C48;
extern u32 lbl_80882C4C;
extern u32 lbl_80882C50;
extern u32 lbl_80882C54;
extern u32 lbl_80882C58;

/* Function declarations */
void fn_801F0D80(void);
void fn_801F0DF0(void);
void fn_801F0EF4(void);
void fn_801F0F74(void);
void fn_801F1048(void);
void fn_801F1094(void);
void fn_801F1098(void);
void fn_801F10E0(void);
void fn_801F1418(void);
void fn_801F14FC(void);
void fn_801F1658(void);
void fn_801F1818(void);
void fn_801F18BC(void);
void fn_801F18F4(void);
void fn_801F1908(void);
void fn_801F1970(void);
void fn_801F1990(void);
void fn_801F19B4(void);
void fn_801F19D0(void);
void fn_801F1E7C(void);
void fn_801F1EA0(void);
void fn_801F2398(void);
void fn_801F25CC(void);
void fn_801F25E0(void);
void fn_801F26B8(void);

asm void fn_801F0D80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_801F0D80_00000058
    lwz r0, lbl_8087F138
    cmpwi r0, 0x0
    bne lbl_fn_801F0D80_00000058
    lis r5, lbl_8073E228@ha
    li r3, 0x1b0
    addi r5, r5, lbl_8073E228@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_801F0D80_00000054
    mr r4, r31
    bl fn_801F0DF0
lbl_fn_801F0D80_00000054:
    stw r3, lbl_8087F138
lbl_fn_801F0D80_00000058:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F138
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F0DF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    bl fn_800D1D3C
    lis r3, lbl_80782B10@ha
    lis r4, fn_800D5738@ha
    addi r3, r3, lbl_80782B10@l
    lis r5, fn_800D5808@ha
    stw r3, 0x0(r27)
    addi r3, r27, 0x48
    addi r4, r4, fn_800D5738@l
    addi r5, r5, fn_800D5808@l
    li r6, 0x30
    li r7, 0x6
    bl fn_806958E0
    addi r3, r27, 0x168
    bl fn_801F3490
    lis r31, lbl_8073E228@ha
    li r30, 0x0
    addi r31, r31, lbl_8073E228@l
    stw r30, 0x1a8(r27)
    addi r3, r27, 0x48
    stw r30, 0x1ac(r27)
    addi r4, r31, 0x1
    bl fn_800D5908
    stb r30, 0x75(r27)
    addi r3, r27, 0x78
    addi r4, r31, 0x12
    stb r30, 0x76(r27)
    bl fn_800D5908
    stb r30, 0xa5(r27)
    addi r3, r27, 0x168
    addi r4, r31, 0x23
    li r5, 0x0
    stb r30, 0xa6(r27)
    bl fn_801F35B4
    lis r30, lbl_8073CE68@ha
    li r28, 0x0
    addi r30, r30, lbl_8073CE68@l
    li r31, 0x0
lbl_fn_801F0DF0_00000118:
    lwz r4, 0x0(r30)
    mr r3, r27
    add r29, r27, r31
    li r5, 0x0
    bl fn_801F3FF8
    stw r3, 0x180(r29)
    li r4, 0x1
    lwz r0, 0xfc(r3)
    rlwinm r0, r0, 0, 2, 0
    stw r0, 0xfc(r3)
    lwz r3, 0x180(r29)
    bl fn_800D246C
    addi r28, r28, 0x1
    addi r31, r31, 0x4
    cmpwi r28, 0xa
    addi r30, r30, 0x4
    blt lbl_fn_801F0DF0_00000118
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F0EF4(void)
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
    beq lbl_fn_801F0EF4_000001D8
    li r4, -0x1
    addi r3, r3, 0x168
    bl fn_801F34F8
    lis r4, fn_800D5808@ha
    addi r3, r30, 0x48
    addi r4, r4, fn_800D5808@l
    li r5, 0x30
    li r6, 0x6
    bl fn_806959D8
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_801F0EF4_000001D8
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F0EF4_000001D8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F0F74(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r26, r3
    addi r31, r3, 0x48
    li r29, 0x1
    li r28, 0x0
lbl_fn_801F0F74_00000214:
    mr r30, r31
    li r27, 0x0
lbl_fn_801F0F74_0000021C:
    mr r3, r30
    bl fn_800D59B8
    cmpwi r3, 0x0
    beq lbl_fn_801F0F74_00000230
    li r29, 0x0
lbl_fn_801F0F74_00000230:
    addi r27, r27, 0x1
    addi r30, r30, 0x30
    cmpwi r27, 0x2
    blt lbl_fn_801F0F74_0000021C
    addi r28, r28, 0x1
    addi r31, r31, 0x60
    cmpwi r28, 0x3
    blt lbl_fn_801F0F74_00000214
    addi r3, r26, 0x168
    bl fn_801F362C
    cmpwi r3, 0x0
    beq lbl_fn_801F0F74_00000264
    li r29, 0x0
lbl_fn_801F0F74_00000264:
    mr r3, r26
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_801F0F74_00000278
    li r29, 0x0
lbl_fn_801F0F74_00000278:
    cmpwi r29, 0x0
    beq lbl_fn_801F0F74_000002B0
    li r27, 0x0
lbl_fn_801F0F74_00000284:
    lwz r3, 0x180(r26)
    li r4, 0x0
    bl fn_800D246C
    lwz r3, 0x180(r26)
    addi r27, r27, 0x1
    cmpwi r27, 0xa
    addi r26, r26, 0x4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    blt lbl_fn_801F0F74_00000284
lbl_fn_801F0F74_000002B0:
    mr r3, r29
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801F1048(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    li r30, 0x0
lbl_fn_801F1048_000002E4:
    lwz r3, 0x180(r31)
    bl fn_801F4484
    addi r30, r30, 0x1
    addi r31, r31, 0x4
    cmpwi r30, 0xa
    blt lbl_fn_801F1048_000002E4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F1094(void)
{
    nofralloc
    blr
}

asm void fn_801F1098(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_801F1098_00000328
    cmpwi r4, 0x3
    blt lbl_fn_801F1098_00000330
lbl_fn_801F1098_00000328:
    li r3, 0x0
    blr
lbl_fn_801F1098_00000330:
    cmpwi r5, 0x0
    blt lbl_fn_801F1098_00000340
    cmpwi r5, 0x2
    blt lbl_fn_801F1098_00000348
lbl_fn_801F1098_00000340:
    li r3, 0x0
    blr
lbl_fn_801F1098_00000348:
    mulli r4, r4, 0x60
    mulli r0, r5, 0x30
    add r3, r3, r4
    add r3, r3, r0
    addi r3, r3, 0x48
    blr
}

asm void fn_801F10E0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x70
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    stfd f30, 0x70(r1)
    psq_st f30, 0x78(r1), 0, 0
    bl _savegpr_23
    mulli r29, r4, 0x34
    lis r6, lbl_8073CE90@ha
    mr r25, r3
    fmr f30, f1
    addi r6, r6, lbl_8073CE90@l
    add r3, r6, r29
    lwz r28, 0x14(r3)
    mr r26, r4
    mr r27, r5
    cmpwi r28, 0x8
    bne lbl_fn_801F10E0_000003C8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801F10E0_000003C8
    li r28, 0x9
lbl_fn_801F10E0_000003C8:
    cmpwi r26, 0x0
    blt lbl_fn_801F10E0_00000670
    cmpwi r26, 0x60
    bge lbl_fn_801F10E0_00000670
    cmpwi r28, 0x0
    blt lbl_fn_801F10E0_00000670
    cmpwi r28, 0xa
    bge lbl_fn_801F10E0_00000670
    slwi r0, r28, 2
    add r24, r25, r0
    lwz r3, 0x180(r24)
    cmpwi r3, 0x0
    beq lbl_fn_801F10E0_00000670
    lis r30, lbl_8073E228@ha
    lfs f31, 0x0(r27)
    addi r30, r30, lbl_8073E228@l
    addi r31, r3, 0x58
    addi r3, r30, 0x41
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r31
    li r5, 0x0
    bl fn_801FED24
    lis r31, lbl_8073CE90@ha
    lwz r4, 0x180(r24)
    addi r31, r31, lbl_8073CE90@l
    lfs f4, 0xc(r27)
    add r3, r31, r29
    lfs f0, 0x4(r27)
    lfs f3, 0x28(r3)
    addi r3, r30, 0x41
    addi r23, r4, 0x58
    fnmsubs f31, f4, f3, f0
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x1
    bl fn_801FED24
    add r4, r31, r29
    lwz r5, 0x180(r24)
    lfs f3, 0x8(r27)
    addi r3, r30, 0x41
    lfs f0, 0x2c(r4)
    addi r23, r5, 0x58
    fmuls f31, f3, f0
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x2
    bl fn_801FED24
    add r4, r31, r29
    lwz r5, 0x180(r24)
    lfs f3, 0xc(r27)
    addi r3, r30, 0x41
    lfs f0, 0x30(r4)
    addi r23, r5, 0x58
    fmuls f31, f3, f0
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x3
    bl fn_801FED24
    lwz r4, 0x180(r24)
    addi r3, r30, 0x41
    lfs f31, 0x10(r27)
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    li r5, 0x4
    bl fn_801FED24
    lwz r4, 0x180(r24)
    addi r3, r30, 0x49
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f30
    mr r4, r3
    mr r3, r23
    li r5, 0x0
    bl fn_801FEDBC
    add r3, r31, r29
    lwz r4, 0x180(r24)
    lfs f31, 0x24(r3)
    addi r3, r30, 0x51
    addi r23, r4, 0x58
    bl fn_800DC6B4
    fmr f1, f31
    mr r4, r3
    mr r3, r23
    bl fn_801FECE0
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    bne lbl_fn_801F10E0_000005E0
    mulli r3, r26, 0x34
    lis r27, lbl_807C7D48@ha
    slwi r0, r28, 2
    addi r27, r27, lbl_807C7D48@l
    add r3, r31, r3
    addi r5, r1, 0x38
    lwz r6, 0x18(r3)
    add r3, r25, r0
    addi r4, r30, 0x59
    slwi r0, r6, 5
    add r6, r27, r0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x180(r3)
    bl fn_801F48C8
    mulli r4, r26, 0x34
    slwi r0, r28, 2
    addi r5, r1, 0x28
    add r3, r25, r0
    add r6, r31, r4
    lwz r0, 0x18(r6)
    addi r23, r3, 0x180
    addi r4, r30, 0x60
    slwi r0, r0, 5
    add r3, r27, r0
    psq_l f1, 0x10(r3), 0, 0
    psq_l f2, 0x18(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x0(r23)
    bl fn_801F48C8
    b lbl_fn_801F10E0_00000664
lbl_fn_801F10E0_000005E0:
    mulli r3, r26, 0x34
    lis r27, lbl_807C7D48@ha
    slwi r0, r28, 2
    addi r27, r27, lbl_807C7D48@l
    add r3, r31, r3
    addi r5, r1, 0x18
    lwz r6, 0x1c(r3)
    add r3, r25, r0
    addi r4, r30, 0x59
    slwi r0, r6, 5
    add r6, r27, r0
    psq_l f1, 0x0(r6), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x180(r3)
    bl fn_801F48C8
    mulli r4, r26, 0x34
    slwi r0, r28, 2
    addi r5, r1, 0x8
    add r3, r25, r0
    add r6, r31, r4
    lwz r0, 0x1c(r6)
    addi r23, r3, 0x180
    addi r4, r30, 0x60
    slwi r0, r0, 5
    add r3, r27, r0
    psq_l f1, 0x10(r3), 0, 0
    psq_l f2, 0x18(r3), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    psq_st f2, 0x8(r5), 0, 0
    lwz r3, 0x0(r23)
    bl fn_801F48C8
lbl_fn_801F10E0_00000664:
    lwz r3, 0x0(r23)
    li r4, 0x0
    bl fn_801F465C
lbl_fn_801F10E0_00000670:
    addi r11, r1, 0x70
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    psq_l f30, 0x78(r1), 0, 0
    lfd f30, 0x70(r1)
    bl _restgpr_23
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801F1418(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x20
    stfd f31, 0x20(r1)
    psq_st f31, 0x28(r1), 0, 0
    bl _savegpr_26
    fmr f31, f1
    cmplwi r3, 0x24
    mr r26, r4
    bne lbl_fn_801F1418_00000758
    lwz r28, 0x0(r4)
    mr r3, r28
    bl fn_80686A48
    lis r30, lbl_8073CE90@ha
    mr r31, r3
    addi r30, r30, lbl_8073CE90@l
    li r27, 0x0
    mr r29, r30
lbl_fn_801F1418_000006E4:
    lwz r3, 0x10(r30)
    subi r5, r3, 0x1
    cmpw r5, r31
    bgt lbl_fn_801F1418_00000744
    mr r3, r28
    addi r4, r29, 0x2
    bl fn_80686B24
    cmpwi r3, 0x0
    bne lbl_fn_801F1418_00000744
    mulli r0, r27, 0x34
    lis r3, lbl_8073CE90@ha
    lwz r5, 0x0(r26)
    addi r3, r3, lbl_8073CE90@l
    add r4, r3, r0
    lfs f0, 0x20(r4)
    lwz r3, 0x10(r4)
    fmuls f1, f31, f0
    lfs f0, 0x2c(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 1
    fmuls f1, f1, f0
    add r0, r5, r0
    stw r0, 0x0(r26)
    b lbl_fn_801F1418_0000075C
lbl_fn_801F1418_00000744:
    addi r27, r27, 0x1
    addi r29, r29, 0x34
    cmpwi r27, 0x60
    addi r30, r30, 0x34
    blt lbl_fn_801F1418_000006E4
lbl_fn_801F1418_00000758:
    lfs f1, lbl_80882C40
lbl_fn_801F1418_0000075C:
    addi r11, r1, 0x20
    psq_l f31, 0x28(r1), 0, 0
    lfd f31, 0x20(r1)
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_801F14FC(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    addi r11, r1, 0x30
    stfd f31, 0x60(r1)
    psq_st f31, 0x68(r1), 0, 0
    stfd f30, 0x50(r1)
    psq_st f30, 0x58(r1), 0, 0
    stfd f29, 0x40(r1)
    psq_st f29, 0x48(r1), 0, 0
    stfd f28, 0x30(r1)
    psq_st f28, 0x38(r1), 0, 0
    bl _savegpr_22
    lfs f30, lbl_80882C44
    lis r30, lbl_8073CE90@ha
    fmr f28, f1
    mr r24, r3
    fmr f29, f2
    mr r22, r4
    fmr f31, f30
    mr r23, r5
    addi r31, r30, lbl_8073CE90@l
lbl_fn_801F14FC_000007D4:
    lhz r28, 0x0(r24)
    addi r24, r24, 0x2
    cmpwi r28, 0x0
    beq lbl_fn_801F14FC_0000089C
    cmplwi r28, 0x24
    bne lbl_fn_801F14FC_00000868
    mr r3, r24
    bl fn_80686A48
    addi r26, r30, lbl_8073CE90@l
    mr r29, r3
    mr r25, r26
    li r27, 0x0
lbl_fn_801F14FC_00000804:
    lwz r3, 0x10(r26)
    subi r5, r3, 0x1
    cmpw r5, r29
    bgt lbl_fn_801F14FC_00000854
    mr r3, r24
    addi r4, r25, 0x2
    bl fn_80686B24
    cmpwi r3, 0x0
    bne lbl_fn_801F14FC_00000854
    mulli r0, r27, 0x34
    add r4, r31, r0
    lfs f0, 0x20(r4)
    lwz r3, 0x10(r4)
    fmuls f1, f28, f0
    lfs f0, 0x2c(r4)
    subi r0, r3, 0x1
    slwi r0, r0, 1
    fmuls f1, f1, f0
    add r24, r24, r0
    b lbl_fn_801F14FC_0000086C
lbl_fn_801F14FC_00000854:
    addi r27, r27, 0x1
    addi r25, r25, 0x34
    cmpwi r27, 0x60
    addi r26, r26, 0x34
    blt lbl_fn_801F14FC_00000804
lbl_fn_801F14FC_00000868:
    lfs f1, lbl_80882C40
lbl_fn_801F14FC_0000086C:
    fcmpo cr0, f1, f31
    bge lbl_fn_801F14FC_0000088C
    fmr f1, f28
    lwz r3, lbl_8087EEC8
    mr r4, r28
    mr r5, r22
    mr r6, r23
    bl fn_8006F17C
lbl_fn_801F14FC_0000088C:
    fadds f30, f30, f1
    cmpwi r24, 0x0
    fadds f30, f30, f29
    bne lbl_fn_801F14FC_000007D4
lbl_fn_801F14FC_0000089C:
    psq_l f31, 0x68(r1), 0, 0
    fmr f1, f30
    lfd f31, 0x60(r1)
    psq_l f30, 0x58(r1), 0, 0
    lfd f30, 0x50(r1)
    psq_l f29, 0x48(r1), 0, 0
    lfd f29, 0x40(r1)
    psq_l f28, 0x38(r1), 0, 0
    lfd f28, 0x30(r1)
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801F1658(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    stw r0, 0x74(r1)
    stmw r18, 0x38(r1)
    mr r29, r3
    mr r30, r4
    addi r3, r1, 0x20
    bl fn_801F18F4
    mr r3, r30
    bl fn_801F1970
    lis r26, lbl_8073CE90@ha
    mr r24, r3
    li r19, 0x0
    li r31, 0x0
    addi r28, r26, lbl_8073CE90@l
    li r27, -0x1
    b lbl_fn_801F1658_00000A20
lbl_fn_801F1658_0000091C:
    mr r3, r30
    mr r4, r31
    bl fn_801F1990
    lhz r0, 0x0(r3)
    cmplwi r0, 0x24
    bne lbl_fn_801F1658_00000A1C
    addi r31, r31, 0x1
    mr r3, r30
    mr r4, r31
    bl fn_801F1990
    bl fn_80686A48
    addi r23, r26, lbl_8073CE90@l
    mr r25, r3
    mr r22, r23
    slwi r21, r31, 1
    li r18, 0x0
lbl_fn_801F1658_0000095C:
    lwz r3, 0x10(r23)
    subi r20, r3, 0x1
    cmpw r20, r25
    bgt lbl_fn_801F1658_00000A04
    mr r3, r30
    bl fn_801F19B4
    mr r5, r20
    add r3, r3, r21
    addi r4, r22, 0x2
    bl fn_80686B24
    cmpwi r3, 0x0
    bne lbl_fn_801F1658_00000A04
    subi r0, r31, 0x1
    subf. r6, r19, r0
    beq lbl_fn_801F1658_000009D0
    mr r4, r30
    mr r5, r19
    addi r3, r1, 0x14
    bl fn_800E0908
    addi r3, r1, 0x20
    addi r4, r1, 0x14
    bl fn_801F1818
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_8006FA4C
    stw r27, 0x2c(r1)
    mr r3, r29
    addi r4, r1, 0x20
    bl fn_801F19D0
lbl_fn_801F1658_000009D0:
    addi r3, r1, 0x20
    bl fn_801F18BC
    stw r18, 0x2c(r1)
    mr r3, r29
    addi r4, r1, 0x20
    bl fn_801F19D0
    mulli r0, r18, 0x34
    add r3, r28, r0
    lwz r0, 0x10(r3)
    add r3, r0, r31
    subi r31, r3, 0x1
    mr r19, r31
    b lbl_fn_801F1658_00000A20
lbl_fn_801F1658_00000A04:
    addi r18, r18, 0x1
    addi r22, r22, 0x34
    cmpwi r18, 0x60
    addi r23, r23, 0x34
    blt lbl_fn_801F1658_0000095C
    b lbl_fn_801F1658_00000A20
lbl_fn_801F1658_00000A1C:
    addi r31, r31, 0x1
lbl_fn_801F1658_00000A20:
    cmplw r31, r24
    blt lbl_fn_801F1658_0000091C
    cmplw r19, r24
    bge lbl_fn_801F1658_00000A78
    mr r4, r30
    mr r5, r19
    addi r3, r1, 0x8
    li r6, -0x1
    bl fn_800E0908
    addi r3, r1, 0x20
    addi r4, r1, 0x8
    bl fn_801F1818
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_8006FA4C
    li r0, -0x1
    stw r0, 0x2c(r1)
    mr r3, r29
    addi r4, r1, 0x20
    bl fn_801F19D0
    addi r3, r1, 0x20
    bl fn_801F1970
lbl_fn_801F1658_00000A78:
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_801F1908
    lmw r18, 0x38(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_801F1818(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, 0x0(r3)
    srwi. r6, r0, 31
    bne lbl_fn_801F1818_00000AD4
    lwz r5, 0x0(r4)
    srwi. r0, r5, 31
    bne lbl_fn_801F1818_00000AD4
    lwz r0, 0x4(r4)
    stw r0, 0x4(r3)
    stw r5, 0x0(r3)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r3)
    b lbl_fn_801F1818_00000B2C
lbl_fn_801F1818_00000AD4:
    cmpwi r6, 0x0
    beq lbl_fn_801F1818_00000AE4
    lwz r5, 0x4(r3)
    b lbl_fn_801F1818_00000AEC
lbl_fn_801F1818_00000AE4:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F1818_00000AEC:
    lwz r0, 0x0(r4)
    srwi. r0, r0, 31
    bne lbl_fn_801F1818_00000B08
    lbz r0, 0x0(r4)
    addi r6, r4, 0x2
    clrlwi r0, r0, 25
    b lbl_fn_801F1818_00000B10
lbl_fn_801F1818_00000B08:
    lwz r6, 0x8(r4)
    lwz r0, 0x4(r4)
lbl_fn_801F1818_00000B10:
    lbz r4, 0x8(r1)
    slwi r0, r0, 1
    stb r4, 0xc(r1)
    add r7, r6, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_801F1818_00000B2C:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F18BC(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801F18BC_00000B60
    lbz r0, 0x0(r3)
    li r4, 0x0
    sth r4, 0x2(r3)
    clrrwi r0, r0, 7
    stb r0, 0x0(r3)
    blr
lbl_fn_801F18BC_00000B60:
    lwz r4, 0x8(r3)
    li r0, 0x0
    sth r0, 0x0(r4)
    stw r0, 0x4(r3)
    blr
}

asm void fn_801F18F4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_801F1908(void)
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
    beq lbl_fn_801F1908_00000BD4
    beq lbl_fn_801F1908_00000BC4
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_fn_801F1908_00000BC4
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_fn_801F1908_00000BC4:
    cmpwi r31, 0x0
    ble lbl_fn_801F1908_00000BD4
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F1908_00000BD4:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801F1970(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801F1970_00000C08
    lbz r0, 0x0(r3)
    clrlwi r3, r0, 25
    blr
lbl_fn_801F1970_00000C08:
    lwz r3, 0x4(r3)
    blr
}

asm void fn_801F1990(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801F1990_00000C24
    addi r3, r3, 0x2
    b lbl_fn_801F1990_00000C28
lbl_fn_801F1990_00000C24:
    lwz r3, 0x8(r3)
lbl_fn_801F1990_00000C28:
    slwi r0, r4, 1
    add r3, r3, r0
    blr
}

asm void fn_801F19B4(void)
{
    nofralloc
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    bne lbl_fn_801F19B4_00000C48
    addi r3, r3, 0x2
    blr
lbl_fn_801F19B4_00000C48:
    lwz r3, 0x8(r3)
    blr
}

asm void fn_801F19D0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r29, r3
    mr r30, r4
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_801F19D0_00000D0C
    lwz r3, 0x0(r3)
    slwi r0, r0, 4
    add. r28, r3, r0
    beq lbl_fn_801F19D0_00000CFC
    lwz r3, 0x0(r4)
    srwi. r0, r3, 31
    bne lbl_fn_801F19D0_00000CAC
    stw r3, 0x0(r28)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r28)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r28)
    b lbl_fn_801F19D0_00000CF4
lbl_fn_801F19D0_00000CAC:
    li r0, 0x0
    stw r0, 0x0(r28)
    lwz r4, 0x4(r4)
    mr r3, r28
    stw r0, 0x4(r28)
    stw r0, 0x8(r28)
    bl fn_800DBF68
    lwz r0, 0x4(r30)
    mr r3, r28
    lbz r4, 0x1c(r1)
    addi r8, r1, 0x18
    stb r4, 0x18(r1)
    slwi r0, r0, 1
    lwz r6, 0x8(r30)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F19D0_00000CF4:
    lwz r0, 0xc(r30)
    stw r0, 0xc(r28)
lbl_fn_801F19D0_00000CFC:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
    b lbl_fn_801F19D0_000010E8
lbl_fn_801F19D0_00000D0C:
    lis r3, 0x1000
    subi r0, r3, 0x1
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_801F19D0_00000D44
    lis r4, lbl_8073E228@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8073E228@l
    addi r3, r3, __files@l
    addi r4, r4, 0x86
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F19D0_00000D44:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x1000
    stw r5, 0x2c(r1)
    subi r0, r3, 0x1
    stw r5, 0x30(r1)
    stw r5, 0x34(r1)
    stw r4, 0x38(r1)
    stw r5, 0x3c(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x20(r1)
    ble lbl_fn_801F19D0_00000DAC
    lis r4, lbl_8073E228@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8073E228@l
    addi r3, r3, __files@l
    addi r4, r4, 0x86
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F19D0_00000DAC:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_801F19D0_00000DFC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x20(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x28
    srwi r4, r4, 2
    stw r4, 0x28(r1)
    cmplw r4, r0
    bge lbl_fn_801F19D0_00000DF0
    addi r3, r1, 0x20
lbl_fn_801F19D0_00000DF0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801F19D0_00000E40
lbl_fn_801F19D0_00000DFC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_801F19D0_00000E38
    addi r3, r31, 0x1
    lwz r0, 0x20(r1)
    srwi r3, r3, 1
    stw r3, 0x24(r1)
    cmplw r3, r0
    addi r3, r1, 0x24
    bge lbl_fn_801F19D0_00000E2C
    addi r3, r1, 0x20
lbl_fn_801F19D0_00000E2C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801F19D0_00000E40
lbl_fn_801F19D0_00000E38:
    lis r3, 0x1000
    subi r28, r3, 0x1
lbl_fn_801F19D0_00000E40:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_801F19D0_00000E74
    lis r4, lbl_8073E228@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8073E228@l
    addi r3, r3, __files@l
    addi r4, r4, 0x86
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F19D0_00000E74:
    slwi r3, r28, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_801F19D0_00000EA8
    lis r3, __files@ha
    lis r4, lbl_80782B48@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80782B48@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801F19D0_00000EA8:
    lwz r3, 0x30(r1)
    li r0, 0x0
    stw r27, 0x2c(r1)
    slwi r4, r3, 4
    stw r28, 0x34(r1)
    lwz r3, 0x4(r29)
    stw r3, 0x3c(r1)
    slwi r3, r3, 4
    add r3, r27, r3
    add. r27, r4, r3
    beq lbl_fn_801F19D0_00000F44
    lwz r4, 0x0(r30)
    srwi. r3, r4, 31
    bne lbl_fn_801F19D0_00000EF8
    stw r4, 0x0(r27)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r27)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r27)
    b lbl_fn_801F19D0_00000F3C
lbl_fn_801F19D0_00000EF8:
    stw r0, 0x0(r27)
    mr r3, r27
    lwz r4, 0x4(r30)
    stw r0, 0x4(r27)
    stw r0, 0x8(r27)
    bl fn_800DBF68
    lwz r0, 0x4(r30)
    mr r3, r27
    lbz r4, 0x8(r1)
    addi r8, r1, 0xc
    stb r4, 0xc(r1)
    slwi r0, r0, 1
    lwz r6, 0x8(r30)
    li r4, 0x0
    li r5, 0x0
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F19D0_00000F3C:
    lwz r0, 0xc(r30)
    stw r0, 0xc(r27)
lbl_fn_801F19D0_00000F44:
    lwz r3, 0x30(r1)
    li r28, 0x0
    lwz r0, 0x3c(r1)
    addi r3, r3, 0x1
    stw r3, 0x30(r1)
    lwz r3, 0x2c(r1)
    slwi r0, r0, 4
    lwz r4, 0x4(r29)
    lwz r30, 0x0(r29)
    add r31, r3, r0
    slwi r0, r4, 4
    add r27, r30, r0
    b lbl_fn_801F19D0_0000100C
lbl_fn_801F19D0_00000F78:
    subic. r31, r31, 0x10
    subi r27, r27, 0x10
    beq lbl_fn_801F19D0_00000FF4
    lwz r3, 0x0(r27)
    srwi. r0, r3, 31
    bne lbl_fn_801F19D0_00000FA8
    lwz r0, 0x4(r27)
    stw r3, 0x0(r31)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r27)
    stw r0, 0x8(r31)
    b lbl_fn_801F19D0_00000FEC
lbl_fn_801F19D0_00000FA8:
    stw r28, 0x0(r31)
    mr r3, r31
    stw r28, 0x4(r31)
    stw r28, 0x8(r31)
    lwz r4, 0x4(r27)
    bl fn_800DBF68
    lbz r0, 0x10(r1)
    mr r3, r31
    stb r0, 0x14(r1)
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0x4(r27)
    lwz r6, 0x8(r27)
    slwi r0, r0, 1
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F19D0_00000FEC:
    lwz r0, 0xc(r27)
    stw r0, 0xc(r31)
lbl_fn_801F19D0_00000FF4:
    lwz r4, 0x3c(r1)
    lwz r3, 0x30(r1)
    subi r0, r4, 0x1
    stw r0, 0x3c(r1)
    addi r0, r3, 0x1
    stw r0, 0x30(r1)
lbl_fn_801F19D0_0000100C:
    cmplw r27, r30
    bgt lbl_fn_801F19D0_00000F78
    lwz r3, 0x8(r29)
    addi r30, r1, 0x2c
    lwz r0, 0x34(r1)
    stw r0, 0x8(r29)
    stw r3, 0x34(r1)
    lwz r0, 0x2c(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x2c(r1)
    lwz r0, 0x30(r1)
    lwz r5, 0x4(r29)
    stw r0, 0x4(r29)
    slwi r0, r5, 4
    lwz r3, 0x3c(r1)
    lwz r4, 0x2c(r1)
    slwi r3, r3, 4
    stw r5, 0x30(r1)
    add r28, r4, r3
    add r29, r28, r0
    b lbl_fn_801F19D0_00001084
lbl_fn_801F19D0_00001064:
    subic. r29, r29, 0x10
    beq lbl_fn_801F19D0_00001084
    beq lbl_fn_801F19D0_00001084
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_801F19D0_00001084
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_801F19D0_00001084:
    cmplw r29, r28
    bgt lbl_fn_801F19D0_00001064
    cmpwi r30, 0x0
    li r0, 0x0
    stw r0, 0x30(r1)
    beq lbl_fn_801F19D0_000010E8
    lwz r28, 0x2c(r1)
    cmpwi r28, 0x0
    beq lbl_fn_801F19D0_000010E8
    li r29, 0x0
    stw r29, 0x30(r1)
    b lbl_fn_801F19D0_000010D8
lbl_fn_801F19D0_000010B4:
    subic. r28, r28, 0x10
    beq lbl_fn_801F19D0_000010D4
    beq lbl_fn_801F19D0_000010D4
    lwz r0, 0x0(r28)
    srwi. r0, r0, 31
    beq lbl_fn_801F19D0_000010D4
    lwz r3, 0x8(r28)
    bl dtor_80084684
lbl_fn_801F19D0_000010D4:
    subi r29, r29, 0x1
lbl_fn_801F19D0_000010D8:
    cmpwi r29, 0x0
    bne lbl_fn_801F19D0_000010B4
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F19D0_000010E8:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801F1E7C(void)
{
    nofralloc
    mulli r0, r3, 0x34
    lis r3, lbl_8073CE90@ha
    addi r3, r3, lbl_8073CE90@l
    add r3, r3, r0
    lfs f2, 0x20(r3)
    lfs f0, 0x2c(r3)
    fmuls f0, f2, f0
    fmuls f1, f1, f0
    blr
}

asm void fn_801F1EA0(void)
{
    nofralloc
    stwu r1, -0x230(r1)
    stw r31, 0x22c(r1)
    lfs f6, lbl_80882C44
    lis r3, lbl_807C7D48@ha
    lfs f5, lbl_80882C48
    addi r4, r1, 0x218
    lfs f0, lbl_80882C54
    addi r3, r3, lbl_807C7D48@l
    lfs f4, lbl_80882C4C
    addi r5, r1, 0x208
    lfs f3, lbl_80882C50
    addi r6, r1, 0x1f8
    stfs f6, 0x218(r1)
    addi r7, r1, 0x1e8
    addi r8, r1, 0x1d8
    addi r9, r1, 0x1c8
    stfs f6, 0x21c(r1)
    addi r10, r1, 0x1b8
    addi r11, r1, 0x1a8
    addi r12, r1, 0x198
    psq_l f1, 0x0(r4), 0, 0
    addi r31, r1, 0x188
    stfs f5, 0x220(r1)
    stfs f5, 0x224(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f6, 0x208(r1)
    stfs f6, 0x20c(r1)
    psq_st f1, 0x0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f5, 0x210(r1)
    stfs f5, 0x214(r1)
    psq_st f2, 0x8(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f6, 0x1f8(r1)
    stfs f4, 0x1fc(r1)
    psq_st f1, 0x10(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f3, 0x200(r1)
    stfs f0, 0x204(r1)
    psq_st f2, 0x18(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f6, 0x1e8(r1)
    stfs f6, 0x1ec(r1)
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f3, 0x1f0(r1)
    stfs f3, 0x1f4(r1)
    psq_st f2, 0x28(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f3, 0x1d8(r1)
    stfs f4, 0x1dc(r1)
    psq_st f1, 0x30(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f4, 0x1e0(r1)
    stfs f0, 0x1e4(r1)
    psq_st f2, 0x38(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f3, 0x1c8(r1)
    stfs f6, 0x1cc(r1)
    psq_st f1, 0x40(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f4, 0x1d0(r1)
    stfs f3, 0x1d4(r1)
    psq_st f2, 0x48(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f4, 0x1b8(r1)
    stfs f4, 0x1bc(r1)
    psq_st f1, 0x50(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f0, 0x1c0(r1)
    stfs f0, 0x1c4(r1)
    psq_st f2, 0x58(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f4, 0x1a8(r1)
    stfs f6, 0x1ac(r1)
    psq_st f1, 0x60(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f0, 0x1b0(r1)
    stfs f3, 0x1b4(r1)
    psq_st f2, 0x68(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f0, 0x198(r1)
    stfs f4, 0x19c(r1)
    psq_st f1, 0x70(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f5, 0x1a0(r1)
    stfs f0, 0x1a4(r1)
    psq_st f2, 0x78(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f0, 0x188(r1)
    stfs f6, 0x18c(r1)
    psq_st f1, 0x80(r3), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f5, 0x190(r1)
    stfs f3, 0x194(r1)
    psq_st f2, 0x88(r3), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_st f1, 0x90(r3), 0, 0
    psq_st f2, 0x98(r3), 0, 0
    stfs f6, 0x178(r1)
    stfs f0, 0x17c(r1)
    stfs f3, 0x180(r1)
    addi r4, r1, 0x178
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x168
    stfs f5, 0x184(r1)
    addi r6, r1, 0x158
    addi r7, r1, 0x148
    addi r8, r1, 0x138
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x128
    stfs f6, 0x168(r1)
    addi r9, r1, 0x118
    addi r10, r1, 0x108
    addi r11, r1, 0xf8
    stfs f6, 0x16c(r1)
    addi r12, r1, 0xe8
    psq_st f1, 0xa0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f3, 0x170(r1)
    stfs f3, 0x174(r1)
    psq_st f2, 0xa8(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f3, 0x158(r1)
    stfs f0, 0x15c(r1)
    psq_st f1, 0xb0(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f4, 0x160(r1)
    stfs f5, 0x164(r1)
    psq_st f2, 0xb8(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f6, 0x148(r1)
    stfs f6, 0x14c(r1)
    psq_st f1, 0xc0(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f3, 0x150(r1)
    stfs f3, 0x154(r1)
    psq_st f2, 0xc8(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f4, 0x138(r1)
    stfs f0, 0x13c(r1)
    psq_st f1, 0xd0(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f0, 0x140(r1)
    stfs f5, 0x144(r1)
    psq_st f2, 0xd8(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f6, 0x128(r1)
    stfs f6, 0x12c(r1)
    psq_st f1, 0xe0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x130(r1)
    stfs f3, 0x134(r1)
    psq_st f2, 0xe8(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f0, 0x118(r1)
    stfs f0, 0x11c(r1)
    psq_st f1, 0xf0(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f5, 0x120(r1)
    stfs f5, 0x124(r1)
    psq_st f2, 0xf8(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f6, 0x108(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x100(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0x110(r1)
    stfs f3, 0x114(r1)
    psq_st f2, 0x108(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f6, 0xf8(r1)
    stfs f6, 0xfc(r1)
    psq_st f1, 0x110(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f3, 0x100(r1)
    stfs f3, 0x104(r1)
    psq_st f2, 0x118(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f6, 0xe8(r1)
    stfs f6, 0xec(r1)
    psq_st f1, 0x120(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f3, 0xf0(r1)
    stfs f3, 0xf4(r1)
    psq_st f2, 0x128(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    psq_st f1, 0x130(r3), 0, 0
    psq_st f2, 0x138(r3), 0, 0
    stfs f3, 0xd8(r1)
    stfs f6, 0xdc(r1)
    stfs f4, 0xe0(r1)
    stfs f3, 0xe4(r1)
    addi r4, r1, 0xd8
    stfs f6, 0xc8(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0xc8
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0xb8
    stfs f6, 0xcc(r1)
    addi r6, r1, 0xa8
    addi r7, r1, 0x98
    addi r8, r1, 0x88
    psq_st f1, 0x140(r3), 0, 0
    addi r9, r1, 0x78
    psq_l f1, 0x0(r5), 0, 0
    addi r10, r1, 0x68
    stfs f3, 0xd0(r1)
    addi r11, r1, 0x58
    addi r12, r1, 0x48
    stfs f3, 0xd4(r1)
    psq_st f2, 0x148(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f4, 0xb8(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0x150(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f0, 0xc0(r1)
    stfs f3, 0xc4(r1)
    psq_st f2, 0x158(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f6, 0xa8(r1)
    stfs f6, 0xac(r1)
    psq_st f1, 0x160(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f3, 0xb0(r1)
    stfs f3, 0xb4(r1)
    psq_st f2, 0x168(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f0, 0x98(r1)
    stfs f6, 0x9c(r1)
    psq_st f1, 0x170(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f5, 0xa0(r1)
    stfs f3, 0xa4(r1)
    psq_st f2, 0x178(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f6, 0x88(r1)
    stfs f6, 0x8c(r1)
    psq_st f1, 0x180(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f3, 0x90(r1)
    stfs f3, 0x94(r1)
    psq_st f2, 0x188(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f6, 0x78(r1)
    stfs f3, 0x7c(r1)
    psq_st f1, 0x190(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f3, 0x80(r1)
    stfs f4, 0x84(r1)
    psq_st f2, 0x198(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f6, 0x68(r1)
    stfs f3, 0x6c(r1)
    psq_st f1, 0x1a0(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0x70(r1)
    stfs f4, 0x74(r1)
    psq_st f2, 0x1a8(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f3, 0x58(r1)
    stfs f3, 0x5c(r1)
    psq_st f1, 0x1b0(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f4, 0x60(r1)
    stfs f4, 0x64(r1)
    psq_st f2, 0x1b8(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f0, 0x48(r1)
    stfs f3, 0x4c(r1)
    psq_st f1, 0x1c0(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f5, 0x50(r1)
    stfs f4, 0x54(r1)
    psq_st f2, 0x1c8(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    psq_st f1, 0x1d0(r3), 0, 0
    psq_st f2, 0x1d8(r3), 0, 0
    stfs f4, 0x38(r1)
    stfs f3, 0x3c(r1)
    stfs f0, 0x40(r1)
    stfs f4, 0x44(r1)
    addi r4, r1, 0x38
    stfs f4, 0x28(r1)
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x28
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x18
    stfs f3, 0x2c(r1)
    addi r6, r1, 0x8
    psq_st f1, 0x1e0(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f0, 0x30(r1)
    stfs f4, 0x34(r1)
    psq_st f2, 0x1e8(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f0, 0x18(r1)
    stfs f3, 0x1c(r1)
    psq_st f1, 0x1f0(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f5, 0x20(r1)
    stfs f4, 0x24(r1)
    psq_st f2, 0x1f8(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f4, 0x8(r1)
    stfs f3, 0xc(r1)
    psq_st f1, 0x200(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f0, 0x10(r1)
    stfs f4, 0x14(r1)
    psq_st f2, 0x208(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    psq_st f1, 0x210(r3), 0, 0
    psq_st f2, 0x218(r3), 0, 0
    lwz r31, 0x22c(r1)
    addi r1, r1, 0x230
    blr
}

asm void fn_801F2398(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    stw r28, 0x50(r1)
    mr r28, r5
    bl fn_801EC158
    addi r5, r31, 0x140
    li r3, 0x0
    lfs f0, lbl_80882C58
    lis r4, lbl_80782B68@ha
    addi r4, r4, lbl_80782B68@l
    li r0, 0x1
    cmplw r5, r5
    stw r4, 0x0(r31)
    sth r0, 0x12c(r31)
    sth r3, 0x12e(r31)
    stfs f0, 0x130(r31)
    stw r3, 0x134(r31)
    stw r3, 0x138(r31)
    stw r3, 0x13c(r31)
    bge lbl_fn_801F2398_000016A0
    addi r0, r5, 0x7
    subf r0, r5, r0
    srwi r0, r0, 3
    mtctr r0
    bge lbl_fn_801F2398_000016A0
lbl_fn_801F2398_00001690:
    stw r3, 0x0(r5)
    stw r3, 0x4(r5)
    addi r5, r5, 0x8
    bdnz lbl_fn_801F2398_00001690
lbl_fn_801F2398_000016A0:
    lis r4, fn_801F25CC@ha
    lis r5, fn_8006FA4C@ha
    addi r3, r31, 0x140
    li r6, 0xc
    addi r4, r4, fn_801F25CC@l
    addi r5, r5, fn_8006FA4C@l
    li r7, 0x1
    bl fn_806958E0
    li r0, 0x1
    lis r4, lbl_8073E314@ha
    sth r0, 0x8(r31)
    mr r5, r28
    addi r3, r1, 0x30
    addi r4, r4, lbl_8073E314@l
    crclr 6
    bl sprintf
    addi r3, r1, 0x30
    bl fn_800DC6B4
    stw r3, 0x134(r31)
    li r0, 0x0
    lis r30, lbl_80782BA0@ha
    addi r29, r1, 0x24
    addi r30, r30, lbl_80782BA0@l
    stw r0, 0x24(r1)
    mr r3, r30
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
    bl fn_80686A48
    mr r28, r3
    mr r3, r29
    mr r4, r28
    bl fn_800DBF68
    lbz r3, 0x14(r1)
    slwi r0, r28, 1
    stb r3, 0x10(r1)
    mr r3, r29
    mr r6, r30
    add r7, r30, r0
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_8006F72C
    mr r5, r29
    addi r3, r31, 0x134
    li r4, 0x0
    li r6, 0x0
    li r7, 0x1
    bl fn_801F25E0
    lwz r0, 0x24(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F2398_00001774
    lwz r3, 0x2c(r1)
    bl dtor_80084684
lbl_fn_801F2398_00001774:
    addi r28, r1, 0x1a
    addi r3, r1, 0x18
    addi r4, r31, 0x138
    li r5, 0x0
    bl fn_801F0758
    lwz r0, 0x140(r31)
    addi r3, r31, 0x140
    srwi. r5, r0, 31
    bne lbl_fn_801F2398_000017BC
    lwz r4, 0x18(r1)
    srwi. r0, r4, 31
    bne lbl_fn_801F2398_000017BC
    lwz r0, 0x1c(r1)
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    lwz r0, 0x20(r1)
    stw r0, 0x8(r3)
    b lbl_fn_801F2398_00001814
lbl_fn_801F2398_000017BC:
    cmpwi r5, 0x0
    beq lbl_fn_801F2398_000017CC
    lwz r5, 0x4(r3)
    b lbl_fn_801F2398_000017D4
lbl_fn_801F2398_000017CC:
    lbz r0, 0x0(r3)
    clrlwi r5, r0, 25
lbl_fn_801F2398_000017D4:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    bne lbl_fn_801F2398_000017EC
    lbz r0, 0x18(r1)
    clrlwi r0, r0, 25
    b lbl_fn_801F2398_000017F4
lbl_fn_801F2398_000017EC:
    lwz r28, 0x20(r1)
    lwz r0, 0x1c(r1)
lbl_fn_801F2398_000017F4:
    lbz r4, 0x8(r1)
    slwi r0, r0, 1
    stb r4, 0xc(r1)
    mr r6, r28
    add r7, r28, r0
    addi r8, r1, 0xc
    li r4, 0x0
    bl fn_8006F72C
lbl_fn_801F2398_00001814:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F2398_00001828
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_801F2398_00001828:
    mr r3, r31
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r28, 0x50(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801F25CC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_801F25E0(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r26, 0x28(r1)
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    mr r30, r7
    lwz r8, 0x0(r5)
    srwi. r0, r8, 31
    bne lbl_fn_801F25E0_000018A8
    lwz r0, 0x4(r5)
    stw r0, 0x14(r1)
    stw r8, 0x10(r1)
    lwz r0, 0x8(r5)
    stw r0, 0x18(r1)
    b lbl_fn_801F25E0_000018F4
lbl_fn_801F25E0_000018A8:
    li r0, 0x0
    stw r0, 0x10(r1)
    addi r31, r1, 0x10
    stw r0, 0x14(r1)
    mr r3, r31
    stw r0, 0x18(r1)
    lwz r4, 0x4(r5)
    bl fn_800DBF68
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    lwz r0, 0x4(r28)
    lwz r6, 0x8(r28)
    slwi r0, r0, 1
    add r7, r6, r0
    bl fn_8006F72C
lbl_fn_801F25E0_000018F4:
    slwi r0, r29, 3
    mr r4, r27
    add r3, r26, r0
    mr r6, r30
    addi r3, r3, 0x4
    addi r5, r1, 0x10
    bl fn_801F0670
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    beq lbl_fn_801F25E0_00001924
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_801F25E0_00001924:
    lmw r26, 0x28(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_801F26B8(void)
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
    beq lbl_fn_801F26B8_000019C0
    lwz r5, 0xfc(r3)
    lis r4, lbl_80782B68@ha
    addi r4, r4, lbl_80782B68@l
    stw r4, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_801F26B8_00001980
    addi r3, r5, 0x10
    addi r4, r30, 0x134
    bl fn_801FEA9C
lbl_fn_801F26B8_00001980:
    addic. r3, r30, 0x134
    beq lbl_fn_801F26B8_000019A4
    beq lbl_fn_801F26B8_000019A4
    lis r4, fn_8006FA4C@ha
    addi r3, r3, 0xc
    addi r4, r4, fn_8006FA4C@l
    li r5, 0xc
    li r6, 0x1
    bl fn_806959D8
lbl_fn_801F26B8_000019A4:
    mr r3, r30
    li r4, 0x0
    bl fn_801EC6C0
    cmpwi r31, 0x0
    ble lbl_fn_801F26B8_000019C0
    mr r3, r30
    bl dtor_80084684
lbl_fn_801F26B8_000019C0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
