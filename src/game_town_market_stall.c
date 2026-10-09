#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_80084320(void);
extern void fn_800897D8(void);
extern void fn_800C31F4(void);
extern void fn_800CB3A0(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D3FA4(void);
extern void fn_800D5738(void);
extern void fn_800D5808(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80370174(void);
extern void fn_80370320(void);
extern void fn_80373148(void);
extern void fn_803761E4(void);
extern void fn_803761EC(void);
extern void fn_803761F4(void);
extern void fn_803CC900(void);
extern void fn_803CFC78(void);
extern void fn_803E668C(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);

/* External data declarations */
extern u8 jumptable_8078BCD8[];
extern u8 lbl_80750554[];
extern u8 lbl_80750618[];
extern u8 lbl_80750650[];
extern u8 lbl_807506A0[];
extern u8 lbl_8078BE08[];
extern u8 lbl_8078C584[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EF10;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F430;
extern u32 lbl_8087F488;
extern u32 lbl_8087F490;
extern u32 lbl_8087F494;
extern u32 lbl_8087F540;
extern u32 lbl_80885D58;
extern u32 lbl_80885D5C;
extern u32 lbl_80885D60;
extern u32 lbl_80885D64;
extern u32 lbl_80885D68;
extern u32 lbl_80885D6C;
extern u32 lbl_80885D70;
extern u32 lbl_80885D74;
extern u32 lbl_80885D78;
extern u32 lbl_80885D7C;
extern u32 lbl_80885D80;
extern u32 lbl_80885D84;
extern u32 lbl_80885D88;
extern u32 lbl_80885D8C;
extern u32 lbl_80885D90;
extern u32 lbl_80885D94;
extern u32 lbl_80885D98;
extern u32 lbl_80885D9C;
extern u32 lbl_80885DA0;
extern u32 lbl_80885DA4;
extern u32 lbl_80885DA8;
extern u32 lbl_80885DAC;
extern u32 lbl_80885DB0;
extern u32 lbl_80885DB4;
extern u32 lbl_80885DB8;
extern u32 lbl_80885DBC;
extern u32 lbl_80885DC0;
extern u32 lbl_80885DC4;
extern u32 lbl_80885DC8;
extern u32 lbl_80885DCC;
extern u32 lbl_80885DD0;
extern u32 lbl_80885DD4;
extern u32 lbl_80885DD8;
extern u32 lbl_80885DDC;

/* Function declarations */
void fn_803CE278(void);
void fn_803CE3B8(void);
void fn_803CE408(void);
void fn_803CE448(void);
void fn_803CE44C(void);
void fn_803CE4B0(void);
void fn_803CE550(void);
void fn_803CE5B0(void);
void fn_803CE5DC(void);
void fn_803CE684(void);
void fn_803CE688(void);
void fn_803CE6BC(void);
void fn_803CE6FC(void);
void fn_803CE708(void);
void fn_803CE738(void);
void fn_803CE768(void);
void fn_803CE7E0(void);
void fn_803CE854(void);
void fn_803CE8A8(void);
void fn_803CE910(void);
void fn_803CE980(void);
void fn_803CF734(void);
void fn_803CF740(void);
void fn_803CF74C(void);
void fn_803CF78C(void);
void fn_803CF79C(void);
void fn_803CF8F0(void);
void fn_803CF938(void);

asm void fn_803CE278(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x34(r1)
    stw r31, 0x2c(r1)
    li r31, 0x1
    stw r30, 0x28(r1)
    mr r30, r5
    stw r29, 0x24(r1)
    mr r29, r4
    stw r28, 0x20(r1)
    mr r28, r3
    ble lbl_fn_803CE278_0000003C
    cmpwi r4, 0x0
    bgt lbl_fn_803CE278_000000BC
lbl_fn_803CE278_0000003C:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CE278_0000007C
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_803CE278_0000007C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r28, 0x48(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r29, 0x4c(r3)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r30, 0x50(r3)
    b lbl_fn_803CE278_000000BC
lbl_fn_803CE278_0000007C:
    lwz r3, lbl_8087F540
    cmpwi r3, 0x0
    beq lbl_fn_803CE278_000000BC
    lwz r3, 0x70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CE278_000000B4
    lwz r0, 0x58(r3)
    stw r0, 0x10(r1)
    stw r0, 0xc(r1)
    lbz r28, 0x12(r1)
    stw r0, 0x8(r1)
    lhz r29, 0xc(r1)
    lbz r30, 0xb(r1)
    b lbl_fn_803CE278_000000BC
lbl_fn_803CE278_000000B4:
    li r3, 0x1
    b lbl_fn_803CE278_00000120
lbl_fn_803CE278_000000BC:
    cmpwi r28, 0x1
    bne lbl_fn_803CE278_000000C8
    li r31, 0x0
lbl_fn_803CE278_000000C8:
    cmpwi r28, 0x2
    bne lbl_fn_803CE278_0000011C
    subi r0, r29, 0x5
    cmplwi r0, 0x3d
    bgt lbl_fn_803CE278_00000118
    lis r3, jumptable_8078BCD8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078BCD8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    subi r0, r30, 0x9
    cmplwi r0, 0x3
    ble lbl_fn_803CE278_0000011C
    li r31, 0x0
    b lbl_fn_803CE278_0000011C
    cmpwi r30, 0x9
    beq lbl_fn_803CE278_0000011C
    li r31, 0x0
    b lbl_fn_803CE278_0000011C
lbl_fn_803CE278_00000118:
    li r31, 0x0
lbl_fn_803CE278_0000011C:
    mr r3, r31
lbl_fn_803CE278_00000120:
    lwz r0, 0x34(r1)
    lwz r31, 0x2c(r1)
    lwz r30, 0x28(r1)
    lwz r29, 0x24(r1)
    lwz r28, 0x20(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_803CE3B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x14
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    sth r0, 0x8(r3)
    sth r0, 0xa(r3)
    addi r3, r3, 0xc
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE408(void)
{
    nofralloc
    lwz r4, lbl_8087F430
    lwz r0, 0x10d0(r4)
    stw r0, 0x0(r3)
    lwz r4, lbl_8087F0A8
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x113c(r4)
    sth r0, 0x8(r3)
    lwz r4, lbl_8087F0A8
    lbz r0, 0x1140(r4)
    cmpwi r0, 0x0
    beqlr
    lhz r0, 0xa(r3)
    ori r0, r0, 0x1
    sth r0, 0xa(r3)
    blr
}

asm void fn_803CE448(void)
{
    nofralloc
    blr
}

asm void fn_803CE44C(void)
{
    nofralloc
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    blt lbl_fn_803CE44C_000001F0
    lis r4, 0xf
    addi r0, r4, 0x423f
    cmpw r5, r0
    ble lbl_fn_803CE44C_000001F8
lbl_fn_803CE44C_000001F0:
    li r3, 0x1
    blr
lbl_fn_803CE44C_000001F8:
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803CE44C_0000020C
    cmpwi r0, 0x3e7
    ble lbl_fn_803CE44C_00000214
lbl_fn_803CE44C_0000020C:
    li r3, 0x1
    blr
lbl_fn_803CE44C_00000214:
    lha r0, 0x8(r3)
    cmpwi r0, 0x0
    blt lbl_fn_803CE44C_00000228
    cmpwi r0, 0x11
    blt lbl_fn_803CE44C_00000230
lbl_fn_803CE44C_00000228:
    li r3, 0x1
    blr
lbl_fn_803CE44C_00000230:
    li r3, 0x0
    blr
}

asm void fn_803CE4B0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_803CE4B0_000002BC
    lwz r0, lbl_8087F488
    cmpwi r0, 0x0
    bne lbl_fn_803CE4B0_000002BC
    lis r5, lbl_80750554@ha
    li r3, 0x58
    addi r5, r5, lbl_80750554@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_803CE4B0_000002B8
    mr r4, r30
    bl fn_800D1D3C
    lis r4, lbl_8078BE08@ha
    li r3, 0x0
    addi r4, r4, lbl_8078BE08@l
    stw r4, 0x0(r31)
    li r0, 0x1
    stw r3, 0x48(r31)
    stw r3, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r0, 0x54(r31)
lbl_fn_803CE4B0_000002B8:
    stw r31, lbl_8087F488
lbl_fn_803CE4B0_000002BC:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F488
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE550(void)
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
    beq lbl_fn_803CE550_0000031C
    li r0, 0x0
    stw r0, lbl_8087F488
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_803CE550_0000031C
    mr r3, r30
    bl dtor_80084684
lbl_fn_803CE550_0000031C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE5B0(void)
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

asm void fn_803CE5DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803CE5DC_000003CC
    lwz r0, 0x54(r3)
    cmpwi r0, 0x0
    beq lbl_fn_803CE5DC_000003B0
    lwz r4, 0x4c(r3)
    lwz r5, 0x50(r3)
    subi r0, r4, 0x1
    cmpw r0, r5
    ble lbl_fn_803CE5DC_000003A8
    mr r5, r0
lbl_fn_803CE5DC_000003A8:
    stw r5, 0x4c(r3)
    b lbl_fn_803CE5DC_000003CC
lbl_fn_803CE5DC_000003B0:
    lwz r4, 0x4c(r3)
    lwz r5, 0x50(r3)
    addi r0, r4, 0x1
    cmpw r0, r5
    bge lbl_fn_803CE5DC_000003C8
    mr r5, r0
lbl_fn_803CE5DC_000003C8:
    stw r5, 0x4c(r3)
lbl_fn_803CE5DC_000003CC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CE5DC_000003F8
    lwz r4, 0x48(r31)
    neg r0, r4
    or r0, r0, r4
    srwi r4, r0, 31
    bl fn_803761E4
    lwz r3, lbl_8087F430
    lwz r4, 0x4c(r31)
    bl fn_803761F4
lbl_fn_803CE5DC_000003F8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE684(void)
{
    nofralloc
    blr
}

asm void fn_803CE688(void)
{
    nofralloc
    cmpwi r5, 0x0
    stw r5, 0x54(r3)
    beq lbl_fn_803CE688_0000042C
    li r0, 0x0
    stw r4, 0x4c(r3)
    stw r0, 0x50(r3)
    b lbl_fn_803CE688_00000438
lbl_fn_803CE688_0000042C:
    li r0, 0x0
    stw r0, 0x4c(r3)
    stw r4, 0x50(r3)
lbl_fn_803CE688_00000438:
    li r0, 0x1
    stw r0, 0x48(r3)
    blr
}

asm void fn_803CE6BC(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_803CE6BC_00000464
    lwz r0, 0x48(r3)
    cmpwi r0, 0x1
    bne lbl_fn_803CE6BC_00000464
    li r0, 0x2
    stw r0, 0x48(r3)
    blr
lbl_fn_803CE6BC_00000464:
    cmpwi r4, 0x0
    bnelr
    lwz r0, 0x48(r3)
    cmpwi r0, 0x2
    bnelr
    li r0, 0x1
    stw r0, 0x48(r3)
    blr
}

asm void fn_803CE6FC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x48(r3)
    blr
}

asm void fn_803CE708(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    lwz r5, 0x4c(r3)
    cmpwi r0, 0x0
    add r0, r5, r4
    stw r0, 0x4c(r3)
    bnelr
    lwz r4, 0x50(r3)
    cmpw r0, r4
    bge lbl_fn_803CE708_000004B8
    mr r4, r0
lbl_fn_803CE708_000004B8:
    stw r4, 0x4c(r3)
    blr
}

asm void fn_803CE738(void)
{
    nofralloc
    lwz r0, 0x54(r3)
    lwz r5, 0x4c(r3)
    cmpwi r0, 0x0
    subf r0, r4, r5
    stw r0, 0x4c(r3)
    beqlr
    lwz r4, 0x50(r3)
    cmpw r0, r4
    ble lbl_fn_803CE738_000004E8
    mr r4, r0
lbl_fn_803CE738_000004E8:
    stw r4, 0x4c(r3)
    blr
}

asm void fn_803CE768(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803CE768_00000554
    mr r3, r0
    bl fn_803761EC
    stw r3, 0x4c(r31)
    li r4, 0x385
    lwz r3, lbl_8087F430
    bl fn_80370174
    stw r3, 0x50(r31)
    li r4, 0x386
    lwz r3, lbl_8087F430
    bl fn_80370174
    clrlwi r4, r3, 16
    srwi r3, r3, 16
    neg r0, r4
    stw r3, 0x48(r31)
    or r0, r0, r4
    srwi r0, r0, 31
    stw r0, 0x54(r31)
lbl_fn_803CE768_00000554:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE7E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087F430
    cmpwi r0, 0x0
    beq lbl_fn_803CE7E0_000005C8
    lwz r4, 0x4c(r31)
    mr r3, r0
    bl fn_803761F4
    lwz r3, lbl_8087F430
    li r4, 0x385
    lwz r5, 0x50(r31)
    li r6, 0x0
    bl fn_80370320
    lwz r0, 0x54(r31)
    li r4, 0x386
    lwz r7, 0x48(r31)
    li r6, 0x0
    clrlwi r5, r0, 16
    lwz r3, lbl_8087F430
    rlwimi r5, r7, 16, 0, 15
    bl fn_80370320
lbl_fn_803CE7E0_000005C8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE854(void)
{
    nofralloc
    lwz r0, lbl_8087F494
    cmpwi r0, 0x0
    beq lbl_fn_803CE854_0000060C
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r3, r0, 31
    add r3, r0, r3
    addi r3, r3, 0x1
    blr
lbl_fn_803CE854_0000060C:
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 4
    srwi r3, r0, 31
    add r3, r0, r3
    addi r3, r3, 0x1
    blr
}

asm void fn_803CE8A8(void)
{
    nofralloc
    lwz r0, lbl_8087F494
    cmpwi r0, 0x0
    beq lbl_fn_803CE8A8_00000670
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3c
    subf r3, r0, r3
    srwi r0, r3, 31
    add r0, r0, r3
    srawi r3, r0, 1
    blr
lbl_fn_803CE8A8_00000670:
    lis r4, 0x8889
    subi r0, r4, 0x7777
    mulhw r0, r0, r3
    add r0, r0, r3
    srawi r0, r0, 4
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x1e
    subf r3, r0, r3
    blr
}

asm void fn_803CE910(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_803CE910_000006F0
    lwz r0, lbl_8087F490
    cmpwi r0, 0x0
    bne lbl_fn_803CE910_000006F0
    lis r5, lbl_807506A0@ha
    li r3, 0x28b0
    addi r5, r5, lbl_807506A0@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_803CE910_000006EC
    mr r4, r31
    bl fn_803CE980
lbl_fn_803CE910_000006EC:
    stw r3, lbl_8087F490
lbl_fn_803CE910_000006F0:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F490
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CE980(void)
{
    nofralloc
    stwu r1, -0xa0(r1)
    mflr r0
    stw r0, 0xa4(r1)
    stfd f31, 0x90(r1)
    psq_st f31, 0x98(r1), 0, 0
    stfd f30, 0x80(r1)
    psq_st f30, 0x88(r1), 0, 0
    stfd f29, 0x70(r1)
    psq_st f29, 0x78(r1), 0, 0
    stfd f28, 0x60(r1)
    psq_st f28, 0x68(r1), 0, 0
    stfd f27, 0x50(r1)
    psq_st f27, 0x58(r1), 0, 0
    stfd f26, 0x40(r1)
    psq_st f26, 0x48(r1), 0, 0
    stfd f25, 0x30(r1)
    psq_st f25, 0x38(r1), 0, 0
    stfd f24, 0x20(r1)
    psq_st f24, 0x28(r1), 0, 0
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_800D1D3C
    lfs f3, lbl_80885D58
    lis r4, lbl_8078C584@ha
    li r3, 0x0
    lfs f0, lbl_80885D5C
    addi r4, r4, lbl_8078C584@l
    stw r4, 0x0(r31)
    addi r4, r31, 0xb0
    addi r0, r31, 0x2f0
    stfs f3, 0x48(r31)
    stfs f0, 0x4c(r31)
    stw r3, 0x50(r31)
    stw r3, 0x54(r31)
    stw r3, 0x5c(r31)
    stw r3, 0x60(r31)
    stw r3, 0x64(r31)
    stw r3, 0x68(r31)
    stw r3, 0x6c(r31)
    stw r3, 0x70(r31)
    stw r3, 0x74(r31)
    stw r3, 0x78(r31)
    stw r3, 0x80(r31)
    stw r3, 0x84(r31)
    stw r3, 0x88(r31)
    stfs f3, 0x8c(r31)
    stw r3, 0x90(r31)
    stfs f3, 0x94(r31)
    stw r3, 0x98(r31)
    stw r3, 0x9c(r31)
    stw r3, 0xa0(r31)
    stw r3, 0xa4(r31)
    stw r3, 0xa8(r31)
    stw r3, 0xac(r31)
lbl_fn_803CE980_000007E8:
    stw r3, 0x0(r4)
    stw r3, 0x4(r4)
    stw r3, 0xc(r4)
    stw r3, 0x10(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stw r3, 0x1c(r4)
    stw r3, 0x20(r4)
    stw r3, 0x24(r4)
    stw r3, 0x28(r4)
    stw r3, 0x30(r4)
    stw r3, 0x34(r4)
    stw r3, 0x38(r4)
    stfs f3, 0x3c(r4)
    stw r3, 0x40(r4)
    stfs f3, 0x44(r4)
    stw r3, 0x48(r4)
    stw r3, 0x4c(r4)
    stw r3, 0x50(r4)
    stw r3, 0x54(r4)
    stw r3, 0x58(r4)
    stw r3, 0x5c(r4)
    addi r4, r4, 0x60
    cmplw r4, r0
    blt lbl_fn_803CE980_000007E8
    addi r6, r31, 0x338
    addi r3, r31, 0x3d8
    cmplw r6, r3
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x2f0(r31)
    stw r5, 0x30c(r31)
    stw r5, 0x310(r31)
    stw r5, 0x314(r31)
    stw r5, 0x32c(r31)
    stw r5, 0x330(r31)
    stw r4, 0x334(r31)
    bge lbl_fn_803CE980_000008A8
    addi r0, r3, 0x1f
    subf r0, r6, r0
    srwi r0, r0, 5
    mtctr r0
    bge lbl_fn_803CE980_000008A8
lbl_fn_803CE980_00000894:
    stw r5, 0x14(r6)
    stw r5, 0x18(r6)
    stw r4, 0x1c(r6)
    addi r6, r6, 0x20
    bdnz lbl_fn_803CE980_00000894
lbl_fn_803CE980_000008A8:
    addi r5, r31, 0xd3c
    addi r4, r31, 0xc5c
    lfs f0, lbl_80885D58
    cmplw r4, r5
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x3f0(r31)
    stw r0, 0x748(r31)
    stw r0, 0x74c(r31)
    stw r0, 0x750(r31)
    stw r3, 0x754(r31)
    stw r3, 0x758(r31)
    stw r3, 0x75c(r31)
    stw r3, 0x760(r31)
    stw r0, 0x764(r31)
    stw r0, 0x768(r31)
    stw r0, 0x76c(r31)
    stw r3, 0x770(r31)
    stw r3, 0x774(r31)
    stw r3, 0x778(r31)
    stw r3, 0x77c(r31)
    stw r0, 0x780(r31)
    stw r0, 0x784(r31)
    stw r0, 0x788(r31)
    stw r3, 0x78c(r31)
    stw r3, 0x790(r31)
    stw r3, 0x794(r31)
    stw r3, 0x798(r31)
    stw r0, 0x79c(r31)
    stw r0, 0x7a0(r31)
    stw r0, 0x7a4(r31)
    stw r3, 0x7a8(r31)
    stw r3, 0x7ac(r31)
    stw r3, 0x7b0(r31)
    stw r3, 0x7b4(r31)
    stw r0, 0x7c0(r31)
    stw r0, 0x7c4(r31)
    stw r0, 0x7c8(r31)
    stw r3, 0x7cc(r31)
    stw r3, 0x7d0(r31)
    stw r3, 0x7d4(r31)
    stw r3, 0x7d8(r31)
    stw r0, 0x7dc(r31)
    stw r0, 0x7e0(r31)
    stw r0, 0x7e4(r31)
    stw r3, 0x7e8(r31)
    stw r3, 0x7ec(r31)
    stw r3, 0x7f0(r31)
    stw r3, 0x7f4(r31)
    stw r0, 0x7f8(r31)
    stw r0, 0x7fc(r31)
    stw r0, 0x800(r31)
    stw r3, 0x804(r31)
    stw r3, 0x808(r31)
    stw r3, 0x80c(r31)
    stw r3, 0x810(r31)
    stw r3, 0x834(r31)
    stw r3, 0x85c(r31)
    stw r3, 0x8d0(r31)
    stw r3, 0xc38(r31)
    stw r3, 0xc3c(r31)
    stfs f0, 0xc40(r31)
    stfs f0, 0xc44(r31)
    stfs f0, 0xc48(r31)
    stw r3, 0xc50(r31)
    stw r3, 0xc54(r31)
    stfs f0, 0xc58(r31)
    bge lbl_fn_803CE980_000009F0
    addi r0, r5, 0x1f
    subf r0, r4, r0
    srwi r0, r0, 5
    mtctr r0
    bge lbl_fn_803CE980_000009F0
lbl_fn_803CE980_000009CC:
    stw r3, 0x0(r4)
    stfs f0, 0x4(r4)
    stfs f0, 0x8(r4)
    stfs f0, 0xc(r4)
    stw r3, 0x14(r4)
    stw r3, 0x18(r4)
    stfs f0, 0x1c(r4)
    addi r4, r4, 0x20
    bdnz lbl_fn_803CE980_000009CC
lbl_fn_803CE980_000009F0:
    lfs f0, lbl_80885D58
    li r29, 0x0
    stw r29, 0xd40(r31)
    addi r3, r31, 0xdd4
    stfs f0, 0xd44(r31)
    stfs f0, 0xd48(r31)
    stfs f0, 0xd4c(r31)
    stw r29, 0xd54(r31)
    stw r29, 0xd58(r31)
    stfs f0, 0xd5c(r31)
    stw r29, 0xd84(r31)
    stw r29, 0xd88(r31)
    stw r29, 0xd8c(r31)
    stw r29, 0xd90(r31)
    stw r29, 0xd94(r31)
    stw r29, 0xd98(r31)
    stw r29, 0xd9c(r31)
    stw r29, 0xda0(r31)
    stw r29, 0xda4(r31)
    stw r29, 0xda8(r31)
    stw r29, 0xdac(r31)
    stw r29, 0xdb0(r31)
    stw r29, 0xdc8(r31)
    bl fn_800D5738
    addi r3, r31, 0xe04
    bl fn_800D5738
    addi r3, r31, 0xe34
    bl fn_800D5738
    addi r3, r31, 0xe64
    bl fn_800D5738
    stw r29, 0x1118(r31)
    addi r3, r31, 0x1158
    stw r29, 0x1130(r31)
    stw r29, 0x1140(r31)
    stw r29, 0x1144(r31)
    stw r29, 0x1148(r31)
    stw r29, 0x114c(r31)
    stw r29, 0x1150(r31)
    stw r29, 0x1154(r31)
    bl fn_80237518
    addi r3, r31, 0x1164
    bl fn_80237518
    addi r4, r31, 0x11f0
    addi r3, r31, 0x1554
    lfs f0, lbl_80885D58
    cmplw r4, r3
    stw r29, 0x1170(r31)
    stfs f0, 0x11ec(r31)
    bge lbl_fn_803CE980_00000AD8
    addi r3, r3, 0x7b
    li r0, 0x7c
    subf r3, r4, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_803CE980_00000AD8
lbl_fn_803CE980_00000ACC:
    stfs f0, 0x78(r4)
    addi r4, r4, 0x7c
    bdnz lbl_fn_803CE980_00000ACC
lbl_fn_803CE980_00000AD8:
    lis r29, fn_80237518@ha
    lis r30, fn_802375C4@ha
    addi r3, r31, 0x1554
    li r6, 0xc
    addi r4, r29, fn_80237518@l
    addi r5, r30, fn_802375C4@l
    li r7, 0x4
    bl fn_806958E0
    addi r3, r31, 0x1584
    addi r4, r29, fn_80237518@l
    addi r5, r30, fn_802375C4@l
    li r6, 0xc
    li r7, 0x4
    bl fn_806958E0
    addi r5, r31, 0x1638
    addi r3, r31, 0x253c
    lfs f0, lbl_80885D58
    cmplw r5, r3
    li r0, 0x0
    stw r0, 0x15b4(r31)
    stw r0, 0x15b8(r31)
    stfs f0, 0x1634(r31)
    bge lbl_fn_803CE980_00000BDC
    addi r0, r31, 0x1638
    addi r4, r31, 0x215c
    cmplw r0, r3
    li r3, 0x0
    li r0, 0x0
    bgt lbl_fn_803CE980_00000B50
    li r3, 0x1
lbl_fn_803CE980_00000B50:
    cmpwi r3, 0x0
    beq lbl_fn_803CE980_00000B5C
    li r0, 0x1
lbl_fn_803CE980_00000B5C:
    cmpwi r0, 0x0
    beq lbl_fn_803CE980_00000BAC
    addi r3, r4, 0x3df
    li r0, 0x3e0
    subf r3, r5, r3
    lfs f0, lbl_80885D58
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r4
    bge lbl_fn_803CE980_00000BAC
lbl_fn_803CE980_00000B84:
    stfs f0, 0x78(r5)
    stfs f0, 0xf4(r5)
    stfs f0, 0x170(r5)
    stfs f0, 0x1ec(r5)
    stfs f0, 0x268(r5)
    stfs f0, 0x2e4(r5)
    stfs f0, 0x360(r5)
    stfs f0, 0x3dc(r5)
    addi r5, r5, 0x3e0
    bdnz lbl_fn_803CE980_00000B84
lbl_fn_803CE980_00000BAC:
    addi r4, r31, 0x253c
    li r0, 0x7c
    addi r3, r4, 0x7b
    lfs f0, lbl_80885D58
    subf r3, r5, r3
    divwu r3, r3, r0
    mtctr r3
    cmplw r5, r4
    bge lbl_fn_803CE980_00000BDC
lbl_fn_803CE980_00000BD0:
    stfs f0, 0x78(r5)
    addi r5, r5, 0x7c
    bdnz lbl_fn_803CE980_00000BD0
lbl_fn_803CE980_00000BDC:
    addi r3, r31, 0x25cc
    addi r6, r31, 0x2578
    lfs f0, lbl_80885D58
    cmplw r6, r3
    li r5, 0x0
    li r4, -0x1
    stw r5, 0x253c(r31)
    stw r5, 0x2540(r31)
    stw r5, 0x254c(r31)
    stw r4, 0x255c(r31)
    stfs f0, 0x2560(r31)
    stw r5, 0x2568(r31)
    stw r4, 0x256c(r31)
    stw r5, 0x2570(r31)
    stw r5, 0x2574(r31)
    bge lbl_fn_803CE980_00000C48
    addi r3, r3, 0xb
    li r0, 0xc
    subf r3, r6, r3
    divwu r3, r3, r0
    mtctr r3
    bge lbl_fn_803CE980_00000C48
lbl_fn_803CE980_00000C34:
    stw r4, 0x0(r6)
    stw r5, 0x4(r6)
    stw r5, 0x8(r6)
    addi r6, r6, 0xc
    bdnz lbl_fn_803CE980_00000C34
lbl_fn_803CE980_00000C48:
    addi r6, r31, 0x2610
    addi r5, r31, 0x25e0
    cmplw r5, r6
    li r4, 0x0
    li r3, 0x1
    stw r4, 0x25cc(r31)
    stw r4, 0x25d0(r31)
    stw r4, 0x25d4(r31)
    stw r3, 0x25d8(r31)
    stw r4, 0x25dc(r31)
    bge lbl_fn_803CE980_00000CA0
    addi r0, r6, 0xf
    subf r0, r5, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_803CE980_00000CA0
lbl_fn_803CE980_00000C88:
    stw r4, 0x0(r5)
    stw r4, 0x4(r5)
    stw r3, 0x8(r5)
    stw r4, 0xc(r5)
    addi r5, r5, 0x10
    bdnz lbl_fn_803CE980_00000C88
lbl_fn_803CE980_00000CA0:
    lfs f24, lbl_80885D60
    li r9, 0x0
    lfs f7, lbl_80885D70
    lfs f6, lbl_80885D74
    lfs f25, lbl_80885D58
    lfs f26, lbl_80885D84
    lfs f10, lbl_80885D64
    lfs f9, lbl_80885D68
    lfs f8, lbl_80885D6C
    lfs f5, lbl_80885D78
    lfs f4, lbl_80885D7C
    lfs f3, lbl_80885D80
    lfs f27, lbl_80885D88
    lfs f28, lbl_80885D8C
    lfs f29, lbl_80885D90
    lfs f30, lbl_80885D94
    lfs f0, lbl_80885D98
    stw r9, 0x262c(r31)
    stw r9, 0x2630(r31)
    stw r9, 0x2634(r31)
    stw r9, 0x2638(r31)
    stw r9, 0x2658(r31)
    stw r9, 0x265c(r31)
    stw r9, 0x2660(r31)
    stw r9, 0x2664(r31)
    stfs f24, 0x2668(r31)
    stfs f10, 0x266c(r31)
    stfs f9, 0x2670(r31)
    stfs f8, 0x2674(r31)
    stfs f7, 0x2678(r31)
    stfs f7, 0x267c(r31)
    stfs f7, 0x2680(r31)
    stfs f24, 0x2684(r31)
    stfs f6, 0x2688(r31)
    stfs f6, 0x268c(r31)
    stfs f7, 0x2690(r31)
    stfs f24, 0x2694(r31)
    stfs f7, 0x2698(r31)
    stfs f7, 0x269c(r31)
    stfs f7, 0x26a0(r31)
    stfs f24, 0x26a4(r31)
    stfs f6, 0x26a8(r31)
    stfs f6, 0x26ac(r31)
    stfs f24, 0x26b0(r31)
    stfs f24, 0x26b4(r31)
    stfs f25, 0x26b8(r31)
    stfs f25, 0x26bc(r31)
    stfs f25, 0x26c0(r31)
    stfs f24, 0x26c4(r31)
    stfs f5, 0x26c8(r31)
    stfs f4, 0x26cc(r31)
    stfs f3, 0x26d0(r31)
    stfs f24, 0x26d4(r31)
    stfs f26, 0x26d8(r31)
    stfs f26, 0x26dc(r31)
    stfs f27, 0x26e0(r31)
    stfs f24, 0x26e4(r31)
    stfs f28, 0x26e8(r31)
    stfs f29, 0x26ec(r31)
    stfs f30, 0x26f0(r31)
    stfs f24, 0x26f4(r31)
    stfs f0, 0x26f8(r31)
    lfs f12, lbl_80885DA4
    lfs f8, lbl_80885DB4
    lfs f31, lbl_80885D9C
    lfs f13, lbl_80885DA0
    lfs f11, lbl_80885DA8
    lfs f10, lbl_80885DAC
    lfs f9, lbl_80885DB0
    lfs f7, lbl_80885DB8
    lfs f6, lbl_80885DBC
    lfs f5, lbl_80885DC0
    lfs f4, lbl_80885DC4
    lfs f3, lbl_80885DC8
    lfs f0, lbl_80885DCC
    stfs f31, 0x26fc(r31)
    stfs f26, 0x2700(r31)
    stfs f24, 0x2704(r31)
    stfs f13, 0x2708(r31)
    stfs f12, 0x270c(r31)
    stfs f11, 0x2710(r31)
    stfs f24, 0x2714(r31)
    stfs f28, 0x2718(r31)
    stfs f10, 0x271c(r31)
    stfs f9, 0x2720(r31)
    stfs f24, 0x2724(r31)
    stfs f24, 0x2728(r31)
    stfs f8, 0x272c(r31)
    stfs f25, 0x2730(r31)
    stfs f25, 0x2734(r31)
    stfs f25, 0x2738(r31)
    stfs f8, 0x273c(r31)
    stfs f7, 0x2740(r31)
    stfs f25, 0x2744(r31)
    stfs f24, 0x2748(r31)
    stfs f12, 0x274c(r31)
    stfs f12, 0x2750(r31)
    stfs f25, 0x2754(r31)
    stfs f30, 0x2758(r31)
    stfs f30, 0x275c(r31)
    stfs f30, 0x2760(r31)
    stfs f25, 0x2764(r31)
    stfs f6, 0x2768(r31)
    stfs f5, 0x276c(r31)
    stfs f30, 0x2770(r31)
    stfs f25, 0x2774(r31)
    stfs f29, 0x2778(r31)
    stfs f12, 0x277c(r31)
    stfs f27, 0x2780(r31)
    stfs f25, 0x2784(r31)
    stfs f24, 0x288c(r31)
    stfs f24, 0x2890(r31)
    stfs f24, 0x2894(r31)
    stfs f25, 0x2898(r31)
    stfs f4, 0x289c(r31)
    stfs f3, 0x28a0(r31)
    stfs f0, 0x28a4(r31)
    stfs f24, 0x28a8(r31)
    stw r9, 0x2788(r31)
    stw r9, 0x318(r31)
    stw r9, 0x31c(r31)
    stw r9, 0x320(r31)
    stw r9, 0x324(r31)
    stw r9, 0x328(r31)
    stw r9, 0x338(r31)
    stw r9, 0x33c(r31)
    stw r9, 0x340(r31)
    stw r9, 0x344(r31)
    stw r9, 0x348(r31)
    stw r9, 0x358(r31)
    stw r9, 0x35c(r31)
    stw r9, 0x360(r31)
    stw r9, 0x364(r31)
    stw r9, 0x368(r31)
    stw r9, 0x378(r31)
    stw r9, 0x37c(r31)
    stw r9, 0x380(r31)
    stw r9, 0x384(r31)
    stw r9, 0x388(r31)
    stw r9, 0x398(r31)
    stw r9, 0x39c(r31)
    stw r9, 0x3a0(r31)
    stw r9, 0x3a4(r31)
    stw r9, 0x3a8(r31)
    stw r9, 0x3b8(r31)
    stw r9, 0x3bc(r31)
    stw r9, 0x3c0(r31)
    stw r9, 0x3c4(r31)
    stw r9, 0x3c8(r31)
    lwz r4, 0x310(r31)
    li r3, 0x1
    li r0, 0x2
    mr r10, r31
    subf r4, r4, r4
    stw r4, 0x310(r31)
    li r11, 0x0
    stw r9, 0x3d8(r31)
    stw r9, 0x3dc(r31)
    stw r9, 0x3e0(r31)
    stw r9, 0x3e4(r31)
    stw r9, 0x3e8(r31)
    stw r9, 0x3ec(r31)
    stw r9, 0x3f0(r31)
    stw r3, 0xdcc(r31)
    stfs f25, 0xdd0(r31)
    mtctr r0
lbl_fn_803CE980_00000F38:
    stw r9, 0xf14(r10)
    addi r8, r11, 0x1
    addi r7, r11, 0x2
    addi r6, r11, 0x3
    stw r9, 0xf94(r10)
    addi r5, r11, 0x4
    addi r4, r11, 0x5
    addi r3, r11, 0x6
    stw r11, 0x1014(r10)
    addi r0, r11, 0x7
    stw r9, 0xf18(r10)
    stw r9, 0xf98(r10)
    stw r8, 0x1018(r10)
    addi r8, r11, 0x9
    stw r9, 0xf1c(r10)
    stw r9, 0xf9c(r10)
    stw r7, 0x101c(r10)
    addi r7, r11, 0xa
    stw r9, 0xf20(r10)
    stw r9, 0xfa0(r10)
    stw r6, 0x1020(r10)
    addi r6, r11, 0xb
    stw r9, 0xf24(r10)
    stw r9, 0xfa4(r10)
    stw r5, 0x1024(r10)
    addi r5, r11, 0xc
    stw r9, 0xf28(r10)
    stw r9, 0xfa8(r10)
    stw r4, 0x1028(r10)
    addi r4, r11, 0xd
    stw r9, 0xf2c(r10)
    stw r9, 0xfac(r10)
    stw r3, 0x102c(r10)
    addi r3, r11, 0xe
    stw r9, 0xf30(r10)
    stw r9, 0xfb0(r10)
    stw r0, 0x1030(r10)
    addi r0, r11, 0xf
    addi r11, r11, 0x8
    stw r9, 0xf34(r10)
    stw r9, 0xfb4(r10)
    stw r11, 0x1034(r10)
    addi r11, r11, 0x8
    stw r9, 0xf38(r10)
    stw r9, 0xfb8(r10)
    stw r8, 0x1038(r10)
    stw r9, 0xf3c(r10)
    stw r9, 0xfbc(r10)
    stw r7, 0x103c(r10)
    stw r9, 0xf40(r10)
    stw r9, 0xfc0(r10)
    stw r6, 0x1040(r10)
    stw r9, 0xf44(r10)
    stw r9, 0xfc4(r10)
    stw r5, 0x1044(r10)
    stw r9, 0xf48(r10)
    stw r9, 0xfc8(r10)
    stw r4, 0x1048(r10)
    stw r9, 0xf4c(r10)
    stw r9, 0xfcc(r10)
    stw r3, 0x104c(r10)
    stw r9, 0xf50(r10)
    stw r9, 0xfd0(r10)
    stw r0, 0x1050(r10)
    addi r10, r10, 0x40
    bdnz lbl_fn_803CE980_00000F38
    li r0, 0x2
    li r5, 0x0
    mr r4, r31
    stw r5, 0x10b4(r31)
    li r3, 0x0
    stw r5, 0x10d4(r31)
    stw r5, 0x10b8(r31)
    stw r5, 0x10d8(r31)
    stw r5, 0x10bc(r31)
    stw r5, 0x10dc(r31)
    stw r5, 0x10c0(r31)
    stw r5, 0x10e0(r31)
    stw r5, 0x10c4(r31)
    stw r5, 0x10e4(r31)
    stw r5, 0x10c8(r31)
    stw r5, 0x10e8(r31)
    stw r5, 0x10cc(r31)
    stw r5, 0x10ec(r31)
    stw r5, 0x10d0(r31)
    stw r5, 0x10f0(r31)
    stw r5, 0x10f4(r31)
    stw r5, 0x574(r31)
    stw r5, 0x594(r31)
    stw r5, 0x578(r31)
    stw r5, 0x598(r31)
    stw r5, 0x57c(r31)
    stw r5, 0x59c(r31)
    stw r5, 0x580(r31)
    stw r5, 0x5a0(r31)
    stw r5, 0x584(r31)
    stw r5, 0x5a4(r31)
    stw r5, 0x588(r31)
    stw r5, 0x5a8(r31)
    stw r5, 0x58c(r31)
    stw r5, 0x5ac(r31)
    stw r5, 0x590(r31)
    stw r5, 0x5b0(r31)
    stw r5, 0x5b8(r31)
    mtctr r0
lbl_fn_803CE980_000010DC:
    stw r3, 0x5bc(r4)
    stw r3, 0x5c0(r4)
    stw r3, 0x5c4(r4)
    stw r3, 0x5c8(r4)
    stw r3, 0x5cc(r4)
    stw r3, 0x5d0(r4)
    stw r3, 0x5d4(r4)
    stw r3, 0x5d8(r4)
    stw r3, 0x5dc(r4)
    stw r3, 0x5e0(r4)
    stw r3, 0x5e4(r4)
    stw r3, 0x5e8(r4)
    stw r3, 0x5ec(r4)
    stw r3, 0x5f0(r4)
    stw r3, 0x5f4(r4)
    stw r3, 0x5f8(r4)
    stw r3, 0x5fc(r4)
    stw r3, 0x600(r4)
    stw r3, 0x604(r4)
    stw r3, 0x608(r4)
    stw r3, 0x60c(r4)
    stw r3, 0x610(r4)
    stw r3, 0x614(r4)
    stw r3, 0x618(r4)
    stw r3, 0x61c(r4)
    stw r3, 0x620(r4)
    stw r3, 0x624(r4)
    stw r3, 0x628(r4)
    stw r3, 0x62c(r4)
    stw r3, 0x630(r4)
    stw r3, 0x634(r4)
    stw r3, 0x638(r4)
    stw r3, 0x63c(r4)
    stw r3, 0x640(r4)
    stw r3, 0x644(r4)
    stw r3, 0x648(r4)
    stw r3, 0x64c(r4)
    stw r3, 0x650(r4)
    stw r3, 0x654(r4)
    stw r3, 0x658(r4)
    addi r4, r4, 0xa0
    bdnz lbl_fn_803CE980_000010DC
    li r3, 0x0
    stw r3, 0x6fc(r31)
    lfs f0, lbl_80885DD0
    li r0, 0x5
    stw r3, 0x700(r31)
    li r30, 0x0
    stw r3, 0x704(r31)
    stw r3, 0x708(r31)
    stw r3, 0x70c(r31)
    stw r3, 0x710(r31)
    stw r3, 0x714(r31)
    stw r3, 0x71c(r31)
    stw r3, 0x718(r31)
    stw r3, 0x720(r31)
    stw r3, 0x724(r31)
    stw r3, 0x728(r31)
    stw r3, 0x72c(r31)
    stw r3, 0x730(r31)
    stw r3, 0x734(r31)
    stw r3, 0x738(r31)
    stw r3, 0x8a0(r31)
    stw r3, 0x8a4(r31)
    stw r3, 0x8a8(r31)
    stw r3, 0x8ac(r31)
    stw r3, 0x8b0(r31)
    stw r3, 0x8b4(r31)
    stw r3, 0x8b8(r31)
    stw r3, 0x8bc(r31)
    stw r3, 0x8c0(r31)
    stw r3, 0x8c4(r31)
    stw r3, 0x8c8(r31)
    stw r3, 0x8cc(r31)
    stw r3, 0xa84(r31)
    stw r3, 0xa88(r31)
    stw r3, 0x8d0(r31)
    stw r3, 0x73c(r31)
    stw r3, 0x740(r31)
    stw r3, 0x744(r31)
    stw r3, 0x7b8(r31)
    stw r3, 0x7bc(r31)
    stw r3, 0x814(r31)
    stw r3, 0x81c(r31)
    stw r3, 0x824(r31)
    stw r3, 0x82c(r31)
    stw r3, 0x818(r31)
    stw r3, 0x820(r31)
    stw r3, 0x828(r31)
    stw r3, 0x830(r31)
    stw r3, 0x834(r31)
    stw r3, 0x844(r31)
    stw r3, 0x85c(r31)
    stw r3, 0x870(r31)
    stw r3, 0x848(r31)
    stw r3, 0x84c(r31)
    stw r3, 0x850(r31)
    stw r3, 0x854(r31)
    stw r3, 0x858(r31)
    stw r3, 0x874(r31)
    stw r3, 0x878(r31)
    stw r3, 0x87c(r31)
    stw r3, 0x880(r31)
    stw r3, 0x884(r31)
    stw r3, 0x838(r31)
    stw r3, 0x263c(r31)
    stw r3, 0x2640(r31)
    stw r3, 0xd78(r31)
    stw r0, 0xd7c(r31)
    stw r3, 0xd80(r31)
    stw r3, 0x10f8(r31)
    stw r3, 0x10fc(r31)
    stfs f0, 0x1100(r31)
    stw r3, 0xb08(r31)
    stw r3, 0xb0c(r31)
    stw r3, 0xb10(r31)
    stw r3, 0xb14(r31)
    stw r3, 0xb18(r31)
    stw r3, 0xb1c(r31)
    li r0, 0x2d
    stw r0, 0x264c(r31)
    addi r3, r31, 0x2550
    li r4, 0x0
    stw r30, 0xb20(r31)
    li r5, 0xc
    stw r30, 0xb24(r31)
    stw r30, 0xb28(r31)
    stw r30, 0xb2c(r31)
    stw r30, 0xb30(r31)
    stw r30, 0xb34(r31)
    stw r30, 0xb38(r31)
    stw r30, 0xb3c(r31)
    stw r30, 0xb58(r31)
    stw r30, 0xb5c(r31)
    stw r30, 0xb78(r31)
    stw r30, 0xb7c(r31)
    stw r30, 0xb98(r31)
    stw r30, 0xb9c(r31)
    stw r30, 0xbb8(r31)
    stw r30, 0xbbc(r31)
    stw r30, 0xbd8(r31)
    stw r30, 0xbdc(r31)
    stw r30, 0xbf8(r31)
    stw r30, 0xbfc(r31)
    stw r30, 0xc18(r31)
    stw r30, 0xc1c(r31)
    stw r30, 0xd6c(r31)
    stw r30, 0x2654(r31)
    stw r30, 0x2644(r31)
    stw r30, 0x2648(r31)
    stw r30, 0x2650(r31)
    stw r30, 0x1104(r31)
    stw r30, 0x1108(r31)
    stw r30, 0x110c(r31)
    stw r30, 0x1110(r31)
    stw r30, 0x1114(r31)
    stw r30, 0x1120(r31)
    stw r30, 0x1124(r31)
    stw r30, 0x1128(r31)
    stw r30, 0x1130(r31)
    stw r30, 0x2544(r31)
    stw r30, 0x2548(r31)
    stw r30, 0xdb8(r31)
    stw r30, 0xdbc(r31)
    stw r30, 0xa8c(r31)
    stw r30, 0xa90(r31)
    stw r30, 0xab8(r31)
    stw r30, 0xae0(r31)
    stw r30, 0xa94(r31)
    stw r30, 0xabc(r31)
    stw r30, 0xae4(r31)
    stw r30, 0xa98(r31)
    stw r30, 0xac0(r31)
    stw r30, 0xae8(r31)
    stw r30, 0xa9c(r31)
    stw r30, 0xac4(r31)
    stw r30, 0xaec(r31)
    stw r30, 0xaa0(r31)
    stw r30, 0xac8(r31)
    stw r30, 0xaf0(r31)
    stw r30, 0xaa4(r31)
    stw r30, 0xacc(r31)
    stw r30, 0xaf4(r31)
    stw r30, 0xaa8(r31)
    stw r30, 0xad0(r31)
    stw r30, 0xaf8(r31)
    stw r30, 0xaac(r31)
    stw r30, 0xad4(r31)
    stw r30, 0xafc(r31)
    stw r30, 0xab0(r31)
    stw r30, 0xad8(r31)
    stw r30, 0xb00(r31)
    stw r30, 0xab4(r31)
    stw r30, 0xadc(r31)
    stw r30, 0xb04(r31)
    stw r30, 0xdb4(r31)
    bl memset
    lis r5, lbl_807C7030@ha
    stw r30, 0x2564(r31)
    addi r5, r5, lbl_807C7030@l
    addi r4, r31, 0xd44
    stw r30, 0x2568(r31)
    mr r3, r31
    lfs f0, lbl_80885D58
    stw r30, 0x25cc(r31)
    stw r30, 0x2610(r31)
    stw r30, 0x2614(r31)
    stw r30, 0x2618(r31)
    stw r30, 0x261c(r31)
    stw r30, 0x2620(r31)
    stw r30, 0x2624(r31)
    stw r30, 0x2628(r31)
    stw r30, 0xdc0(r31)
    stw r30, 0xdc4(r31)
    stw r30, 0xc38(r31)
    stw r30, 0xd40(r31)
    stw r30, 0xd50(r31)
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0xd4c(r31)
    psq_st f1, 0x0(r4), 0, 0
    stw r30, 0xd54(r31)
    stw r30, 0xd58(r31)
    stfs f0, 0xd5c(r31)
    stw r30, 0xd3c(r31)
    psq_l f31, 0x98(r1), 0, 0
    lfd f31, 0x90(r1)
    psq_l f30, 0x88(r1), 0, 0
    lfd f30, 0x80(r1)
    psq_l f29, 0x78(r1), 0, 0
    lfd f29, 0x70(r1)
    psq_l f28, 0x68(r1), 0, 0
    lfd f28, 0x60(r1)
    psq_l f27, 0x58(r1), 0, 0
    lfd f27, 0x50(r1)
    psq_l f26, 0x48(r1), 0, 0
    lfd f26, 0x40(r1)
    psq_l f25, 0x38(r1), 0, 0
    lfd f25, 0x30(r1)
    psq_l f24, 0x28(r1), 0, 0
    lfd f24, 0x20(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0xa4(r1)
    mtlr r0
    addi r1, r1, 0xa0
    blr
}

asm void fn_803CF734(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    blr
}

asm void fn_803CF740(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0xc38(r3)
    blr
}

asm void fn_803CF74C(void)
{
    nofralloc
    li r0, 0x0
    lis r4, lbl_807C7030@ha
    stw r0, 0xd40(r3)
    addi r4, r4, lbl_807C7030@l
    addi r5, r3, 0xd44
    lfs f0, lbl_80885D58
    stw r0, 0xd50(r3)
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0xd4c(r3)
    psq_st f1, 0x0(r5), 0, 0
    stw r0, 0xd54(r3)
    stw r0, 0xd58(r3)
    stfs f0, 0xd5c(r3)
    stw r0, 0xd3c(r3)
    blr
}

asm void fn_803CF78C(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_803CF79C(void)
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
    beq lbl_fn_803CF79C_00001658
    addic. r0, r3, 0x2664
    li r0, 0x0
    stw r0, lbl_8087F490
    beq lbl_fn_803CF79C_00001578
    lwz r4, 0x2664(r3)
    cmpwi r4, 0x0
    beq lbl_fn_803CF79C_00001578
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_803CF79C_00001578
    bl fn_800897D8
lbl_fn_803CF79C_00001578:
    lis r31, fn_802375C4@ha
    addi r3, r29, 0x1584
    addi r4, r31, fn_802375C4@l
    li r5, 0xc
    li r6, 0x4
    bl fn_806959D8
    addi r3, r29, 0x1554
    addi r4, r31, fn_802375C4@l
    li r5, 0xc
    li r6, 0x4
    bl fn_806959D8
    addi r3, r29, 0x1164
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0x1158
    li r4, -0x1
    bl fn_802375C4
    addi r3, r29, 0xe64
    li r4, -0x1
    bl fn_800D5808
    addi r3, r29, 0xe34
    li r4, -0x1
    bl fn_800D5808
    addi r3, r29, 0xe04
    li r4, -0x1
    bl fn_800D5808
    addi r3, r29, 0xdd4
    li r4, -0x1
    bl fn_800D5808
    addic. r3, r29, 0xd90
    beq lbl_fn_803CF79C_00001610
    addic. r0, r3, 0x8
    beq lbl_fn_803CF79C_00001610
    lwz r0, 0x8(r3)
    srwi. r0, r0, 31
    beq lbl_fn_803CF79C_00001610
    lwz r3, 0x10(r3)
    bl dtor_80084684
lbl_fn_803CF79C_00001610:
    addic. r4, r29, 0x30c
    beq lbl_fn_803CF79C_0000163C
    beq lbl_fn_803CF79C_0000163C
    beq lbl_fn_803CF79C_0000163C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_803CF79C_0000163C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_803CF79C_0000163C:
    mr r3, r29
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r30, 0x0
    ble lbl_fn_803CF79C_00001658
    mr r3, r29
    bl dtor_80084684
lbl_fn_803CF79C_00001658:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_803CF8F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    beq lbl_fn_803CF8F0_000016A8
    mr r3, r31
    bl fn_803CFC78
    li r3, 0x1
    b lbl_fn_803CF8F0_000016AC
lbl_fn_803CF8F0_000016A8:
    li r3, 0x0
lbl_fn_803CF8F0_000016AC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_803CF938(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r31, r3
    bl fn_803E668C
    lwz r3, 0x840(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803CF938_00001838
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_803CF938_00001838
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_803CF938_00001838
    lwz r3, 0x10d8(r3)
    cmpwi r3, 0x0
    beq lbl_fn_803CF938_00001838
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_803CF938_00001838
    bl fn_803CC900
    cmpwi r3, 0x0
    ble lbl_fn_803CF938_00001838
    lwz r4, 0x265c(r31)
    cmpwi r4, 0x0
    bne lbl_fn_803CF938_0000178C
    lwz r3, 0x840(r31)
    lfs f0, lbl_80885DD4
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803CF938_0000185C
    lis r4, lbl_80750618@ha
    lfs f1, lbl_80885DD8
    addi r4, r4, lbl_80750618@l
    addi r3, r1, 0xc
    lwz r4, 0x10(r4)
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0x265c(r31)
    addi r0, r3, 0x1
    stw r0, 0x265c(r31)
    b lbl_fn_803CF938_0000185C
lbl_fn_803CF938_0000178C:
    srwi r3, r4, 31
    clrlwi r0, r4, 31
    xor r0, r0, r3
    subf r0, r3, r0
    cmpwi r0, 0x1
    bne lbl_fn_803CF938_000017E8
    lwz r3, 0x840(r31)
    lfs f0, lbl_80885DD4
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    bge lbl_fn_803CF938_0000185C
    lis r3, 0x9249
    addi r4, r4, 0x1
    addi r0, r3, 0x2493
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xe
    subf r0, r0, r4
    stw r0, 0x265c(r31)
    b lbl_fn_803CF938_0000185C
lbl_fn_803CF938_000017E8:
    cmpwi r0, 0x0
    bne lbl_fn_803CF938_0000185C
    lwz r3, 0x840(r31)
    lfs f0, lbl_80885DD4
    lfs f1, 0x100(r3)
    fcmpo cr0, f1, f0
    cror eq, gt, eq
    bne lbl_fn_803CF938_0000185C
    lis r3, 0x9249
    addi r4, r4, 0x1
    addi r0, r3, 0x2493
    mulhw r0, r0, r4
    add r0, r0, r4
    srawi r0, r0, 3
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0xe
    subf r0, r0, r4
    stw r0, 0x265c(r31)
    b lbl_fn_803CF938_0000185C
lbl_fn_803CF938_00001838:
    lwz r3, 0x83c(r31)
    cmpwi r3, 0x0
    beq lbl_fn_803CF938_00001854
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_803CF938_0000185C
lbl_fn_803CF938_00001854:
    li r0, 0x0
    stw r0, 0x265c(r31)
lbl_fn_803CF938_0000185C:
    lis r4, lbl_80750650@ha
    addi r3, r31, 0x3f4
    lfd f1, lbl_80750650@l(r4)
    li r6, 0x0
    lis r5, 0x2aab
    lis r7, 0x4330
    b lbl_fn_803CF938_00001924
lbl_fn_803CF938_00001878:
    lwz r4, 0x4(r3)
    addi r0, r4, 0x1
    stw r0, 0x4(r3)
    lwz r4, 0x3ec(r31)
    cmpwi r4, 0x0
    beq lbl_fn_803CF938_000018B8
    lwz r0, 0x4(r3)
    stw r7, 0x10(r1)
    xoris r0, r0, 0x8000
    lfs f2, 0xa0(r4)
    stw r0, 0x14(r1)
    lfd f0, 0x10(r1)
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    cror eq, gt, eq
    bne lbl_fn_803CF938_00001920
lbl_fn_803CF938_000018B8:
    addi r0, r31, 0x3f4
    stw r6, 0x0(r3)
    subf r0, r0, r3
    subi r4, r5, 0x5555
    mulhw r0, r4, r0
    stw r6, 0x8(r3)
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r8, r0, r4
    mulli r0, r8, 0xc
    add r9, r31, r0
    b lbl_fn_803CF938_00001908
lbl_fn_803CF938_000018E8:
    lwz r0, 0x400(r9)
    addi r8, r8, 0x1
    stw r0, 0x3f4(r9)
    lwz r0, 0x404(r9)
    stw r0, 0x3f8(r9)
    lwz r0, 0x408(r9)
    stw r0, 0x3fc(r9)
    addi r9, r9, 0xc
lbl_fn_803CF938_00001908:
    lwz r4, 0x3f0(r31)
    subi r0, r4, 0x1
    cmplw r8, r0
    blt lbl_fn_803CF938_000018E8
    stw r0, 0x3f0(r31)
    b lbl_fn_803CF938_00001924
lbl_fn_803CF938_00001920:
    addi r3, r3, 0xc
lbl_fn_803CF938_00001924:
    lwz r0, 0x3f0(r31)
    mulli r0, r0, 0xc
    add r4, r31, r0
    addi r0, r4, 0x3f4
    cmplw r3, r0
    bne lbl_fn_803CF938_00001878
    lwz r0, 0x2660(r31)
    cmpwi r0, 0x0
    beq lbl_fn_803CF938_000019C8
    lis r29, lbl_80750618@ha
    li r27, 0x0
    addi r29, r29, lbl_80750618@l
    li r30, 0x1
lbl_fn_803CF938_00001958:
    lwz r0, 0x2660(r31)
    slw r28, r30, r27
    and r0, r28, r0
    cmplw r28, r0
    bne lbl_fn_803CF938_000019B8
    cmpwi r27, 0x4
    lfs f1, lbl_80885D60
    bne lbl_fn_803CF938_00001980
    lfs f1, lbl_80885DD8
    b lbl_fn_803CF938_0000198C
lbl_fn_803CF938_00001980:
    cmpwi r27, 0xd
    bne lbl_fn_803CF938_0000198C
    lfs f1, lbl_80885DDC
lbl_fn_803CF938_0000198C:
    lwz r4, 0x0(r29)
    addi r3, r1, 0x8
    li r5, 0x0
    li r6, -0x1
    bl fn_800C31F4
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0x2660(r31)
    andc r0, r0, r28
    stw r0, 0x2660(r31)
lbl_fn_803CF938_000019B8:
    addi r27, r27, 0x1
    addi r29, r29, 0x4
    cmpwi r27, 0xe
    blt lbl_fn_803CF938_00001958
lbl_fn_803CF938_000019C8:
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
