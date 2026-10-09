#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_27(void);
extern void _savegpr_27(void);
extern void fn_80626AC0(void);
extern void fn_80626C60(void);
extern void fn_80629810(void);
extern void fn_80629830(void);
extern void fn_80629850(void);
extern void fn_80629890(void);
extern void fn_80629E20(void);
extern void fn_80629E90(void);
extern void fn_80633EC0(void);
extern void fn_80633F70(void);
extern void fn_80634020(void);
extern void fn_80635A74(void);
extern void fn_80637318(void);
extern void fn_806384A4(void);
extern void fn_8063DBB0(void);
extern void fn_8063DE3C(void);
extern void fn_8063DE9C(void);
extern void fn_8063E05C(void);
extern void fn_8063E10C(void);
extern void fn_8063E24C(void);
extern void fn_8063E424(void);
extern void fn_8063E4AC(void);
extern void fn_8063E66C(void);
extern void fn_8063E6CC(void);
extern void fn_8063E728(void);
extern void fn_8063E750(void);
extern void fn_8063E8A4(void);
extern void fn_8063ED54(void);
extern void fn_80644F4C(void);
extern void fn_80647ED0(void);
extern void fn_8064E72C(void);
extern void fn_8068236C(void);

/* External data declarations */
extern u8 lbl_807B43D0[];
extern u8 lbl_807B4400[];
extern u8 lbl_807B446C[];
extern u8 lbl_807B44AC[];
extern u8 lbl_807B44F0[];
extern u8 lbl_807B4530[];
extern u8 lbl_807B45A0[];
extern u8 lbl_807B45CC[];
extern u8 lbl_807B45F8[];
extern u8 lbl_8081FAF0[];
extern u8 lbl_80820018[];

/* Small data declarations */
extern u32 lbl_8087EADC;
extern u32 lbl_8087EAE4;

/* Function declarations */
void fn_80632414(void);
void fn_80632430(void);
void fn_80632520(void);
void fn_806327B8(void);
void fn_8063297C(void);
void fn_80632A44(void);
void fn_80632B00(void);
void fn_80632FFC(void);
void fn_806330B4(void);
void fn_80633140(void);
void fn_80633180(void);
void fn_806331C8(void);
void fn_80633214(void);
void fn_80633294(void);
void fn_806332A4(void);
void fn_806332B4(void);
void fn_806332CC(void);
void fn_806333C8(void);
void fn_80633434(void);
void fn_8063346C(void);
void fn_80633504(void);
void fn_806335A4(void);
void fn_8063367C(void);
void fn_8063374C(void);
void fn_8063381C(void);
void fn_80633898(void);
void fn_806338F4(void);
void fn_8063395C(void);
void fn_80633AE8(void);
void fn_80633B08(void);
void fn_80633B80(void);

asm void fn_80632414(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r3, 0x64e(r3)
    subi r0, r3, 0x5
    cntlzw r0, r0
    extrwi r3, r0, 8, 19
    blr
}

