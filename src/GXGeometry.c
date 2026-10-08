#include "revolution/types.h"

/* Runtime / ABI helpers */
extern void _savegpr_22(void);
extern void _restgpr_22(void);

/* External functions referenced */
extern void fn_80613300(void);
extern void fn_806133B0(void);
extern void fn_80613890(void);
extern void fn_806169C0(void);
extern void fn_806172D0(void);
extern void fn_80618240(void);
extern void fn_806184E0(void);
extern void fn_806186A0(void);

/* External SDA symbols */
extern u32 __GXData;

/* Function declarations */
void fn_80614510(void);
void fn_80614790(void);
void fn_806148E0(void);
void fn_806149C0(void);
void fn_80614A00(void);
void fn_80614A40(void);
void fn_80614A80(void);
void fn_80614AB0(void);
void fn_80614AF0(void);
void fn_80614B20(void);

asm void fn_80614510(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, __GXData
    stw r30, 0x8(r1)
    lwz r30, 0x5fc(r31)
    clrlwi. r0, r30, 31
    beq lbl_fn_80614510_00000028
    bl fn_806169C0
lbl_fn_80614510_00000028:
    rlwinm. r0, r30, 0, 30, 30
    beq lbl_fn_80614510_00000034
    bl fn_806172D0
lbl_fn_80614510_00000034:
    rlwinm. r0, r30, 0, 29, 29
    beq lbl_fn_80614510_0000005C
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x254(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
lbl_fn_80614510_0000005C:
    rlwinm. r0, r30, 0, 28, 28
    beq lbl_fn_80614510_00000068
    bl fn_80613300
lbl_fn_80614510_00000068:
    rlwinm. r0, r30, 0, 27, 27
    beq lbl_fn_80614510_00000074
    bl fn_80613890
lbl_fn_80614510_00000074:
    rlwinm. r0, r30, 0, 27, 28
    beq lbl_fn_80614510_00000080
    bl fn_806133B0
lbl_fn_80614510_00000080:
    clrrwi. r30, r30, 8
    beq lbl_fn_80614510_00000260
    rlwinm. r4, r30, 0, 20, 23
    beq lbl_fn_80614510_00000120
    rlwinm. r0, r4, 0, 23, 23
    beq lbl_fn_80614510_000000B4
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100a
    stw r0, -0x8000(r3)
    lwz r0, 0xa8(r31)
    stw r0, -0x8000(r3)
lbl_fn_80614510_000000B4:
    rlwinm. r0, r4, 0, 22, 22
    beq lbl_fn_80614510_000000D8
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100b
    stw r0, -0x8000(r3)
    lwz r0, 0xac(r31)
    stw r0, -0x8000(r3)
lbl_fn_80614510_000000D8:
    rlwinm. r0, r4, 0, 21, 21
    beq lbl_fn_80614510_000000FC
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100c
    stw r0, -0x8000(r3)
    lwz r0, 0xb0(r31)
    stw r0, -0x8000(r3)
lbl_fn_80614510_000000FC:
    rlwinm. r0, r4, 0, 20, 20
    beq lbl_fn_80614510_00000120
    lis r3, 0xcc01
    li r0, 0x10
    stb r0, -0x8000(r3)
    li r0, 0x100d
    stw r0, -0x8000(r3)
    lwz r0, 0xb4(r31)
    stw r0, -0x8000(r3)
lbl_fn_80614510_00000120:
    rlwinm r7, r30, 0, 7, 7
    rlwimi. r7, r30, 0, 16, 19
    beq lbl_fn_80614510_0000019C
    rlwinm. r0, r7, 0, 7, 7
    li r6, 0x100e
    beq lbl_fn_80614510_00000158
    lwz r5, 0x254(r31)
    lis r3, 0xcc01
    li r4, 0x10
    li r0, 0x1009
    stb r4, -0x8000(r3)
    extrwi r4, r5, 3, 25
    stw r0, -0x8000(r3)
    stw r4, -0x8000(r3)
lbl_fn_80614510_00000158:
    mr r5, r31
    extrwi r7, r7, 4, 16
    li r4, 0x10
    lis r3, 0xcc01
    b lbl_fn_80614510_00000194
    nop
lbl_fn_80614510_00000170:
    clrlwi. r0, r7, 31
    beq lbl_fn_80614510_00000188
    stb r4, -0x8000(r3)
    stw r6, -0x8000(r3)
    lwz r0, 0xb8(r5)
    stw r0, -0x8000(r3)
lbl_fn_80614510_00000188:
    srwi r7, r7, 1
    addi r5, r5, 0x4
    addi r6, r6, 0x1
lbl_fn_80614510_00000194:
    cmpwi r7, 0x0
    bne lbl_fn_80614510_00000170
lbl_fn_80614510_0000019C:
    andis. r8, r30, 0x2ff
    beq lbl_fn_80614510_00000228
    rlwinm. r0, r8, 0, 6, 6
    li r6, 0x1040
    beq lbl_fn_80614510_000001D0
    lwz r5, 0x254(r31)
    lis r3, 0xcc01
    li r4, 0x10
    li r0, 0x103f
    stb r4, -0x8000(r3)
    clrlwi r4, r5, 28
    stw r0, -0x8000(r3)
    stw r4, -0x8000(r3)
lbl_fn_80614510_000001D0:
    mr r7, r31
    extrwi r8, r8, 8, 8
    li r4, 0x10
    lis r3, 0xcc01
    b lbl_fn_80614510_00000220
    nop
lbl_fn_80614510_000001E8:
    clrlwi. r0, r8, 31
    addi r5, r6, 0x10
    beq lbl_fn_80614510_00000214
    stb r4, -0x8000(r3)
    stw r6, -0x8000(r3)
    lwz r0, 0xc8(r7)
    stw r0, -0x8000(r3)
    stb r4, -0x8000(r3)
    stw r5, -0x8000(r3)
    lwz r0, 0xe8(r7)
    stw r0, -0x8000(r3)
lbl_fn_80614510_00000214:
    srwi r8, r8, 1
    addi r6, r6, 0x1
    addi r7, r7, 0x4
lbl_fn_80614510_00000220:
    cmpwi r8, 0x0
    bne lbl_fn_80614510_000001E8
lbl_fn_80614510_00000228:
    rlwinm. r0, r30, 0, 5, 5
    beq lbl_fn_80614510_00000240
    li r3, 0x0
    bl fn_806186A0
    li r3, 0x5
    bl fn_806186A0
lbl_fn_80614510_00000240:
    rlwinm. r0, r30, 0, 3, 3
    beq lbl_fn_80614510_0000024C
    bl fn_806184E0
lbl_fn_80614510_0000024C:
    rlwinm. r0, r30, 0, 4, 4
    beq lbl_fn_80614510_00000258
    bl fn_80618240
lbl_fn_80614510_00000258:
    li r0, 0x1
    sth r0, 0x2(r31)
lbl_fn_80614510_00000260:
    li r0, 0x0
    stw r0, 0x5fc(r31)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80614790(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lwz r31, __GXData
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x5fc(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80614790_000002BC
    bl fn_80614510
lbl_fn_80614790_000002BC:
    lwz r0, 0x0(r31)
    cmpwi r0, 0x0
    bne lbl_fn_80614790_0000039C
    lwz r7, __GXData
    lis r3, 0xcc01
    li r0, 0x98
    li r6, 0x0
    lhz r5, 0x4(r7)
    lhz r4, 0x6(r7)
    mullw. r5, r5, r4
    stb r0, -0x8000(r3)
    lhz r0, 0x4(r7)
    sth r0, -0x8000(r3)
    beq lbl_fn_80614790_00000394
    addi r3, r5, 0x3
    subi r7, r5, 0x20
    srwi r0, r3, 2
    cmplwi r0, 0x8
    ble lbl_fn_80614790_0000036C
    cmplwi r3, 0x3
    li r0, 0x0
    blt lbl_fn_80614790_00000320
    cmplw r5, r3
    bgt lbl_fn_80614790_00000320
    li r0, 0x1
lbl_fn_80614790_00000320:
    cmpwi r0, 0x0
    beq lbl_fn_80614790_0000036C
    addi r0, r7, 0x1f
    li r4, 0x0
    srwi r0, r0, 5
    lis r3, 0xcc01
    mtctr r0
    cmplwi r7, 0x0
    ble lbl_fn_80614790_0000036C
lbl_fn_80614790_00000344:
    stw r4, -0x8000(r3)
    addi r6, r6, 0x20
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    bdnz lbl_fn_80614790_00000344
lbl_fn_80614790_0000036C:
    addi r0, r5, 0x3
    li r4, 0x0
    subf r0, r6, r0
    lis r3, 0xcc01
    srwi r0, r0, 2
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80614790_00000394
lbl_fn_80614790_0000038C:
    stw r4, -0x8000(r3)
    bdnz lbl_fn_80614790_0000038C
lbl_fn_80614790_00000394:
    li r0, 0x1
    sth r0, 0x2(r31)
lbl_fn_80614790_0000039C:
    lis r3, 0xcc01
    or r0, r29, r28
    stb r0, -0x8000(r3)
    sth r30, -0x8000(r3)
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806148E0(void)
{
    nofralloc
    lwz r6, __GXData
    lis r3, 0xcc01
    li r0, 0x98
    li r7, 0x0
    lhz r5, 0x4(r6)
    lhz r4, 0x6(r6)
    mullw. r8, r5, r4
    stb r0, -0x8000(r3)
    lhz r0, 0x4(r6)
    sth r0, -0x8000(r3)
    beq lbl_fn_806148E0_0000049C
    addi r3, r8, 0x3
    subi r5, r8, 0x20
    srwi r0, r3, 2
    cmplwi r0, 0x8
    ble lbl_fn_806148E0_00000474
    cmplwi r3, 0x3
    li r0, 0x0
    blt lbl_fn_806148E0_00000428
    cmplw r8, r3
    bgt lbl_fn_806148E0_00000428
    li r0, 0x1
lbl_fn_806148E0_00000428:
    cmpwi r0, 0x0
    beq lbl_fn_806148E0_00000474
    addi r0, r5, 0x1f
    li r4, 0x0
    srwi r0, r0, 5
    lis r3, 0xcc01
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_806148E0_00000474
lbl_fn_806148E0_0000044C:
    stw r4, -0x8000(r3)
    addi r7, r7, 0x20
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    stw r4, -0x8000(r3)
    bdnz lbl_fn_806148E0_0000044C
lbl_fn_806148E0_00000474:
    addi r0, r8, 0x3
    li r4, 0x0
    subf r0, r7, r0
    lis r3, 0xcc01
    srwi r0, r0, 2
    mtctr r0
    cmplw r7, r8
    bge lbl_fn_806148E0_0000049C
lbl_fn_806148E0_00000494:
    stw r4, -0x8000(r3)
    bdnz lbl_fn_806148E0_00000494
lbl_fn_806148E0_0000049C:
    li r0, 0x1
    sth r0, 0x2(r6)
    blr
}

asm void fn_806149C0(void)
{
    nofralloc
    lwz r8, __GXData
    lis r5, 0xcc01
    li r6, 0x61
    li r0, 0x0
    lwz r7, 0x7c(r8)
    rlwimi r7, r3, 0, 24, 31
    rlwimi r7, r4, 16, 13, 15
    stw r7, 0x7c(r8)
    stb r6, -0x8000(r5)
    lwz r3, 0x7c(r8)
    stw r3, -0x8000(r5)
    sth r0, 0x2(r8)
    blr
}

asm void fn_80614A00(void)
{
    nofralloc
    lwz r8, __GXData
    lis r5, 0xcc01
    li r6, 0x61
    li r0, 0x0
    lwz r7, 0x7c(r8)
    rlwimi r7, r3, 8, 16, 23
    rlwimi r7, r4, 19, 10, 12
    stw r7, 0x7c(r8)
    stb r6, -0x8000(r5)
    lwz r3, 0x7c(r8)
    stw r3, -0x8000(r5)
    sth r0, 0x2(r8)
    blr
}

asm void fn_80614A40(void)
{
    nofralloc
    lwz r9, __GXData
    slwi r0, r3, 2
    lis r6, 0xcc01
    li r3, 0x61
    add r8, r9, r0
    li r0, 0x0
    lwz r7, 0x108(r8)
    rlwimi r7, r4, 18, 13, 13
    rlwimi r7, r5, 19, 12, 12
    stw r7, 0x108(r8)
    stb r3, -0x8000(r6)
    lwz r3, 0x108(r8)
    stw r3, -0x8000(r6)
    sth r0, 0x2(r9)
    blr
}

asm void fn_80614A80(void)
{
    nofralloc
    lwz r4, __GXData
    extrwi r5, r3, 1, 30
    rlwimi r5, r3, 1, 30, 30
    lwz r0, 0x254(r4)
    rlwimi r0, r5, 14, 16, 17
    stw r0, 0x254(r4)
    lwz r0, 0x5fc(r4)
    ori r0, r0, 0x4
    stw r0, 0x5fc(r4)
    blr
}

asm void fn_80614AB0(void)
{
    nofralloc
    lwz r7, __GXData
    lis r5, 0xcc01
    li r6, 0x61
    lis r4, 0xfe08
    lwz r0, 0x254(r7)
    rlwimi r0, r3, 19, 12, 12
    stw r0, 0x254(r7)
    li r0, 0x0
    stb r6, -0x8000(r5)
    stw r4, -0x8000(r5)
    stb r6, -0x8000(r5)
    lwz r3, 0x254(r7)
    stw r3, -0x8000(r5)
    sth r0, 0x2(r7)
    blr
}

asm void fn_80614AF0(void)
{
    nofralloc
    lis r4, 0xcc01
    li r0, 0x61
    stb r0, -0x8000(r4)
    li r0, 0x0
    lwz r5, __GXData
    lwz r3, 0x254(r5)
    stw r3, -0x8000(r4)
    sth r0, 0x2(r5)
    blr
}

asm void fn_80614B20(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    cmplw r3, r4
    clrlslwi r0, r5, 17, 1
    clrlslwi r7, r6, 17, 1
    beq lbl_fn_80614B20_000006AC
    lwz r22, 0x0(r3)
    lwz r23, 0x4(r3)
    lwz r24, 0x8(r3)
    lwz r25, 0xc(r3)
    lwz r26, 0x10(r3)
    lwz r27, 0x14(r3)
    lwz r28, 0x18(r3)
    lwz r29, 0x1c(r3)
    lwz r30, 0x20(r3)
    lwz r31, 0x24(r3)
    lwz r12, 0x28(r3)
    lwz r11, 0x2c(r3)
    lwz r10, 0x30(r3)
    lwz r9, 0x34(r3)
    lwz r8, 0x38(r3)
    stw r22, 0x0(r4)
    stw r23, 0x4(r4)
    stw r24, 0x8(r4)
    stw r25, 0xc(r4)
    stw r26, 0x10(r4)
    stw r27, 0x14(r4)
    stw r28, 0x18(r4)
    stw r29, 0x1c(r4)
    stw r30, 0x20(r4)
    stw r31, 0x24(r4)
    stw r12, 0x28(r4)
    stw r11, 0x2c(r4)
    stw r10, 0x30(r4)
    stw r9, 0x34(r4)
    stw r8, 0x38(r4)
lbl_fn_80614B20_000006AC:
    lhz r22, 0x6(r3)
    lwz r8, 0x14(r3)
    mullw r10, r7, r22
    lhz r11, 0x4(r3)
    lhz r9, 0x8(r3)
    cmpwi r8, 0x0
    subf r11, r0, r11
    lwz r12, 0x0(r3)
    divwu r8, r10, r9
    sth r11, 0x4(r4)
    clrlwi r10, r12, 30
    subf r8, r8, r22
    sth r8, 0x6(r4)
    bne lbl_fn_80614B20_000006FC
    cmpwi r10, 0x0
    bne lbl_fn_80614B20_000006FC
    extrwi r8, r7, 15, 16
    subf r8, r8, r9
    sth r8, 0x8(r4)
    b lbl_fn_80614B20_00000708
lbl_fn_80614B20_000006FC:
    lhz r8, 0x8(r3)
    subf r8, r7, r8
    sth r8, 0x8(r4)
lbl_fn_80614B20_00000708:
    lhz r8, 0xe(r3)
    cmplwi r10, 0x1
    subf r0, r0, r8
    sth r0, 0xe(r4)
    bne lbl_fn_80614B20_00000730
    lhz r0, 0x10(r3)
    clrlslwi r7, r7, 16, 1
    subf r0, r7, r0
    sth r0, 0x10(r4)
    b lbl_fn_80614B20_0000073C
lbl_fn_80614B20_00000730:
    lhz r0, 0x10(r3)
    subf r0, r7, r0
    sth r0, 0x10(r4)
lbl_fn_80614B20_0000073C:
    lhz r0, 0xc(r3)
    addi r11, r1, 0x30
    lhz r7, 0xa(r3)
    add r0, r0, r6
    sth r0, 0xc(r4)
    add r3, r7, r5
    sth r3, 0xa(r4)
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
