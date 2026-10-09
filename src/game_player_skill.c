#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void dtor_80013D60(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8003E4A4(void);
extern void fn_8004203C(void);
extern void fn_8004212C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_80089AD4(void);
extern void fn_8008B140(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D2338(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_80120D24(void);
extern void fn_80120D34(void);
extern void fn_80120D44(void);
extern void fn_80120E38(void);
extern void fn_80120E48(void);
extern void fn_80120F4C(void);
extern void fn_8016E970(void);
extern void fn_80219544(void);
extern void fn_80237518(void);
extern void fn_802375C4(void);
extern void fn_80237654(void);
extern void fn_8023780C(void);
extern void fn_8035B808(void);
extern void fn_8035B824(void);
extern void fn_804741C0(void);
extern void fn_80547DFC(void);
extern void fn_80547E18(void);
extern void fn_8054A644(void);
extern void fn_8054A660(void);
extern void fn_80680770(void);
extern void fn_80682428(void);
extern void fn_80684600(void);
extern void fn_80686EA4(void);
extern void fn_80695720(void);
extern void fn_80695A50(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807370E8[];
extern u8 lbl_80737118[];
extern u8 lbl_80737138[];
extern u8 lbl_80778910[];
extern u8 lbl_8077A168[];
extern u8 lbl_8077A1A8[];

/* Small data declarations */
extern u32 lbl_8087D9C0;
extern u32 lbl_8087D9C4;
extern u32 lbl_8087D9C8;
extern u32 lbl_8087D9CC;

/* Function declarations */
void fn_8011F77C(void);
void fn_8011F7D4(void);
void fn_8011F7FC(void);
void fn_8011F82C(void);
void fn_8011F87C(void);
void fn_8011F8BC(void);
void fn_8011F8F4(void);
void fn_8011F91C(void);
void fn_8011F944(void);
void fn_8011F970(void);
void fn_8011F9CC(void);
void fn_8011FA18(void);
void fn_8011FA98(void);
void fn_8011FAF0(void);
void fn_8011FB18(void);
void fn_8011FB48(void);
void fn_8011FB98(void);
void fn_8011FBD8(void);
void fn_8011FC10(void);
void fn_8011FC38(void);
void fn_8011FC84(void);
void fn_8011FD04(void);
void fn_8011FD5C(void);
void fn_8011FD84(void);
void fn_8011FDB4(void);
void fn_8011FE04(void);
void fn_8011FE3C(void);
void fn_8011FE64(void);
void fn_8011FEBC(void);
void fn_8011FEC0(void);
void fn_8011FF18(void);
void fn_8011FF1C(void);
void fn_8011FF74(void);
void fn_8011FF78(void);
void fn_8011FFF8(void);
void fn_8012044C(void);
void fn_801204A8(void);
void fn_801206E8(void);
void fn_801206EC(void);
void fn_80120700(void);
void fn_801207BC(void);
void fn_801207CC(void);
void fn_801207D4(void);
void fn_80120C20(void);
void fn_80120C30(void);

asm void fn_8011F77C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011F77C_0000003C
lbl_fn_8011F77C_00000018:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_8011F77C_00000038
    addi r3, r31, 0x1b4
    bl fn_80089AD4
    lwz r0, 0x12a8(r31)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x12a8(r31)
lbl_fn_8011F77C_00000038:
    lwz r31, 0x14ac(r31)
lbl_fn_8011F77C_0000003C:
    cmpwi r31, 0x0
    bne lbl_fn_8011F77C_00000018
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011F7D4(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmpwi r6, 0x0
    addi r0, r5, 0x1
    stw r0, 0x4c(r3)
    beq lbl_fn_8011F7D4_00000078
    mr r3, r6
    b fn_8054A644
lbl_fn_8011F7D4_00000078:
    stw r4, 0x48(r3)
    blr
}

asm void fn_8011F7FC(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmplw r4, r6
    subi r0, r5, 0x1
    stw r0, 0x4c(r3)
    bne lbl_fn_8011F7FC_000000A4
    lwz r0, 0x14ac(r6)
    stw r0, 0x48(r3)
    blr
lbl_fn_8011F7FC_000000A4:
    mr r3, r6
    b fn_8054A660
    blr
}

asm void fn_8011F82C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011F82C_000000E4
lbl_fn_8011F82C_000000C8:
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lwz r31, 0x14ac(r31)
lbl_fn_8011F82C_000000E4:
    cmpwi r31, 0x0
    bne lbl_fn_8011F82C_000000C8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011F87C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011F87C_00000124
lbl_fn_8011F87C_00000118:
    mr r3, r31
    bl fn_800D2338
    lwz r31, 0x14ac(r31)
lbl_fn_8011F87C_00000124:
    cmpwi r31, 0x0
    bne lbl_fn_8011F87C_00000118
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011F8BC(void)
{
    nofralloc
    lwz r4, 0x48(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x14ac(r4)
    cmpwi r0, 0x0
    beqlr
    mr r3, r4
    b lbl_fn_8011F8BC_00000168
lbl_fn_8011F8BC_00000164:
    mr r3, r0
lbl_fn_8011F8BC_00000168:
    lwz r0, 0x14ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011F8BC_00000164
    blr
}

asm void fn_8011F8F4(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    b lbl_fn_8011F8F4_00000190
lbl_fn_8011F8F4_00000180:
    lwz r0, 0x50(r3)
    cmpw r4, r0
    beqlr
    lwz r3, 0x14ac(r3)
lbl_fn_8011F8F4_00000190:
    cmpwi r3, 0x0
    bne lbl_fn_8011F8F4_00000180
    li r3, 0x0
    blr
}

asm void fn_8011F91C(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    b lbl_fn_8011F91C_000001B8
lbl_fn_8011F91C_000001A8:
    lwz r0, 0x58(r3)
    cmpw r4, r0
    beqlr
    lwz r3, 0x14ac(r3)
lbl_fn_8011F91C_000001B8:
    cmpwi r3, 0x0
    bne lbl_fn_8011F91C_000001A8
    li r3, 0x0
    blr
}

asm void fn_8011F944(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    li r5, 0x0
    b lbl_fn_8011F944_000001E4
lbl_fn_8011F944_000001D4:
    cmpw r4, r5
    beqlr
    lwz r3, 0x14ac(r3)
    addi r5, r5, 0x1
lbl_fn_8011F944_000001E4:
    cmpwi r3, 0x0
    bne lbl_fn_8011F944_000001D4
    li r3, 0x0
    blr
}

asm void fn_8011F970(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_80219544
    lwz r4, 0x48(r31)
    b lbl_fn_8011F970_00000230
lbl_fn_8011F970_00000218:
    lwz r0, 0x50(r4)
    cmpw r3, r0
    bne lbl_fn_8011F970_0000022C
    mr r3, r4
    b lbl_fn_8011F970_0000023C
lbl_fn_8011F970_0000022C:
    lwz r4, 0x14ac(r4)
lbl_fn_8011F970_00000230:
    cmpwi r4, 0x0
    bne lbl_fn_8011F970_00000218
    li r3, 0x0
lbl_fn_8011F970_0000023C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011F9CC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_8077A1A8@ha
    li r0, 0x0
    addi r3, r3, lbl_8077A1A8@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FA18(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwz r30, 0x48(r3)
    b lbl_fn_8011FA18_000002FC
lbl_fn_8011FA18_000002BC:
    lwz r0, 0x2bc(r30)
    extlwi r0, r0, 2, 29
    srawi. r0, r0, 31
    beq lbl_fn_8011FA18_000002D4
    addi r3, r30, 0xb0
    bl fn_8008B140
lbl_fn_8011FA18_000002D4:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8011FA18_000002F4
    lwz r3, 0x1418(r30)
    addi r0, r3, 0x1
    stw r0, 0x1418(r30)
    b lbl_fn_8011FA18_000002F8
lbl_fn_8011FA18_000002F4:
    stw r31, 0x1418(r30)
lbl_fn_8011FA18_000002F8:
    lwz r30, 0x14ac(r30)
lbl_fn_8011FA18_000002FC:
    cmpwi r30, 0x0
    bne lbl_fn_8011FA18_000002BC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FA98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011FA98_00000358
lbl_fn_8011FA98_00000334:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_8011FA98_00000354
    addi r3, r31, 0x1b4
    bl fn_80089AD4
    lwz r0, 0x12a8(r31)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x12a8(r31)
lbl_fn_8011FA98_00000354:
    lwz r31, 0x14ac(r31)
lbl_fn_8011FA98_00000358:
    cmpwi r31, 0x0
    bne lbl_fn_8011FA98_00000334
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FAF0(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmpwi r6, 0x0
    addi r0, r5, 0x1
    stw r0, 0x4c(r3)
    beq lbl_fn_8011FAF0_00000394
    mr r3, r6
    b fn_8035B808
lbl_fn_8011FAF0_00000394:
    stw r4, 0x48(r3)
    blr
}

asm void fn_8011FB18(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmplw r4, r6
    subi r0, r5, 0x1
    stw r0, 0x4c(r3)
    bne lbl_fn_8011FB18_000003C0
    lwz r0, 0x14ac(r6)
    stw r0, 0x48(r3)
    blr
lbl_fn_8011FB18_000003C0:
    mr r3, r6
    b fn_8035B824
    blr
}

asm void fn_8011FB48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011FB48_00000400
lbl_fn_8011FB48_000003E4:
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lwz r31, 0x14ac(r31)
lbl_fn_8011FB48_00000400:
    cmpwi r31, 0x0
    bne lbl_fn_8011FB48_000003E4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FB98(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011FB98_00000440
lbl_fn_8011FB98_00000434:
    mr r3, r31
    bl fn_800D2338
    lwz r31, 0x14ac(r31)
lbl_fn_8011FB98_00000440:
    cmpwi r31, 0x0
    bne lbl_fn_8011FB98_00000434
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FBD8(void)
{
    nofralloc
    lwz r4, 0x48(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x14ac(r4)
    cmpwi r0, 0x0
    beqlr
    mr r3, r4
    b lbl_fn_8011FBD8_00000484
lbl_fn_8011FBD8_00000480:
    mr r3, r0
lbl_fn_8011FBD8_00000484:
    lwz r0, 0x14ac(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011FBD8_00000480
    blr
}

asm void fn_8011FC10(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    b lbl_fn_8011FC10_000004AC
lbl_fn_8011FC10_0000049C:
    lwz r0, 0x58(r3)
    cmpw r4, r0
    beqlr
    lwz r3, 0x14ac(r3)
lbl_fn_8011FC10_000004AC:
    cmpwi r3, 0x0
    bne lbl_fn_8011FC10_0000049C
    li r3, 0x0
    blr
}

asm void fn_8011FC38(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_8077A168@ha
    li r0, 0x0
    addi r3, r3, lbl_8077A168@l
    stw r3, 0x0(r31)
    mr r3, r31
    stw r0, 0x48(r31)
    stw r0, 0x4c(r31)
    stw r0, 0x50(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FC84(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwz r30, 0x48(r3)
    b lbl_fn_8011FC84_00000568
lbl_fn_8011FC84_00000528:
    lwz r0, 0x2bc(r30)
    extlwi r0, r0, 2, 29
    srawi. r0, r0, 31
    beq lbl_fn_8011FC84_00000540
    addi r3, r30, 0xb0
    bl fn_8008B140
lbl_fn_8011FC84_00000540:
    lwz r0, 0x38(r30)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    bne lbl_fn_8011FC84_00000560
    lwz r3, 0x1418(r30)
    addi r0, r3, 0x1
    stw r0, 0x1418(r30)
    b lbl_fn_8011FC84_00000564
lbl_fn_8011FC84_00000560:
    stw r31, 0x1418(r30)
lbl_fn_8011FC84_00000564:
    lwz r30, 0x1424(r30)
lbl_fn_8011FC84_00000568:
    cmpwi r30, 0x0
    bne lbl_fn_8011FC84_00000528
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FD04(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011FD04_000005C4
lbl_fn_8011FD04_000005A0:
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 9
    beq lbl_fn_8011FD04_000005C0
    addi r3, r31, 0x1b4
    bl fn_80089AD4
    lwz r0, 0x12a8(r31)
    rlwinm r0, r0, 0, 10, 8
    stw r0, 0x12a8(r31)
lbl_fn_8011FD04_000005C0:
    lwz r31, 0x1424(r31)
lbl_fn_8011FD04_000005C4:
    cmpwi r31, 0x0
    bne lbl_fn_8011FD04_000005A0
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FD5C(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmpwi r6, 0x0
    addi r0, r5, 0x1
    stw r0, 0x4c(r3)
    beq lbl_fn_8011FD5C_00000600
    mr r3, r6
    b fn_80547DFC
lbl_fn_8011FD5C_00000600:
    stw r4, 0x48(r3)
    blr
}

asm void fn_8011FD84(void)
{
    nofralloc
    lwz r6, 0x48(r3)
    lwz r5, 0x4c(r3)
    cmplw r4, r6
    subi r0, r5, 0x1
    stw r0, 0x4c(r3)
    bne lbl_fn_8011FD84_0000062C
    lwz r0, 0x1424(r6)
    stw r0, 0x48(r3)
    blr
lbl_fn_8011FD84_0000062C:
    mr r3, r6
    b fn_80547E18
    blr
}

asm void fn_8011FDB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lwz r31, 0x48(r3)
    b lbl_fn_8011FDB4_0000066C
lbl_fn_8011FDB4_00000650:
    mr r3, r31
    li r4, 0x2
    bl fn_8016E970
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lwz r31, 0x1424(r31)
lbl_fn_8011FDB4_0000066C:
    cmpwi r31, 0x0
    bne lbl_fn_8011FDB4_00000650
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FE04(void)
{
    nofralloc
    lwz r4, 0x48(r3)
    li r3, 0x0
    cmpwi r4, 0x0
    beqlr
    lwz r0, 0x1424(r4)
    cmpwi r0, 0x0
    beqlr
    mr r3, r4
    b lbl_fn_8011FE04_000006B0
lbl_fn_8011FE04_000006AC:
    mr r3, r0
lbl_fn_8011FE04_000006B0:
    lwz r0, 0x1424(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8011FE04_000006AC
    blr
}

asm void fn_8011FE3C(void)
{
    nofralloc
    lwz r3, 0x48(r3)
    b lbl_fn_8011FE3C_000006D8
lbl_fn_8011FE3C_000006C8:
    lwz r0, 0x58(r3)
    cmpw r4, r0
    beqlr
    lwz r3, 0x1424(r3)
lbl_fn_8011FE3C_000006D8:
    cmpwi r3, 0x0
    bne lbl_fn_8011FE3C_000006C8
    li r3, 0x0
    blr
}

asm void fn_8011FE64(void)
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
    beq lbl_fn_8011FE64_00000724
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8011FE64_00000724
    mr r3, r30
    bl dtor_80084684
lbl_fn_8011FE64_00000724:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FEBC(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_8011FEC0(void)
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
    beq lbl_fn_8011FEC0_00000780
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8011FEC0_00000780
    mr r3, r30
    bl dtor_80084684
lbl_fn_8011FEC0_00000780:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FF18(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_8011FF1C(void)
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
    beq lbl_fn_8011FF1C_000007DC
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8011FF1C_000007DC
    mr r3, r30
    bl dtor_80084684
lbl_fn_8011FF1C_000007DC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8011FF74(void)
{
    nofralloc
    b fn_800D3FA4
}

asm void fn_8011FF78(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    b lbl_fn_8011FF78_00000850
lbl_fn_8011FF78_0000082C:
    lwz r4, 0x0(r31)
    mr r3, r28
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_8011FF78_00000848
    mr r3, r30
    b lbl_fn_8011FF78_0000085C
lbl_fn_8011FF78_00000848:
    addi r31, r31, 0x4
    addi r30, r30, 0x1
lbl_fn_8011FF78_00000850:
    cmpw r30, r29
    blt lbl_fn_8011FF78_0000082C
    li r3, -0x1
lbl_fn_8011FF78_0000085C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8011FFF8(void)
{
    nofralloc
    stwu r1, -0x6b0(r1)
    mflr r0
    stw r0, 0x6b4(r1)
    stmw r24, 0x690(r1)
    mr r31, r3
    mr r26, r4
    mr r25, r5
    addi r3, r1, 0x50
    bl fn_8004203C
    li r24, 0x0
    b lbl_fn_8011FFF8_000008D4
lbl_fn_8011FFF8_000008A8:
    addi r3, r1, 0x50
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8011FFF8_000008D4
    addi r3, r1, 0x50
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_8011FFF8_000008D4
    addi r24, r24, 0x1
lbl_fn_8011FFF8_000008D4:
    addi r3, r1, 0x50
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8011FFF8_000008A8
    mr r3, r31
    mr r4, r24
    li r5, 0x0
    li r6, 0x0
    bl fn_801204A8
    addi r3, r1, 0x44
    bl fn_801206EC
    addi r3, r1, 0x38
    bl fn_801206EC
    addi r3, r1, 0x2c
    bl fn_801206EC
    lwz r12, 0x50(r1)
    mr r4, r26
    mr r5, r25
    addi r3, r1, 0x50
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r25, 0x0
    lis r27, lbl_807370E8@ha
    lis r28, lbl_80737118@ha
    li r30, -0x1
    li r29, 0x0
    b lbl_fn_8011FFF8_00000B38
lbl_fn_8011FFF8_00000944:
    addi r3, r1, 0x50
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    cmpwi r0, 0x3b
    beq lbl_fn_8011FFF8_00000B38
    bl fn_80684600
    mr r26, r3
    addi r3, r1, 0x50
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r24, r3
    extsb. r0, r0
    beq lbl_fn_8011FFF8_00000B38
    mr r4, r25
    mr r3, r31
    addi r25, r25, 0x1
    bl fn_801207BC
    stw r26, 0x0(r3)
    mr r26, r3
    mr r3, r24
    bl fn_800DC6B4
    stw r3, 0x4(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x8(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    addi r4, r27, lbl_807370E8@l
    li r5, 0x8
    bl fn_8011FF78
    stw r3, 0xc(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    addi r4, r28, lbl_80737118@l
    li r5, 0x3
    bl fn_8011FF78
    stw r3, 0x10(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    lwz r4, 0xc(r26)
    mr r24, r3
    subi r0, r4, 0x4
    cmplwi r0, 0x2
    ble lbl_fn_8011FFF8_00000A88
    subi r0, r4, 0x2
    cmplwi r0, 0x1
    ble lbl_fn_8011FFF8_00000A54
    cmpwi r4, 0x1
    beq lbl_fn_8011FFF8_00000A20
    cmpwi r4, 0x0
    beq lbl_fn_8011FFF8_00000A88
    cmpwi r4, 0x7
    beq lbl_fn_8011FFF8_00000ABC
    b lbl_fn_8011FFF8_00000AC4
lbl_fn_8011FFF8_00000A20:
    addi r3, r1, 0x44
    bl fn_801207CC
    stw r3, 0x2c(r26)
    mr r4, r24
    addi r3, r1, 0x20
    bl fn_8003E4A4
    addi r3, r1, 0x44
    addi r4, r1, 0x20
    bl fn_801207D4
    addi r3, r1, 0x20
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8011FFF8_00000AC8
lbl_fn_8011FFF8_00000A54:
    addi r3, r1, 0x38
    bl fn_801207CC
    stw r3, 0x2c(r26)
    mr r4, r24
    addi r3, r1, 0x14
    bl fn_8003E4A4
    addi r3, r1, 0x38
    addi r4, r1, 0x14
    bl fn_801207D4
    addi r3, r1, 0x14
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8011FFF8_00000AC8
lbl_fn_8011FFF8_00000A88:
    addi r3, r1, 0x2c
    bl fn_801207CC
    stw r3, 0x2c(r26)
    mr r4, r24
    addi r3, r1, 0x8
    bl fn_8003E4A4
    addi r3, r1, 0x2c
    addi r4, r1, 0x8
    bl fn_801207D4
    addi r3, r1, 0x8
    li r4, -0x1
    bl dtor_80013D60
    b lbl_fn_8011FFF8_00000AC8
lbl_fn_8011FFF8_00000ABC:
    stw r29, 0x2c(r26)
    b lbl_fn_8011FFF8_00000AC8
lbl_fn_8011FFF8_00000AC4:
    stw r30, 0x2c(r26)
lbl_fn_8011FFF8_00000AC8:
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1c(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x20(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_80684600
    stw r3, 0x24(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC6B4
    stw r3, 0x28(r26)
    addi r3, r1, 0x50
    bl fn_8005B3CC
    bl fn_800DC12C
    stw r3, 0x30(r26)
lbl_fn_8011FFF8_00000B38:
    addi r3, r1, 0x50
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_8011FFF8_00000944
    addi r3, r1, 0x44
    bl fn_80120C20
    cmpwi r3, 0x0
    bne lbl_fn_8011FFF8_00000BB8
    addi r3, r1, 0x44
    bl fn_801207CC
    mr r4, r3
    addi r3, r31, 0xc
    li r5, 0x0
    li r6, 0x0
    bl fn_80120C30
    li r24, 0x0
    b lbl_fn_8011FFF8_00000BA8
lbl_fn_8011FFF8_00000B7C:
    mr r4, r24
    addi r3, r1, 0x44
    bl fn_80120D34
    bl fn_8004212C
    mr r30, r3
    mr r4, r24
    addi r3, r31, 0xc
    bl fn_80120D24
    mr r4, r30
    bl fn_80237654
    addi r24, r24, 0x1
lbl_fn_8011FFF8_00000BA8:
    addi r3, r1, 0x44
    bl fn_801207CC
    cmplw r24, r3
    blt lbl_fn_8011FFF8_00000B7C
lbl_fn_8011FFF8_00000BB8:
    addi r3, r1, 0x38
    bl fn_80120C20
    cmpwi r3, 0x0
    bne lbl_fn_8011FFF8_00000C28
    addi r3, r1, 0x38
    bl fn_801207CC
    mr r4, r3
    addi r3, r31, 0x18
    li r5, 0x0
    li r6, 0x0
    bl fn_80120D44
    li r24, 0x0
    b lbl_fn_8011FFF8_00000C18
lbl_fn_8011FFF8_00000BEC:
    mr r4, r24
    addi r3, r1, 0x38
    bl fn_80120D34
    bl fn_8004212C
    mr r30, r3
    mr r4, r24
    addi r3, r31, 0x18
    bl fn_80120E38
    mr r4, r30
    bl fn_8023780C
    addi r24, r24, 0x1
lbl_fn_8011FFF8_00000C18:
    addi r3, r1, 0x38
    bl fn_801207CC
    cmplw r24, r3
    blt lbl_fn_8011FFF8_00000BEC
lbl_fn_8011FFF8_00000C28:
    addi r3, r1, 0x2c
    bl fn_80120C20
    cmpwi r3, 0x0
    bne lbl_fn_8011FFF8_00000C98
    addi r3, r1, 0x2c
    bl fn_801207CC
    mr r4, r3
    addi r3, r31, 0x24
    li r5, 0x0
    li r6, 0x0
    bl fn_80120E48
    li r24, 0x0
    b lbl_fn_8011FFF8_00000C88
lbl_fn_8011FFF8_00000C5C:
    mr r4, r24
    addi r3, r1, 0x2c
    bl fn_80120D34
    bl fn_8004212C
    mr r30, r3
    mr r4, r24
    addi r3, r31, 0x24
    bl fn_80120F4C
    mr r4, r30
    bl fn_8012044C
    addi r24, r24, 0x1
lbl_fn_8011FFF8_00000C88:
    addi r3, r1, 0x2c
    bl fn_801207CC
    cmplw r24, r3
    blt lbl_fn_8011FFF8_00000C5C
lbl_fn_8011FFF8_00000C98:
    addi r3, r1, 0x2c
    li r4, -0x1
    bl fn_80120700
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_80120700
    addi r3, r1, 0x44
    li r4, -0x1
    bl fn_80120700
    lmw r24, 0x690(r1)
    lwz r0, 0x6b4(r1)
    mtlr r0
    addi r1, r1, 0x6b0
    blr
}

asm void fn_8012044C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplw r4, r3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_8012044C_00000D10
    mr r3, r31
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r31
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8012044C_00000D10:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801204A8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_801204A8_00000D90
    mulli r3, r4, 0x34
    mr r4, r5
    la r5, lbl_8087D9CC
    la r6, lbl_8087D9C8
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_801206E8@ha
    mr r7, r30
    addi r4, r4, fn_801206E8@l
    li r5, 0x0
    li r6, 0x34
    bl fn_80695720
    mr r31, r3
    b lbl_fn_801204A8_00000D94
lbl_fn_801204A8_00000D90:
    li r31, 0x0
lbl_fn_801204A8_00000D94:
    lwz r0, 0x8(r29)
    cmpwi r0, 0x0
    beq lbl_fn_801204A8_00000F44
    lwz r0, 0x0(r29)
    mr r4, r30
    cmplw r30, r0
    ble lbl_fn_801204A8_00000DB4
    mr r4, r0
lbl_fn_801204A8_00000DB4:
    cmplwi r4, 0x0
    li r3, 0x0
    ble lbl_fn_801204A8_00000F30
    srwi. r0, r4, 1
    mtctr r0
    beq lbl_fn_801204A8_00000EB8
lbl_fn_801204A8_00000DCC:
    lwz r0, 0x8(r29)
    add r5, r31, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r31, r3
    addi r3, r3, 0x34
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r6)
    stw r0, 0x28(r5)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r5)
    lwz r0, 0x30(r6)
    stw r0, 0x30(r5)
    add r5, r31, r3
    lwz r0, 0x8(r29)
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r31, r3
    addi r3, r3, 0x34
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r6)
    stw r0, 0x28(r5)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r5)
    lwz r0, 0x30(r6)
    stw r0, 0x30(r5)
    bdnz lbl_fn_801204A8_00000DCC
    andi. r4, r4, 0x1
    beq lbl_fn_801204A8_00000F30
lbl_fn_801204A8_00000EB8:
    mtctr r4
lbl_fn_801204A8_00000EBC:
    lwz r0, 0x8(r29)
    add r5, r31, r3
    add r6, r0, r3
    lwzx r0, r3, r0
    stwx r0, r31, r3
    addi r3, r3, 0x34
    lwz r0, 0x4(r6)
    stw r0, 0x4(r5)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r5)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r5)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r5)
    lfs f2, 0x1c(r6)
    psq_l f1, 0x14(r6), 0, 0
    psq_st f1, 0x14(r5), 0, 0
    stfs f2, 0x1c(r5)
    lfs f0, 0x20(r6)
    stfs f0, 0x20(r5)
    lwz r0, 0x24(r6)
    stw r0, 0x24(r5)
    lwz r0, 0x28(r6)
    stw r0, 0x28(r5)
    lwz r0, 0x2c(r6)
    stw r0, 0x2c(r5)
    lwz r0, 0x30(r6)
    stw r0, 0x30(r5)
    bdnz lbl_fn_801204A8_00000EBC
lbl_fn_801204A8_00000F30:
    lwz r3, 0x8(r29)
    cmpwi r3, 0x0
    beq lbl_fn_801204A8_00000F44
    subi r3, r3, 0x10
    bl fn_80084C24
lbl_fn_801204A8_00000F44:
    stw r31, 0x8(r29)
    stw r30, 0x0(r29)
    stw r30, 0x4(r29)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801206E8(void)
{
    nofralloc
    blr
}

asm void fn_801206EC(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    blr
}

asm void fn_80120700(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_fn_80120700_0000101C
    beq lbl_fn_80120700_0000100C
    beq lbl_fn_80120700_0000100C
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80120700_0000100C
    lwz r30, 0x4(r3)
    mulli r4, r30, 0xc
    subf r0, r30, r30
    stw r0, 0x4(r3)
    add r31, r5, r4
    b lbl_fn_80120700_00000FFC
lbl_fn_80120700_00000FDC:
    subic. r31, r31, 0xc
    beq lbl_fn_80120700_00000FF8
    lwz r0, 0x0(r31)
    srwi. r0, r0, 31
    beq lbl_fn_80120700_00000FF8
    lwz r3, 0x8(r31)
    bl dtor_80084684
lbl_fn_80120700_00000FF8:
    subi r30, r30, 0x1
lbl_fn_80120700_00000FFC:
    cmpwi r30, 0x0
    bne lbl_fn_80120700_00000FDC
    lwz r3, 0x0(r28)
    bl dtor_80084684
lbl_fn_80120700_0000100C:
    cmpwi r29, 0x0
    ble lbl_fn_80120700_0000101C
    mr r3, r28
    bl dtor_80084684
lbl_fn_80120700_0000101C:
    lwz r31, 0x1c(r1)
    mr r3, r28
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801207BC(void)
{
    nofralloc
    mulli r0, r4, 0x34
    lwz r3, 0x8(r3)
    add r3, r3, r0
    blr
}

asm void fn_801207CC(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_801207D4(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    stw r31, 0x4c(r1)
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    lwz r0, 0x4(r3)
    lwz r5, 0x8(r3)
    cmplw r0, r5
    bge lbl_fn_801207D4_00001114
    mulli r0, r0, 0xc
    lwz r3, 0x0(r3)
    add. r31, r3, r0
    beq lbl_fn_801207D4_00001104
    lwz r3, 0x0(r4)
    srwi. r0, r3, 31
    bne lbl_fn_801207D4_000010C0
    stw r3, 0x0(r31)
    lwz r0, 0x4(r4)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r4)
    stw r0, 0x8(r31)
    b lbl_fn_801207D4_00001104
lbl_fn_801207D4_000010C0:
    li r0, 0x0
    stw r0, 0x0(r31)
    lwz r4, 0x4(r4)
    mr r3, r31
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    mr r3, r31
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x8(r30)
    li r4, 0x0
    lwz r0, 0x4(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_801207D4_00001104:
    lwz r3, 0x4(r29)
    addi r0, r3, 0x1
    stw r0, 0x4(r29)
    b lbl_fn_801207D4_00001484
lbl_fn_801207D4_00001114:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    subf r0, r5, r0
    cmplwi r0, 0x1
    bge lbl_fn_801207D4_00001148
    lis r3, __files@ha
    lis r4, lbl_80737138@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80737138@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801207D4_00001148:
    li r5, 0x0
    addi r4, r29, 0x8
    lis r3, 0x1555
    stw r5, 0x24(r1)
    addi r0, r3, 0x5555
    stw r5, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r5, 0x34(r1)
    lwz r3, 0x4(r29)
    lwz r31, 0x8(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x18(r1)
    ble lbl_fn_801207D4_000011AC
    lis r3, __files@ha
    lis r4, lbl_80737138@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80737138@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801207D4_000011AC:
    lis r3, 0x71c
    addi r0, r3, 0x71c7
    cmplw r31, r0
    bge lbl_fn_801207D4_000011FC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x18(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x20
    srwi r4, r4, 2
    stw r4, 0x20(r1)
    cmplw r4, r0
    bge lbl_fn_801207D4_000011F0
    addi r3, r1, 0x18
lbl_fn_801207D4_000011F0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801207D4_00001240
lbl_fn_801207D4_000011FC:
    lis r3, 0xe39
    subi r0, r3, 0x1c72
    cmplw r31, r0
    bge lbl_fn_801207D4_00001238
    addi r3, r31, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x1c(r1)
    cmplw r3, r0
    addi r3, r1, 0x1c
    bge lbl_fn_801207D4_0000122C
    addi r3, r1, 0x18
lbl_fn_801207D4_0000122C:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_801207D4_00001240
lbl_fn_801207D4_00001238:
    lis r3, 0x1555
    addi r28, r3, 0x5555
lbl_fn_801207D4_00001240:
    lis r3, 0x1555
    addi r0, r3, 0x5555
    cmplw r28, r0
    ble lbl_fn_801207D4_00001270
    lis r3, __files@ha
    lis r4, lbl_80737138@ha
    addi r3, r3, __files@l
    addi r4, r4, lbl_80737138@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801207D4_00001270:
    mulli r3, r28, 0xc
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_801207D4_000012A4
    lis r3, __files@ha
    lis r4, lbl_80778910@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80778910@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801207D4_000012A4:
    lwz r3, 0x28(r1)
    li r0, 0x0
    stw r31, 0x24(r1)
    mulli r4, r3, 0xc
    stw r28, 0x2c(r1)
    lwz r3, 0x4(r29)
    stw r3, 0x34(r1)
    mulli r3, r3, 0xc
    add r3, r31, r3
    add. r31, r4, r3
    beq lbl_fn_801207D4_00001334
    lwz r4, 0x0(r30)
    srwi. r3, r4, 31
    bne lbl_fn_801207D4_000012F4
    stw r4, 0x0(r31)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r31)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r31)
    b lbl_fn_801207D4_00001334
lbl_fn_801207D4_000012F4:
    stw r0, 0x0(r31)
    mr r3, r31
    lwz r4, 0x4(r30)
    stw r0, 0x4(r31)
    stw r0, 0x8(r31)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r31
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x8(r30)
    li r4, 0x0
    lwz r0, 0x4(r30)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_801207D4_00001334:
    lwz r4, 0x28(r1)
    lis r3, 0x2aab
    subi r6, r3, 0x5555
    lwz r0, 0x34(r1)
    addi r3, r4, 0x1
    stw r3, 0x28(r1)
    lwz r3, 0x24(r1)
    lwz r4, 0x4(r29)
    lwz r28, 0x0(r29)
    mulli r5, r4, 0xc
    mr r4, r28
    add r5, r28, r5
    subf r5, r28, r5
    mulhw r5, r6, r5
    srawi r5, r5, 1
    srwi r6, r5, 31
    add r30, r5, r6
    subf r0, r30, r0
    stw r0, 0x34(r1)
    mulli r31, r30, 0xc
    mulli r0, r0, 0xc
    mr r5, r31
    add r3, r3, r0
    bl memcpy
    mr r3, r28
    mr r5, r31
    li r4, 0x0
    bl memset
    lwz r3, 0x28(r1)
    addi r31, r1, 0x24
    lwz r0, 0x2c(r1)
    add r3, r3, r30
    stw r3, 0x28(r1)
    lwz r3, 0x8(r29)
    stw r0, 0x8(r29)
    stw r3, 0x2c(r1)
    lwz r0, 0x24(r1)
    lwz r3, 0x0(r29)
    stw r0, 0x0(r29)
    stw r3, 0x24(r1)
    lwz r0, 0x28(r1)
    lwz r5, 0x4(r29)
    stw r0, 0x4(r29)
    mulli r0, r5, 0xc
    lwz r3, 0x34(r1)
    lwz r4, 0x24(r1)
    mulli r3, r3, 0xc
    stw r5, 0x28(r1)
    add r29, r4, r3
    add r30, r29, r0
    b lbl_fn_801207D4_0000141C
lbl_fn_801207D4_00001400:
    subic. r30, r30, 0xc
    beq lbl_fn_801207D4_0000141C
    lwz r0, 0x0(r30)
    srwi. r0, r0, 31
    beq lbl_fn_801207D4_0000141C
    lwz r3, 0x8(r30)
    bl dtor_80084684
lbl_fn_801207D4_0000141C:
    cmplw r30, r29
    bgt lbl_fn_801207D4_00001400
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x28(r1)
    beq lbl_fn_801207D4_00001484
    lwz r3, 0x24(r1)
    cmpwi r3, 0x0
    beq lbl_fn_801207D4_00001484
    mulli r0, r0, 0xc
    li r30, 0x0
    stw r30, 0x28(r1)
    add r29, r3, r0
    b lbl_fn_801207D4_00001474
lbl_fn_801207D4_00001454:
    subic. r29, r29, 0xc
    beq lbl_fn_801207D4_00001470
    lwz r0, 0x0(r29)
    srwi. r0, r0, 31
    beq lbl_fn_801207D4_00001470
    lwz r3, 0x8(r29)
    bl dtor_80084684
lbl_fn_801207D4_00001470:
    subi r30, r30, 0x1
lbl_fn_801207D4_00001474:
    cmpwi r30, 0x0
    bne lbl_fn_801207D4_00001454
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_801207D4_00001484:
    lwz r0, 0x54(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_80120C20(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cntlzw r0, r0
    srwi r3, r0, 5
    blr
}

asm void fn_80120C30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    beq lbl_fn_80120C30_00001514
    mulli r3, r4, 0xc
    mr r4, r5
    la r5, lbl_8087D9C4
    la r6, lbl_8087D9C0
    addi r3, r3, 0x10
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80237518@ha
    lis r5, fn_802375C4@ha
    mr r7, r26
    li r6, 0xc
    addi r4, r4, fn_80237518@l
    addi r5, r5, fn_802375C4@l
    bl fn_80695720
    mr r30, r3
    b lbl_fn_80120C30_00001518
lbl_fn_80120C30_00001514:
    li r30, 0x0
lbl_fn_80120C30_00001518:
    lwz r0, 0x8(r25)
    cmpwi r0, 0x0
    beq lbl_fn_80120C30_00001588
    lwz r0, 0x0(r25)
    mr r31, r26
    cmplw r26, r0
    ble lbl_fn_80120C30_00001538
    mr r31, r0
lbl_fn_80120C30_00001538:
    mr r28, r30
    li r27, 0x0
    li r29, 0x0
    b lbl_fn_80120C30_00001570
lbl_fn_80120C30_00001548:
    lwz r0, 0x8(r25)
    addi r3, r28, 0x4
    add r4, r0, r29
    lwzx r0, r29, r0
    stw r0, 0x0(r28)
    addi r4, r4, 0x4
    bl fn_804741C0
    addi r29, r29, 0xc
    addi r28, r28, 0xc
    addi r27, r27, 0x1
lbl_fn_80120C30_00001570:
    cmplw r27, r31
    blt lbl_fn_80120C30_00001548
    lis r4, fn_802375C4@ha
    lwz r3, 0x8(r25)
    addi r4, r4, fn_802375C4@l
    bl fn_80695A50
lbl_fn_80120C30_00001588:
    stw r30, 0x8(r25)
    stw r26, 0x0(r25)
    stw r26, 0x4(r25)
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
