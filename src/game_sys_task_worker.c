#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_80049E54(void);
extern void fn_8004A03C(void);
extern void fn_8005B3CC(void);
extern void fn_8005B5F8(void);
extern void fn_8005B6E8(void);
extern void fn_8006B174(void);
extern void fn_80084320(void);
extern void fn_800846FC(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800DC12C(void);
extern void fn_800DC288(void);
extern void fn_800DC6B4(void);
extern void fn_8011FFF8(void);
extern void fn_8021771C(void);
extern void fn_8021AF98(void);
extern void fn_8021AFF4(void);
extern void fn_8046DC5C(void);
extern void fn_8046DD20(void);
extern void fn_80470580(void);
extern void fn_8047059C(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80473F50(void);
extern void fn_80473FCC(void);
extern void fn_80476CE4(void);
extern void fn_80682428(void);
extern void fn_80682544(void);
extern void fn_806827C4(void);
extern void fn_80684600(void);
extern void fn_80695720(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807417C0[];
extern u8 lbl_80742210[];
extern u8 lbl_807422B0[];
extern u8 lbl_80742368[];
extern u8 lbl_807423B8[];
extern u8 lbl_80742404[];
extern u8 lbl_80742418[];
extern u8 lbl_80742460[];
extern u8 lbl_80742500[];
extern u8 lbl_8074251C[];
extern u8 lbl_807772B0[];
extern u8 lbl_807772D0[];
extern u8 lbl_807830C0[];
extern u8 lbl_8078FBB0[];
extern u8 lbl_8078FEA0[];

/* Small data declarations */
extern u32 lbl_8087D708;
extern u32 lbl_8087D720;
extern u32 lbl_8087EE90;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F290;
extern u32 lbl_8087F294;
extern u32 lbl_8087F298;
extern u32 lbl_8087F29C;
extern u32 lbl_8087F2A0;
extern u32 lbl_8087F2A8;
extern u32 lbl_8087F2B0;
extern u32 lbl_8087F2B4;
extern u32 lbl_8087F2B8;
extern u32 lbl_8087F2C0;
extern u32 lbl_8087F2C4;
extern u32 lbl_8087F518;
extern u32 lbl_80882F40;
extern u32 lbl_80882F48;
extern u32 lbl_80882F4C;
extern u32 lbl_80882F50;
extern u32 lbl_80882F54;
extern u32 lbl_80882F58;

/* Function declarations */
void fn_80217E18(void);
void fn_802180A8(void);
void fn_80218218(void);
void fn_8021823C(void);
void fn_80218260(void);
void fn_80218268(void);
void fn_802185F4(void);
void fn_802185FC(void);
void fn_80218720(void);
void fn_802187E4(void);
void fn_80218858(void);
void fn_802188B4(void);
void fn_802189EC(void);
void fn_80218BB4(void);
void fn_80218BC4(void);
void fn_80218BD4(void);
void fn_80219018(void);
void fn_80219074(void);
void fn_80219160(void);
void fn_8021921C(void);
void fn_80219344(void);
void fn_8021946C(void);
void fn_80219544(void);
void fn_80219558(void);
void fn_802196D0(void);

asm void fn_80217E18(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    li r3, 0x8e8
    li r4, 0xb
    stw r0, 0x664(r1)
    li r7, 0x0
    stw r31, 0x65c(r1)
    lis r31, lbl_807422B0@ha
    addi r5, r31, lbl_807422B0@l
    stw r30, 0x658(r1)
    mr r6, r5
    stw r29, 0x654(r1)
    stw r28, 0x650(r1)
    bl fn_800846FC
    addi r5, r31, lbl_807422B0@l
    stw r3, lbl_8087F290
    li r3, 0x23a
    li r4, 0xb
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r30, lbl_807417C0@ha
    stw r3, lbl_8087F298
    addi r30, r30, lbl_807417C0@l
    li r28, 0x0
    li r29, 0x0
    li r31, 0x1
lbl_fn_80217E18_0000006C:
    lwz r3, 0x0(r30)
    bl fn_800DC6B4
    lwz r4, lbl_8087F290
    addi r30, r30, 0x4
    stwx r3, r4, r29
    addi r29, r29, 0x4
    lwz r3, lbl_8087F298
    stbx r31, r3, r28
    addi r28, r28, 0x1
    cmpwi r28, 0x23a
    blt lbl_fn_80217E18_0000006C
    lis r5, lbl_807422B0@ha
    li r3, 0xa0
    addi r5, r5, lbl_807422B0@l
    li r4, 0xb
    mr r6, r5
    li r7, 0x0
    bl fn_800846FC
    lis r30, lbl_80742210@ha
    stw r3, lbl_8087F294
    addi r30, r30, lbl_80742210@l
    li r28, 0x0
    li r31, 0x0
lbl_fn_80217E18_000000C8:
    lwz r3, 0x0(r30)
    bl fn_800DC6B4
    lwz r4, lbl_8087F294
    addi r28, r28, 0x1
    cmpwi r28, 0x28
    addi r30, r30, 0x4
    stwx r3, r4, r31
    addi r31, r31, 0x4
    blt lbl_fn_80217E18_000000C8
    addi r3, r1, 0x8
    bl fn_80473E74
    lis r3, lbl_8078FBB0@ha
    lis r4, lbl_807422B0@ha
    addi r3, r3, lbl_8078FBB0@l
    stw r3, 0x8(r1)
    addi r4, r4, lbl_807422B0@l
    addi r3, r1, 0x8
    addi r4, r4, 0x1
    bl fn_80473FCC
    addi r3, r1, 0x8
    bl fn_8047059C
    mr r30, r3
    addi r3, r1, 0x8
    bl fn_80470580
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    addi r4, r4, lbl_807772D0@l
    stw r4, 0x10(r1)
    mr r31, r3
    addi r3, r1, 0x20
    stw r0, 0x14(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x640(r1)
    bl memset
    addi r3, r1, 0x620
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x10(r1)
    mr r4, r31
    mr r5, r30
    addi r3, r1, 0x10
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0x10
    addi r4, r4, lbl_807772B0@l
    stw r4, 0x10(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
lbl_fn_80217E18_000001A0:
    addi r3, r1, 0x10
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_80217E18_000001C0
    lwz r3, lbl_8087F2A0
    addi r0, r3, 0x1
    stw r0, lbl_8087F2A0
lbl_fn_80217E18_000001C0:
    addi r3, r1, 0x10
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80217E18_000001A0
    lwz r0, lbl_8087F2A0
    lis r5, lbl_807422B0@ha
    addi r5, r5, lbl_807422B0@l
    li r4, 0xb
    mr r6, r5
    slwi r3, r0, 2
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F29C
    addi r3, r1, 0x20
    li r4, 0x0
    li r5, 0x400
    bl memset
    addi r3, r1, 0x620
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0x10(r1)
    addi r3, r1, 0x10
    lwz r4, 0x14(r1)
    lwz r12, 0x8(r12)
    lwz r5, 0x18(r1)
    mtctr r12
    bctrl
lbl_fn_80217E18_00000230:
    addi r3, r1, 0x10
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb. r0, r0
    beq lbl_fn_80217E18_00000254
    addi r3, r1, 0x20
    bl fn_800DC6B4
    lwz r4, lbl_8087F29C
    stw r3, 0x0(r4)
lbl_fn_80217E18_00000254:
    addi r3, r1, 0x10
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80217E18_00000230
    addi r3, r1, 0x8
    li r4, 0x0
    bl fn_80473E8C
    lwz r0, 0x664(r1)
    lwz r31, 0x65c(r1)
    lwz r30, 0x658(r1)
    lwz r29, 0x654(r1)
    lwz r28, 0x650(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}

asm void fn_802180A8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_800DC6B4
    li r0, 0x23a
    lwz r4, lbl_8087F290
    li r5, 0x0
    mtctr r0
lbl_fn_802180A8_000002B0:
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_802180A8_000002D8
    lwz r4, lbl_8087F298
    li r3, -0x1
    lbzx r0, r4, r5
    cmpwi r0, 0x0
    beq lbl_fn_802180A8_000003F0
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_000002D8:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_802180A8_000002B0
    li r0, 0x4
    lwz r4, lbl_8087F294
    li r5, 0x0
    mtctr r0
lbl_fn_802180A8_000002F4:
    lwz r0, 0x0(r4)
    cmplw r3, r0
    bne lbl_fn_802180A8_00000308
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000308:
    lwz r0, 0x4(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_00000320
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000320:
    lwz r0, 0x8(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_00000338
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000338:
    lwz r0, 0xc(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_00000350
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000350:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_00000368
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000368:
    lwz r0, 0x14(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_00000380
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000380:
    lwz r0, 0x18(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_00000398
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_00000398:
    lwz r0, 0x1c(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_000003B0
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_000003B0:
    lwz r0, 0x20(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_000003C8
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_000003C8:
    lwz r0, 0x24(r4)
    addi r5, r5, 0x1
    cmplw r3, r0
    bne lbl_fn_802180A8_000003E0
    mr r3, r5
    b lbl_fn_802180A8_000003F0
lbl_fn_802180A8_000003E0:
    addi r4, r4, 0x28
    addi r5, r5, 0x1
    bdnz lbl_fn_802180A8_000002F4
    li r3, -0x1
lbl_fn_802180A8_000003F0:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80218218(void)
{
    nofralloc
    cmplwi r3, 0x239
    bgt lbl_fn_80218218_0000041C
    lis r4, lbl_807417C0@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_807417C0@l
    lwzx r3, r4, r0
    blr
lbl_fn_80218218_0000041C:
    li r3, 0x0
    blr
}

asm void fn_8021823C(void)
{
    nofralloc
    cmplwi r3, 0x27
    bgt lbl_fn_8021823C_00000440
    lis r4, lbl_80742210@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80742210@l
    lwzx r3, r4, r0
    blr
lbl_fn_8021823C_00000440:
    li r3, 0x0
    blr
}

asm void fn_80218260(void)
{
    nofralloc
    addi r3, r3, 0xd0
    blr
}

asm void fn_80218268(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r8, 0x0
    li r7, 0x1
    stw r0, 0x14(r1)
    li r0, 0x47
    mtctr r0
lbl_fn_80218268_0000046C:
    lwz r6, lbl_8087F298
    stbx r7, r6, r8
    lwz r0, lbl_8087F298
    add r6, r0, r8
    stb r7, 0x1(r6)
    lwz r0, lbl_8087F298
    add r6, r0, r8
    stb r7, 0x2(r6)
    lwz r0, lbl_8087F298
    add r6, r0, r8
    stb r7, 0x3(r6)
    lwz r0, lbl_8087F298
    add r6, r0, r8
    stb r7, 0x4(r6)
    lwz r0, lbl_8087F298
    add r6, r0, r8
    stb r7, 0x5(r6)
    lwz r0, lbl_8087F298
    add r6, r0, r8
    stb r7, 0x6(r6)
    lwz r0, lbl_8087F298
    add r6, r0, r8
    addi r8, r8, 0x8
    stb r7, 0x7(r6)
    bdnz lbl_fn_80218268_0000046C
    lwz r6, lbl_8087F298
    li r7, 0x1
    stbx r7, r6, r8
    lwz r0, lbl_8087F298
    add r6, r8, r0
    stb r7, 0x1(r6)
    bl fn_8021771C
    cmpwi r3, 0x0
    beq lbl_fn_80218268_000007CC
    lwz r0, 0xb4(r3)
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    beq lbl_fn_80218268_00000560
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x1f5(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1f6(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1f7(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1f8(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1f9(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1fa(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1fb(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1fc(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1fd(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1fe(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x1ff(r4)
lbl_fn_80218268_00000560:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    beq lbl_fn_80218268_0000058C
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x237(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x238(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x239(r4)
lbl_fn_80218268_0000058C:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80218268_000005D0
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x22f(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x230(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x231(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x232(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x233(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x234(r4)
lbl_fn_80218268_000005D0:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 28, 28
    cmplwi r0, 0x8
    beq lbl_fn_80218268_000005F4
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x235(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x236(r4)
lbl_fn_80218268_000005F4:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 27, 27
    cmplwi r0, 0x10
    beq lbl_fn_80218268_00000630
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x202(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x203(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x204(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x205(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x206(r4)
lbl_fn_80218268_00000630:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80218268_0000065C
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x207(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x208(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x209(r4)
lbl_fn_80218268_0000065C:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 25, 25
    cmplwi r0, 0x40
    beq lbl_fn_80218268_00000690
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x218(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x219(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x21a(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x21b(r4)
lbl_fn_80218268_00000690:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 24, 24
    cmplwi r0, 0x80
    beq lbl_fn_80218268_000006C4
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x21c(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x21d(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x21e(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x21f(r4)
lbl_fn_80218268_000006C4:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 23, 23
    cmplwi r0, 0x100
    beq lbl_fn_80218268_000006E8
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x220(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x221(r4)
lbl_fn_80218268_000006E8:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 22, 22
    cmplwi r0, 0x200
    beq lbl_fn_80218268_0000070C
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x225(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x226(r4)
lbl_fn_80218268_0000070C:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 21, 21
    cmplwi r0, 0x400
    beq lbl_fn_80218268_00000738
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x227(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x228(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x229(r4)
lbl_fn_80218268_00000738:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 20, 20
    cmplwi r0, 0x800
    beq lbl_fn_80218268_00000764
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x210(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x211(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x212(r4)
lbl_fn_80218268_00000764:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 19, 19
    cmplwi r0, 0x1000
    beq lbl_fn_80218268_000007A0
    lwz r4, lbl_8087F298
    li r0, 0x0
    stb r0, 0x22a(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x22b(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x22c(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x22d(r4)
    lwz r4, lbl_8087F298
    stb r0, 0x22e(r4)
lbl_fn_80218268_000007A0:
    lwz r0, 0xb4(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80218268_000007CC
    lwz r3, lbl_8087F298
    li r0, 0x0
    stb r0, 0x215(r3)
    lwz r3, lbl_8087F298
    stb r0, 0x216(r3)
    lwz r3, lbl_8087F298
    stb r0, 0x217(r3)
lbl_fn_80218268_000007CC:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802185F4(void)
{
    nofralloc
    lwz r3, lbl_8087F298
    blr
}

asm void fn_802185FC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    li r0, 0x0
    stw r31, 0x3c(r1)
    addi r31, r1, 0x1c
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    mr r29, r3
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    bl strlen
    mr r30, r3
    mr r3, r31
    mr r4, r30
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r29
    add r7, r29, r30
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    mr r4, r31
    addi r3, r1, 0x10
    bl fn_8006B174
    lwz r0, 0x10(r1)
    srwi. r0, r0, 31
    bne lbl_fn_802185FC_0000086C
    addi r3, r1, 0x11
    b lbl_fn_802185FC_00000870
lbl_fn_802185FC_0000086C:
    lwz r3, 0x18(r1)
lbl_fn_802185FC_00000870:
    bl fn_800DC6B4
    lwz r0, 0x10(r1)
    mr r31, r3
    srwi. r0, r0, 31
    beq lbl_fn_802185FC_0000088C
    lwz r3, 0x18(r1)
    bl dtor_80084684
lbl_fn_802185FC_0000088C:
    lwz r0, 0x1c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_802185FC_000008A0
    lwz r3, 0x24(r1)
    bl dtor_80084684
lbl_fn_802185FC_000008A0:
    lwz r0, lbl_8087F2A0
    lwz r3, lbl_8087F29C
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_802185FC_000008D0
lbl_fn_802185FC_000008B4:
    lwz r0, 0x0(r3)
    cmplw r31, r0
    bne lbl_fn_802185FC_000008C8
    li r3, 0x1
    b lbl_fn_802185FC_000008EC
lbl_fn_802185FC_000008C8:
    addi r3, r3, 0x4
    bdnz lbl_fn_802185FC_000008B4
lbl_fn_802185FC_000008D0:
    lis r4, lbl_807422B0@ha
    mr r3, r29
    addi r4, r4, lbl_807422B0@l
    addi r4, r4, 0x1d
    bl fn_806827C4
    cntlzw r0, r3
    srwi r3, r0, 5
lbl_fn_802185FC_000008EC:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80218720(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, lbl_8087F2A8
    cmpwi r0, 0x0
    bne lbl_fn_80218720_000009B0
    lis r5, lbl_80742368@ha
    li r3, 0x58
    addi r5, r5, lbl_80742368@l
    li r4, 0x1
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80218720_000009AC
    mr r4, r30
    bl fn_800D1D3C
    lis r3, lbl_807830C0@ha
    addi r30, r31, 0x48
    addi r3, r3, lbl_807830C0@l
    stw r3, 0x0(r31)
    mr r3, r30
    bl fn_80473E74
    lis r4, lbl_8078FEA0@ha
    lis r3, fn_8011FFF8@ha
    addi r4, r4, lbl_8078FEA0@l
    stw r4, 0x0(r30)
    addi r3, r3, fn_8011FFF8@l
    li r0, 0x0
    stw r3, 0x8(r30)
    mr r3, r30
    lwz r4, lbl_80882F40
    stw r0, 0x54(r31)
    lwz r12, 0x0(r30)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80218720_000009AC:
    stw r31, lbl_8087F2A8
lbl_fn_80218720_000009B0:
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087F2A8
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802187E4(void)
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
    beq lbl_fn_802187E4_00000A24
    addic. r3, r3, 0x48
    li r0, 0x0
    stw r0, lbl_8087F2A8
    beq lbl_fn_802187E4_00000A08
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_802187E4_00000A08:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_802187E4_00000A24
    mr r3, r30
    bl dtor_80084684
lbl_fn_802187E4_00000A24:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80218858(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x48
    bl fn_80473F50
    cmpwi r3, 0x0
    beq lbl_fn_80218858_00000A6C
    li r3, 0x0
    b lbl_fn_80218858_00000A88
lbl_fn_80218858_00000A6C:
    addi r3, r31, 0x48
    bl fn_80476CE4
    lwz r0, 0x38(r31)
    stw r3, 0x54(r31)
    li r3, 0x1
    ori r0, r0, 0x4
    stw r0, 0x38(r31)
lbl_fn_80218858_00000A88:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_802188B4(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r20, 0x10(r1)
    mr r20, r3
    mr r21, r4
    bl fn_8005B3CC
    bl fn_800DC12C
    lis r24, lbl_807423B8@ha
    stw r3, 0x0(r21)
    li r22, 0x0
    li r31, 0x6
    addi r26, r24, lbl_807423B8@l
    li r30, 0x5
    li r29, 0x4
    li r28, 0x3
    li r27, 0x2
    li r25, 0x1
lbl_fn_802188B4_00000AE4:
    mr r3, r20
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    mr r23, r3
    extsb. r0, r0
    beq lbl_fn_802188B4_00000BC0
    addi r4, r24, lbl_807423B8@l
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802188B4_00000B18
    stw r25, 0x4(r21)
    b lbl_fn_802188B4_00000BB0
lbl_fn_802188B4_00000B18:
    mr r3, r23
    addi r4, r26, 0x4
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802188B4_00000B38
    stw r27, 0x4(r21)
    b lbl_fn_802188B4_00000BB0
lbl_fn_802188B4_00000B38:
    mr r3, r23
    addi r4, r26, 0x8
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802188B4_00000B58
    stw r28, 0x4(r21)
    b lbl_fn_802188B4_00000BB0
lbl_fn_802188B4_00000B58:
    mr r3, r23
    addi r4, r26, 0xd
    li r5, 0x4
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802188B4_00000B78
    stw r29, 0x4(r21)
    b lbl_fn_802188B4_00000BB0
lbl_fn_802188B4_00000B78:
    mr r3, r23
    addi r4, r26, 0x12
    li r5, 0x3
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802188B4_00000B98
    stw r30, 0x4(r21)
    b lbl_fn_802188B4_00000BB0
lbl_fn_802188B4_00000B98:
    mr r3, r23
    bl fn_800DC12C
    cmpwi r3, 0x0
    ble lbl_fn_802188B4_00000BB0
    stw r31, 0x4(r21)
    stw r3, 0x8(r21)
lbl_fn_802188B4_00000BB0:
    addi r22, r22, 0x1
    addi r21, r21, 0x8
    cmpwi r22, 0x1e
    blt lbl_fn_802188B4_00000AE4
lbl_fn_802188B4_00000BC0:
    lmw r20, 0x10(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_802189EC(void)
{
    nofralloc
    stwu r1, -0x650(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x654(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stw r31, 0x64c(r1)
    stw r30, 0x648(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lis r31, lbl_807423B8@ha
    li r3, 0x6ac
    addi r31, r31, lbl_807423B8@l
    li r4, 0x1
    addi r5, r31, 0x16
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F2B0
    addi r5, r31, 0x16
    mr r6, r5
    li r3, 0x6ac
    li r4, 0x1
    li r7, 0x0
    bl fn_800846FC
    stw r3, lbl_8087F2B4
    li r4, 0x0
    li r5, 0x6ac
    bl memset
    lwz r3, lbl_8087F2B0
    li r4, 0x0
    li r5, 0x6ac
    bl memset
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F4C
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    li r31, 0x0
    b lbl_fn_802189EC_00000CF4
lbl_fn_802189EC_00000CD8:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lwz r0, lbl_8087F2B4
    addi r3, r1, 0xc
    add r4, r0, r31
    bl fn_802188B4
    addi r31, r31, 0xf4
lbl_fn_802189EC_00000CF4:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802189EC_00000CD8
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F48
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r30, r3
    mr r4, r30
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    li r31, 0x0
    b lbl_fn_802189EC_00000D68
lbl_fn_802189EC_00000D4C:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lwz r0, lbl_8087F2B0
    addi r3, r1, 0xc
    add r4, r0, r31
    bl fn_802188B4
    addi r31, r31, 0xf4
lbl_fn_802189EC_00000D68:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802189EC_00000D4C
    lwz r3, lbl_8087F518
    mr r4, r30
    bl fn_8046DD20
    lwz r0, 0x654(r1)
    lwz r31, 0x64c(r1)
    lwz r30, 0x648(r1)
    mtlr r0
    addi r1, r1, 0x650
    blr
}

asm void fn_80218BB4(void)
{
    nofralloc
    mulli r0, r3, 0xf4
    lwz r3, lbl_8087F2B0
    add r3, r3, r0
    blr
}

asm void fn_80218BC4(void)
{
    nofralloc
    mulli r0, r3, 0xf4
    lwz r3, lbl_8087F2B4
    add r3, r3, r0
    blr
}

asm void fn_80218BD4(void)
{
    nofralloc
    stwu r1, -0x670(r1)
    mflr r0
    stw r0, 0x674(r1)
    stmw r21, 0x644(r1)
    lwz r4, lbl_8087F0A8
    lwz r3, lbl_8087F518
    lwz r0, 0x194(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80218BD4_00000DE8
    lwz r4, lbl_80882F54
    b lbl_fn_80218BD4_00000DEC
lbl_fn_80218BD4_00000DE8:
    lwz r4, lbl_80882F50
lbl_fn_80218BD4_00000DEC:
    addi r5, r1, 0x8
    li r6, 0x20
    bl fn_8046DC5C
    lis r22, lbl_80742404@ha
    mr r27, r3
    addi r5, r22, lbl_80742404@l
    li r3, 0x7710
    mr r6, r5
    li r4, 0x3
    li r7, 0x0
    bl fn_800846FC
    lis r4, fn_80219018@ha
    li r5, 0x0
    addi r4, r4, fn_80219018@l
    li r6, 0x88
    li r7, 0xe0
    bl fn_80695720
    lis r4, lbl_807772D0@ha
    li r0, 0x0
    stw r3, lbl_8087F2B8
    addi r4, r4, lbl_807772D0@l
    lwz r23, 0x8(r1)
    addi r3, r1, 0x1c
    stw r4, 0xc(r1)
    li r4, 0x0
    li r5, 0x400
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lwz r12, 0xc(r1)
    mr r4, r27
    mr r5, r23
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D708
    bl fn_8005B6E8
    addi r29, r22, lbl_80742404@l
    li r25, 0x1
    b lbl_fn_80218BD4_000011D0
lbl_fn_80218BD4_00000EB8:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r4, r29, 0x1
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80218BD4_000011D0
    addi r3, r1, 0xc
    bl fn_8005B3CC
    addi r4, r29, 0x7
    bl fn_80682428
    cmpwi r3, 0x0
    bne lbl_fn_80218BD4_000011D0
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    mr r28, r3
    li r26, 0x0
    b lbl_fn_80218BD4_000011B8
lbl_fn_80218BD4_00000F00:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r22, r3
    addi r4, r29, 0xd
    bl fn_80682428
    cmpwi r3, 0x0
    beq lbl_fn_80218BD4_000011D0
    lbz r0, 0x0(r22)
    extsb. r0, r0
    bne lbl_fn_80218BD4_000011B8
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    mr r30, r3
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    mr r31, r3
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_80684600
    cmpwi r31, 0x0
    ble lbl_fn_80218BD4_000011B8
    slwi r0, r28, 5
    lwz r5, lbl_8087F2B8
    add r4, r26, r0
    mulli r4, r4, 0x88
    add r4, r5, r4
    lbz r4, 0x1(r4)
    extsb r4, r4
    cmpw r4, r30
    bge lbl_fn_80218BD4_00000F84
    addi r26, r26, 0x1
lbl_fn_80218BD4_00000F84:
    cmpwi r26, 0x20
    mr r6, r26
    bge lbl_fn_80218BD4_000011B8
    subfic r8, r26, 0x20
    cmpwi r8, 0x8
    ble lbl_fn_80218BD4_00001170
    cmpwi r26, 0x21
    li r5, 0x0
    li r7, 0x0
    li r4, 0x0
    bge lbl_fn_80218BD4_00000FB4
    li r4, 0x1
lbl_fn_80218BD4_00000FB4:
    cmpwi r4, 0x0
    beq lbl_fn_80218BD4_00000FCC
    addis r4, r26, 0x8000
    cmplwi r4, 0x0
    beq lbl_fn_80218BD4_00000FCC
    li r7, 0x1
lbl_fn_80218BD4_00000FCC:
    cmpwi r7, 0x0
    beq lbl_fn_80218BD4_00000FFC
    neg r4, r26
    li r7, 0x1
    clrrwi. r4, r4, 31
    bne lbl_fn_80218BD4_00000FF0
    clrrwi. r4, r8, 31
    beq lbl_fn_80218BD4_00000FF0
    li r7, 0x0
lbl_fn_80218BD4_00000FF0:
    cmpwi r7, 0x0
    beq lbl_fn_80218BD4_00000FFC
    li r5, 0x1
lbl_fn_80218BD4_00000FFC:
    cmpwi r5, 0x0
    beq lbl_fn_80218BD4_00001170
    slwi r5, r28, 5
    subfic r7, r26, 0x1f
    add r4, r26, r5
    srwi r7, r7, 3
    mulli r8, r4, 0x88
    mtctr r7
    cmpwi r26, 0x18
    bge lbl_fn_80218BD4_00001170
lbl_fn_80218BD4_00001024:
    lwz r9, lbl_8087F2B8
    add r7, r6, r5
    addi r22, r7, 0x1
    addi r4, r4, 0x8
    stbx r28, r9, r8
    add r21, r9, r8
    addi r23, r7, 0x2
    addi r12, r7, 0x3
    stb r30, 0x1(r21)
    add r24, r31, r21
    addi r11, r7, 0x4
    addi r10, r7, 0x5
    stb r25, 0x2(r24)
    addi r9, r7, 0x6
    add r24, r3, r21
    addi r7, r7, 0x7
    stb r31, 0x82(r24)
    mulli r22, r22, 0x88
    addi r8, r8, 0x440
    lwz r24, lbl_8087F2B8
    addi r6, r6, 0x8
    mulli r23, r23, 0x88
    stbx r28, r24, r22
    add r21, r24, r22
    stb r30, 0x1(r21)
    add r22, r31, r21
    add r24, r3, r21
    stb r25, 0x2(r22)
    mulli r12, r12, 0x88
    stb r31, 0x82(r24)
    mulli r11, r11, 0x88
    lwz r24, lbl_8087F2B8
    stbx r28, r24, r23
    add r22, r24, r23
    add r23, r31, r22
    stb r30, 0x1(r22)
    add r24, r3, r22
    mulli r10, r10, 0x88
    stb r25, 0x2(r23)
    stb r31, 0x82(r24)
    mulli r9, r9, 0x88
    lwz r24, lbl_8087F2B8
    mulli r7, r7, 0x88
    stbx r28, r24, r12
    add r22, r24, r12
    stb r30, 0x1(r22)
    add r24, r31, r22
    add r12, r3, r22
    stb r25, 0x2(r24)
    stb r31, 0x82(r12)
    lwz r12, lbl_8087F2B8
    stbx r28, r12, r11
    add r22, r12, r11
    add r12, r31, r22
    stb r30, 0x1(r22)
    add r11, r3, r22
    stb r25, 0x2(r12)
    stb r31, 0x82(r11)
    lwz r11, lbl_8087F2B8
    stbx r28, r11, r10
    add r12, r11, r10
    add r11, r31, r12
    stb r30, 0x1(r12)
    add r10, r3, r12
    stb r25, 0x2(r11)
    stb r31, 0x82(r10)
    lwz r10, lbl_8087F2B8
    stbx r28, r10, r9
    add r11, r10, r9
    add r10, r31, r11
    stb r30, 0x1(r11)
    add r9, r3, r11
    stb r25, 0x2(r10)
    stb r31, 0x82(r9)
    lwz r9, lbl_8087F2B8
    stbx r28, r9, r7
    add r10, r9, r7
    add r9, r31, r10
    stb r30, 0x1(r10)
    add r7, r3, r10
    stb r25, 0x2(r9)
    stb r31, 0x82(r7)
    bdnz lbl_fn_80218BD4_00001024
lbl_fn_80218BD4_00001170:
    add r8, r6, r0
    subfic r0, r6, 0x20
    mulli r4, r8, 0x88
    mtctr r0
    cmpwi r6, 0x20
    bge lbl_fn_80218BD4_000011B8
lbl_fn_80218BD4_00001188:
    lwz r0, lbl_8087F2B8
    addi r8, r8, 0x1
    addi r6, r6, 0x1
    stbx r28, r4, r0
    add r9, r0, r4
    add r7, r31, r9
    addi r4, r4, 0x88
    stb r30, 0x1(r9)
    add r5, r3, r9
    stb r25, 0x2(r7)
    stb r31, 0x82(r5)
    bdnz lbl_fn_80218BD4_00001188
lbl_fn_80218BD4_000011B8:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    beq lbl_fn_80218BD4_000011D0
    cmpwi r26, 0x20
    blt lbl_fn_80218BD4_00000F00
lbl_fn_80218BD4_000011D0:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_80218BD4_00000EB8
    lwz r3, lbl_8087F518
    mr r4, r27
    bl fn_8046DD20
    lmw r21, 0x644(r1)
    lwz r0, 0x674(r1)
    mtlr r0
    addi r1, r1, 0x670
    blr
}

asm void fn_80219018(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r4, -0x1
    li r5, 0x80
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stb r4, 0x0(r3)
    li r4, 0x0
    stb r0, 0x1(r3)
    addi r3, r3, 0x2
    bl memset
    addi r3, r31, 0x82
    li r4, 0x0
    li r5, 0x6
    bl memset
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80219074(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmplwi r3, 0x6
    lwz r9, 0x874(r31)
    ble lbl_fn_80219074_0000128C
    li r3, 0x0
    b lbl_fn_80219074_00001334
lbl_fn_80219074_0000128C:
    slwi r7, r3, 5
    li r0, 0x8
    mulli r4, r7, 0x88
    lwz r8, lbl_8087F2B8
    li r3, 0x0
    li r6, 0x0
    mtctr r0
lbl_fn_80219074_000012A8:
    add r5, r8, r4
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219074_000012C4
    cmpw r9, r0
    blt lbl_fn_80219074_00001334
    mr r3, r5
lbl_fn_80219074_000012C4:
    addi r4, r4, 0x88
    add r5, r8, r4
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219074_000012E4
    cmpw r9, r0
    blt lbl_fn_80219074_00001334
    mr r3, r5
lbl_fn_80219074_000012E4:
    addi r4, r4, 0x88
    add r5, r8, r4
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219074_00001304
    cmpw r9, r0
    blt lbl_fn_80219074_00001334
    mr r3, r5
lbl_fn_80219074_00001304:
    addi r4, r4, 0x88
    add r5, r8, r4
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219074_00001324
    cmpw r9, r0
    blt lbl_fn_80219074_00001334
    mr r3, r5
lbl_fn_80219074_00001324:
    addi r7, r7, 0x3
    addi r4, r4, 0x88
    addi r6, r6, 0x3
    bdnz lbl_fn_80219074_000012A8
lbl_fn_80219074_00001334:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80219160(void)
{
    nofralloc
    cmplwi r3, 0x6
    ble lbl_fn_80219160_00001358
    li r3, 0x0
    blr
lbl_fn_80219160_00001358:
    slwi r6, r3, 5
    li r0, 0x8
    mulli r5, r6, 0x88
    lwz r7, lbl_8087F2B8
    li r3, 0x0
    li r8, 0x0
    mtctr r0
lbl_fn_80219160_00001374:
    add r9, r7, r5
    lbz r0, 0x1(r9)
    extsb. r0, r0
    blt lbl_fn_80219160_00001390
    cmpw r4, r0
    bltlr
    mr r3, r9
lbl_fn_80219160_00001390:
    addi r5, r5, 0x88
    add r9, r7, r5
    lbz r0, 0x1(r9)
    extsb. r0, r0
    blt lbl_fn_80219160_000013B0
    cmpw r4, r0
    bltlr
    mr r3, r9
lbl_fn_80219160_000013B0:
    addi r5, r5, 0x88
    add r9, r7, r5
    lbz r0, 0x1(r9)
    extsb. r0, r0
    blt lbl_fn_80219160_000013D0
    cmpw r4, r0
    bltlr
    mr r3, r9
lbl_fn_80219160_000013D0:
    addi r5, r5, 0x88
    add r9, r7, r5
    lbz r0, 0x1(r9)
    extsb. r0, r0
    blt lbl_fn_80219160_000013F0
    cmpw r4, r0
    bltlr
    mr r3, r9
lbl_fn_80219160_000013F0:
    addi r6, r6, 0x3
    addi r5, r5, 0x88
    addi r8, r8, 0x3
    bdnz lbl_fn_80219160_00001374
    blr
}

asm void fn_8021921C(void)
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
    bne lbl_fn_8021921C_00001430
    li r3, 0x0
    b lbl_fn_8021921C_00001514
lbl_fn_8021921C_00001430:
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmplwi r3, 0x6
    lwz r9, 0x874(r30)
    ble lbl_fn_8021921C_0000144C
    li r6, 0x0
    b lbl_fn_8021921C_000014F4
lbl_fn_8021921C_0000144C:
    slwi r7, r3, 5
    li r0, 0x8
    mulli r3, r7, 0x88
    lwz r8, lbl_8087F2B8
    li r6, 0x0
    li r4, 0x0
    mtctr r0
lbl_fn_8021921C_00001468:
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_8021921C_00001484
    cmpw r9, r0
    blt lbl_fn_8021921C_000014F4
    mr r6, r5
lbl_fn_8021921C_00001484:
    addi r3, r3, 0x88
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_8021921C_000014A4
    cmpw r9, r0
    blt lbl_fn_8021921C_000014F4
    mr r6, r5
lbl_fn_8021921C_000014A4:
    addi r3, r3, 0x88
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_8021921C_000014C4
    cmpw r9, r0
    blt lbl_fn_8021921C_000014F4
    mr r6, r5
lbl_fn_8021921C_000014C4:
    addi r3, r3, 0x88
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_8021921C_000014E4
    cmpw r9, r0
    blt lbl_fn_8021921C_000014F4
    mr r6, r5
lbl_fn_8021921C_000014E4:
    addi r7, r7, 0x3
    addi r3, r3, 0x88
    addi r4, r4, 0x3
    bdnz lbl_fn_8021921C_00001468
lbl_fn_8021921C_000014F4:
    cmpwi r6, 0x0
    beq lbl_fn_8021921C_00001510
    add r3, r6, r31
    lbz r3, 0x82(r3)
    extsb r3, r3
    bl fn_8021AF98
    b lbl_fn_8021921C_00001514
lbl_fn_8021921C_00001510:
    li r3, 0x0
lbl_fn_8021921C_00001514:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80219344(void)
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
    bne lbl_fn_80219344_00001558
    li r3, 0x0
    b lbl_fn_80219344_0000163C
lbl_fn_80219344_00001558:
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmplwi r3, 0x6
    lwz r9, 0x874(r30)
    ble lbl_fn_80219344_00001574
    li r6, 0x0
    b lbl_fn_80219344_0000161C
lbl_fn_80219344_00001574:
    slwi r7, r3, 5
    li r0, 0x8
    mulli r3, r7, 0x88
    lwz r8, lbl_8087F2B8
    li r6, 0x0
    li r4, 0x0
    mtctr r0
lbl_fn_80219344_00001590:
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219344_000015AC
    cmpw r9, r0
    blt lbl_fn_80219344_0000161C
    mr r6, r5
lbl_fn_80219344_000015AC:
    addi r3, r3, 0x88
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219344_000015CC
    cmpw r9, r0
    blt lbl_fn_80219344_0000161C
    mr r6, r5
lbl_fn_80219344_000015CC:
    addi r3, r3, 0x88
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219344_000015EC
    cmpw r9, r0
    blt lbl_fn_80219344_0000161C
    mr r6, r5
lbl_fn_80219344_000015EC:
    addi r3, r3, 0x88
    add r5, r8, r3
    lbz r0, 0x1(r5)
    extsb. r0, r0
    blt lbl_fn_80219344_0000160C
    cmpw r9, r0
    blt lbl_fn_80219344_0000161C
    mr r6, r5
lbl_fn_80219344_0000160C:
    addi r7, r7, 0x3
    addi r3, r3, 0x88
    addi r4, r4, 0x3
    bdnz lbl_fn_80219344_00001590
lbl_fn_80219344_0000161C:
    cmpwi r6, 0x0
    beq lbl_fn_80219344_00001638
    add r3, r6, r31
    lbz r3, 0x82(r3)
    extsb r3, r3
    bl fn_8021AFF4
    b lbl_fn_80219344_0000163C
lbl_fn_80219344_00001638:
    li r3, 0x0
lbl_fn_80219344_0000163C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8021946C(void)
{
    nofralloc
    cmplwi r3, 0x6
    ble lbl_fn_8021946C_00001664
    li r8, 0x0
    b lbl_fn_8021946C_0000170C
lbl_fn_8021946C_00001664:
    slwi r9, r3, 5
    li r0, 0x8
    mulli r3, r9, 0x88
    lwz r10, lbl_8087F2B8
    li r8, 0x0
    li r7, 0x0
    mtctr r0
lbl_fn_8021946C_00001680:
    add r6, r10, r3
    lbz r0, 0x1(r6)
    extsb. r0, r0
    blt lbl_fn_8021946C_0000169C
    cmpw r4, r0
    blt lbl_fn_8021946C_0000170C
    mr r8, r6
lbl_fn_8021946C_0000169C:
    addi r3, r3, 0x88
    add r6, r10, r3
    lbz r0, 0x1(r6)
    extsb. r0, r0
    blt lbl_fn_8021946C_000016BC
    cmpw r4, r0
    blt lbl_fn_8021946C_0000170C
    mr r8, r6
lbl_fn_8021946C_000016BC:
    addi r3, r3, 0x88
    add r6, r10, r3
    lbz r0, 0x1(r6)
    extsb. r0, r0
    blt lbl_fn_8021946C_000016DC
    cmpw r4, r0
    blt lbl_fn_8021946C_0000170C
    mr r8, r6
lbl_fn_8021946C_000016DC:
    addi r3, r3, 0x88
    add r6, r10, r3
    lbz r0, 0x1(r6)
    extsb. r0, r0
    blt lbl_fn_8021946C_000016FC
    cmpw r4, r0
    blt lbl_fn_8021946C_0000170C
    mr r8, r6
lbl_fn_8021946C_000016FC:
    addi r9, r9, 0x3
    addi r3, r3, 0x88
    addi r7, r7, 0x3
    bdnz lbl_fn_8021946C_00001680
lbl_fn_8021946C_0000170C:
    cmpwi r8, 0x0
    beq lbl_fn_8021946C_00001724
    add r3, r8, r5
    lbz r3, 0x82(r3)
    extsb r3, r3
    b fn_8021AFF4
lbl_fn_8021946C_00001724:
    li r3, 0x0
    blr
}

asm void fn_80219544(void)
{
    nofralloc
    lis r4, lbl_80742418@ha
    slwi r0, r3, 2
    addi r4, r4, lbl_80742418@l
    lwzx r3, r4, r0
    blr
}

asm void fn_80219558(void)
{
    nofralloc
    lis r4, lbl_80742418@ha
    li r0, 0x12
    li r5, 0x0
    addi r4, r4, lbl_80742418@l
    mtctr r0
lbl_fn_80219558_00001754:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_80219558_00001788
    subi r0, r5, 0xf
    cmplwi r0, 0x2
    bgt lbl_fn_80219558_00001774
    li r3, 0x0
    blr
lbl_fn_80219558_00001774:
    cmpwi r5, 0xd
    li r3, 0x2
    beqlr
    mr r3, r5
    blr
lbl_fn_80219558_00001788:
    addi r4, r4, 0x4
    addi r5, r5, 0x1
    bdnz lbl_fn_80219558_00001754
    subis r0, r3, 0x1
    cmplwi r0, 0x870e
    bne lbl_fn_80219558_000017A8
    li r3, 0x1
    blr
lbl_fn_80219558_000017A8:
    subis r0, r3, 0x3
    cmplwi r0, 0xf7a
    bne lbl_fn_80219558_000017BC
    li r3, 0x9
    blr
lbl_fn_80219558_000017BC:
    lis r4, lbl_80742460@ha
    li r0, 0x2
    addi r4, r4, lbl_80742460@l
    li r5, 0x0
    mtctr r0
lbl_fn_80219558_000017D0:
    lwz r0, 0x0(r4)
    cmpw r3, r0
    bne lbl_fn_80219558_000017E4
    mr r3, r5
    blr
lbl_fn_80219558_000017E4:
    lwz r0, 0x4(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_000017FC
    mr r3, r5
    blr
lbl_fn_80219558_000017FC:
    lwz r0, 0x8(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_00001814
    mr r3, r5
    blr
lbl_fn_80219558_00001814:
    lwz r0, 0xc(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_0000182C
    mr r3, r5
    blr
lbl_fn_80219558_0000182C:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_00001844
    mr r3, r5
    blr
lbl_fn_80219558_00001844:
    lwz r0, 0x14(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_0000185C
    mr r3, r5
    blr
lbl_fn_80219558_0000185C:
    lwz r0, 0x18(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_00001874
    mr r3, r5
    blr
lbl_fn_80219558_00001874:
    lwz r0, 0x1c(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_0000188C
    mr r3, r5
    blr
lbl_fn_80219558_0000188C:
    lwz r0, 0x20(r4)
    addi r5, r5, 0x1
    cmpw r3, r0
    bne lbl_fn_80219558_000018A4
    mr r3, r5
    blr
lbl_fn_80219558_000018A4:
    addi r4, r4, 0x24
    addi r5, r5, 0x1
    bdnz lbl_fn_80219558_000017D0
    li r3, -0x1
    blr
}

asm void fn_802196D0(void)
{
    nofralloc
    stwu r1, -0x660(r1)
    mflr r0
    lis r3, lbl_807772D0@ha
    li r4, 0x0
    stw r0, 0x664(r1)
    li r0, 0x0
    addi r3, r3, lbl_807772D0@l
    li r5, 0x400
    stmw r24, 0x640(r1)
    stw r3, 0xc(r1)
    addi r3, r1, 0x1c
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x63c(r1)
    bl memset
    addi r3, r1, 0x61c
    li r4, 0x0
    li r5, 0x20
    bl memset
    lis r4, lbl_807772B0@ha
    addi r3, r1, 0xc
    addi r4, r4, lbl_807772B0@l
    stw r4, 0xc(r1)
    la r4, lbl_8087D720
    bl fn_8005B6E8
    lwz r0, lbl_8087F2C0
    cmpwi r0, 0x0
    bne lbl_fn_802196D0_00001B40
    lwz r0, lbl_8087EE90
    cmpwi r0, 0x0
    beq lbl_fn_802196D0_00001B40
    lwz r3, lbl_8087F518
    addi r5, r1, 0x8
    lwz r4, lbl_80882F58
    li r6, 0x20
    bl fn_8046DC5C
    lwz r12, 0xc(r1)
    mr r25, r3
    mr r4, r25
    addi r3, r1, 0xc
    lwz r12, 0x8(r12)
    lwz r5, 0x8(r1)
    mtctr r12
    bctrl
    b lbl_fn_802196D0_000019A8
lbl_fn_802196D0_00001970:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802196D0_000019A8
    cmpwi r0, 0x23
    beq lbl_fn_802196D0_000019A8
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_802196D0_000019A8
    lwz r3, lbl_8087F2C4
    addi r0, r3, 0x1
    stw r0, lbl_8087F2C4
lbl_fn_802196D0_000019A8:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802196D0_00001970
    lwz r0, lbl_8087F2C4
    lis r5, lbl_8074251C@ha
    addi r5, r5, lbl_8074251C@l
    li r4, 0xc
    mulli r3, r0, 0x24
    li r7, 0x0
    mr r6, r5
    bl fn_800846FC
    stw r3, lbl_8087F2C0
    lwz r3, lbl_8087EE90
    bl fn_8004A03C
    lwz r12, 0xc(r1)
    mr r4, r25
    addi r3, r1, 0xc
    lwz r5, 0x8(r1)
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    li r28, 0x0
    lis r31, lbl_80742500@ha
    b lbl_fn_802196D0_00001B24
lbl_fn_802196D0_00001A0C:
    addi r3, r1, 0xc
    bl fn_8005B3CC
    lbz r0, 0x0(r3)
    extsb r0, r0
    cmpwi r0, 0x3b
    beq lbl_fn_802196D0_00001B24
    cmpwi r0, 0x23
    beq lbl_fn_802196D0_00001B24
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_802196D0_00001B24
    lwz r0, lbl_8087F2C0
    addi r3, r1, 0x1c
    add r24, r0, r28
    bl fn_80684600
    stw r3, 0x0(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    mr r30, r3
    addi r27, r31, lbl_80742500@l
    li r29, 0x0
    b lbl_fn_802196D0_00001A90
lbl_fn_802196D0_00001A64:
    mr r3, r26
    bl strlen
    mr r5, r3
    mr r3, r30
    mr r4, r26
    bl fn_80682544
    cmpwi r3, 0x0
    bne lbl_fn_802196D0_00001A88
    b lbl_fn_802196D0_00001AA0
lbl_fn_802196D0_00001A88:
    addi r27, r27, 0x4
    addi r29, r29, 0x1
lbl_fn_802196D0_00001A90:
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    bne lbl_fn_802196D0_00001A64
    li r29, -0x1
lbl_fn_802196D0_00001AA0:
    stw r29, 0x4(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x8(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0xc(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x10(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x14(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x18(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x1c(r24)
    addi r3, r1, 0xc
    bl fn_8005B3CC
    bl fn_800DC288
    stfs f1, 0x20(r24)
    mr r4, r24
    lwz r3, lbl_8087EE90
    bl fn_80049E54
    addi r28, r28, 0x24
lbl_fn_802196D0_00001B24:
    addi r3, r1, 0xc
    bl fn_8005B5F8
    cmpwi r3, 0x0
    bne lbl_fn_802196D0_00001A0C
    lwz r3, lbl_8087F518
    mr r4, r25
    bl fn_8046DD20
lbl_fn_802196D0_00001B40:
    lmw r24, 0x640(r1)
    lwz r0, 0x664(r1)
    mtlr r0
    addi r1, r1, 0x660
    blr
}
