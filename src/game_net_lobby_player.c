#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_24(void);
extern void _restgpr_26(void);
extern void _savegpr_24(void);
extern void _savegpr_26(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800458D4(void);
extern void fn_800458F4(void);
extern void fn_8006B174(void);
extern void fn_8006B2D8(void);
extern void fn_80070C98(void);
extern void fn_80084320(void);
extern void fn_800874C8(void);
extern void fn_8008771C(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_8008B130(void);
extern void fn_8009FE24(void);
extern void fn_800B1BAC(void);
extern void fn_800B1C1C(void);
extern void fn_800B2180(void);
extern void fn_800B23C8(void);
extern void fn_800B28F8(void);
extern void fn_800B2D2C(void);
extern void fn_800BDB40(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5B58(void);
extern void fn_800DC6B4(void);
extern void fn_8021771C(void);
extern void fn_8037DD00(void);
extern void fn_803EE5AC(void);
extern void fn_80470528(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F18(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_804786F8(void);
extern void fn_80491418(void);
extern void fn_80491440(void);
extern void fn_8049982C(void);
extern void fn_80499CCC(void);
extern void fn_80499D60(void);
extern void fn_8049B780(void);
extern void fn_8049B7CC(void);
extern void fn_8049ED90(void);
extern void fn_804A04AC(void);
extern void fn_804A0F80(void);
extern void fn_805B6C60(void);
extern void fn_80616250(void);
extern void fn_806163C0(void);
extern void fn_806163E0(void);
extern void fn_8067E23C(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80756EC8[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_80790000[];
extern u8 lbl_80790740[];

/* Small data declarations */
extern u32 lbl_8087E0D8;
extern u32 lbl_8087E0DC;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F558;
extern u32 lbl_8087FA20;
extern u32 lbl_80887160;
extern u32 lbl_80887164;
extern u32 lbl_80887168;
extern u32 lbl_8088716C;
extern u32 lbl_80887170;

/* Function declarations */
void fn_8049D1A4(void);
void fn_8049D1B4(void);
void fn_8049D1BC(void);
void fn_8049D22C(void);
void fn_8049D234(void);
void fn_8049D24C(void);
void fn_8049D264(void);
void fn_8049D2E4(void);
void fn_8049D52C(void);
void fn_8049D5DC(void);
void fn_8049D68C(void);
void fn_8049D704(void);
void fn_8049D7E4(void);
void fn_8049D974(void);
void fn_8049DDD8(void);
void fn_8049DEE4(void);
void fn_8049E480(void);

asm void fn_8049D1A4(void)
{
    nofralloc
    addi r3, r3, 0x54
    addi r4, r4, 0x54
    addi r5, r5, 0x54
    b fn_800B28F8
}

asm void fn_8049D1B4(void)
{
    nofralloc
    addi r3, r3, 0x54
    b fn_800B23C8
}

asm void fn_8049D1BC(void)
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
    beq lbl_fn_8049D1BC_0000006C
    li r4, -0x1
    addi r3, r3, 0x54
    bl fn_800B1BAC
    cmpwi r30, 0x0
    beq lbl_fn_8049D1BC_0000005C
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
lbl_fn_8049D1BC_0000005C:
    cmpwi r31, 0x0
    ble lbl_fn_8049D1BC_0000006C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8049D1BC_0000006C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049D22C(void)
{
    nofralloc
    li r3, 0x1
    blr
}

asm void fn_8049D234(void)
{
    nofralloc
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x54
    b fn_800B2D2C
    blr
}

asm void fn_8049D24C(void)
{
    nofralloc
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beqlr
    addi r3, r3, 0x54
    b fn_800B1C1C
    blr
}

asm void fn_8049D264(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r5, 0x0(r4)
    lis r4, lbl_80756EC8@ha
    addi r3, r4, lbl_80756EC8@l
    lwz r31, 0x0(r5)
    bl fn_800DC6B4
    lwz r30, 0x70(r29)
    mr r29, r3
    b lbl_fn_8049D264_0000011C
lbl_fn_8049D264_000000FC:
    lwz r12, 0x0(r30)
    mr r3, r30
    mr r4, r29
    mr r5, r31
    lwz r12, 0x2c(r12)
    mtctr r12
    bctrl
    lwz r30, 0x4c(r30)
lbl_fn_8049D264_0000011C:
    cmpwi r30, 0x0
    bne lbl_fn_8049D264_000000FC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049D2E4(void)
{
    nofralloc
    cmpwi r3, 0x1
    bne lbl_fn_8049D2E4_00000150
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000150:
    cmpwi r3, 0x2
    bne lbl_fn_8049D2E4_0000036C
    cmpwi r4, 0x4
    bne lbl_fn_8049D2E4_0000017C
    cmpwi r5, 0x1
    li r3, 0x0
    beq lbl_fn_8049D2E4_00000174
    cmpwi r5, 0x3
    bnelr
lbl_fn_8049D2E4_00000174:
    li r3, 0x1
    blr
lbl_fn_8049D2E4_0000017C:
    cmpwi r4, 0x5
    bne lbl_fn_8049D2E4_000001A0
    cmpwi r5, 0x1
    li r3, 0x0
    beq lbl_fn_8049D2E4_00000198
    cmpwi r5, 0x3
    bnelr
lbl_fn_8049D2E4_00000198:
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000001A0:
    cmpwi r4, 0x2
    bne lbl_fn_8049D2E4_000001B8
    cmpwi r5, 0x1
    bne lbl_fn_8049D2E4_000001B8
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000001B8:
    cmpwi r4, 0x10
    bne lbl_fn_8049D2E4_000001D0
    cmpwi r5, 0x2
    bne lbl_fn_8049D2E4_000001D0
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000001D0:
    cmpwi r4, 0x7
    bne lbl_fn_8049D2E4_000001E8
    cmpwi r5, 0x1
    bne lbl_fn_8049D2E4_000001E8
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000001E8:
    cmpwi r4, 0x12
    bne lbl_fn_8049D2E4_00000200
    cmpwi r5, 0x1
    bne lbl_fn_8049D2E4_00000200
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000200:
    cmpwi r4, 0xc
    bne lbl_fn_8049D2E4_00000210
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000210:
    cmpwi r4, 0x13
    bne lbl_fn_8049D2E4_00000220
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000220:
    cmpwi r4, 0x18
    bne lbl_fn_8049D2E4_00000244
    cmpwi r5, 0x2
    li r3, 0x0
    beq lbl_fn_8049D2E4_0000023C
    cmpwi r5, 0x3
    bnelr
lbl_fn_8049D2E4_0000023C:
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000244:
    cmpwi r4, 0x19
    bne lbl_fn_8049D2E4_00000268
    cmpwi r5, 0x1
    li r3, 0x0
    beq lbl_fn_8049D2E4_00000260
    cmpwi r5, 0x2
    bnelr
lbl_fn_8049D2E4_00000260:
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000268:
    cmpwi r4, 0x23
    bne lbl_fn_8049D2E4_00000280
    cmpwi r5, 0x3
    bne lbl_fn_8049D2E4_00000280
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000280:
    cmpwi r4, 0x24
    bne lbl_fn_8049D2E4_00000290
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000290:
    cmpwi r4, 0x27
    bne lbl_fn_8049D2E4_000002A8
    cmpwi r5, 0x3
    bne lbl_fn_8049D2E4_000002A8
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000002A8:
    cmpwi r4, 0xa
    bne lbl_fn_8049D2E4_000002C0
    cmpwi r5, 0x1
    bne lbl_fn_8049D2E4_000002C0
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000002C0:
    cmpwi r4, 0xe
    bne lbl_fn_8049D2E4_000002F0
    subi r4, r5, 0x2
    li r3, 0x0
    cmplwi r4, 0x4
    bgtlr
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x13
    beqlr
    li r3, 0x1
    blr
lbl_fn_8049D2E4_000002F0:
    cmpwi r4, 0x29
    bne lbl_fn_8049D2E4_00000320
    subi r4, r5, 0x2
    li r3, 0x0
    cmplwi r4, 0x6
    bgtlr
    li r0, 0x1
    slw r0, r0, r4
    andi. r0, r0, 0x53
    beqlr
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000320:
    cmpwi r4, 0x2a
    bne lbl_fn_8049D2E4_00000330
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000330:
    cmpwi r4, 0x28
    bne lbl_fn_8049D2E4_00000354
    cmpwi r5, 0x5
    li r3, 0x0
    beq lbl_fn_8049D2E4_0000034C
    cmpwi r5, 0x8
    bnelr
lbl_fn_8049D2E4_0000034C:
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000354:
    cmpwi r4, 0x36
    bne lbl_fn_8049D2E4_0000036C
    subi r0, r5, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
lbl_fn_8049D2E4_0000036C:
    subi r0, r3, 0x3
    cmplwi r0, 0x1
    bgt lbl_fn_8049D2E4_00000380
    li r3, 0x1
    blr
lbl_fn_8049D2E4_00000380:
    li r3, 0x0
    blr
}

asm void fn_8049D52C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_8049D52C_00000404
    cmpwi r4, 0x0
    beq lbl_fn_8049D52C_000003BC
    cmpwi r4, 0x1
    beq lbl_fn_8049D52C_000003D4
    cmpwi r4, 0x2
    beq lbl_fn_8049D52C_000003EC
    b lbl_fn_8049D52C_0000041C
lbl_fn_8049D52C_000003BC:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x6
    crclr 6
    bl sprintf
    b lbl_fn_8049D52C_00000424
lbl_fn_8049D52C_000003D4:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x13
    crclr 6
    bl sprintf
    b lbl_fn_8049D52C_00000424
lbl_fn_8049D52C_000003EC:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x20
    crclr 6
    bl sprintf
    b lbl_fn_8049D52C_00000424
lbl_fn_8049D52C_00000404:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x2d
    crclr 6
    bl sprintf
    b lbl_fn_8049D52C_00000424
lbl_fn_8049D52C_0000041C:
    li r3, 0x0
    b lbl_fn_8049D52C_00000428
lbl_fn_8049D52C_00000424:
    li r3, 0x1
lbl_fn_8049D52C_00000428:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049D5DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_8049D5DC_000004B4
    cmpwi r4, 0x0
    beq lbl_fn_8049D5DC_0000046C
    cmpwi r4, 0x1
    beq lbl_fn_8049D5DC_00000484
    cmpwi r4, 0x2
    beq lbl_fn_8049D5DC_0000049C
    b lbl_fn_8049D5DC_000004CC
lbl_fn_8049D5DC_0000046C:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x3a
    crclr 6
    bl sprintf
    b lbl_fn_8049D5DC_000004D4
lbl_fn_8049D5DC_00000484:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x42
    crclr 6
    bl sprintf
    b lbl_fn_8049D5DC_000004D4
lbl_fn_8049D5DC_0000049C:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x4a
    crclr 6
    bl sprintf
    b lbl_fn_8049D5DC_000004D4
lbl_fn_8049D5DC_000004B4:
    lis r4, lbl_80756EC8@ha
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x52
    crclr 6
    bl sprintf
    b lbl_fn_8049D5DC_000004D4
lbl_fn_8049D5DC_000004CC:
    li r3, 0x0
    b lbl_fn_8049D5DC_000004D8
lbl_fn_8049D5DC_000004D4:
    li r3, 0x1
lbl_fn_8049D5DC_000004D8:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049D68C(void)
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
    beq lbl_fn_8049D68C_00000544
    lis r5, lbl_80756EC8@ha
    li r3, 0x120
    addi r5, r5, lbl_80756EC8@l
    li r4, 0xc
    addi r5, r5, 0x5a
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049D68C_00000548
    mr r4, r30
    mr r5, r31
    bl fn_8049D7E4
    b lbl_fn_8049D68C_00000548
lbl_fn_8049D68C_00000544:
    li r3, 0x0
lbl_fn_8049D68C_00000548:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049D704(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_8049D704_0000061C
    cmpwi r4, 0x1
    bne lbl_fn_8049D704_000005DC
    lis r5, lbl_80756EC8@ha
    li r3, 0x268
    addi r5, r5, lbl_80756EC8@l
    li r4, 0xc
    addi r5, r5, 0x5a
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049D704_00000620
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_805B6C60
    b lbl_fn_8049D704_00000620
lbl_fn_8049D704_000005DC:
    lis r5, lbl_80756EC8@ha
    li r3, 0x120
    addi r5, r5, lbl_80756EC8@l
    li r4, 0xc
    addi r5, r5, 0x5a
    li r7, 0x0
    mr r6, r5
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8049D704_00000620
    mr r4, r28
    mr r5, r29
    mr r6, r30
    mr r7, r31
    bl fn_8049D974
    b lbl_fn_8049D704_00000620
lbl_fn_8049D704_0000061C:
    li r3, 0x0
lbl_fn_8049D704_00000620:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8049D7E4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_26
    mr r26, r3
    mr r27, r5
    bl fn_800D1D3C
    lis r3, lbl_80790740@ha
    li r30, 0x0
    addi r3, r3, lbl_80790740@l
    addi r29, r26, 0x58
    stw r3, 0x0(r26)
    mr r3, r29
    stw r30, 0x48(r26)
    stw r30, 0x4c(r26)
    stw r30, 0x50(r26)
    stw r30, 0x54(r26)
    bl fn_80473E74
    lis r31, lbl_8078FBB0@ha
    addi r28, r26, 0x60
    addi r31, r31, lbl_8078FBB0@l
    stw r31, 0x0(r29)
    mr r3, r28
    bl fn_80473E74
    addi r29, r26, 0x68
    stw r31, 0x0(r28)
    mr r3, r29
    bl fn_80473E74
    lfs f3, lbl_80887160
    lis r3, lbl_80790000@ha
    lfs f0, lbl_80887164
    addi r3, r3, lbl_80790000@l
    stw r3, 0x0(r29)
    addi r3, r26, 0xd0
    stw r30, 0x70(r26)
    stw r30, 0x74(r26)
    stfs f3, 0x78(r26)
    stfs f3, 0x7c(r26)
    stfs f3, 0x80(r26)
    stfs f0, 0x84(r26)
    stw r30, 0xa0(r26)
    stw r30, 0xc4(r26)
    stw r30, 0xc8(r26)
    stw r30, 0xcc(r26)
    bl fn_800458D4
    lfs f3, lbl_8088716C
    li r0, 0x1
    lfs f0, lbl_80887170
    addi r3, r1, 0x14
    fmr f2, f3
    stfs f3, 0x14(r1)
    lfs f5, lbl_80887160
    addi r4, r1, 0x8
    stfs f3, 0x18(r1)
    lfs f4, lbl_80887168
    stfs f2, 0x90(r26)
    fmr f2, f0
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x88(r26), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stw r30, 0xe0(r26)
    stw r30, 0xe4(r26)
    stw r30, 0xe8(r26)
    stw r30, 0xec(r26)
    stfs f5, 0xf0(r26)
    stw r30, 0xf4(r26)
    stw r30, 0xf8(r26)
    stw r30, 0xfc(r26)
    stw r30, 0x100(r26)
    stw r30, 0x104(r26)
    stw r30, 0x108(r26)
    stw r30, 0x10c(r26)
    stfs f5, 0x110(r26)
    stfs f4, 0x114(r26)
    stw r0, 0x118(r26)
    psq_st f1, 0x94(r26), 0, 0
    stfs f2, 0x9c(r26)
    lwz r3, lbl_8087F558
    stfs f3, 0x1c(r1)
    cmpwi r3, 0x0
    stfs f0, 0x10(r1)
    beq lbl_fn_8049D7E4_0000079C
    mr r4, r26
    bl fn_80491418
lbl_fn_8049D7E4_0000079C:
    lwz r12, 0x58(r26)
    addi r3, r26, 0x58
    mr r4, r27
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    addi r11, r1, 0x40
    mr r3, r26
    bl _restgpr_26
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8049D974(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x340
    bl _savegpr_24
    mr r28, r3
    mr r29, r5
    mr r30, r6
    mr r31, r7
    bl fn_800D1D3C
    lis r3, lbl_80790740@ha
    li r26, 0x0
    addi r3, r3, lbl_80790740@l
    addi r25, r28, 0x58
    stw r3, 0x0(r28)
    mr r3, r25
    stw r29, 0x48(r28)
    stw r30, 0x4c(r28)
    stw r31, 0x50(r28)
    stw r26, 0x54(r28)
    bl fn_80473E74
    lis r27, lbl_8078FBB0@ha
    addi r24, r28, 0x60
    addi r27, r27, lbl_8078FBB0@l
    stw r27, 0x0(r25)
    mr r3, r24
    bl fn_80473E74
    addi r25, r28, 0x68
    stw r27, 0x0(r24)
    mr r3, r25
    bl fn_80473E74
    lfs f3, lbl_80887160
    lis r3, lbl_80790000@ha
    lfs f0, lbl_80887164
    addi r3, r3, lbl_80790000@l
    stw r3, 0x0(r25)
    addi r3, r28, 0xd0
    stw r26, 0x70(r28)
    stw r26, 0x74(r28)
    stfs f3, 0x78(r28)
    stfs f3, 0x7c(r28)
    stfs f3, 0x80(r28)
    stfs f0, 0x84(r28)
    stw r26, 0xa0(r28)
    stw r26, 0xc4(r28)
    stw r26, 0xc8(r28)
    stw r26, 0xcc(r28)
    bl fn_800458D4
    lfs f3, lbl_8088716C
    li r0, 0x1
    lfs f0, lbl_80887170
    addi r3, r1, 0x14
    fmr f2, f3
    stfs f3, 0x14(r1)
    lfs f5, lbl_80887160
    addi r4, r1, 0x8
    stfs f3, 0x18(r1)
    lfs f4, lbl_80887168
    stfs f2, 0x90(r28)
    fmr f2, f0
    psq_l f1, 0x0(r3), 0, 0
    stfs f0, 0x8(r1)
    stfs f0, 0xc(r1)
    psq_st f1, 0x88(r28), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stw r26, 0xe0(r28)
    stw r26, 0xe4(r28)
    stw r26, 0xe8(r28)
    stw r26, 0xec(r28)
    stfs f5, 0xf0(r28)
    stw r26, 0xf4(r28)
    stw r26, 0xf8(r28)
    stw r26, 0xfc(r28)
    stw r26, 0x100(r28)
    stw r26, 0x104(r28)
    stw r26, 0x108(r28)
    stw r26, 0x10c(r28)
    stfs f5, 0x110(r28)
    stfs f4, 0x114(r28)
    stw r0, 0x118(r28)
    psq_st f1, 0x94(r28), 0, 0
    stfs f2, 0x9c(r28)
    lwz r3, lbl_8087F558
    stfs f3, 0x1c(r1)
    cmpwi r3, 0x0
    stfs f0, 0x10(r1)
    beq lbl_fn_8049D974_00000934
    mr r4, r28
    bl fn_80491418
lbl_fn_8049D974_00000934:
    subi r0, r29, 0x3
    cmplwi r0, 0x1
    ble lbl_fn_8049D974_000009C8
    cmpwi r29, 0x0
    beq lbl_fn_8049D974_0000095C
    cmpwi r29, 0x1
    beq lbl_fn_8049D974_00000980
    cmpwi r29, 0x2
    beq lbl_fn_8049D974_000009A4
    b lbl_fn_8049D974_000009EC
lbl_fn_8049D974_0000095C:
    lis r4, lbl_80756EC8@ha
    mr r5, r30
    addi r4, r4, lbl_80756EC8@l
    mr r6, r31
    addi r3, r1, 0x20
    addi r4, r4, 0x6
    crclr 6
    bl sprintf
    b lbl_fn_8049D974_000009F4
lbl_fn_8049D974_00000980:
    lis r4, lbl_80756EC8@ha
    mr r5, r30
    addi r4, r4, lbl_80756EC8@l
    mr r6, r31
    addi r3, r1, 0x20
    addi r4, r4, 0x13
    crclr 6
    bl sprintf
    b lbl_fn_8049D974_000009F4
lbl_fn_8049D974_000009A4:
    lis r4, lbl_80756EC8@ha
    mr r5, r30
    addi r4, r4, lbl_80756EC8@l
    mr r6, r31
    addi r3, r1, 0x20
    addi r4, r4, 0x20
    crclr 6
    bl sprintf
    b lbl_fn_8049D974_000009F4
lbl_fn_8049D974_000009C8:
    lis r4, lbl_80756EC8@ha
    mr r5, r30
    addi r4, r4, lbl_80756EC8@l
    mr r6, r31
    addi r3, r1, 0x20
    addi r4, r4, 0x2d
    crclr 6
    bl sprintf
    b lbl_fn_8049D974_000009F4
lbl_fn_8049D974_000009EC:
    li r0, 0x0
    b lbl_fn_8049D974_000009F8
lbl_fn_8049D974_000009F4:
    li r0, 0x1
lbl_fn_8049D974_000009F8:
    cmpwi r0, 0x0
    beq lbl_fn_8049D974_00000A4C
    cmpwi r29, 0x1
    bne lbl_fn_8049D974_00000A28
    lis r4, lbl_80756EC8@ha
    addi r3, r1, 0x220
    addi r4, r4, lbl_80756EC8@l
    addi r5, r1, 0x20
    addi r4, r4, 0x5b
    crclr 6
    bl sprintf
    b lbl_fn_8049D974_00000A44
lbl_fn_8049D974_00000A28:
    lis r4, lbl_80756EC8@ha
    addi r3, r1, 0x220
    addi r4, r4, lbl_80756EC8@l
    addi r5, r1, 0x20
    addi r4, r4, 0x70
    crclr 6
    bl sprintf
lbl_fn_8049D974_00000A44:
    li r0, 0x1
    b lbl_fn_8049D974_00000A50
lbl_fn_8049D974_00000A4C:
    li r0, 0x0
lbl_fn_8049D974_00000A50:
    cmpwi r0, 0x0
    beq lbl_fn_8049D974_00000A70
    lwz r12, 0x58(r28)
    addi r3, r28, 0x58
    addi r4, r1, 0x220
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8049D974_00000A70:
    mr r3, r29
    mr r4, r30
    mr r5, r31
    bl fn_8021771C
    cmpwi r3, 0x0
    stw r3, 0x54(r28)
    beq lbl_fn_8049D974_00000BE4
    lwz r5, 0x5c(r3)
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_8049D974_00000ACC
    lis r4, lbl_80756EC8@ha
    addi r3, r1, 0x120
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x85
    crclr 6
    bl sprintf
    lwz r12, 0x60(r28)
    addi r3, r28, 0x60
    addi r4, r1, 0x120
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8049D974_00000ACC:
    lwz r3, 0x54(r28)
    lwz r5, 0x60(r3)
    lbz r0, 0x0(r5)
    extsb. r0, r0
    beq lbl_fn_8049D974_00000B10
    lis r4, lbl_80756EC8@ha
    addi r3, r1, 0x120
    addi r4, r4, lbl_80756EC8@l
    addi r4, r4, 0x9d
    crclr 6
    bl sprintf
    lwz r12, 0x68(r28)
    addi r3, r28, 0x68
    addi r4, r1, 0x120
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_8049D974_00000B10:
    lwz r3, lbl_8087EEE0
    lwz r6, 0x54(r28)
    lwz r4, 0x3c(r3)
    lwz r6, 0x58(r6)
    lwz r5, 0x40(r3)
    srwi r0, r4, 31
    add r3, r0, r4
    cmpwi r6, 0x0
    srwi r0, r5, 31
    srawi r26, r3, 1
    add r0, r0, r5
    srawi r27, r0, 1
    ble lbl_fn_8049D974_00000B4C
    mullw r26, r26, r6
    mullw r27, r27, r6
lbl_fn_8049D974_00000B4C:
    cmpwi r29, 0x1
    bne lbl_fn_8049D974_00000B64
    srawi r0, r4, 2
    addze r26, r0
    srawi r0, r5, 2
    addze r27, r0
lbl_fn_8049D974_00000B64:
    lwz r3, lbl_8087EFB4
    lwz r3, 0x10(r3)
    addi r24, r3, 0x5c
    mr r3, r24
    bl fn_806163C0
    clrlwi r25, r3, 16
    mr r3, r24
    bl fn_806163E0
    cmpw r25, r26
    clrlwi r0, r3, 16
    bne lbl_fn_8049D974_00000B98
    cmpw r0, r27
    beq lbl_fn_8049D974_00000BE4
lbl_fn_8049D974_00000B98:
    lis r7, lbl_80756EC8@ha
    mr r3, r24
    addi r7, r7, lbl_80756EC8@l
    mr r4, r26
    addi r8, r7, 0xb5
    mr r5, r27
    li r6, 0x4
    li r7, 0x0
    bl fn_800D5B58
    lfs f1, lbl_80887160
    mr r3, r24
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
lbl_fn_8049D974_00000BE4:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_8049D974_00000C00
    lwz r4, 0x48(r28)
    lwz r5, 0x4c(r28)
    lwz r6, 0x50(r28)
    bl fn_803EE5AC
lbl_fn_8049D974_00000C00:
    cmpwi r30, 0x30
    beq lbl_fn_8049D974_00000C10
    cmpwi r30, 0x36
    bne lbl_fn_8049D974_00000C18
lbl_fn_8049D974_00000C10:
    li r0, 0x1
    stw r0, 0x104(r28)
lbl_fn_8049D974_00000C18:
    addi r11, r1, 0x340
    mr r3, r28
    bl _restgpr_24
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_8049DDD8(void)
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
    beq lbl_fn_8049DDD8_00000D24
    lis r5, lbl_80790740@ha
    lis r4, 0xdeae
    addi r5, r5, lbl_80790740@l
    stw r5, 0x0(r3)
    subi r0, r4, 0x4111
    stw r0, 0x74(r3)
    lwz r3, lbl_8087F558
    cmpwi r3, 0x0
    beq lbl_fn_8049DDD8_00000C84
    mr r4, r30
    bl fn_80491440
lbl_fn_8049DDD8_00000C84:
    lwz r3, lbl_8087EFB4
    li r4, 0x0
    bl fn_800BDB40
    bl fn_8009FE24
    addi r3, r30, 0x60
    bl fn_80473F88
    addic. r3, r30, 0xfc
    beq lbl_fn_8049DDD8_00000CA8
    bl fn_80470528
lbl_fn_8049DDD8_00000CA8:
    addi r3, r30, 0xd0
    li r4, -0x1
    bl fn_800458F4
    addic. r0, r30, 0xc8
    beq lbl_fn_8049DDD8_00000CD8
    lwz r4, 0xc8(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8049DDD8_00000CD8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8049DDD8_00000CD8
    bl fn_800897D8
lbl_fn_8049DDD8_00000CD8:
    addic. r3, r30, 0x68
    beq lbl_fn_8049DDD8_00000CE8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8049DDD8_00000CE8:
    addic. r3, r30, 0x60
    beq lbl_fn_8049DDD8_00000CF8
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8049DDD8_00000CF8:
    addic. r3, r30, 0x58
    beq lbl_fn_8049DDD8_00000D08
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8049DDD8_00000D08:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8049DDD8_00000D24
    mr r3, r30
    bl dtor_80084684
lbl_fn_8049DDD8_00000D24:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8049DEE4(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    addi r11, r1, 0x80
    stfd f31, 0x80(r1)
    psq_st f31, 0x88(r1), 0, 0
    bl _savegpr_24
    lwz r0, 0x74(r3)
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_fn_8049DEE4_00000F90
    addi r3, r3, 0x58
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_00000D84
    li r3, 0x0
    b lbl_fn_8049DEE4_000012BC
lbl_fn_8049DEE4_00000D84:
    addi r3, r27, 0x58
    bl fn_80473F18
    li r0, 0x0
    stw r0, 0x1c(r1)
    mr r26, r3
    addi r28, r1, 0x1c
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r29, r3
    mr r3, r28
    mr r4, r29
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r28
    stb r0, 0x8(r1)
    mr r6, r26
    add r7, r26, r29
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r28
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_8049DEE4_00000E0C
    addi r4, r1, 0x11
    b lbl_fn_8049DEE4_00000E10
lbl_fn_8049DEE4_00000E0C:
    lwz r4, 0x18(r1)
lbl_fn_8049DEE4_00000E10:
    lwz r0, 0xc8(r27)
    cmpwi r0, 0x0
    bne lbl_fn_8049DEE4_00000E38
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_00000E38
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0xc8(r27)
    b lbl_fn_8049DEE4_00000E3C
lbl_fn_8049DEE4_00000E38:
    li r3, 0x0
lbl_fn_8049DEE4_00000E3C:
    stw r3, 0xcc(r27)
    lwz r0, 0x10(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049DEE4_00000E64
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_8049DEE4_00000E64:
    lwz r0, 0x1c(r1)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049DEE4_00000E88
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_8049DEE4_00000E88:
    lis r26, lbl_80756EC8@ha
    lwz r3, 0xcc(r27)
    addi r26, r26, lbl_80756EC8@l
    addi r5, r27, 0x104
    addi r4, r26, 0xc7
    li r6, 0x0
    li r7, 0x3
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lis r6, fn_8049D264@ha
    lwz r3, 0xcc(r27)
    mr r7, r27
    addi r4, r26, 0xd2
    addi r5, r27, 0x118
    addi r6, r6, fn_8049D264@l
    bl fn_80087994
    lwz r3, 0xcc(r27)
    addi r4, r26, 0xd9
    bl fn_8008937C
    mr r25, r3
    addi r4, r26, 0xe4
    addi r5, r27, 0x108
    li r6, 0x0
    li r7, 0x8
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    lfs f1, lbl_80887160
    mr r3, r25
    lfs f2, lbl_80887164
    addi r4, r26, 0xea
    lfs f3, lbl_80887168
    addi r5, r27, 0x110
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    lfs f1, lbl_80887160
    mr r3, r25
    lfs f2, lbl_80887164
    addi r4, r26, 0xf0
    lfs f3, lbl_80887168
    addi r5, r27, 0x114
    li r6, 0x0
    li r7, 0x0
    bl fn_8008771C
    mr r3, r27
    bl fn_8049ED90
    lwz r3, 0xf4(r27)
    li r0, 0x1
    stw r0, 0x74(r27)
    cmpwi r3, 0x0
    bne lbl_fn_8049DEE4_00000F88
    lwz r3, lbl_8087EFA8
    lfs f0, 0x78(r27)
    stfs f0, 0x3c(r3)
    lfs f0, 0x7c(r27)
    stfs f0, 0x40(r3)
    lfs f0, 0x80(r27)
    stfs f0, 0x44(r3)
    lfs f0, 0x84(r27)
    stfs f0, 0x48(r3)
lbl_fn_8049DEE4_00000F88:
    addi r3, r27, 0x58
    bl fn_80473F88
lbl_fn_8049DEE4_00000F90:
    mr r3, r27
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_000012B8
    addi r3, r27, 0x60
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8049DEE4_000012B8
    addi r3, r27, 0x68
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8049DEE4_000012B8
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_8049DEE4_00001044
    lwz r0, lbl_8087FA20
    cmpwi r0, 0x0
    beq lbl_fn_8049DEE4_00000FE0
    cmplw r0, r27
    bne lbl_fn_8049DEE4_00001044
lbl_fn_8049DEE4_00000FE0:
    lwz r0, 0x48(r27)
    cmpwi r0, 0x5
    beq lbl_fn_8049DEE4_00001044
    cmpwi r0, 0x6
    beq lbl_fn_8049DEE4_00001044
    lwz r3, lbl_8087F430
    addi r3, r3, 0x6c
    bl fn_8037DD00
    mr r3, r27
    li r4, 0x0
    li r5, 0x0
    li r6, -0x1
    li r7, 0x0
    bl fn_804A04AC
    lwz r3, 0x54(r27)
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_0000102C
    lfs f31, 0x64(r3)
    b lbl_fn_8049DEE4_00001030
lbl_fn_8049DEE4_0000102C:
    lfs f31, lbl_80887164
lbl_fn_8049DEE4_00001030:
    addi r3, r27, 0x68
    bl fn_804786F8
    lwz r4, lbl_8087F430
    stw r3, 0x960(r4)
    stfs f31, 0x968(r4)
lbl_fn_8049DEE4_00001044:
    lwz r25, 0x70(r27)
    b lbl_fn_8049DEE4_0000105C
lbl_fn_8049DEE4_0000104C:
    mr r3, r25
    li r4, 0x0
    bl fn_800D246C
    lwz r25, 0x4c(r25)
lbl_fn_8049DEE4_0000105C:
    cmpwi r25, 0x0
    bne lbl_fn_8049DEE4_0000104C
    lwz r25, 0x70(r27)
    addi r28, r1, 0x40
    li r26, 0x1
    b lbl_fn_8049DEE4_00001110
lbl_fn_8049DEE4_00001074:
    lwz r12, 0x0(r25)
    mr r4, r25
    addi r3, r1, 0x28
    li r5, 0x0
    lwz r12, 0x24(r12)
    mtctr r12
    bctrl
    addi r3, r1, 0x40
    addi r4, r27, 0x88
    addi r5, r1, 0x28
    bl fn_80070C98
    psq_l f1, 0x0(r28), 0, 0
    mr r3, r25
    lfs f2, 0x48(r1)
    stfs f2, 0x90(r27)
    lwz r4, 0xcc(r27)
    psq_st f1, 0x88(r27), 0, 0
    psq_l f1, 0xc(r28), 0, 0
    lfs f2, 0x54(r1)
    stfs f2, 0x9c(r27)
    psq_st f1, 0x94(r27), 0, 0
    lwz r12, 0x0(r25)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r0, 0x48(r25)
    cmpwi r0, 0x5
    bne lbl_fn_8049DEE4_000010EC
    mr r3, r25
    bl fn_8049982C
lbl_fn_8049DEE4_000010EC:
    lwz r12, 0x0(r25)
    mr r3, r25
    lwz r12, 0x30(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_0000110C
    stw r26, 0xec(r27)
lbl_fn_8049DEE4_0000110C:
    lwz r25, 0x4c(r25)
lbl_fn_8049DEE4_00001110:
    cmpwi r25, 0x0
    bne lbl_fn_8049DEE4_00001074
    mr r3, r27
    bl fn_8049E480
    lwz r3, lbl_8087EFA8
    mr r31, r27
    li r30, 0x0
    li r29, 0x0
    lfs f0, 0xf0(r3)
    stfs f0, 0xf0(r27)
    b lbl_fn_8049DEE4_000011F0
lbl_fn_8049DEE4_0000113C:
    lwz r26, 0xa4(r31)
    li r28, 0x0
    li r25, 0x0
    b lbl_fn_8049DEE4_000011DC
lbl_fn_8049DEE4_0000114C:
    lwz r3, 0x58(r26)
    lwzx r24, r3, r25
    lwz r3, 0x304(r24)
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_000011D4
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049DEE4_00001184
    lwz r0, 0x9c(r3)
    cmpw r30, r0
    ble lbl_fn_8049DEE4_0000117C
    mr r0, r30
lbl_fn_8049DEE4_0000117C:
    mr r30, r0
    b lbl_fn_8049DEE4_000011AC
lbl_fn_8049DEE4_00001184:
    lwz r0, lbl_8087E0D8
    lwz r4, lbl_8087E0D8
    cmpwi r0, 0x0
    ble lbl_fn_8049DEE4_00001198
    b lbl_fn_8049DEE4_000011A8
lbl_fn_8049DEE4_00001198:
    lwz r0, lbl_8087E0DC
    lwz r4, lbl_8087E0DC
    srawi r0, r0, 31
    and r4, r4, r0
lbl_fn_8049DEE4_000011A8:
    stw r4, 0x9c(r3)
lbl_fn_8049DEE4_000011AC:
    lwz r3, 0x304(r24)
    li r4, 0x0
    bl fn_800D246C
    lwz r0, 0xc4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8049DEE4_000011D4
    lwz r3, 0x304(r24)
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8049DEE4_000011D4:
    addi r25, r25, 0x4
    addi r28, r28, 0x1
lbl_fn_8049DEE4_000011DC:
    lwz r0, 0x5c(r26)
    cmplw r28, r0
    blt lbl_fn_8049DEE4_0000114C
    addi r31, r31, 0x4
    addi r29, r29, 0x1
lbl_fn_8049DEE4_000011F0:
    lwz r0, 0xa0(r27)
    cmplw r29, r0
    blt lbl_fn_8049DEE4_0000113C
    lwz r0, 0xc4(r27)
    cmpwi r0, 0x0
    beq lbl_fn_8049DEE4_000012B0
    cmpwi r30, 0x0
    ble lbl_fn_8049DEE4_000012B0
    li r24, 0x0
    li r26, 0x0
    li r28, 0x1
    b lbl_fn_8049DEE4_00001298
lbl_fn_8049DEE4_00001220:
    lwz r3, 0x58(r3)
    lwzx r25, r3, r26
    lwz r3, 0x304(r25)
    cmpwi r3, 0x0
    beq lbl_fn_8049DEE4_00001290
    stw r28, 0x50(r3)
    lwz r0, lbl_8087E0D8
    lwz r3, 0x304(r25)
    cmpw r30, r0
    lwz r4, lbl_8087E0D8
    bge lbl_fn_8049DEE4_00001250
    b lbl_fn_8049DEE4_00001268
lbl_fn_8049DEE4_00001250:
    lwz r0, lbl_8087E0DC
    mr r4, r30
    lwz r5, lbl_8087E0DC
    cmpw r30, r0
    ble lbl_fn_8049DEE4_00001268
    mr r4, r5
lbl_fn_8049DEE4_00001268:
    stw r4, 0x9c(r3)
    lwz r3, 0x304(r25)
    lwz r0, 0x50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8049DEE4_00001284
    addi r3, r3, 0x54
    bl fn_800B2180
lbl_fn_8049DEE4_00001284:
    lwz r3, 0x304(r25)
    li r4, 0x0
    bl fn_800D246C
lbl_fn_8049DEE4_00001290:
    addi r26, r26, 0x4
    addi r24, r24, 0x1
lbl_fn_8049DEE4_00001298:
    lwz r3, 0xc4(r27)
    lwz r0, 0x5c(r3)
    cmplw r24, r0
    blt lbl_fn_8049DEE4_00001220
    mr r3, r27
    bl fn_804A0F80
lbl_fn_8049DEE4_000012B0:
    li r3, 0x1
    b lbl_fn_8049DEE4_000012BC
lbl_fn_8049DEE4_000012B8:
    li r3, 0x0
lbl_fn_8049DEE4_000012BC:
    addi r11, r1, 0x80
    psq_l f31, 0x88(r1), 0, 0
    lfd f31, 0x80(r1)
    bl _restgpr_24
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_8049E480(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    stw r0, 0x124(r1)
    stmw r14, 0xd8(r1)
    stw r3, 0x8(r1)
    lwz r14, 0xc4(r3)
    cmpwi r14, 0x0
    beq lbl_fn_8049E480_00001310
    lwz r4, 0x108(r3)
    lwz r0, 0x10c(r3)
    cmpw r4, r0
    beq lbl_fn_8049E480_00001310
    b lbl_fn_8049E480_0000134C
lbl_fn_8049E480_00001310:
    lwz r5, 0x108(r3)
    li r4, 0x0
    cmpwi r5, 0x0
    blt lbl_fn_8049E480_00001330
    lwz r0, 0xa0(r3)
    cmpw r5, r0
    bge lbl_fn_8049E480_00001330
    li r4, 0x1
lbl_fn_8049E480_00001330:
    cmpwi r4, 0x0
    beq lbl_fn_8049E480_00001348
    slwi r0, r5, 2
    add r4, r3, r0
    lwz r14, 0xa4(r4)
    b lbl_fn_8049E480_0000134C
lbl_fn_8049E480_00001348:
    li r14, 0x0
lbl_fn_8049E480_0000134C:
    cmpwi r14, 0x0
    beq lbl_fn_8049E480_000019F4
    lwz r15, 0x70(r3)
    b lbl_fn_8049E480_00001390
lbl_fn_8049E480_0000135C:
    lwz r0, 0x48(r15)
    cmpwi r0, 0x4
    bne lbl_fn_8049E480_00001378
    mr r3, r15
    mr r4, r14
    bl fn_8049B7CC
    b lbl_fn_8049E480_0000138C
lbl_fn_8049E480_00001378:
    cmpwi r0, 0x5
    bne lbl_fn_8049E480_0000138C
    mr r3, r15
    mr r4, r14
    bl fn_80499D60
lbl_fn_8049E480_0000138C:
    lwz r15, 0x4c(r15)
lbl_fn_8049E480_00001390:
    cmpwi r15, 0x0
    bne lbl_fn_8049E480_0000135C
    li r0, 0x0
    stw r0, 0xc0(r1)
    lwz r0, 0x5c(r14)
    addi r31, r1, 0xb5
    lwz r20, 0xc0(r1)
    addi r30, r1, 0xa9
    stw r0, 0xc4(r1)
    li r0, 0x0
    mr r21, r20
    mr r22, r20
    stw r0, 0xc8(r1)
    addi r29, r1, 0x9d
    addi r18, r1, 0x90
    addi r17, r1, 0x78
    addi r16, r1, 0x60
    b lbl_fn_8049E480_000019E4
lbl_fn_8049E480_000013D8:
    lwz r3, 0x58(r14)
    li r25, 0x0
    lwz r0, 0xc8(r1)
    li r28, 0x0
    lwzx r26, r3, r0
    b lbl_fn_8049E480_000019B4
lbl_fn_8049E480_000013F0:
    lwz r0, 0x40(r26)
    lwz r3, 0x8(r1)
    add r24, r0, r28
    lwz r23, 0x70(r3)
    addi r27, r24, 0x1
    b lbl_fn_8049E480_000019A4
lbl_fn_8049E480_00001408:
    lwz r0, 0x48(r23)
    cmpwi r0, 0x0
    bne lbl_fn_8049E480_000015F0
    addi r3, r23, 0x50
    bl fn_8008B130
    stw r20, 0x90(r1)
    mr r19, r3
    stw r20, 0x94(r1)
    stw r20, 0x98(r1)
    bl strlen
    mr r15, r3
    mr r3, r18
    mr r4, r15
    bl fn_80013DC4
    lbz r0, 0x20(r1)
    mr r3, r18
    stb r0, 0x1c(r1)
    mr r6, r19
    add r7, r19, r15
    addi r8, r1, 0x1c
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r18
    addi r3, r1, 0x84
    bl fn_8006B174
    addi r3, r1, 0xb4
    addi r4, r1, 0x84
    bl fn_8006B2D8
    lwz r0, 0x84(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_00001490
    lwz r3, 0x8c(r1)
    bl dtor_80084684
lbl_fn_8049E480_00001490:
    lwz r0, 0x90(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_000014A4
    lwz r3, 0x98(r1)
    bl dtor_80084684
lbl_fn_8049E480_000014A4:
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_000014BC
    lbz r0, 0x0(r24)
    clrlwi r4, r0, 25
    b lbl_fn_8049E480_000014C0
lbl_fn_8049E480_000014BC:
    lwz r4, 0x4(r24)
lbl_fn_8049E480_000014C0:
    lwz r0, 0xb4(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8049E480_000014D8
    lbz r0, 0xb4(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8049E480_000014DC
lbl_fn_8049E480_000014D8:
    lwz r0, 0xb8(r1)
lbl_fn_8049E480_000014DC:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049E480_000015BC
    cmpwi r3, 0x0
    bne lbl_fn_8049E480_00001504
    lbz r0, 0xb4(r1)
    mr r4, r31
    clrlwi r15, r0, 25
    b lbl_fn_8049E480_0000150C
lbl_fn_8049E480_00001504:
    lwz r4, 0xbc(r1)
    lwz r15, 0xb8(r1)
lbl_fn_8049E480_0000150C:
    stw r15, 0x4c(r1)
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_00001528
    lbz r0, 0x0(r24)
    clrlwi r5, r0, 25
    b lbl_fn_8049E480_0000152C
lbl_fn_8049E480_00001528:
    lwz r5, 0x4(r24)
lbl_fn_8049E480_0000152C:
    stw r5, 0x50(r1)
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_0000154C
    lbz r0, 0x0(r24)
    mr r3, r27
    clrlwi r0, r0, 25
    b lbl_fn_8049E480_00001554
lbl_fn_8049E480_0000154C:
    lwz r3, 0x8(r24)
    lwz r0, 0x4(r24)
lbl_fn_8049E480_00001554:
    cmplw r5, r0
    stw r0, 0x48(r1)
    addi r5, r1, 0x48
    bge lbl_fn_8049E480_00001568
    addi r5, r1, 0x50
lbl_fn_8049E480_00001568:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x44
    stw r0, 0x44(r1)
    cmplw r15, r0
    bge lbl_fn_8049E480_00001580
    addi r5, r1, 0x4c
lbl_fn_8049E480_00001580:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8049E480_000015B4
    lwz r0, 0x44(r1)
    cmplw r0, r15
    bge lbl_fn_8049E480_000015A4
    li r3, -0x1
    b lbl_fn_8049E480_000015B4
lbl_fn_8049E480_000015A4:
    bne lbl_fn_8049E480_000015B0
    li r3, 0x0
    b lbl_fn_8049E480_000015B4
lbl_fn_8049E480_000015B0:
    li r3, 0x1
lbl_fn_8049E480_000015B4:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_8049E480_000015BC:
    cmpwi r0, 0x0
    beq lbl_fn_8049E480_000015D8
    lwz r3, 0x54(r23)
    addi r0, r26, 0x4c
    oris r3, r3, 0x1
    stw r3, 0x54(r23)
    stw r0, 0x22c(r23)
lbl_fn_8049E480_000015D8:
    lwz r0, 0xb4(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_000019A0
    lwz r3, 0xbc(r1)
    bl dtor_80084684
    b lbl_fn_8049E480_000019A0
lbl_fn_8049E480_000015F0:
    cmpwi r0, 0x4
    bne lbl_fn_8049E480_000017C8
    addi r15, r23, 0x5c
    stw r21, 0x78(r1)
    mr r3, r15
    stw r21, 0x7c(r1)
    stw r21, 0x80(r1)
    bl strlen
    mr r19, r3
    mr r3, r17
    mr r4, r19
    bl fn_80013DC4
    lbz r0, 0x18(r1)
    mr r3, r17
    stb r0, 0x14(r1)
    mr r6, r15
    add r7, r15, r19
    addi r8, r1, 0x14
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r17
    addi r3, r1, 0x6c
    bl fn_8006B174
    addi r3, r1, 0xa8
    addi r4, r1, 0x6c
    bl fn_8006B2D8
    lwz r0, 0x6c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_00001670
    lwz r3, 0x74(r1)
    bl dtor_80084684
lbl_fn_8049E480_00001670:
    lwz r0, 0x78(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_00001684
    lwz r3, 0x80(r1)
    bl dtor_80084684
lbl_fn_8049E480_00001684:
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_0000169C
    lbz r0, 0x0(r24)
    clrlwi r4, r0, 25
    b lbl_fn_8049E480_000016A0
lbl_fn_8049E480_0000169C:
    lwz r4, 0x4(r24)
lbl_fn_8049E480_000016A0:
    lwz r0, 0xa8(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8049E480_000016B8
    lbz r0, 0xa8(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8049E480_000016BC
lbl_fn_8049E480_000016B8:
    lwz r0, 0xac(r1)
lbl_fn_8049E480_000016BC:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049E480_0000179C
    cmpwi r3, 0x0
    bne lbl_fn_8049E480_000016E4
    lbz r0, 0xa8(r1)
    mr r4, r30
    clrlwi r15, r0, 25
    b lbl_fn_8049E480_000016EC
lbl_fn_8049E480_000016E4:
    lwz r4, 0xb0(r1)
    lwz r15, 0xac(r1)
lbl_fn_8049E480_000016EC:
    stw r15, 0x3c(r1)
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_00001708
    lbz r0, 0x0(r24)
    clrlwi r5, r0, 25
    b lbl_fn_8049E480_0000170C
lbl_fn_8049E480_00001708:
    lwz r5, 0x4(r24)
lbl_fn_8049E480_0000170C:
    stw r5, 0x40(r1)
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_0000172C
    lbz r0, 0x0(r24)
    mr r3, r27
    clrlwi r0, r0, 25
    b lbl_fn_8049E480_00001734
lbl_fn_8049E480_0000172C:
    lwz r3, 0x8(r24)
    lwz r0, 0x4(r24)
lbl_fn_8049E480_00001734:
    cmplw r5, r0
    stw r0, 0x38(r1)
    addi r5, r1, 0x38
    bge lbl_fn_8049E480_00001748
    addi r5, r1, 0x40
lbl_fn_8049E480_00001748:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x34
    stw r0, 0x34(r1)
    cmplw r15, r0
    bge lbl_fn_8049E480_00001760
    addi r5, r1, 0x3c
lbl_fn_8049E480_00001760:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8049E480_00001794
    lwz r0, 0x34(r1)
    cmplw r0, r15
    bge lbl_fn_8049E480_00001784
    li r3, -0x1
    b lbl_fn_8049E480_00001794
lbl_fn_8049E480_00001784:
    bne lbl_fn_8049E480_00001790
    li r3, 0x0
    b lbl_fn_8049E480_00001794
lbl_fn_8049E480_00001790:
    li r3, 0x1
lbl_fn_8049E480_00001794:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_8049E480_0000179C:
    cmpwi r0, 0x0
    beq lbl_fn_8049E480_000017B0
    mr r3, r23
    addi r4, r26, 0x4c
    bl fn_8049B780
lbl_fn_8049E480_000017B0:
    lwz r0, 0xa8(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_000019A0
    lwz r3, 0xb0(r1)
    bl dtor_80084684
    b lbl_fn_8049E480_000019A0
lbl_fn_8049E480_000017C8:
    cmpwi r0, 0x5
    bne lbl_fn_8049E480_000019A0
    addi r3, r23, 0x58
    bl fn_80473F18
    stw r22, 0x60(r1)
    mr r15, r3
    stw r22, 0x64(r1)
    stw r22, 0x68(r1)
    bl strlen
    mr r19, r3
    mr r3, r16
    mr r4, r19
    bl fn_80013DC4
    lbz r0, 0x10(r1)
    mr r3, r16
    stb r0, 0xc(r1)
    mr r6, r15
    add r7, r15, r19
    addi r8, r1, 0xc
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r16
    addi r3, r1, 0x54
    bl fn_8006B174
    addi r3, r1, 0x9c
    addi r4, r1, 0x54
    bl fn_8006B2D8
    lwz r0, 0x54(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_0000184C
    lwz r3, 0x5c(r1)
    bl dtor_80084684
lbl_fn_8049E480_0000184C:
    lwz r0, 0x60(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_00001860
    lwz r3, 0x68(r1)
    bl dtor_80084684
lbl_fn_8049E480_00001860:
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_00001878
    lbz r0, 0x0(r24)
    clrlwi r4, r0, 25
    b lbl_fn_8049E480_0000187C
lbl_fn_8049E480_00001878:
    lwz r4, 0x4(r24)
lbl_fn_8049E480_0000187C:
    lwz r0, 0x9c(r1)
    srwi. r3, r0, 31
    bne lbl_fn_8049E480_00001894
    lbz r0, 0x9c(r1)
    clrlwi r0, r0, 25
    b lbl_fn_8049E480_00001898
lbl_fn_8049E480_00001894:
    lwz r0, 0xa0(r1)
lbl_fn_8049E480_00001898:
    subf r0, r4, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8049E480_00001978
    cmpwi r3, 0x0
    bne lbl_fn_8049E480_000018C0
    lbz r0, 0x9c(r1)
    mr r4, r29
    clrlwi r15, r0, 25
    b lbl_fn_8049E480_000018C8
lbl_fn_8049E480_000018C0:
    lwz r4, 0xa4(r1)
    lwz r15, 0xa0(r1)
lbl_fn_8049E480_000018C8:
    stw r15, 0x2c(r1)
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_000018E4
    lbz r0, 0x0(r24)
    clrlwi r5, r0, 25
    b lbl_fn_8049E480_000018E8
lbl_fn_8049E480_000018E4:
    lwz r5, 0x4(r24)
lbl_fn_8049E480_000018E8:
    stw r5, 0x30(r1)
    lwz r0, 0x0(r24)
    srwi. r0, r0, 31
    bne lbl_fn_8049E480_00001908
    lbz r0, 0x0(r24)
    mr r3, r27
    clrlwi r0, r0, 25
    b lbl_fn_8049E480_00001910
lbl_fn_8049E480_00001908:
    lwz r3, 0x8(r24)
    lwz r0, 0x4(r24)
lbl_fn_8049E480_00001910:
    cmplw r5, r0
    stw r0, 0x28(r1)
    addi r5, r1, 0x28
    bge lbl_fn_8049E480_00001924
    addi r5, r1, 0x30
lbl_fn_8049E480_00001924:
    lwz r0, 0x0(r5)
    addi r5, r1, 0x24
    stw r0, 0x24(r1)
    cmplw r15, r0
    bge lbl_fn_8049E480_0000193C
    addi r5, r1, 0x2c
lbl_fn_8049E480_0000193C:
    lwz r5, 0x0(r5)
    bl fn_8067E23C
    cmpwi r3, 0x0
    bne lbl_fn_8049E480_00001970
    lwz r0, 0x24(r1)
    cmplw r0, r15
    bge lbl_fn_8049E480_00001960
    li r3, -0x1
    b lbl_fn_8049E480_00001970
lbl_fn_8049E480_00001960:
    bne lbl_fn_8049E480_0000196C
    li r3, 0x0
    b lbl_fn_8049E480_00001970
lbl_fn_8049E480_0000196C:
    li r3, 0x1
lbl_fn_8049E480_00001970:
    cntlzw r0, r3
    srwi r0, r0, 5
lbl_fn_8049E480_00001978:
    cmpwi r0, 0x0
    beq lbl_fn_8049E480_0000198C
    mr r3, r23
    addi r4, r26, 0x4c
    bl fn_80499CCC
lbl_fn_8049E480_0000198C:
    lwz r0, 0x9c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_8049E480_000019A0
    lwz r3, 0xa4(r1)
    bl dtor_80084684
lbl_fn_8049E480_000019A0:
    lwz r23, 0x4c(r23)
lbl_fn_8049E480_000019A4:
    cmpwi r23, 0x0
    bne lbl_fn_8049E480_00001408
    addi r28, r28, 0xc
    addi r25, r25, 0x1
lbl_fn_8049E480_000019B4:
    lwz r3, 0x58(r14)
    lwz r0, 0xc8(r1)
    lwzx r3, r3, r0
    lwz r0, 0x44(r3)
    cmplw r25, r0
    blt lbl_fn_8049E480_000013F0
    lwz r3, 0xc0(r1)
    addi r3, r3, 0x1
    stw r3, 0xc0(r1)
    lwz r3, 0xc8(r1)
    addi r3, r3, 0x4
    stw r3, 0xc8(r1)
lbl_fn_8049E480_000019E4:
    lwz r3, 0xc0(r1)
    lwz r0, 0xc4(r1)
    cmpw r3, r0
    blt lbl_fn_8049E480_000013D8
lbl_fn_8049E480_000019F4:
    lmw r14, 0xd8(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}