asm void fn_80632430(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r7, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r7, r7, lbl_80820018@l
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, 0x27c0(r7)
    cmplwi r0, 0x3
    blt lbl_fn_80632430_00000070
    lis r3, 0xd
    lis r4, lbl_807B43D0@ha
    lbz r6, 0x27bd(r7)
    mr r5, r30
    lbz r8, 0x27be(r7)
    mr r7, r31
    addi r3, r3, 0x2
    addi r4, r4, lbl_807B43D0@l
    bl fn_80629890
lbl_fn_80632430_00000070:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r4, 0x645(r3)
    rlwinm. r0, r4, 0, 28, 28
    bne lbl_fn_80632430_000000A0
    lbz r0, 0x644(r3)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_fn_80632430_000000A0
    rlwinm. r0, r4, 0, 27, 27
    bne lbl_fn_80632430_000000A0
    li r3, 0x4
    b lbl_fn_80632430_000000F4
lbl_fn_80632430_000000A0:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27bd(r3)
    cmplw r0, r30
    bne lbl_fn_80632430_000000C0
    lbz r0, 0x27be(r3)
    cmplw r0, r31
    beq lbl_fn_80632430_000000F0
lbl_fn_80632430_000000C0:
    mr r3, r30
    mr r4, r31
    bl fn_8063E8A4
    clrlwi. r0, r3, 24
    beq lbl_fn_80632430_000000E8
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    stb r30, 0x27bd(r3)
    stb r31, 0x27be(r3)
    b lbl_fn_80632430_000000F0
lbl_fn_80632430_000000E8:
    li r3, 0x3
    b lbl_fn_80632430_000000F4
lbl_fn_80632430_000000F0:
    li r3, 0x0
lbl_fn_80632430_000000F4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80632520(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r0, 0x10(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80632520_0000035C
    lis r6, lbl_80820018@ha
    addi r6, r6, lbl_80820018@l
    lbz r0, 0x64e(r6)
    cmpwi r0, 0x2
    beq lbl_fn_80632520_0000029C
    bge lbl_fn_80632520_00000154
    cmpwi r0, 0x0
    beq lbl_fn_80632520_00000160
    bge lbl_fn_80632520_00000188
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_00000154:
    cmpwi r0, 0x4
    bge lbl_fn_80632520_0000038C
    b lbl_fn_80632520_00000300
lbl_fn_80632520_00000160:
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x64e(r6)
    addi r3, r6, 0x574
    li r4, 0x1
    li r5, 0x4
    stb r0, 0x64f(r6)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_00000188:
    li r0, 0x4
    li r3, 0x2
    stb r3, 0x64e(r6)
    stb r0, 0x64f(r6)
    b lbl_fn_80632520_000001B0
    stb r0, 0x64f(r6)
    stb r0, 0x64e(r6)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_80632520_000001D4
lbl_fn_80632520_000001B0:
    addi r3, r6, 0x574
    li r4, 0x1
    li r5, 0x1
    bl fn_80629E20
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80632520_000001D4
    bl fn_8063E728
lbl_fn_80632520_000001D4:
    lis r31, lbl_80820018@ha
    li r5, 0x3
    addi r31, r31, lbl_80820018@l
    addi r3, r31, 0x648
    mr r4, r3
    bl memcpy
    lbz r0, 0x64e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80632520_00000218
    cmplwi r0, 0x1
    beq lbl_fn_80632520_00000218
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80632520_00000218
    addi r4, r31, 0x648
    bl fn_8063E424
lbl_fn_80632520_00000218:
    lis r0, lbl_80820018@ha
    addic. r31, r0, 0x18
    beq lbl_fn_80632520_00000280
    lbz r0, 0x64e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80632520_00000280
    cmplwi r0, 0x1
    beq lbl_fn_80632520_00000280
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_80632520_00000280
    cmplw r31, r31
    beq lbl_fn_80632520_00000274
    mr r3, r31
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r3, r31
    mr r4, r31
    li r5, 0x1f
    bl fn_8068236C
lbl_fn_80632520_00000274:
    mr r3, r30
    mr r4, r31
    bl fn_8063E10C
lbl_fn_80632520_00000280:
    lis r5, lbl_80820018@ha
    addi r5, r5, lbl_80820018@l
    lbz r3, 0x20(r5)
    addi r4, r5, 0x22
    lbz r5, 0x21(r5)
    bl fn_80637318
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_0000029C:
    lbz r3, 0x64f(r6)
    subi r3, r3, 0x1
    clrlwi. r0, r3, 24
    stb r3, 0x64f(r6)
    bne lbl_fn_80632520_000002D8
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x64e(r6)
    addi r3, r6, 0x574
    li r4, 0x1
    li r5, 0x4
    stb r0, 0x64f(r6)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_000002D8:
    addi r3, r6, 0x574
    li r4, 0x1
    li r5, 0x1
    bl fn_80629E20
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80632520_0000038C
    bl fn_8063E728
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_00000300:
    lbz r3, 0x64f(r6)
    subi r3, r3, 0x1
    clrlwi. r0, r3, 24
    stb r3, 0x64f(r6)
    bne lbl_fn_80632520_0000033C
    li r3, 0x0
    li r0, 0x5
    stb r3, 0x64e(r6)
    addi r3, r6, 0x574
    li r4, 0x1
    li r5, 0x4
    stb r0, 0x64f(r6)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_0000033C:
    addi r3, r6, 0x574
    li r4, 0x1
    li r5, 0x1
    bl fn_80629E20
    bl fn_8063E66C
    bl fn_8063E750
    bl fn_80635A74
    b lbl_fn_80632520_0000038C
lbl_fn_80632520_0000035C:
    cmplwi r0, 0x2
    bne lbl_fn_80632520_0000038C
    lis r3, lbl_80820018@ha
    li r0, 0x0
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x5a8(r3)
    cmpwi r12, 0x0
    stw r0, 0x5a8(r3)
    beq lbl_fn_80632520_0000038C
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80632520_0000038C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806327B8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r3, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r3, r3, lbl_80820018@l
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_806327B8_000003E0
    lis r3, 0xd
    lis r4, lbl_807B4400@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B4400@l
    bl fn_80629810
lbl_fn_806327B8_000003E0:
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    lwz r12, 0x620(r31)
    cmpwi r12, 0x0
    beq lbl_fn_806327B8_0000040C
    li r0, 0x0
    li r3, 0x0
    stw r0, 0x620(r31)
    mtctr r12
    bctrl
    b lbl_fn_806327B8_00000550
lbl_fn_806327B8_0000040C:
    lbz r0, 0x64e(r31)
    cmpwi r0, 0x0
    bne lbl_fn_806327B8_00000550
    bl fn_80647ED0
    li r6, 0x12
    li r5, 0x800
    li r4, 0x0
    li r0, 0x4
    li r3, 0x2
    sth r6, 0x16a0(r31)
    sth r5, 0x16a2(r31)
    sth r4, 0x16a4(r31)
    sth r6, 0x169c(r31)
    sth r5, 0x169e(r31)
    sth r4, 0x16a6(r31)
    stb r3, 0x64e(r31)
    stb r0, 0x64f(r31)
    b lbl_fn_806327B8_00000468
    stb r4, 0x64e(r31)
    stb r0, 0x64f(r31)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_806327B8_0000048C
lbl_fn_806327B8_00000468:
    addi r3, r31, 0x574
    li r4, 0x1
    li r5, 0x1
    bl fn_80629E20
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_806327B8_0000048C
    bl fn_8063E728
lbl_fn_806327B8_0000048C:
    lis r31, lbl_80820018@ha
    li r5, 0x3
    addi r31, r31, lbl_80820018@l
    addi r3, r31, 0x648
    mr r4, r3
    bl memcpy
    lbz r0, 0x64e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806327B8_000004D0
    cmplwi r0, 0x1
    beq lbl_fn_806327B8_000004D0
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_806327B8_000004D0
    addi r4, r31, 0x648
    bl fn_8063E424
lbl_fn_806327B8_000004D0:
    lis r0, lbl_80820018@ha
    addic. r31, r0, 0x18
    beq lbl_fn_806327B8_00000538
    lbz r0, 0x64e(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806327B8_00000538
    cmplwi r0, 0x1
    beq lbl_fn_806327B8_00000538
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_806327B8_00000538
    cmplw r31, r31
    beq lbl_fn_806327B8_0000052C
    mr r3, r31
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r3, r31
    mr r4, r31
    li r5, 0x1f
    bl fn_8068236C
lbl_fn_806327B8_0000052C:
    mr r3, r30
    mr r4, r31
    bl fn_8063E10C
lbl_fn_806327B8_00000538:
    lis r5, lbl_80820018@ha
    addi r5, r5, lbl_80820018@l
    lbz r3, 0x20(r5)
    addi r4, r5, 0x22
    lbz r5, 0x21(r5)
    bl fn_80637318
lbl_fn_806327B8_00000550:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063297C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8063297C_000005D4
    lbz r0, 0x2(r3)
    lis r6, lbl_8081FAF0@ha
    lbz r4, 0x1(r3)
    addi r6, r6, lbl_8081FAF0@l
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x7c(r6)
    clrlwi r4, r0, 16
    addi r0, r4, 0x4
    lbz r4, 0x5(r3)
    lbz r5, 0x4(r3)
    slwi r3, r4, 8
    add r3, r5, r3
    sth r0, 0x7e(r6)
    clrlwi r3, r3, 16
    bl fn_80644F4C
    li r3, 0x69b
    li r4, 0x1e
    li r5, 0x14
    li r6, 0xa
    bl fn_8063E4AC
lbl_fn_8063297C_000005D4:
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    li r4, 0x3
    stb r4, 0x64e(r3)
    stb r0, 0x64f(r3)
    b lbl_fn_8063297C_00000604
    stb r0, 0x64f(r3)
    stb r0, 0x64e(r3)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_8063297C_00000620
lbl_fn_8063297C_00000604:
    addi r3, r3, 0x574
    li r4, 0x1
    li r5, 0x1
    bl fn_80629E20
    bl fn_8063E66C
    bl fn_8063E750
    bl fn_80635A74
lbl_fn_8063297C_00000620:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80632A44(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r5, r5, lbl_80820018@l
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80632A44_0000069C
    lbz r0, 0x1(r3)
    stb r0, 0x636(r5)
    lbz r0, 0x3(r3)
    lbz r4, 0x2(r3)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x638(r5)
    lbz r0, 0x4(r3)
    stb r0, 0x63a(r5)
    lbz r0, 0x6(r3)
    lbz r4, 0x5(r3)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0x63c(r5)
    lbz r0, 0x8(r3)
    lbz r3, 0x7(r3)
    slwi r0, r0, 8
    add r0, r3, r0
    sth r0, 0x63e(r5)
lbl_fn_80632A44_0000069C:
    lis r3, lbl_80820018@ha
    li r0, 0x4
    addi r3, r3, lbl_80820018@l
    stb r0, 0x64e(r3)
    stb r0, 0x64f(r3)
    b lbl_fn_80632A44_000006C8
    stb r0, 0x64f(r3)
    stb r0, 0x64e(r3)
    bl fn_80629E20
    bl fn_8063DBB0
    b lbl_fn_80632A44_000006DC
lbl_fn_80632A44_000006C8:
    addi r3, r3, 0x574
    li r4, 0x1
    li r5, 0x1
    bl fn_80629E20
    bl fn_8063E6CC
lbl_fn_80632A44_000006DC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80632B00(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_80820018@ha
    lis r30, lbl_807B43D0@ha
    addi r31, r31, lbl_80820018@l
    li r0, 0x0
    lwz r28, 0x58c(r31)
    addi r30, r30, lbl_807B43D0@l
    stw r0, 0x58c(r31)
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80632B00_00000BD0
    li r0, 0x5
    li r4, 0x18
    stb r0, 0x64e(r31)
    lbz r0, 0x1(r3)
    stb r0, 0x640(r31)
    clrlwi. r0, r0, 31
    lbz r0, 0x2(r3)
    stb r0, 0x641(r31)
    lbz r0, 0x3(r3)
    stb r0, 0x642(r31)
    lbz r0, 0x4(r3)
    stb r0, 0x643(r31)
    lbz r0, 0x5(r3)
    stb r0, 0x644(r31)
    lbz r0, 0x6(r3)
    stb r0, 0x645(r31)
    lbz r0, 0x7(r3)
    stb r0, 0x646(r31)
    lbz r0, 0x8(r3)
    stb r0, 0x647(r31)
    sth r4, 0x654(r31)
    beq lbl_fn_80632B00_00000788
    ori r0, r4, 0xc00
    sth r0, 0x654(r31)
lbl_fn_80632B00_00000788:
    lbz r0, 0x640(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80632B00_000007A8
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x654(r3)
    ori r0, r0, 0xc000
    sth r0, 0x654(r3)
lbl_fn_80632B00_000007A8:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x636(r3)
    cmplwi r0, 0x3
    blt lbl_fn_80632B00_00000848
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 30, 30
    bne lbl_fn_80632B00_000007D4
    lhz r0, 0x654(r3)
    ori r0, r0, 0x1102
    sth r0, 0x654(r3)
lbl_fn_80632B00_000007D4:
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 29, 29
    bne lbl_fn_80632B00_000007F4
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x654(r3)
    ori r0, r0, 0x2204
    sth r0, 0x654(r3)
lbl_fn_80632B00_000007F4:
    lbz r3, 0x643(r31)
    rlwinm. r0, r3, 0, 30, 30
    bne lbl_fn_80632B00_00000808
    rlwinm. r0, r3, 0, 29, 29
    beq lbl_fn_80632B00_00000848
lbl_fn_80632B00_00000808:
    lbz r0, 0x644(r31)
    rlwinm. r0, r0, 0, 24, 24
    bne lbl_fn_80632B00_00000828
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x654(r3)
    ori r0, r0, 0x300
    sth r0, 0x654(r3)
lbl_fn_80632B00_00000828:
    lbz r0, 0x645(r31)
    clrlwi. r0, r0, 31
    bne lbl_fn_80632B00_00000848
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x654(r3)
    ori r0, r0, 0x3000
    sth r0, 0x654(r3)
lbl_fn_80632B00_00000848:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x5
    blt lbl_fn_80632B00_00000870
    lis r3, 0xd
    lhz r5, 0x654(r4)
    addi r3, r3, 0x4
    addi r4, r30, 0x44
    bl fn_80629830
lbl_fn_80632B00_00000870:
    lbz r3, 0x641(r31)
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    li r5, 0x0
    rlwinm. r0, r3, 0, 28, 28
    sth r5, 0x656(r4)
    stb r5, 0x1908(r4)
    beq lbl_fn_80632B00_000008C8
    rlwinm. r0, r3, 0, 27, 27
    li r0, 0x1
    sth r0, 0x656(r4)
    beq lbl_fn_80632B00_000008A8
    ori r0, r0, 0x2
    sth r0, 0x656(r4)
lbl_fn_80632B00_000008A8:
    lbz r0, 0x641(r31)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_80632B00_000008C8
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    ori r0, r0, 0x4
    sth r0, 0x656(r3)
lbl_fn_80632B00_000008C8:
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80632B00_000008E8
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    ori r0, r0, 0x8
    sth r0, 0x656(r3)
lbl_fn_80632B00_000008E8:
    lbz r0, 0x644(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_80632B00_00000908
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    ori r0, r0, 0x10
    sth r0, 0x656(r3)
lbl_fn_80632B00_00000908:
    lbz r0, 0x644(r31)
    rlwinm. r0, r0, 0, 30, 30
    beq lbl_fn_80632B00_00000928
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    ori r0, r0, 0x20
    sth r0, 0x656(r3)
lbl_fn_80632B00_00000928:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lhz r3, 0x656(r4)
    rlwinm. r0, r3, 0, 26, 28
    beq lbl_fn_80632B00_000009AC
    lbz r5, 0x645(r31)
    li r0, 0x1
    stb r0, 0x1908(r4)
    rlwinm. r0, r5, 0, 26, 26
    beq lbl_fn_80632B00_00000964
    rlwinm. r0, r5, 0, 24, 24
    bne lbl_fn_80632B00_0000096C
    ori r0, r3, 0x100
    sth r0, 0x656(r4)
    b lbl_fn_80632B00_0000096C
lbl_fn_80632B00_00000964:
    ori r0, r3, 0x140
    sth r0, 0x656(r4)
lbl_fn_80632B00_0000096C:
    lbz r3, 0x645(r31)
    rlwinm. r0, r3, 0, 25, 25
    beq lbl_fn_80632B00_00000998
    rlwinm. r0, r3, 0, 24, 24
    bne lbl_fn_80632B00_000009AC
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    ori r0, r0, 0x200
    sth r0, 0x656(r3)
    b lbl_fn_80632B00_000009AC
lbl_fn_80632B00_00000998:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x656(r3)
    ori r0, r0, 0x280
    sth r0, 0x656(r3)
lbl_fn_80632B00_000009AC:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x5
    blt lbl_fn_80632B00_000009D4
    lis r3, 0xd
    lhz r5, 0x656(r4)
    addi r3, r3, 0x4
    addi r4, r30, 0x70
    bl fn_80629830
lbl_fn_80632B00_000009D4:
    lbz r0, 0x640(r31)
    rlwinm. r0, r0, 0, 26, 26
    beq lbl_fn_80632B00_000009F8
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    ori r0, r0, 0x1
    sth r0, 0x4c4(r3)
    b lbl_fn_80632B00_00000A0C
lbl_fn_80632B00_000009F8:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    rlwinm r0, r0, 0, 16, 30
    sth r0, 0x4c4(r3)
lbl_fn_80632B00_00000A0C:
    lbz r0, 0x640(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_80632B00_00000A30
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    ori r0, r0, 0x2
    sth r0, 0x4c4(r3)
    b lbl_fn_80632B00_00000A44
lbl_fn_80632B00_00000A30:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    rlwinm r0, r0, 0, 31, 29
    sth r0, 0x4c4(r3)
lbl_fn_80632B00_00000A44:
    lbz r0, 0x640(r31)
    rlwinm. r0, r0, 0, 24, 24
    beq lbl_fn_80632B00_00000A68
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    ori r0, r0, 0x4
    sth r0, 0x4c4(r3)
    b lbl_fn_80632B00_00000A7C
lbl_fn_80632B00_00000A68:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    rlwinm r0, r0, 0, 30, 28
    sth r0, 0x4c4(r3)
lbl_fn_80632B00_00000A7C:
    lbz r0, 0x641(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_80632B00_00000AA0
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    ori r0, r0, 0x8
    sth r0, 0x4c4(r3)
    b lbl_fn_80632B00_00000AB4
lbl_fn_80632B00_00000AA0:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lhz r0, 0x4c4(r3)
    rlwinm r0, r0, 0, 29, 27
    sth r0, 0x4c4(r3)
lbl_fn_80632B00_00000AB4:
    bl fn_806384A4
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lbz r29, 0x27be(r4)
    cmplwi r29, 0xff
    beq lbl_fn_80632B00_00000B74
    lbz r0, 0x27c0(r4)
    li r3, 0xff
    lbz r27, 0x27bd(r4)
    cmplwi r0, 0x3
    stb r3, 0x27be(r4)
    stb r3, 0x27bd(r4)
    blt lbl_fn_80632B00_00000B08
    lis r3, 0xd
    mr r5, r27
    mr r7, r29
    addi r4, r30, 0x0
    addi r3, r3, 0x2
    li r6, 0xff
    li r8, 0xff
    bl fn_80629890
lbl_fn_80632B00_00000B08:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r4, 0x645(r3)
    rlwinm. r0, r4, 0, 28, 28
    bne lbl_fn_80632B00_00000B30
    lbz r0, 0x644(r3)
    rlwinm. r0, r0, 0, 27, 27
    bne lbl_fn_80632B00_00000B30
    rlwinm. r0, r4, 0, 27, 27
    beq lbl_fn_80632B00_00000B74
lbl_fn_80632B00_00000B30:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27bd(r3)
    cmplw r0, r27
    bne lbl_fn_80632B00_00000B50
    lbz r0, 0x27be(r3)
    cmplw r0, r29
    beq lbl_fn_80632B00_00000B74
lbl_fn_80632B00_00000B50:
    mr r3, r27
    mr r4, r29
    bl fn_8063E8A4
    clrlwi. r0, r3, 24
    beq lbl_fn_80632B00_00000B74
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    stb r27, 0x27bd(r3)
    stb r29, 0x27be(r3)
lbl_fn_80632B00_00000B74:
    lbz r0, 0x643(r31)
    rlwinm. r0, r0, 0, 25, 25
    beq lbl_fn_80632B00_00000B88
    li r3, 0x1
    bl fn_80634020
lbl_fn_80632B00_00000B88:
    li r3, 0x1
    bl fn_80633F70
    li r3, 0x1
    bl fn_80633EC0
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lwz r12, 0x568(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80632B00_00000BB8
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80632B00_00000BB8:
    cmpwi r28, 0x0
    beq lbl_fn_80632B00_00000BD0
    mr r12, r28
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80632B00_00000BD0:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80632FFC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bne lbl_fn_80632FFC_00000C14
    li r3, 0x5
    b lbl_fn_80632FFC_00000C84
lbl_fn_80632FFC_00000C14:
    lis r30, lbl_80820018@ha
    addi r30, r30, lbl_80820018@l
    lbz r0, 0x64e(r30)
    cmplwi r0, 0x1
    bgt lbl_fn_80632FFC_00000C30
    li r3, 0xc
    b lbl_fn_80632FFC_00000C84
lbl_fn_80632FFC_00000C30:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80632FFC_00000C80
    cmplw r30, r29
    beq lbl_fn_80632FFC_00000C6C
    mr r3, r30
    li r4, 0x0
    li r5, 0x20
    bl memset
    mr r3, r30
    mr r4, r29
    li r5, 0x1f
    bl fn_8068236C
lbl_fn_80632FFC_00000C6C:
    mr r3, r31
    mr r4, r30
    bl fn_8063E10C
    li r3, 0x1
    b lbl_fn_80632FFC_00000C84
lbl_fn_80632FFC_00000C80:
    li r3, 0x3
lbl_fn_80632FFC_00000C84:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806330B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r31, 0x590
    lwz r30, 0x5a8(r31)
    bl fn_80629E90
    li r0, 0x0
    cmpwi r30, 0x0
    stw r0, 0x5a8(r31)
    beq lbl_fn_806330B4_00000D10
    lbz r0, 0x0(r29)
    cmpwi r0, 0x0
    bne lbl_fn_806330B4_00000D00
    mr r12, r30
    addi r3, r29, 0x1
    mtctr r12
    bctrl
    b lbl_fn_806330B4_00000D10
lbl_fn_806330B4_00000D00:
    mr r12, r30
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_806330B4_00000D10:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80633140(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    beq lbl_fn_80633140_00000D58
    lis r4, lbl_80820018@ha
    mr r12, r3
    addi r4, r4, lbl_80820018@l
    addi r3, r4, 0x630
    mtctr r12
    bctrl
lbl_fn_80633140_00000D58:
    lwz r0, 0x14(r1)
    li r3, 0x0
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80633180(void)
{
    nofralloc
    lbz r0, 0x0(r3)
    cmpwi r0, 0x0
    bnelr
    lis r4, lbl_80820018@ha
    lbz r0, 0x1(r3)
    addi r4, r4, lbl_80820018@l
    stb r0, 0x635(r4)
    lbz r0, 0x2(r3)
    stb r0, 0x634(r4)
    lbz r0, 0x3(r3)
    stb r0, 0x633(r4)
    lbz r0, 0x4(r3)
    stb r0, 0x632(r4)
    lbz r0, 0x5(r3)
    stb r0, 0x631(r4)
    lbz r0, 0x6(r3)
    stb r0, 0x630(r4)
    blr
}

asm void fn_806331C8(void)
{
    nofralloc
    lis r5, lbl_80820018@ha
    addi r5, r5, lbl_80820018@l
    lbz r0, 0x64e(r5)
    cmplwi r0, 0x4
    bge lbl_fn_806331C8_00000DD0
    li r3, 0xc
    blr
lbl_fn_806331C8_00000DD0:
    lhz r4, 0x636(r5)
    lhz r0, 0x638(r5)
    sth r4, 0x0(r3)
    sth r0, 0x2(r3)
    lhz r4, 0x63a(r5)
    lhz r0, 0x63c(r5)
    sth r4, 0x4(r3)
    sth r0, 0x6(r3)
    lhz r0, 0x63e(r5)
    sth r0, 0x8(r3)
    li r3, 0x0
    blr
}

asm void fn_80633214(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x3
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x8(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r31, 0x648
    bl memcpy
    lbz r0, 0x64e(r31)
    cmplwi r0, 0x1
    bgt lbl_fn_80633214_00000E44
    li r3, 0xc
    b lbl_fn_80633214_00000E68
lbl_fn_80633214_00000E44:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80633214_00000E64
    mr r4, r30
    bl fn_8063E424
    li r3, 0x0
    b lbl_fn_80633214_00000E68
lbl_fn_80633214_00000E64:
    li r3, 0x3
lbl_fn_80633214_00000E68:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80633294(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    addi r3, r3, 0x648
    blr
}

asm void fn_806332A4(void)
{
    nofralloc
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    addi r3, r3, 0x640
    blr
}

asm void fn_806332B4(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    mr r0, r3
    addi r4, r4, lbl_80820018@l
    lwz r3, 0x568(r4)
    stw r0, 0x568(r4)
    blr
}

asm void fn_806332CC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r7, lbl_80820018@ha
    mr r27, r3
    addi r7, r7, lbl_80820018@l
    mr r28, r4
    lbz r0, 0x27c0(r7)
    mr r29, r5
    mr r30, r6
    cmplwi r0, 0x4
    blt lbl_fn_806332CC_00000F0C
    lis r3, 0xd
    lis r4, lbl_807B446C@ha
    mr r5, r27
    mr r6, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B446C@l
    bl fn_80629850
lbl_fn_806332CC_00000F0C:
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    lbz r0, 0x650(r31)
    cmpwi r0, 0x0
    beq lbl_fn_806332CC_00000F48
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_fn_806332CC_00000F40
    lis r3, 0xd
    lis r4, lbl_807B44AC@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B44AC@l
    bl fn_80629810
lbl_fn_806332CC_00000F40:
    li r3, 0x2
    b lbl_fn_806332CC_00000F9C
lbl_fn_806332CC_00000F48:
    addi r0, r28, 0xb
    clrlwi r3, r0, 16
    bl fn_80626AC0
    cmpwi r3, 0x0
    beq lbl_fn_806332CC_00000F98
    cmpwi r30, 0x0
    stw r30, 0x61c(r31)
    beq lbl_fn_806332CC_00000F70
    li r0, 0x1
    stb r0, 0x650(r31)
lbl_fn_806332CC_00000F70:
    mr r4, r27
    mr r5, r28
    mr r6, r29
    bl fn_8063ED54
    cmpwi r30, 0x0
    beq lbl_fn_806332CC_00000F90
    li r3, 0x1
    b lbl_fn_806332CC_00000F9C
lbl_fn_806332CC_00000F90:
    li r3, 0x0
    b lbl_fn_806332CC_00000F9C
lbl_fn_806332CC_00000F98:
    li r3, 0x3
lbl_fn_806332CC_00000F9C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806333C8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lis r6, lbl_80820018@ha
    mr r7, r3
    stw r0, 0x124(r1)
    addi r6, r6, lbl_80820018@l
    li r0, 0x0
    addi r3, r1, 0xc
    stw r31, 0x11c(r1)
    lwz r31, 0x61c(r6)
    stb r0, 0x650(r6)
    cmpwi r31, 0x0
    stw r0, 0x61c(r6)
    beq lbl_fn_806333C8_0000100C
    sth r4, 0x8(r1)
    mr r4, r7
    sth r5, 0xa(r1)
    bl memcpy
    mr r12, r31
    addi r3, r1, 0x8
    mtctr r12
    bctrl
lbl_fn_806333C8_0000100C:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_80633434(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lwz r0, 0x56c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80633434_00001044
    cmpwi r3, 0x0
    beq lbl_fn_80633434_00001044
    li r3, 0x2
    blr
lbl_fn_80633434_00001044:
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    stw r3, 0x56c(r4)
    li r3, 0x0
    blr
}

asm void fn_8063346C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lhz r0, 0x63c(r31)
    cmplwi r0, 0x12
    beq lbl_fn_8063346C_000010AC
    lbz r0, 0x27c0(r31)
    cmplwi r0, 0x4
    blt lbl_fn_8063346C_000010AC
    lis r3, 0xd
    lis r4, lbl_807B44F0@ha
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B44F0@l
    bl fn_80629810
lbl_fn_8063346C_000010AC:
    lwz r12, 0x56c(r31)
    li r0, 0x0
    stw r0, 0x61c(r31)
    cmpwi r12, 0x0
    stb r0, 0x650(r31)
    beq lbl_fn_8063346C_000010D4
    mr r3, r30
    mr r4, r29
    mtctr r12
    bctrl
lbl_fn_8063346C_000010D4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80633504(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x27c0(r4)
    cmplwi r0, 0x4
    blt lbl_fn_80633504_00001130
    lis r3, 0xd
    lis r4, lbl_807B4530@ha
    mr r5, r31
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B4530@l
    bl fn_80629830
lbl_fn_80633504_00001130:
    mulli r0, r31, 0x271
    lis r3, 0x1062
    lis r4, lbl_80820018@ha
    addi r3, r3, 0x4dd3
    mulhw r0, r3, r0
    addi r4, r4, lbl_80820018@l
    li r3, 0x2
    srawi r0, r0, 6
    srwi r5, r0, 31
    add r0, r0, r5
    sth r0, 0x64c(r4)
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_80633504_00001178
    mr r4, r31
    bl fn_8063E24C
    li r3, 0x0
    b lbl_fn_80633504_0000117C
lbl_fn_80633504_00001178:
    li r3, 0x3
lbl_fn_80633504_0000117C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806335A4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x570(r5)
    cmpwi r0, 0x0
    beq lbl_fn_806335A4_000011D0
    li r3, 0x2
    b lbl_fn_806335A4_0000124C
lbl_fn_806335A4_000011D0:
    cmpwi r3, 0x0
    bne lbl_fn_806335A4_000011E0
    li r31, 0x1
    addi r29, r1, 0x8
lbl_fn_806335A4_000011E0:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_806335A4_00001218
    cmpwi r31, 0x0
    lis r3, 0xd
    lis r4, lbl_807B45A0@ha
    la r5, lbl_8087EAE4
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B45A0@l
    beq lbl_fn_806335A4_00001214
    la r5, lbl_8087EADC
lbl_fn_806335A4_00001214:
    bl fn_80629830
lbl_fn_806335A4_00001218:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_806335A4_00001248
    lis r6, lbl_80820018@ha
    mr r4, r29
    addi r6, r6, lbl_80820018@l
    mr r5, r31
    stw r30, 0x570(r6)
    bl fn_8063DE3C
    li r3, 0x0
    b lbl_fn_806335A4_0000124C
lbl_fn_806335A4_00001248:
    li r3, 0x3
lbl_fn_806335A4_0000124C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063367C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r7, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r7, r7, lbl_80820018@l
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r0, 0x570(r7)
    cmpwi r0, 0x0
    beq lbl_fn_8063367C_000012B0
    li r3, 0x2
    b lbl_fn_8063367C_00001318
lbl_fn_8063367C_000012B0:
    lbz r0, 0x27c0(r7)
    cmplwi r0, 0x4
    blt lbl_fn_8063367C_000012D4
    lis r3, 0xd
    lis r4, lbl_807B45CC@ha
    mr r5, r28
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B45CC@l
    bl fn_80629830
lbl_fn_8063367C_000012D4:
    cmplwi r28, 0xb
    ble lbl_fn_8063367C_000012E0
    li r28, 0xb
lbl_fn_8063367C_000012E0:
    li r3, 0x2
    bl fn_80626C60
    cmpwi r3, 0x0
    beq lbl_fn_8063367C_00001314
    lis r6, lbl_80820018@ha
    mr r4, r28
    addi r6, r6, lbl_80820018@l
    mr r5, r29
    stw r31, 0x570(r6)
    mr r6, r30
    bl fn_8063DE9C
    li r3, 0x0
    b lbl_fn_8063367C_00001318
lbl_fn_8063367C_00001314:
    li r3, 0x3
lbl_fn_8063367C_00001318:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063374C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r5, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r5, r5, lbl_80820018@l
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r0, 0x570(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8063374C_00001378
    li r3, 0x2
    b lbl_fn_8063374C_000013EC
lbl_fn_8063374C_00001378:
    cmpwi r3, 0x0
    bne lbl_fn_8063374C_00001388
    li r31, 0x1
    addi r29, r1, 0x8
lbl_fn_8063374C_00001388:
    lis r3, lbl_80820018@ha
    addi r3, r3, lbl_80820018@l
    lbz r0, 0x27c0(r3)
    cmplwi r0, 0x4
    blt lbl_fn_8063374C_000013C0
    cmpwi r31, 0x0
    lis r3, 0xd
    lis r4, lbl_807B45F8@ha
    la r5, lbl_8087EAE4
    addi r3, r3, 0x3
    addi r4, r4, lbl_807B45F8@l
    beq lbl_fn_8063374C_000013BC
    la r5, lbl_8087EADC
lbl_fn_8063374C_000013BC:
    bl fn_80629830
lbl_fn_8063374C_000013C0:
    lis r5, lbl_80820018@ha
    mr r3, r29
    addi r5, r5, lbl_80820018@l
    mr r4, r31
    stw r30, 0x570(r5)
    bl fn_8063E05C
    clrlwi. r0, r3, 24
    bne lbl_fn_8063374C_000013E8
    li r3, 0x3
    b lbl_fn_8063374C_000013EC
lbl_fn_8063374C_000013E8:
    li r3, 0x0
lbl_fn_8063374C_000013EC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8063381C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    li r0, 0x0
    lwz r12, 0x570(r4)
    cmpwi r12, 0x0
    stw r0, 0x570(r4)
    beq lbl_fn_8063381C_00001474
    li r0, 0x2
    stb r0, 0x8(r1)
    lbz r0, 0x0(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r3)
    lbz r4, 0x1(r3)
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0xa(r1)
    lbz r0, 0x4(r3)
    lbz r4, 0x3(r3)
    addi r3, r1, 0x8
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0xc(r1)
    mtctr r12
    bctrl
lbl_fn_8063381C_00001474:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80633898(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    li r0, 0x0
    lwz r12, 0x570(r4)
    cmpwi r12, 0x0
    stw r0, 0x570(r4)
    beq lbl_fn_80633898_000014D0
    li r0, 0x3
    stb r0, 0x8(r1)
    lbz r0, 0x0(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x1(r3)
    addi r3, r1, 0x8
    stb r0, 0xa(r1)
    mtctr r12
    bctrl
lbl_fn_80633898_000014D0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806338F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80820018@l
    li r0, 0x0
    lwz r12, 0x570(r4)
    cmpwi r12, 0x0
    stw r0, 0x570(r4)
    beq lbl_fn_806338F4_00001538
    li r0, 0x4
    stb r0, 0x8(r1)
    lbz r0, 0x0(r3)
    stb r0, 0x9(r1)
    lbz r0, 0x2(r3)
    lbz r4, 0x1(r3)
    addi r3, r1, 0x8
    slwi r0, r0, 8
    add r0, r4, r0
    sth r0, 0xa(r1)
    mtctr r12
    bctrl
lbl_fn_806338F4_00001538:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8063395C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r4, lbl_80820018@ha
    stw r0, 0x24(r1)
    addi r4, r4, lbl_80820018@l
    lwz r12, 0x570(r4)
    cmpwi r12, 0x0
    beq lbl_fn_8063395C_000016C4
    addi r5, r3, 0x2
    li r4, 0x0
    b lbl_fn_8063395C_000016AC
lbl_fn_8063395C_00001574:
    lbz r11, 0x0(r5)
    addi r4, r4, 0x1
    lbz r10, 0x1(r5)
    lbz r9, 0x2(r5)
    lbz r8, 0x3(r5)
    lbz r7, 0x4(r5)
    lbz r6, 0x5(r5)
    lbz r0, 0x6(r5)
    stb r0, 0x17(r1)
    lbz r0, 0x7(r5)
    stb r0, 0x16(r1)
    lbz r0, 0x8(r5)
    stb r0, 0x15(r1)
    lbz r0, 0x9(r5)
    stb r0, 0x14(r1)
    lbz r0, 0xa(r5)
    stb r0, 0x13(r1)
    lbz r0, 0xb(r5)
    stb r0, 0x12(r1)
    lbz r0, 0xc(r5)
    stb r0, 0x11(r1)
    lbz r0, 0xd(r5)
    stb r0, 0x10(r1)
    lbz r0, 0xe(r5)
    stb r0, 0xf(r1)
    lbz r0, 0xf(r5)
    stb r0, 0xe(r1)
    lbz r0, 0x10(r5)
    stb r0, 0xd(r1)
    lbz r0, 0x11(r5)
    stb r0, 0xc(r1)
    lbz r0, 0x12(r5)
    stb r0, 0xb(r1)
    lbz r0, 0x13(r5)
    stb r0, 0xa(r1)
    lbz r0, 0x14(r5)
    stb r0, 0x9(r1)
    lbz r0, 0x15(r5)
    stb r0, 0x8(r1)
    stb r6, 0x0(r5)
    stb r7, 0x1(r5)
    stb r8, 0x2(r5)
    stb r9, 0x3(r5)
    stb r10, 0x4(r5)
    stb r11, 0x5(r5)
    lbz r0, 0x8(r1)
    stb r0, 0x6(r5)
    lbz r0, 0x9(r1)
    stb r0, 0x7(r5)
    lbz r0, 0xa(r1)
    stb r0, 0x8(r5)
    lbz r0, 0xb(r1)
    stb r0, 0x9(r5)
    lbz r0, 0xc(r1)
    stb r0, 0xa(r5)
    lbz r0, 0xd(r1)
    stb r0, 0xb(r5)
    lbz r0, 0xe(r1)
    stb r0, 0xc(r5)
    lbz r0, 0xf(r1)
    stb r0, 0xd(r5)
    lbz r0, 0x10(r1)
    stb r0, 0xe(r5)
    lbz r0, 0x11(r1)
    stb r0, 0xf(r5)
    lbz r0, 0x12(r1)
    stb r0, 0x10(r5)
    lbz r0, 0x13(r1)
    stb r0, 0x11(r5)
    lbz r0, 0x14(r1)
    stb r0, 0x12(r5)
    lbz r0, 0x15(r1)
    stb r0, 0x13(r5)
    lbz r0, 0x16(r1)
    stb r0, 0x14(r5)
    lbz r0, 0x17(r1)
    stb r0, 0x15(r5)
    addi r5, r5, 0x16
lbl_fn_8063395C_000016AC:
    lbz r0, 0x1(r3)
    clrlwi r6, r4, 24
    cmplw r6, r0
    blt lbl_fn_8063395C_00001574
    mtctr r12
    bctrl
lbl_fn_8063395C_000016C4:
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80633AE8(void)
{
    nofralloc
    lis r4, lbl_80820018@ha
    addi r4, r4, lbl_80820018@l
    lwz r12, 0x568(r4)
    cmpwi r12, 0x0
    beqlr
    mtctr r12
    bctr
    blr
}

asm void fn_80633B08(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x1020
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    addi r0, r31, 0x6d4
    stw r0, 0x1678(r31)
    addi r3, r31, 0x658
    bl memset
    li r3, 0x1
    li r4, 0x2
    li r0, 0x1002
    sth r3, 0x670(r31)
    lwz r3, 0x1678(r31)
    addi r6, r31, 0x674
    sth r4, 0x674(r31)
    li r4, 0xfa0
    li r5, 0x1
    li r7, 0x0
    sth r0, 0x678(r31)
    li r8, 0x0
    bl fn_8064E72C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80633B80(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lis r31, lbl_80820018@ha
    addi r31, r31, lbl_80820018@l
    addi r3, r31, 0x658
    bl fn_80629E90
    lbz r0, 0x1674(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80633B80_000017BC
    lwz r12, 0x6d0(r31)
    li r0, 0x0
    stb r0, 0x1674(r31)
    cmpwi r12, 0x0
    stw r0, 0x6d0(r31)
    beq lbl_fn_80633B80_000017BC
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_80633B80_000017BC:
    lis r31, lbl_80820018@ha
    li r4, 0x0
    addi r31, r31, lbl_80820018@l
    li r5, 0x1020
    addi r0, r31, 0x6d4
    stw r0, 0x1678(r31)
    addi r3, r31, 0x658
    bl memset
    li r3, 0x1
    li r4, 0x2
    li r0, 0x1002
    sth r3, 0x670(r31)
    lwz r3, 0x1678(r31)
    addi r6, r31, 0x674
    sth r4, 0x674(r31)
    li r4, 0xfa0
    li r5, 0x1
    li r7, 0x0
    sth r0, 0x678(r31)
    li r8, 0x0
    bl fn_8064E72C
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
