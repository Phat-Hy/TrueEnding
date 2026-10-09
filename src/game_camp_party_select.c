#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80014798(void);
extern void fn_8004B20C(void);
extern void fn_8005BD10(void);
extern void fn_8005BEF8(void);
extern void fn_8005BFAC(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_8006CA80(void);
extern void fn_8006F420(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800A4228(void);
extern void fn_800A48B8(void);
extern void fn_800A49C4(void);
extern void fn_800A4BE4(void);
extern void fn_800A4D00(void);
extern void fn_800A4E08(void);
extern void fn_800A555C(void);
extern void fn_800A55AC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_803BDEE4(void);
extern void fn_803BE8B4(void);
extern void fn_803BE8C0(void);
extern void fn_803BEAB4(void);
extern void fn_803CE3B8(void);
extern void fn_803CE408(void);
extern void fn_803CE448(void);
extern void fn_8046ECDC(void);
extern void fn_8046EED8(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_8049D52C(void);
extern void fn_8061E760(void);
extern void fn_8061E940(void);
extern void fn_8061F2F0(void);
extern void fn_8061FC70(void);
extern void fn_80620030(void);
extern void fn_80621CD0(void);
extern void fn_806846C4(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern int sprintf(char* str, const char* format, ...);
extern char* strcpy(char* dest, const char* src);

/* External data declarations */
extern u8 jumptable_8078B568[];
extern u8 lbl_8074FF58[];
extern u8 lbl_8074FF88[];
extern u8 lbl_8074FFB0[];
extern u8 lbl_8074FFB8[];
extern u8 lbl_80750034[];
extern u8 lbl_8075009C[];
extern u8 lbl_8078B548[];
extern u8 lbl_8078B588[];
extern u8 lbl_8078B5A8[];
extern u8 lbl_8078B5E8[];
extern u8 lbl_8078B608[];
extern u8 lbl_8078B620[];
extern u8 lbl_8078B658[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087DCC8;
extern u32 lbl_8087DCCC;
extern u32 lbl_8087DD98;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEC8;
extern u32 lbl_8087EF68;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F434;
extern u32 lbl_8087F470;
extern u32 lbl_8087F518;
extern u32 lbl_80885C58;
extern u32 lbl_80885C5C;
extern u32 lbl_80885C60;
extern u32 lbl_80885C64;
extern u32 lbl_80885C68;
extern u32 lbl_80885C6C;
extern u32 lbl_80885C70;
extern u32 lbl_80885C78;
extern u32 lbl_80885C7C;
extern u32 lbl_80885C80;
extern u32 lbl_80885C84;
extern u32 lbl_80885C88;
extern u32 lbl_80885C8C;
extern u32 lbl_80885C90;
extern u32 lbl_80885C98;

/* Function declarations */
void fn_803B7AD0(void);
void fn_803B7E20(void);
void fn_803B7FC8(void);
void fn_803B807C(void);
void fn_803B80F4(void);
void fn_803B8144(void);
void fn_803B8160(void);
void fn_803B8200(void);
void fn_803B8270(void);
void fn_803B82C0(void);
void fn_803B834C(void);
void fn_803B83A4(void);
void fn_803B8454(void);
void fn_803B84DC(void);
void fn_803B854C(void);
void fn_803B85EC(void);
void fn_803B8758(void);
void fn_803B87A8(void);
void fn_803B8AC4(void);
void fn_803B8B08(void);
void fn_803B8C6C(void);
void fn_803B8D10(void);
void fn_803B8D3C(void);
void fn_803B8E60(void);
void fn_803B8F50(void);
void fn_803B8FE8(void);
void fn_803B9044(void);
void fn_803B9140(void);
void fn_803B91DC(void);
void fn_803B9324(void);

asm void fn_803B7AD0(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, 0xd64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B7AD0_0000033C
    lwz r0, 0xd6c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B7AD0_00000050
    cmpwi r0, 0x1
    beq lbl_fn_803B7AD0_0000005C
    cmpwi r0, 0x2
    beq lbl_fn_803B7AD0_000001E0
    cmpwi r0, 0x4
    beq lbl_fn_803B7AD0_000002E0
    cmpwi r0, 0x5
    beq lbl_fn_803B7AD0_00000310
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_00000050:
    li r0, 0x1
    stw r0, 0xd6c(r3)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_0000005C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x0
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803B7AD0_0000008C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_000000A8
lbl_fn_803B7AD0_0000008C:
    lwz r3, 0x48(r31)
    li r0, 0x10
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_000000A0
    subi r0, r3, 0x1
lbl_fn_803B7AD0_000000A0:
    stw r0, 0x48(r31)
    b lbl_fn_803B7AD0_00000104
lbl_fn_803B7AD0_000000A8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803B7AD0_000000D8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_00000104
lbl_fn_803B7AD0_000000D8:
    lwz r4, 0x48(r31)
    lis r3, 0x7878
    addi r0, r3, 0x7879
    addi r4, r4, 0x1
    mulhw r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x11
    subf r0, r0, r4
    stw r0, 0x48(r31)
lbl_fn_803B7AD0_00000104:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_000001BC
    lwz r0, 0x48(r31)
    mulli r0, r0, 0xb8
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl fn_803BEAB4
    cmpwi r3, 0x0
    bne lbl_fn_803B7AD0_000001A8
    addi r3, r31, 0xe38
    bl fn_803BDEE4
    addi r3, r1, 0x30
    bl fn_8004B20C
    lwz r0, 0x48(r31)
    addi r4, r31, 0xe38
    addi r5, r1, 0x30
    mulli r0, r0, 0xb8
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl fn_803BE8C0
    lwz r0, 0x48(r31)
    addi r3, r31, 0xd80
    li r5, 0xb8
    mulli r0, r0, 0xb8
    add r4, r31, r0
    addi r4, r4, 0x4c
    bl memcpy
    lwz r3, 0xd70(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_0000019C
    lwz r5, 0x48(r31)
    addi r4, r31, 0xd80
    li r6, 0x1
    bl fn_803B8E60
lbl_fn_803B7AD0_0000019C:
    li r0, 0x4
    stw r0, 0xd6c(r31)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_000001A8:
    li r3, 0x2
    li r0, 0x0
    stw r3, 0xd6c(r31)
    stw r0, 0xd68(r31)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_000001BC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_0000033C
    li r0, 0x3
    stw r0, 0xd6c(r31)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_000001E0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x1a
    bl fn_800A55AC
    cmpwi r3, 0x0
    bne lbl_fn_803B7AD0_00000210
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x19
    bl fn_800A55AC
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_00000220
lbl_fn_803B7AD0_00000210:
    lwz r0, 0xd68(r31)
    cntlzw r0, r0
    srwi r0, r0, 5
    stw r0, 0xd68(r31)
lbl_fn_803B7AD0_00000220:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_000002BC
    lwz r0, 0xd68(r31)
    li r3, 0x1
    stw r3, 0xd6c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803B7AD0_0000033C
    addi r3, r31, 0xe38
    bl fn_803BDEE4
    addi r3, r1, 0x8
    bl fn_8004B20C
    lwz r0, 0x48(r31)
    addi r4, r31, 0xe38
    addi r5, r1, 0x8
    mulli r0, r0, 0xb8
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl fn_803BE8C0
    lwz r0, 0x48(r31)
    addi r3, r31, 0xd80
    li r5, 0xb8
    mulli r0, r0, 0xb8
    add r4, r31, r0
    addi r4, r4, 0x4c
    bl memcpy
    lwz r3, 0xd70(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_000002B0
    lwz r5, 0x48(r31)
    addi r4, r31, 0xd80
    li r6, 0x1
    bl fn_803B8E60
lbl_fn_803B7AD0_000002B0:
    li r0, 0x4
    stw r0, 0xd6c(r31)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_000002BC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_803B7AD0_0000033C
    li r0, 0x1
    stw r0, 0xd6c(r31)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_000002E0:
    lwz r4, 0xd70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803B7AD0_00000304
    lbz r0, 0x154(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803B7AD0_0000033C
    li r0, 0x1
    stw r0, 0xd6c(r3)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_00000304:
    li r0, 0x1
    stw r0, 0xd6c(r3)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_00000310:
    lwz r4, 0xd70(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803B7AD0_00000334
    lbz r0, 0x154(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803B7AD0_0000033C
    li r0, 0x1
    stw r0, 0xd6c(r3)
    b lbl_fn_803B7AD0_0000033C
lbl_fn_803B7AD0_00000334:
    li r0, 0x1
    stw r0, 0xd6c(r3)
lbl_fn_803B7AD0_0000033C:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803B7E20(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xd64(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B7E20_000004E0
    addi r4, r3, 0x4c
    bl fn_803B8B08
    lwz r0, 0xd6c(r30)
    cmpwi r0, 0x2
    beq lbl_fn_803B7E20_00000394
    cmpwi r0, 0x4
    beq lbl_fn_803B7E20_00000484
    b lbl_fn_803B7E20_000004E0
lbl_fn_803B7E20_00000394:
    lfs f1, lbl_80885C58
    lis r4, 0xff00
    lfs f4, lbl_80885C60
    fmr f2, f1
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80885C5C
    bl fn_80060D58
    lfs f1, lbl_80885C60
    lis r31, lbl_8074FF58@ha
    lfs f3, lbl_80885C5C
    addi r31, r31, lbl_8074FF58@l
    lfs f4, lbl_80885C64
    fmr f2, f1
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    addi r4, r31, 0x1
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f4, lbl_80885C64
    addi r4, r31, 0x12
    lwz r0, 0xd68(r30)
    li r5, -0x1
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, lbl_80885C68
    lfs f2, lbl_80885C6C
    lfs f3, lbl_80885C5C
    beq lbl_fn_803B7E20_00000420
    li r5, -0x100
lbl_fn_803B7E20_00000420:
    lfs f6, lbl_80885C5C
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f4, lbl_80885C64
    lis r4, lbl_8074FF58@ha
    lwz r0, 0xd68(r30)
    addi r4, r4, lbl_8074FF58@l
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, lbl_80885C68
    lfs f2, lbl_80885C70
    addi r4, r4, 0x17
    lfs f3, lbl_80885C5C
    li r5, -0x1
    bne lbl_fn_803B7E20_0000046C
    li r5, -0x100
lbl_fn_803B7E20_0000046C:
    lfs f6, lbl_80885C5C
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    b lbl_fn_803B7E20_000004E0
lbl_fn_803B7E20_00000484:
    lfs f1, lbl_80885C58
    lis r4, 0xff00
    lfs f4, lbl_80885C60
    fmr f2, f1
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80885C5C
    bl fn_80060D58
    lfs f1, lbl_80885C60
    lis r4, lbl_8074FF58@ha
    lfs f3, lbl_80885C5C
    addi r4, r4, lbl_8074FF58@l
    lfs f4, lbl_80885C64
    fmr f2, f1
    fmr f6, f3
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    addi r4, r4, 0x1e
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_803B7E20_000004E0:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B7FC8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r4
    stw r29, 0x34(r1)
    mr r29, r3
    lwz r0, 0xd70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803B7FC8_00000530
    li r0, 0x1
    stw r0, 0xd6c(r3)
    b lbl_fn_803B7FC8_00000590
lbl_fn_803B7FC8_00000530:
    addi r3, r3, 0xe38
    bl fn_803BDEE4
    mulli r0, r30, 0xb8
    addi r3, r1, 0x8
    add r4, r29, r0
    addi r31, r4, 0x4c
    bl fn_8004B20C
    mr r3, r31
    addi r4, r29, 0xe38
    addi r5, r1, 0x8
    bl fn_803BE8C0
    mr r4, r31
    addi r3, r29, 0xd80
    li r5, 0xb8
    bl memcpy
    lwz r3, 0xd70(r29)
    cmpwi r3, 0x0
    beq lbl_fn_803B7FC8_00000588
    mr r5, r30
    addi r4, r29, 0xd80
    li r6, 0x1
    bl fn_803B8E60
lbl_fn_803B7FC8_00000588:
    li r0, 0x4
    stw r0, 0xd6c(r29)
lbl_fn_803B7FC8_00000590:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_803B807C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0xd70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_803B807C_000005E0
    li r0, 0x1
    stw r0, 0xd6c(r3)
    b lbl_fn_803B807C_0000060C
lbl_fn_803B807C_000005E0:
    beq lbl_fn_803B807C_00000604
    mr r3, r0
    bl fn_803B8160
    mulli r0, r31, 0xb8
    li r4, 0x0
    li r5, 0xb8
    add r3, r30, r0
    addi r3, r3, 0x4c
    bl memset
lbl_fn_803B807C_00000604:
    li r0, 0x5
    stw r0, 0xd6c(r30)
lbl_fn_803B807C_0000060C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B80F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_8078B548@ha
    li r0, 0x0
    addi r3, r3, lbl_8078B548@l
    stw r3, 0x0(r31)
    mr r3, r31
    stb r0, 0x148(r31)
    stw r0, 0x14c(r31)
    stw r0, 0x150(r31)
    stb r0, 0x154(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B8144(void)
{
    nofralloc
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B8144_00000688
    lwz r3, 0x168(r3)
    blr
lbl_fn_803B8144_00000688:
    li r3, 0x0
    blr
}

asm void fn_803B8160(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    mr r5, r4
    stw r0, 0x124(r1)
    addi r4, r1, 0xc
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    addi r3, r1, 0x10
    bl fn_803B83A4
    lwz r0, lbl_8087EF68
    cmpwi r0, 0x0
    beq lbl_fn_803B8160_00000718
    lis r5, lbl_8074FF88@ha
    li r0, 0x1
    addi r5, r5, lbl_8074FF88@l
    lis r31, 0x1
    stb r0, 0x154(r30)
    mr r6, r5
    addi r3, r31, 0x3560
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x150(r30)
    addi r5, r31, 0x3560
    li r4, 0x0
    bl memset
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x10
    lwz r5, 0x150(r30)
    addi r6, r31, 0x3560
    lwz r7, 0xc(r1)
    addi r8, r1, 0x8
    bl fn_800A48B8
lbl_fn_803B8160_00000718:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803B8200(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x14(r1)
    li r0, 0x1
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    stb r0, 0x154(r3)
    beq lbl_fn_803B8200_00000788
    lis r5, lbl_8074FF88@ha
    lis r31, 0x1
    addi r5, r5, lbl_8074FF88@l
    li r4, 0x1
    mr r6, r5
    addi r3, r31, 0x3560
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0x150(r30)
    addi r5, r31, 0x3560
    li r4, 0x0
    bl memset
lbl_fn_803B8200_00000788:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B8270(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x150(r3)
    stb r31, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B8270_000007D8
    mr r3, r0
    bl fn_80084C24
    stw r31, 0x150(r30)
lbl_fn_803B8270_000007D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B82C0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_800D1D3C
    lis r3, lbl_8078B588@ha
    li r0, 0x0
    addi r3, r3, lbl_8078B588@l
    stw r3, 0x0(r29)
    addi r30, r29, 0x4c
    addi r31, r29, 0xc84
    stw r0, 0x48(r29)
lbl_fn_803B82C0_0000082C:
    mr r3, r30
    bl fn_803BE8B4
    addi r30, r30, 0xb8
    cmplw r30, r31
    blt lbl_fn_803B82C0_0000082C
    li r4, 0x0
    li r0, 0x1
    stw r4, 0xc84(r29)
    mr r3, r29
    stw r4, 0xc88(r29)
    stw r4, 0xc8c(r29)
    stw r4, 0xd60(r29)
    stw r0, 0xd64(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B834C(void)
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
    beq lbl_fn_803B834C_000008B8
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803B834C_000008B8
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B834C_000008B8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B83A4(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stw r31, 0x5c(r1)
    mr r31, r5
    stw r30, 0x58(r1)
    mr r30, r4
    stw r29, 0x54(r1)
    mr r29, r3
    lwz r6, lbl_8087F0A8
    lwz r0, 0x198(r6)
    cmpwi r0, 0x0
    beq lbl_fn_803B83A4_00000914
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_fn_803B83A4_00000968
lbl_fn_803B83A4_00000914:
    addi r3, r1, 0x8
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_803B83A4_00000968
    lis r4, lbl_8074FFB8@ha
    lwz r6, lbl_80885C78
    mr r3, r29
    addi r5, r1, 0x8
    addi r4, r4, lbl_8074FFB8@l
    crclr 6
    bl sprintf
    cmpwi r31, 0x0
    blt lbl_fn_803B83A4_00000960
    lis r3, 0x1
    addi r0, r3, 0x3560
    mullw r3, r31, r0
    addi r0, r3, 0x20
    stw r0, 0x0(r30)
    b lbl_fn_803B83A4_00000968
lbl_fn_803B83A4_00000960:
    li r0, 0x0
    stw r0, 0x0(r30)
lbl_fn_803B83A4_00000968:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_803B8454(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r5, lbl_8087F0A8
    lwz r0, 0x198(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803B8454_000009BC
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_fn_803B8454_000009F4
lbl_fn_803B8454_000009BC:
    addi r3, r1, 0x8
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_803B8454_000009F4
    lis r4, lbl_8074FFB8@ha
    lwz r6, lbl_80885C78
    mr r3, r30
    addi r5, r1, 0x8
    addi r4, r4, lbl_8074FFB8@l
    crclr 6
    bl sprintf
    lis r3, 0x15
    subi r0, r3, 0x7480
    stw r0, 0x0(r31)
lbl_fn_803B8454_000009F4:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803B84DC(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r3
    lwz r4, lbl_8087F0A8
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803B84DC_00000A3C
    li r0, 0x0
    stb r0, 0x0(r3)
    b lbl_fn_803B84DC_00000A68
lbl_fn_803B84DC_00000A3C:
    addi r3, r1, 0x8
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_803B84DC_00000A68
    lis r4, lbl_8074FFB8@ha
    lwz r6, lbl_80885C7C
    mr r3, r31
    addi r5, r1, 0x8
    addi r4, r4, lbl_8074FFB8@l
    crclr 6
    bl sprintf
lbl_fn_803B84DC_00000A68:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803B854C(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    mr r31, r4
    stw r30, 0x48(r1)
    mr r30, r3
    lwz r5, lbl_8087F0A8
    lwz r0, 0x198(r5)
    cmpwi r0, 0x0
    beq lbl_fn_803B854C_00000AC4
    cmpwi r3, 0x0
    beq lbl_fn_803B854C_00000AB8
    li r0, 0x0
    stb r0, 0x0(r3)
lbl_fn_803B854C_00000AB8:
    li r0, 0x0
    stw r0, 0x0(r4)
    b lbl_fn_803B854C_00000B04
lbl_fn_803B854C_00000AC4:
    cmpwi r3, 0x0
    beq lbl_fn_803B854C_00000AF8
    addi r3, r1, 0x8
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_803B854C_00000B04
    lis r4, lbl_8074FFB8@ha
    lwz r6, lbl_80885C78
    mr r3, r30
    addi r5, r1, 0x8
    addi r4, r4, lbl_8074FFB8@l
    crclr 6
    bl sprintf
lbl_fn_803B854C_00000AF8:
    lis r3, 0x15
    subi r0, r3, 0x6a80
    stw r0, 0x0(r31)
lbl_fn_803B854C_00000B04:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_803B85EC(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x340
    stwux r1, r1, r11
    mflr r0
    lis r11, 0xffff
    stw r0, 0x4(r12)
    addi r11, r11, 0x7fe0
    stmw r23, -0x24(r12)
    mr r31, r1
    lwz r0, 0x0(r1)
    stwux r0, r1, r11
    lwz r4, lbl_8087F0A8
    mr r30, r3
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    bne lbl_fn_803B85EC_00000C70
    addi r3, r31, 0x60
    bl fn_80621CD0
    cmpwi r3, 0x0
    beq lbl_fn_803B85EC_00000B74
    b lbl_fn_803B85EC_00000C70
lbl_fn_803B85EC_00000B74:
    li r24, 0x0
    addis r28, r31, 0x0
    mr r25, r24
    li r29, 0x0
    lis r26, lbl_8074FFB8@ha
    lis r27, 0x1
lbl_fn_803B85EC_00000B8C:
    lwz r3, lbl_8087F0A8
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B85EC_00000BA4
    stb r25, 0xa0(r31)
    b lbl_fn_803B85EC_00000BEC
lbl_fn_803B85EC_00000BA4:
    addi r3, r31, 0x20
    bl fn_80621CD0
    cmpwi r3, 0x0
    beq lbl_fn_803B85EC_00000BB8
    b lbl_fn_803B85EC_00000BEC
lbl_fn_803B85EC_00000BB8:
    lwz r6, lbl_80885C78
    addi r3, r31, 0xa0
    addi r4, r26, lbl_8074FFB8@l
    addi r5, r31, 0x20
    crclr 6
    bl sprintf
    cmpwi r24, 0x0
    blt lbl_fn_803B85EC_00000BE8
    addi r0, r27, 0x3560
    mullw r3, r24, r0
    addi r23, r3, 0x20
    b lbl_fn_803B85EC_00000BEC
lbl_fn_803B85EC_00000BE8:
    li r23, 0x0
lbl_fn_803B85EC_00000BEC:
    addi r3, r31, 0xa0
    addi r4, r31, 0x1a0
    subi r6, r28, 0x7fe0
    addi r7, r27, -0x8000
    li r5, 0x1
    bl fn_8061FC70
    cmpwi r3, 0x0
    bne lbl_fn_803B85EC_00000C58
    mr r4, r23
    addi r3, r31, 0x1a0
    li r5, 0x0
    bl fn_8061E940
    cmpw r3, r23
    bne lbl_fn_803B85EC_00000C58
    addi r3, r31, 0x1a0
    addi r4, r31, 0x240
    li r5, 0xc0
    bl fn_8061E760
    cmpwi r3, 0x0
    ble lbl_fn_803B85EC_00000C50
    add r3, r30, r29
    addi r4, r31, 0x240
    addi r3, r3, 0x4c
    li r5, 0xb8
    bl memcpy
lbl_fn_803B85EC_00000C50:
    addi r3, r31, 0x1a0
    bl fn_80620030
lbl_fn_803B85EC_00000C58:
    addi r24, r24, 0x1
    addi r29, r29, 0xb8
    cmpwi r24, 0x11
    blt lbl_fn_803B85EC_00000B8C
    li r0, 0x1
    stw r0, 0xd60(r30)
lbl_fn_803B85EC_00000C70:
    lwz r10, 0x0(r1)
    lmw r23, -0x24(r10)
    lwz r0, 0x4(r10)
    mtlr r0
    mr r1, r10
    blr
}

asm void fn_803B8758(void)
{
    nofralloc
    lwz r5, lbl_8087F0A8
    lwz r0, 0x198(r5)
    cmpwi r0, 0x0
    bnelr
    cmpwi r4, 0x0
    li r0, 0x1
    stw r0, 0xc84(r3)
    blt lbl_fn_803B8758_00000CB4
    stw r4, 0xc88(r3)
    stw r4, 0xc8c(r3)
    b lbl_fn_803B8758_00000CCC
lbl_fn_803B8758_00000CB4:
    li r0, 0x10
    stw r0, 0xc8c(r3)
    li r0, 0x0
    stw r0, 0xc88(r3)
    stw r0, lbl_8087DCCC
    stw r0, lbl_8087DCC8
lbl_fn_803B8758_00000CCC:
    li r0, 0x0
    stw r0, 0xd60(r3)
    blr
}

asm void fn_803B87A8(void)
{
    nofralloc
    stwu r1, -0x2b0(r1)
    mflr r0
    stw r0, 0x2b4(r1)
    stw r31, 0x2ac(r1)
    mr r31, r3
    stw r30, 0x2a8(r1)
    lwz r0, 0xc84(r3)
    cmplwi r0, 0x7
    bgt lbl_fn_803B87A8_00000FBC
    lis r4, jumptable_8078B568@ha
    slwi r0, r0, 2
    addi r4, r4, jumptable_8078B568@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r3, 0x0
    b lbl_fn_803B87A8_00000FDC
    li r4, 0x0
    li r5, 0xc0
    addi r3, r3, 0xca0
    bl memset
    lwz r3, lbl_8087F0A8
    lwz r0, 0x198(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B87A8_00000D48
    li r0, 0x0
    stb r0, 0x1a0(r1)
    b lbl_fn_803B87A8_00000D74
lbl_fn_803B87A8_00000D48:
    addi r3, r1, 0x60
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_803B87A8_00000D74
    lis r4, lbl_8074FFB8@ha
    lwz r6, lbl_80885C78
    addi r3, r1, 0x1a0
    addi r5, r1, 0x60
    addi r4, r4, lbl_8074FFB8@l
    crclr 6
    bl sprintf
lbl_fn_803B87A8_00000D74:
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000D8C
    addi r4, r1, 0x1a0
    addi r5, r1, 0x1c
    bl fn_800A4BE4
lbl_fn_803B87A8_00000D8C:
    li r0, 0x2
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
    lwz r3, lbl_8087EF68
    li r0, 0x0
    stw r0, 0x18(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000DBC
    addi r4, r1, 0x18
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000DBC:
    lwz r0, 0x18(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803B87A8_00000DD4
    li r0, 0x3
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000DD4:
    li r0, 0x7
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
    lwz r4, lbl_8087F0A8
    lwz r30, 0xc88(r3)
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803B87A8_00000E00
    li r0, 0x0
    stb r0, 0xa0(r1)
    b lbl_fn_803B87A8_00000E4C
lbl_fn_803B87A8_00000E00:
    addi r3, r1, 0x20
    bl fn_80621CD0
    cmpwi r3, 0x0
    bne lbl_fn_803B87A8_00000E4C
    lis r4, lbl_8074FFB8@ha
    lwz r6, lbl_80885C78
    addi r3, r1, 0xa0
    addi r5, r1, 0x20
    addi r4, r4, lbl_8074FFB8@l
    crclr 6
    bl sprintf
    cmpwi r30, 0x0
    blt lbl_fn_803B87A8_00000E48
    lis r3, 0x1
    addi r0, r3, 0x3560
    mullw r3, r30, r0
    addi r6, r3, 0x20
    b lbl_fn_803B87A8_00000E4C
lbl_fn_803B87A8_00000E48:
    li r6, 0x0
lbl_fn_803B87A8_00000E4C:
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000E68
    addi r4, r31, 0xca0
    addi r7, r1, 0x14
    li r5, 0xc0
    bl fn_800A4D00
lbl_fn_803B87A8_00000E68:
    li r0, 0x4
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
    lwz r3, lbl_8087EF68
    li r0, 0x0
    stw r0, 0x10(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000E98
    addi r4, r1, 0x10
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000E98:
    lwz r0, 0x10(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803B87A8_00000F38
    lwz r0, 0xc88(r31)
    addi r4, r31, 0xca0
    li r5, 0xb8
    mulli r0, r0, 0xb8
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl memcpy
    lwz r0, 0xc88(r31)
    mulli r0, r0, 0xb8
    add r3, r31, r0
    addi r3, r3, 0x4c
    bl fn_803BEAB4
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000F08
    lwz r0, 0xc88(r31)
    cmpwi r0, 0x0
    bne lbl_fn_803B87A8_00000F00
    lwz r0, lbl_8087F434
    cmpwi r0, 0x0
    bne lbl_fn_803B87A8_00000F08
    li r0, 0x1
    stw r0, lbl_8087DCCC
    b lbl_fn_803B87A8_00000F08
lbl_fn_803B87A8_00000F00:
    li r0, 0x1
    stw r0, lbl_8087DCC8
lbl_fn_803B87A8_00000F08:
    lwz r3, 0xc88(r31)
    lwz r0, 0xc8c(r31)
    addi r3, r3, 0x1
    stw r3, 0xc88(r31)
    cmpw r3, r0
    bgt lbl_fn_803B87A8_00000F2C
    li r0, 0x3
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000F2C:
    li r0, 0x5
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000F38:
    li r0, 0x7
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000F58
    addi r4, r1, 0xc
    bl fn_800A4E08
lbl_fn_803B87A8_00000F58:
    li r0, 0x6
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
    lwz r3, lbl_8087EF68
    li r0, 0x0
    stw r0, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_803B87A8_00000F88
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000F88:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803B87A8_00000FA8
    li r3, 0x0
    li r0, 0x1
    stw r3, 0xc84(r31)
    stw r0, 0xd60(r31)
    b lbl_fn_803B87A8_00000FBC
lbl_fn_803B87A8_00000FA8:
    li r0, 0x7
    stw r0, 0xc84(r31)
    b lbl_fn_803B87A8_00000FBC
    li r3, 0x0
    b lbl_fn_803B87A8_00000FDC
lbl_fn_803B87A8_00000FBC:
    lwz r3, 0xc88(r31)
    lwz r0, 0xc8c(r31)
    cmpw r3, r0
    bge lbl_fn_803B87A8_00000FD8
    lwz r3, lbl_8087F518
    li r4, 0x0
    bl fn_8046ECDC
lbl_fn_803B87A8_00000FD8:
    li r3, 0x1
lbl_fn_803B87A8_00000FDC:
    lwz r0, 0x2b4(r1)
    lwz r31, 0x2ac(r1)
    lwz r30, 0x2a8(r1)
    mtlr r0
    addi r1, r1, 0x2b0
    blr
}

asm void fn_803B8AC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r4, lbl_8087F0A8
    lwz r0, 0x198(r4)
    cmpwi r0, 0x0
    beq lbl_fn_803B8AC4_00001018
    li r3, 0x0
    b lbl_fn_803B8AC4_00001028
lbl_fn_803B8AC4_00001018:
    addi r4, r1, 0x8
    bl fn_8061F2F0
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_803B8AC4_00001028:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B8B08(void)
{
    nofralloc
    stwu r1, -0x260(r1)
    mflr r0
    stw r0, 0x264(r1)
    addi r11, r1, 0x230
    stfd f31, 0x250(r1)
    psq_st f31, 0x258(r1), 0, 0
    stfd f30, 0x240(r1)
    psq_st f30, 0x248(r1), 0, 0
    stfd f29, 0x230(r1)
    psq_st f29, 0x238(r1), 0, 0
    bl _savegpr_26
    lis r5, lbl_8074FFB0@ha
    lis r6, lbl_8074FFB8@ha
    lfd f29, lbl_8074FFB0@l(r5)
    mr r26, r3
    lfs f30, lbl_80885C88
    mr r28, r4
    lfs f31, lbl_80885C84
    addi r29, r6, lbl_8074FFB8@l
    addi r30, r1, 0x10
    li r27, 0x0
    lis r31, 0x4330
lbl_fn_803B8B08_00001090:
    mr r3, r28
    bl fn_803BEAB4
    cmpwi r3, 0x0
    bne lbl_fn_803B8B08_000010B8
    mr r5, r27
    addi r3, r1, 0x110
    addi r4, r29, 0x29
    crclr 6
    bl sprintf
    b lbl_fn_803B8B08_00001104
lbl_fn_803B8B08_000010B8:
    lbz r4, 0x30(r28)
    addi r3, r1, 0x10
    lhz r5, 0x32(r28)
    lbz r6, 0x31(r28)
    bl fn_8049D52C
    lwz r0, 0x8(r28)
    mr r5, r27
    stw r0, 0x8(r1)
    addi r3, r1, 0x110
    addi r4, r29, 0x44
    stw r30, 0xc(r1)
    lwz r7, 0x18(r28)
    lwz r6, 0x1c(r28)
    lwz r8, 0x14(r28)
    addi r7, r7, 0x1
    lwz r9, 0x10(r28)
    lwz r10, 0xc(r28)
    crclr 6
    bl sprintf
lbl_fn_803B8B08_00001104:
    xoris r0, r27, 0x8000
    stw r0, 0x214(r1)
    lfs f4, lbl_80885C90
    addi r4, r1, 0x110
    stw r31, 0x210(r1)
    li r5, -0x1
    lwz r0, 0x48(r26)
    fmr f5, f4
    lfd f0, 0x210(r1)
    cmpw r27, r0
    lwz r3, lbl_8087EEB0
    fsubs f0, f0, f29
    lfs f1, lbl_80885C80
    lfs f3, lbl_80885C8C
    fmadds f2, f30, f0, f31
    bne lbl_fn_803B8B08_00001148
    li r5, -0x100
lbl_fn_803B8B08_00001148:
    lfs f6, lbl_80885C8C
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    addi r27, r27, 0x1
    addi r28, r28, 0xb8
    cmpwi r27, 0x11
    blt lbl_fn_803B8B08_00001090
    addi r11, r1, 0x230
    psq_l f31, 0x258(r1), 0, 0
    lfd f31, 0x250(r1)
    psq_l f30, 0x248(r1), 0, 0
    lfd f30, 0x240(r1)
    psq_l f29, 0x238(r1), 0, 0
    lfd f29, 0x230(r1)
    bl _restgpr_26
    lwz r0, 0x264(r1)
    mtlr r0
    addi r1, r1, 0x260
    blr
}

asm void fn_803B8C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_803B8C6C_00001224
    lis r5, lbl_80750034@ha
    li r3, 0x1a0
    addi r5, r5, lbl_80750034@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803B8C6C_0000121C
    mr r4, r30
    bl fn_803B80F4
    lis r3, lbl_8078B5A8@ha
    li r4, 0x0
    addi r3, r3, lbl_8078B5A8@l
    stw r3, 0x0(r31)
    li r0, -0x1
    stw r4, 0x158(r31)
    addi r3, r31, 0x180
    stw r0, 0x15c(r31)
    stb r4, 0x160(r31)
    bl fn_803CE3B8
    li r0, 0x1
    stb r0, 0x148(r31)
lbl_fn_803B8C6C_0000121C:
    mr r3, r31
    b lbl_fn_803B8C6C_00001228
lbl_fn_803B8C6C_00001224:
    li r3, 0x0
lbl_fn_803B8C6C_00001228:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B8D10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800D3FA4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B8D3C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    lbz r0, 0x154(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B8D3C_00001378
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B8D3C_000012AC
    addi r4, r1, 0x10
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_803B8D3C_00001378
lbl_fn_803B8D3C_000012AC:
    mr r3, r30
    bl fn_803B8270
    lwz r3, lbl_8087EF68
    cmpwi r3, 0x0
    beq lbl_fn_803B8D3C_000012D8
    lwz r0, 0x168(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B8D3C_000012D8
    li r0, -0x1
    stw r0, 0x15c(r30)
    b lbl_fn_803B8D3C_00001378
lbl_fn_803B8D3C_000012D8:
    lbz r0, 0x160(r30)
    cmpwi r0, 0x0
    beq lbl_fn_803B8D3C_00001344
    li r0, 0x0
    stb r0, 0x160(r30)
    addi r3, r1, 0x18
    addi r4, r1, 0xc
    li r5, -0x1
    bl fn_803B83A4
    lwz r31, 0xc(r1)
    addi r4, r30, 0x180
    li r0, 0x20
    addi r3, r30, 0x48
    stw r4, 0x158(r30)
    addi r4, r1, 0x18
    stw r0, 0x14c(r30)
    bl strcpy
    mr r3, r30
    li r4, 0x0
    bl fn_803B8200
    lwz r3, lbl_8087EF68
    mr r7, r31
    addi r4, r1, 0x18
    addi r5, r30, 0x180
    addi r8, r1, 0x8
    li r6, 0x20
    bl fn_800A48B8
lbl_fn_803B8D3C_00001344:
    lwz r0, 0x15c(r30)
    cmpwi r0, 0x0
    blt lbl_fn_803B8D3C_00001378
    bne lbl_fn_803B8D3C_00001368
    li r3, 0x1
    li r0, 0x0
    stw r3, lbl_8087DCCC
    stw r0, lbl_8087F434
    b lbl_fn_803B8D3C_00001370
lbl_fn_803B8D3C_00001368:
    li r0, 0x1
    stw r0, lbl_8087DCC8
lbl_fn_803B8D3C_00001370:
    li r0, -0x1
    stw r0, 0x15c(r30)
lbl_fn_803B8D3C_00001378:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803B8E60(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    mr r31, r5
    stw r30, 0x118(r1)
    mr r30, r6
    stw r29, 0x114(r1)
    mr r29, r4
    stw r28, 0x110(r1)
    mr r28, r3
    lwz r7, lbl_8087F0A8
    lwz r0, 0x198(r7)
    cmpwi r0, 0x0
    bne lbl_fn_803B8E60_00001460
    addi r3, r1, 0x10
    addi r4, r1, 0xc
    bl fn_803B83A4
    li r0, 0x1
    stb r0, 0x160(r28)
    addi r3, r28, 0x180
    stw r31, 0x15c(r28)
    bl fn_803CE408
    addi r3, r28, 0x180
    bl fn_803CE448
    cmpwi r30, 0x0
    lwz r30, 0xc(r1)
    beq lbl_fn_803B8E60_0000141C
    lwz r3, lbl_8087F518
    lwz r0, 0x3ef4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B8E60_0000141C
    cmpwi r3, 0x0
    beq lbl_fn_803B8E60_0000141C
    bl fn_8046EED8
lbl_fn_803B8E60_0000141C:
    lis r31, 0x1
    stw r29, 0x158(r28)
    addi r0, r31, 0x3560
    addi r3, r28, 0x48
    stw r0, 0x14c(r28)
    addi r4, r1, 0x10
    bl strcpy
    mr r3, r28
    li r4, 0x0
    bl fn_803B8200
    lwz r3, lbl_8087EF68
    mr r5, r29
    mr r7, r30
    addi r4, r1, 0x10
    addi r6, r31, 0x3560
    addi r8, r1, 0x8
    bl fn_800A48B8
lbl_fn_803B8E60_00001460:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    lwz r28, 0x110(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803B8F50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r8, 0x0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    beq lbl_fn_803B8F50_000014C8
    lwz r3, lbl_8087F518
    lwz r0, 0x3ef4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B8F50_000014C8
    cmpwi r3, 0x0
    beq lbl_fn_803B8F50_000014C8
    bl fn_8046EED8
lbl_fn_803B8F50_000014C8:
    stw r29, 0x158(r27)
    mr r4, r28
    addi r3, r27, 0x48
    stw r30, 0x14c(r27)
    bl strcpy
    mr r3, r27
    li r4, 0x0
    bl fn_803B8200
    lwz r3, lbl_8087EF68
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    addi r8, r1, 0x8
    bl fn_800A48B8
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803B8FE8(void)
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
    beq lbl_fn_803B8FE8_00001558
    beq lbl_fn_803B8FE8_00001548
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_803B8FE8_00001548:
    cmpwi r31, 0x0
    ble lbl_fn_803B8FE8_00001558
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B8FE8_00001558:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B9044(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r27, r3
    mr r28, r4
    lwz r0, lbl_8087F470
    cmpwi r0, 0x0
    bne lbl_fn_803B9044_00001658
    lis r5, lbl_8075009C@ha
    lis r3, 0x2
    addi r5, r5, lbl_8075009C@l
    li r4, 0x1
    mr r6, r5
    subi r3, r3, 0x1d60
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r29, r3
    beq lbl_fn_803B9044_00001654
    mr r4, r27
    bl fn_800D1D3C
    lis r3, lbl_8078B620@ha
    addi r27, r29, 0x50
    addi r3, r3, lbl_8078B620@l
    stw r3, 0x0(r29)
    li r30, 0x0
    stw r28, 0x48(r29)
    mr r3, r27
    stw r30, 0x4c(r29)
    bl fn_80473E74
    lis r31, lbl_8078FBB0@ha
    addi r28, r29, 0x58
    addi r31, r31, lbl_8078FBB0@l
    stw r31, 0x0(r27)
    mr r3, r28
    bl fn_80473E74
    lis r4, fn_8006CA80@ha
    lis r5, fn_80014798@ha
    stw r31, 0x0(r28)
    addi r3, r29, 0x60
    addi r4, r4, fn_8006CA80@l
    addi r5, r5, fn_80014798@l
    li r6, 0x8
    li r7, 0x8
    bl fn_806958E0
    stw r30, 0xc0(r29)
    mr r3, r27
    lwz r4, lbl_80885C98
    sth r30, 0xc4(r29)
    sth r30, 0x104(r29)
    stw r30, 0x148(r29)
    lwz r12, 0x0(r27)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_803B9044_00001654:
    stw r29, lbl_8087F470
lbl_fn_803B9044_00001658:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    lwz r3, lbl_8087F470
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803B9140(void)
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
    beq lbl_fn_803B9140_000016F0
    li r0, 0x0
    lis r4, fn_80014798@ha
    stw r0, lbl_8087F470
    addi r4, r4, fn_80014798@l
    li r5, 0x8
    li r6, 0x8
    addi r3, r3, 0x60
    bl fn_806959D8
    addic. r3, r30, 0x58
    beq lbl_fn_803B9140_000016C4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803B9140_000016C4:
    addic. r3, r30, 0x50
    beq lbl_fn_803B9140_000016D4
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_803B9140_000016D4:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803B9140_000016F0
    mr r3, r30
    bl dtor_80084684
lbl_fn_803B9140_000016F0:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803B91DC(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    stw r29, 0x114(r1)
    mr r29, r3
    lwz r0, 0x4c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803B91DC_00001748
    cmpwi r0, 0x1
    beq lbl_fn_803B91DC_000017A0
    cmpwi r0, 0x2
    beq lbl_fn_803B91DC_000017DC
    b lbl_fn_803B91DC_00001834
lbl_fn_803B91DC_00001748:
    addi r3, r3, 0x50
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803B91DC_00001760
    li r3, 0x0
    b lbl_fn_803B91DC_00001838
lbl_fn_803B91DC_00001760:
    mr r3, r29
    bl fn_803B9324
    addi r3, r1, 0x10
    bl fn_803B84DC
    lwz r0, 0xc0(r29)
    addis r5, r29, 0x1
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x10
    mulli r6, r0, 0x1200
    addi r8, r1, 0xc
    li r7, 0x0
    subi r5, r5, 0xe00
    addi r6, r6, 0x60a0
    bl fn_800A49C4
    li r0, 0x1
    stw r0, 0x4c(r29)
lbl_fn_803B91DC_000017A0:
    lwz r3, lbl_8087EF68
    addi r4, r1, 0x8
    bl fn_800A4228
    cmpwi r3, 0x0
    bne lbl_fn_803B91DC_000017D4
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_803B91DC_000017C8
    li r0, 0x1
    stw r0, 0x148(r29)
lbl_fn_803B91DC_000017C8:
    li r0, 0x2
    stw r0, 0x4c(r29)
    b lbl_fn_803B91DC_000017DC
lbl_fn_803B91DC_000017D4:
    li r3, 0x0
    b lbl_fn_803B91DC_00001838
lbl_fn_803B91DC_000017DC:
    addi r3, r29, 0x58
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803B91DC_000017F4
    li r3, 0x0
    b lbl_fn_803B91DC_00001838
lbl_fn_803B91DC_000017F4:
    addi r31, r29, 0x60
    li r30, 0x0
    b lbl_fn_803B91DC_00001820
lbl_fn_803B91DC_00001800:
    mr r3, r31
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_803B91DC_00001818
    li r3, 0x0
    b lbl_fn_803B91DC_00001838
lbl_fn_803B91DC_00001818:
    addi r31, r31, 0x8
    addi r30, r30, 0x1
lbl_fn_803B91DC_00001820:
    lwz r0, 0xc0(r29)
    cmpw r30, r0
    blt lbl_fn_803B91DC_00001800
    li r0, 0x3
    stw r0, 0x4c(r29)
lbl_fn_803B91DC_00001834:
    li r3, 0x1
lbl_fn_803B91DC_00001838:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_803B9324(void)
{
    nofralloc
    stwu r1, -0xd90(r1)
    mflr r0
    stw r0, 0xd94(r1)
    stmw r23, 0xd6c(r1)
    mr r28, r3
    addi r3, r3, 0x50
    bl fn_8047059C
    srwi r26, r3, 1
    addi r3, r28, 0x50
    bl fn_80470580
    lis r4, lbl_8078B608@ha
    li r0, 0x0
    addi r4, r4, lbl_8078B608@l
    stw r4, 0x108(r1)
    mr r25, r3
    addi r24, r1, 0x108
    stw r0, 0x10c(r1)
    addi r3, r1, 0x118
    li r4, 0x0
    li r5, 0x800
    stw r0, 0x110(r1)
    stw r0, 0x114(r1)
    stw r0, 0xd58(r1)
    bl memset
    addi r3, r1, 0xd18
    li r4, 0x0
    li r5, 0x40
    bl memset
    cmpwi r26, 0x0
    mr r5, r26
    beq lbl_fn_803B9324_000018D4
    subi r5, r26, 0x1
lbl_fn_803B9324_000018D4:
    cmpwi r26, 0x0
    mr r3, r24
    beq lbl_fn_803B9324_000018E8
    addi r4, r25, 0x2
    b lbl_fn_803B9324_000018EC
lbl_fn_803B9324_000018E8:
    mr r4, r25
lbl_fn_803B9324_000018EC:
    lwz r12, 0x0(r3)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_8078B5E8@ha
    mr r3, r24
    addi r4, r4, lbl_8078B5E8@l
    stw r4, 0x108(r1)
    la r4, lbl_8087DD98
    bl fn_8005BFAC
    lis r29, lbl_8078B658@ha
    li r25, 0x2
    addi r30, r29, lbl_8078B658@l
    li r24, 0x3
    li r31, 0x1
    li r27, 0x0
    li r26, 0x10
lbl_fn_803B9324_00001930:
    addi r3, r1, 0x108
    bl fn_8005BD10
    lhz r0, 0x0(r3)
    mr r23, r3
    cmplwi r0, 0x3b
    beq lbl_fn_803B9324_00001B30
    cmpwi r0, 0x0
    beq lbl_fn_803B9324_00001B30
    addi r4, r29, lbl_8078B658@l
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001994
    addi r3, r1, 0x108
    bl fn_8005BD10
    addi r0, r28, 0xc4
    mr r23, r3
    cmplw r3, r0
    beq lbl_fn_803B9324_00001B30
    bl fn_80686A48
    mr r5, r3
    mr r4, r23
    addi r3, r28, 0xc4
    addi r5, r5, 0x1
    bl fn_806846C4
    b lbl_fn_803B9324_00001B30
lbl_fn_803B9324_00001994:
    mr r3, r23
    addi r4, r30, 0xc
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_000019DC
    addi r3, r1, 0x108
    bl fn_8005BD10
    addi r0, r28, 0x104
    mr r23, r3
    cmplw r3, r0
    beq lbl_fn_803B9324_00001B30
    bl fn_80686A48
    mr r5, r3
    mr r4, r23
    addi r3, r28, 0x104
    addi r5, r5, 0x1
    bl fn_806846C4
    b lbl_fn_803B9324_00001B30
lbl_fn_803B9324_000019DC:
    mr r3, r23
    addi r4, r30, 0x1c
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001A2C
    lwz r23, lbl_8087EEC8
    addi r3, r1, 0x108
    bl fn_8005BD10
    mr r5, r3
    mr r3, r23
    addi r4, r1, 0x8
    li r6, 0x100
    bl fn_8006F420
    lwz r12, 0x58(r28)
    addi r3, r28, 0x58
    addi r4, r1, 0x8
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    b lbl_fn_803B9324_00001B30
lbl_fn_803B9324_00001A2C:
    mr r3, r23
    addi r4, r30, 0x2a
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001AF8
    lwz r23, lbl_8087EEC8
    addi r3, r1, 0x108
    bl fn_8005BD10
    mr r5, r3
    mr r3, r23
    addi r4, r1, 0x8
    li r6, 0x100
    bl fn_8006F420
    lwz r0, 0xc0(r28)
    addi r4, r1, 0x8
    slwi r0, r0, 3
    add r3, r28, r0
    lwzu r12, 0x60(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x108
    bl fn_8005BD10
    mr r23, r3
    addi r4, r30, 0x34
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001AB0
    lwz r0, 0xc0(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    stw r31, 0xa0(r3)
    b lbl_fn_803B9324_00001AE8
lbl_fn_803B9324_00001AB0:
    mr r3, r23
    addi r4, r30, 0x3e
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001AD8
    lwz r0, 0xc0(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    stw r24, 0xa0(r3)
    b lbl_fn_803B9324_00001AE8
lbl_fn_803B9324_00001AD8:
    lwz r0, 0xc0(r28)
    slwi r0, r0, 2
    add r3, r28, r0
    stw r25, 0xa0(r3)
lbl_fn_803B9324_00001AE8:
    lwz r3, 0xc0(r28)
    addi r0, r3, 0x1
    stw r0, 0xc0(r28)
    b lbl_fn_803B9324_00001B30
lbl_fn_803B9324_00001AF8:
    mr r3, r23
    addi r4, r30, 0x48
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001B30
    addi r3, r1, 0x108
    bl fn_8005BD10
    addi r4, r30, 0x5c
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001B2C
    stw r26, 0x144(r28)
    b lbl_fn_803B9324_00001B30
lbl_fn_803B9324_00001B2C:
    stw r27, 0x144(r28)
lbl_fn_803B9324_00001B30:
    addi r3, r1, 0x108
    bl fn_8005BEF8
    cmpwi r3, 0x0
    bne lbl_fn_803B9324_00001930
    lmw r23, 0xd6c(r1)
    lwz r0, 0xd94(r1)
    mtlr r0
    addi r1, r1, 0xd90
    blr
}
