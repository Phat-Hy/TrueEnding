#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_25(void);
extern void _restgpr_27(void);
extern void _savegpr_25(void);
extern void _savegpr_27(void);
extern void dtor_80084684(void);
extern void fn_8000D124(void);
extern void fn_8000DB1C(void);
extern void fn_80010374(void);
extern void fn_80010B68(void);
extern void fn_80012A1C(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_8004B290(void);
extern void fn_8004ED34(void);
extern void fn_80076FF8(void);
extern void fn_800844D8(void);
extern void fn_800928B0(void);
extern void fn_800FB4B0(void);
extern void fn_801162A4(void);
extern void fn_8048B048(void);
extern void fn_8048B3B8(void);
extern void fn_8048BCA4(void);
extern void fn_80547EA4(void);
extern void fn_80548570(void);
extern void fn_80548760(void);
extern void fn_8059A000(void);
extern void fn_805F8E70(void);
extern void fn_805F93C0(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void memmove(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807366D4[];
extern u8 lbl_80775A48[];
extern u8 lbl_80775A88[];
extern u8 lbl_80779F40[];
extern u8 lbl_80779F68[];
extern u8 lbl_80779F84[];
extern u8 lbl_807C7030[];

/* Small data declarations */
extern u32 lbl_8087EE98;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F540;
extern u32 lbl_808816A8;
extern u32 lbl_808816AC;
extern u32 lbl_808816B0;
extern u32 lbl_808816B4;
extern u32 lbl_808816B8;
extern u32 lbl_808816BC;
extern u32 lbl_808816C0;
extern u32 lbl_808816C4;

/* Function declarations */
void fn_801120B0(void);
void fn_80112174(void);
void fn_80112218(void);
void fn_80112220(void);
void fn_80112254(void);
void fn_801125F8(void);
void fn_80112604(void);
void fn_80112784(void);
void fn_80112840(void);
void fn_801128C4(void);
void fn_80112918(void);
void fn_80112958(void);
void fn_80112960(void);
void fn_80112974(void);
void fn_801129B4(void);
void fn_801129C0(void);
void fn_80112A00(void);
void fn_80112B64(void);
void fn_80112F54(void);
void fn_80112F5C(void);
void fn_801130F4(void);
void fn_801130FC(void);
void fn_80113128(void);

asm void fn_801120B0(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x74(r1)
    addi r7, r4, 0x6
    stw r31, 0x6c(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_801120B0_00000030
    oris r7, r7, 0x4000
lbl_fn_801120B0_00000030:
    li r0, 0x0
    stw r0, 0x44(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x10
    stw r0, 0x48(r1)
    addi r5, r31, 0x14
    addi r6, r31, 0x8
    li r8, 0x0
    stw r0, 0x4c(r1)
    li r9, 0x0
    stw r0, 0x50(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_801120B0_000000B0
    li r0, 0x1
    stw r0, 0x8(r1)
    addi r7, r31, 0x8
    li r8, 0x0
    lwz r3, lbl_8087F048
    li r9, 0x1e
    lwz r4, 0x88(r31)
    li r10, -0x1
    lwz r5, 0x68(r31)
    lwz r6, 0x7c(r31)
    bl fn_800FB4B0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_801120B0_000000B0:
    lwz r0, 0x74(r1)
    lwz r31, 0x6c(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}

asm void fn_80112174(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x64(r1)
    addi r7, r4, 0x6
    stw r31, 0x5c(r1)
    mr r31, r3
    lwz r0, 0x4(r3)
    rlwinm r0, r0, 0, 30, 30
    cmplwi r0, 0x2
    bne lbl_fn_80112174_000000F4
    oris r7, r7, 0x4000
lbl_fn_80112174_000000F4:
    li r0, 0x0
    stw r0, 0x3c(r1)
    lwz r3, lbl_8087EE98
    addi r4, r1, 0x8
    stw r0, 0x40(r1)
    addi r5, r31, 0x14
    addi r6, r31, 0x8
    li r8, 0x0
    stw r0, 0x44(r1)
    li r9, 0x0
    stw r0, 0x48(r1)
    bl fn_8004ED34
    cmpwi r3, 0x0
    beq lbl_fn_80112174_00000154
    lwz r3, 0x8c(r31)
    addi r4, r1, 0x18
    bl fn_8059A000
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x1
    li r5, 0x0
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
lbl_fn_80112174_00000154:
    lwz r0, 0x64(r1)
    lwz r31, 0x5c(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80112218(void)
{
    nofralloc
    li r3, 0x0
    blr
}

asm void fn_80112220(void)
{
    nofralloc
    lfs f1, 0x0(r3)
    lfs f0, lbl_808816B0
    fcmpo cr0, f1, f0
    ble lbl_fn_80112220_00000188
    lfs f1, lbl_808816A8
    b lbl_fn_80112220_0000018C
lbl_fn_80112220_00000188:
    lfs f1, lbl_808816AC
lbl_fn_80112220_0000018C:
    lfs f0, 0x0(r3)
    stfs f1, 0x0(r5)
    fabs f0, f0
    frsp f0, f0
    stfs f0, 0x0(r4)
    blr
}

asm void fn_80112254(void)
{
    nofralloc
    stwu r1, -0x50(r1)
    mflr r0
    stw r0, 0x54(r1)
    addi r11, r1, 0x50
    bl _savegpr_25
    mr r31, r3
    li r4, 0x0
    li r5, 0x0
    bl fn_8004B290
    lis r26, lbl_807C7030@ha
    lis r25, lbl_807366D4@ha
    addi r26, r26, lbl_807C7030@l
    lis r27, lbl_80775A48@ha
    lfs f2, 0x8(r26)
    addi r25, r25, lbl_807366D4@l
    psq_l f1, 0x0(r26), 0, 0
    li r0, 0x0
    psq_st f1, 0x218(r31), 0, 0
    addi r4, r1, 0x24
    addi r5, r1, 0x18
    lfs f3, lbl_808816B0
    stw r0, 0x210(r31)
    addi r27, r27, lbl_80775A48@l
    lfs f0, lbl_808816A8
    mr r3, r25
    stw r0, 0x214(r31)
    stfs f2, 0x220(r31)
    stw r0, 0x224(r31)
    psq_st f1, 0x0(r4), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    stfs f2, 0x2c(r1)
    lfs f2, 0x8(r26)
    psq_st f1, 0x0(r5), 0, 0
    stfs f2, 0x20(r1)
    stw r0, 0x240(r31)
    stw r0, 0x244(r31)
    psq_st f1, 0x248(r31), 0, 0
    stfs f2, 0x250(r31)
    stw r0, 0x254(r31)
    stfs f3, 0x274(r31)
    stfs f3, 0x278(r31)
    stfs f0, 0x27c(r31)
    stw r27, 0x29c(r31)
    stw r0, 0x2a0(r31)
    stw r0, 0x2a4(r31)
    stw r0, 0x2a8(r31)
    stw r0, 0x2ac(r31)
    bl strlen
    mr r28, r3
    addi r3, r31, 0x2a4
    mr r4, r28
    bl fn_80013DC4
    lbz r0, 0x14(r1)
    mr r6, r25
    stb r0, 0x10(r1)
    addi r3, r31, 0x2a4
    add r7, r25, r28
    addi r8, r1, 0x10
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lfs f0, lbl_808816B0
    lis r29, lbl_80779F40@ha
    li r28, 0x0
    li r30, 0x1
    addi r29, r29, lbl_80779F40@l
    stw r28, 0x2b0(r31)
    mr r3, r25
    stw r29, 0x29c(r31)
    stw r30, 0x2b4(r31)
    stw r28, 0x2b8(r31)
    stw r28, 0x2bc(r31)
    stw r28, 0x2c0(r31)
    stw r28, 0x2c4(r31)
    stw r28, 0x2c8(r31)
    stw r28, 0x2cc(r31)
    stw r28, 0x2d0(r31)
    stfs f0, 0x2d4(r31)
    stw r28, 0x2f0(r31)
    stw r28, 0x2f4(r31)
    stw r28, 0x2f8(r31)
    stw r28, 0x2fc(r31)
    stw r28, 0x300(r31)
    stw r28, 0x304(r31)
    stw r28, 0x308(r31)
    stw r28, 0x30c(r31)
    stw r28, 0x310(r31)
    stw r28, 0x314(r31)
    stw r28, 0x318(r31)
    stw r28, 0x31c(r31)
    stw r27, 0x320(r31)
    stw r28, 0x324(r31)
    stw r28, 0x328(r31)
    stw r28, 0x32c(r31)
    stw r28, 0x330(r31)
    bl strlen
    mr r27, r3
    addi r3, r31, 0x328
    mr r4, r27
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r6, r25
    stb r0, 0x8(r1)
    addi r3, r31, 0x328
    add r7, r25, r27
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lfs f4, lbl_808816B0
    addi r3, r31, 0x444
    lfs f3, lbl_808816A8
    li r4, 0x0
    lfs f0, lbl_808816B4
    li r5, 0x0
    stw r28, 0x334(r31)
    stw r29, 0x320(r31)
    stw r30, 0x338(r31)
    stw r28, 0x33c(r31)
    stw r28, 0x340(r31)
    stw r28, 0x344(r31)
    stw r28, 0x348(r31)
    stw r28, 0x34c(r31)
    stw r28, 0x350(r31)
    stw r28, 0x354(r31)
    stfs f4, 0x358(r31)
    stw r28, 0x374(r31)
    stw r28, 0x378(r31)
    stw r28, 0x37c(r31)
    stw r28, 0x380(r31)
    stw r28, 0x384(r31)
    stw r28, 0x388(r31)
    stw r28, 0x38c(r31)
    stw r28, 0x390(r31)
    stw r28, 0x394(r31)
    stw r28, 0x398(r31)
    stw r28, 0x39c(r31)
    stw r28, 0x3a0(r31)
    stw r28, 0x400(r31)
    stfs f3, 0x404(r31)
    stfs f3, 0x408(r31)
    stfs f3, 0x40c(r31)
    stfs f3, 0x410(r31)
    stfs f4, 0x414(r31)
    stfs f4, 0x418(r31)
    stw r28, 0x41c(r31)
    stw r28, 0x420(r31)
    stfs f4, 0x424(r31)
    stfs f4, 0x428(r31)
    stfs f4, 0x42c(r31)
    stfs f4, 0x430(r31)
    stfs f0, 0x434(r31)
    stfs f0, 0x438(r31)
    stw r28, 0x43c(r31)
    bl fn_8004B290
    lfs f6, lbl_808816B0
    lfs f5, lbl_808816AC
    stfs f6, 0x638(r31)
    lfs f4, lbl_808816B8
    stfs f5, 0x63c(r31)
    lfs f3, lbl_808816BC
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x20c(r31)
    lfs f0, lbl_808816C0
    psq_st f1, 0x204(r31), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x230(r31)
    psq_st f1, 0x228(r31), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x264(r31)
    psq_st f1, 0x25c(r31), 0, 0
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x270(r31)
    psq_st f1, 0x268(r31), 0, 0
    stfs f6, 0x258(r31)
    stw r28, 0x1f4(r31)
    stw r28, 0x1f8(r31)
    sth r28, 0x280(r31)
    sth r28, 0x282(r31)
    sth r28, 0x284(r31)
    sth r28, 0x286(r31)
    stfs f6, 0x288(r31)
    stfs f5, 0x3fc(r31)
    psq_l f1, 0x0(r26), 0, 0
    lfs f2, 0x8(r26)
    stfs f2, 0x3f8(r31)
    psq_st f1, 0x3f0(r31), 0, 0
    stfs f4, 0x1fc(r31)
    stfs f3, 0x200(r31)
    stfs f0, 0x8(r31)
    stfs f0, 0xc(r31)
    stfs f0, 0x10(r31)
    stfs f6, 0x14(r31)
    stfs f6, 0x18(r31)
    stfs f6, 0x1c(r31)
    lwz r3, lbl_8087EEE0
    cmpwi r3, 0x0
    beq lbl_fn_80112254_000004D4
    bl fn_80076FF8
    stfs f1, 0x54(r31)
lbl_fn_80112254_000004D4:
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beq lbl_fn_80112254_000004F4
    lfs f0, 0x1c0(r3)
    stfs f0, 0xc8(r31)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x1c4(r3)
    stfs f0, 0xcc(r31)
lbl_fn_80112254_000004F4:
    lfs f0, lbl_808816B0
    li r4, -0x1
    lfs f3, 0x1fc(r31)
    li r0, 0x0
    stfs f3, 0x50(r31)
    addi r11, r1, 0x50
    mr r3, r31
    stfs f0, 0x64c(r31)
    stfs f0, 0x648(r31)
    stfs f0, 0x644(r31)
    stfs f0, 0x658(r31)
    stfs f0, 0x654(r31)
    stfs f0, 0x650(r31)
    stw r4, 0x28c(r31)
    stw r4, 0x290(r31)
    stw r0, 0x640(r31)
    bl _restgpr_25
    lwz r0, 0x54(r1)
    mtlr r0
    addi r1, r1, 0x50
    blr
}

asm void fn_801125F8(void)
{
    nofralloc
    lfs f0, lbl_808816C4
    fmuls f1, f0, f1
    blr
}

asm void fn_80112604(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    beq lbl_fn_80112604_000006B4
    addic. r29, r3, 0x34
    beq lbl_fn_80112604_00000638
    addic. r4, r29, 0x44
    beq lbl_fn_80112604_000005B4
    beq lbl_fn_80112604_000005B4
    beq lbl_fn_80112604_000005B4
    beq lbl_fn_80112604_000005B4
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80112604_000005B4
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80112604_000005B4:
    addic. r4, r29, 0x38
    beq lbl_fn_80112604_000005E0
    beq lbl_fn_80112604_000005E0
    beq lbl_fn_80112604_000005E0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80112604_000005E0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80112604_000005E0:
    addic. r4, r29, 0x2c
    beq lbl_fn_80112604_0000060C
    beq lbl_fn_80112604_0000060C
    beq lbl_fn_80112604_0000060C
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80112604_0000060C
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80112604_0000060C:
    addic. r4, r29, 0x20
    beq lbl_fn_80112604_00000638
    beq lbl_fn_80112604_00000638
    beq lbl_fn_80112604_00000638
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80112604_00000638
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80112604_00000638:
    addic. r4, r30, 0x28
    beq lbl_fn_80112604_00000664
    beq lbl_fn_80112604_00000664
    beq lbl_fn_80112604_00000664
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_80112604_00000664
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_80112604_00000664:
    addic. r0, r30, 0x1c
    beq lbl_fn_80112604_00000680
    lwz r0, 0x1c(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80112604_00000680
    lwz r3, 0x24(r30)
    bl dtor_80084684
lbl_fn_80112604_00000680:
    cmpwi r30, 0x0
    beq lbl_fn_80112604_000006A4
    addic. r0, r30, 0x8
    beq lbl_fn_80112604_000006A4
    lwz r0, 0x8(r30)
    srwi. r0, r0, 31
    beq lbl_fn_80112604_000006A4
    lwz r3, 0x10(r30)
    bl dtor_80084684
lbl_fn_80112604_000006A4:
    cmpwi r31, 0x0
    ble lbl_fn_80112604_000006B4
    mr r3, r30
    bl dtor_80084684
lbl_fn_80112604_000006B4:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80112784(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x1f4(r3)
    lwz r3, lbl_8087EEE0
    cmpwi r3, 0x0
    beq lbl_fn_80112784_00000704
    bl fn_80076FF8
    stfs f1, 0x54(r31)
lbl_fn_80112784_00000704:
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beq lbl_fn_80112784_00000724
    lfs f0, 0x1c0(r3)
    stfs f0, 0xc8(r31)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x1c4(r3)
    stfs f0, 0xcc(r31)
lbl_fn_80112784_00000724:
    lwz r0, 0x1f8(r31)
    li r3, 0x0
    lfs f2, lbl_808816B0
    lfs f1, lbl_808816A8
    rlwinm r0, r0, 0, 3, 1
    lfs f3, 0x1fc(r31)
    lfs f0, lbl_808816AC
    stfs f3, 0x50(r31)
    stfs f2, 0x64c(r31)
    stfs f2, 0x648(r31)
    stfs f2, 0x644(r31)
    stfs f2, 0x658(r31)
    stfs f2, 0x654(r31)
    stfs f2, 0x650(r31)
    stw r3, 0x400(r31)
    stfs f1, 0x404(r31)
    stfs f1, 0x40c(r31)
    stfs f1, 0x410(r31)
    stfs f2, 0x408(r31)
    stw r3, 0x41c(r31)
    stfs f0, 0x3fc(r31)
    stw r0, 0x1f8(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80112840(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087EEE0
    cmpwi r0, 0x0
    beq lbl_fn_80112840_000007BC
    mr r3, r0
    bl fn_80076FF8
    stfs f1, 0x54(r31)
lbl_fn_80112840_000007BC:
    lwz r3, lbl_8087EFA8
    cmpwi r3, 0x0
    beq lbl_fn_80112840_000007DC
    lfs f0, 0x1c0(r3)
    stfs f0, 0xc8(r31)
    lwz r3, lbl_8087EFA8
    lfs f0, 0x1c4(r3)
    stfs f0, 0xcc(r31)
lbl_fn_80112840_000007DC:
    lfs f0, lbl_808816B0
    lfs f1, 0x1fc(r31)
    stfs f1, 0x50(r31)
    stfs f0, 0x64c(r31)
    stfs f0, 0x648(r31)
    stfs f0, 0x644(r31)
    stfs f0, 0x658(r31)
    stfs f0, 0x654(r31)
    stfs f0, 0x650(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801128C4(void)
{
    nofralloc
    lha r7, 0x284(r3)
    li r5, 0x0
    lha r6, 0x286(r3)
    cmpwi r4, 0x0
    lwz r0, 0x1f8(r3)
    lfs f0, lbl_808816B0
    clrlwi r0, r0, 1
    stfs f0, 0x288(r3)
    sth r7, 0x280(r3)
    sth r6, 0x282(r3)
    sth r5, 0x284(r3)
    sth r5, 0x286(r3)
    stw r0, 0x1f8(r3)
    beqlr
    lis r4, lbl_807C7030@ha
    addi r4, r4, lbl_807C7030@l
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    stfs f2, 0x264(r3)
    psq_st f1, 0x25c(r3), 0, 0
    blr
}

asm void fn_80112918(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    sth r4, 0x284(r3)
    mr r4, r6
    sth r5, 0x286(r3)
    lwz r3, lbl_8087F540
    bl fn_8048B3B8
    stw r3, 0x28c(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80112958(void)
{
    nofralloc
    addi r3, r3, 0x14
    blr
}

asm void fn_80112960(void)
{
    nofralloc
    psq_l f1, 0x0(r4), 0, 0
    lfs f2, 0x8(r4)
    psq_st f1, 0x14(r3), 0, 0
    stfs f2, 0x1c(r3)
    blr
}

asm void fn_80112974(void)
{
    nofralloc
    neg r0, r4
    lis r5, lbl_807C7030@ha
    or r4, r0, r4
    lwz r0, 0x1f8(r3)
    rlwimi r0, r4, 30, 2, 2
    stw r0, 0x1f8(r3)
    addi r5, r5, lbl_807C7030@l
    fmr f3, f1
    fmr f0, f2
    psq_l f1, 0x0(r5), 0, 0
    lfs f2, 0x8(r5)
    stfs f2, 0x3ac(r3)
    psq_st f1, 0x3a4(r3), 0, 0
    stfs f3, 0x3b0(r3)
    stfs f0, 0x3b4(r3)
    blr
}

asm void fn_801129B4(void)
{
    nofralloc
    li r0, 0x0
    stw r0, 0x1f4(r3)
    blr
}

asm void fn_801129C0(void)
{
    nofralloc
    lfs f0, lbl_808816A8
    fcmpo cr0, f0, f1
    bge lbl_fn_801129C0_00000920
    b lbl_fn_801129C0_00000924
lbl_fn_801129C0_00000920:
    fmr f0, f1
lbl_fn_801129C0_00000924:
    lfs f2, lbl_808816B0
    fcmpo cr0, f2, f0
    ble lbl_fn_801129C0_00000934
    b lbl_fn_801129C0_00000948
lbl_fn_801129C0_00000934:
    lfs f2, lbl_808816A8
    fcmpo cr0, f2, f1
    bge lbl_fn_801129C0_00000944
    b lbl_fn_801129C0_00000948
lbl_fn_801129C0_00000944:
    fmr f2, f1
lbl_fn_801129C0_00000948:
    stfs f2, 0x294(r3)
    blr
}

asm void fn_80112A00(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    lwz r0, 0x14(r4)
    stw r31, 0x8c(r1)
    cmpwi r0, 0x0
    stw r30, 0x88(r1)
    mr r30, r4
    stw r29, 0x84(r1)
    mr r29, r3
    beq lbl_fn_80112A00_00000988
    mr r4, r0
    bl fn_80548570
    b lbl_fn_80112A00_00000A98
lbl_fn_80112A00_00000988:
    lwz r3, 0x0(r4)
    bl fn_80012A1C
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80112A00_000009C8
    lwz r4, 0x4(r30)
    li r5, 0x0
    bl fn_800928B0
    cmpwi r3, 0x0
    bge lbl_fn_80112A00_000009B8
    li r5, 0x0
    b lbl_fn_80112A00_000009CC
lbl_fn_80112A00_000009B8:
    mulli r0, r3, 0x30
    lwz r3, 0x3c(r31)
    add r5, r3, r0
    b lbl_fn_80112A00_000009CC
lbl_fn_80112A00_000009C8:
    li r5, 0x0
lbl_fn_80112A00_000009CC:
    cmpwi r5, 0x0
    beq lbl_fn_80112A00_00000A04
    lfs f0, 0x1c(r5)
    addi r4, r1, 0x20
    lfs f3, 0xc(r5)
    addi r3, r1, 0x38
    stfs f3, 0x20(r1)
    lfs f2, 0x2c(r5)
    stfs f0, 0x24(r1)
    psq_l f1, 0x0(r4), 0, 0
    stfs f2, 0x28(r1)
    psq_st f1, 0x0(r3), 0, 0
    stfs f2, 0x40(r1)
    b lbl_fn_80112A00_00000A28
lbl_fn_80112A00_00000A04:
    lwz r4, 0x0(r30)
    addi r3, r1, 0x14
    bl fn_80010374
    addi r3, r1, 0x14
    lfs f2, 0x1c(r1)
    addi r4, r1, 0x38
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x40(r1)
lbl_fn_80112A00_00000A28:
    lfs f2, 0x10(r30)
    addi r31, r1, 0x2c
    psq_l f1, 0x8(r30), 0, 0
    addi r3, r1, 0x8
    psq_st f1, 0x0(r31), 0, 0
    lwz r4, 0x0(r30)
    stfs f2, 0x34(r1)
    bl fn_80010B68
    lfs f1, 0xc(r1)
    addi r3, r1, 0x48
    li r4, 0x79
    bl fn_805F8E70
    mr r4, r31
    mr r5, r31
    addi r3, r1, 0x48
    bl fn_805F93C0
    lfs f3, 0x40(r1)
    lfs f0, 0x34(r1)
    lfs f5, 0x3c(r1)
    fadds f6, f3, f0
    lfs f4, 0x30(r1)
    lfs f0, 0x2c(r1)
    lfs f3, 0x38(r1)
    fadds f4, f5, f4
    stfs f6, 0x8(r29)
    fadds f0, f3, f0
    stfs f4, 0x4(r29)
    stfs f0, 0x0(r29)
lbl_fn_80112A00_00000A98:
    lwz r0, 0x94(r1)
    lwz r31, 0x8c(r1)
    lwz r30, 0x88(r1)
    lwz r29, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_80112B64(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x60
    bl _savegpr_27
    lwz r3, lbl_8087F540
    mr r27, r4
    mr r29, r5
    lwz r28, 0x70(r3)
    cmpwi r28, 0x0
    beq lbl_fn_80112B64_00000E8C
    cmpwi r6, 0x0
    bne lbl_fn_80112B64_00000B0C
    lwz r30, 0x2c(r5)
    li r31, 0x0
    b lbl_fn_80112B64_00000B04
lbl_fn_80112B64_00000AF4:
    lwz r4, 0x28(r29)
    mr r3, r29
    bl fn_80547EA4
    addi r31, r31, 0x1
lbl_fn_80112B64_00000B04:
    cmpw r31, r30
    blt lbl_fn_80112B64_00000AF4
lbl_fn_80112B64_00000B0C:
    stw r28, 0x4(r29)
    addi r30, r1, 0x20
    lwz r0, 0x2c(r29)
    lwz r31, 0x30(r29)
    psq_l f1, 0x0(r27), 0, 0
    lfs f2, 0x8(r27)
    cmplw r0, r31
    lfs f0, lbl_808816B0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x28(r1)
    stfs f0, 0x2c(r1)
    bge lbl_fn_80112B64_00000B6C
    lwz r3, 0x28(r29)
    slwi r0, r0, 4
    add. r3, r3, r0
    beq lbl_fn_80112B64_00000B5C
    psq_st f1, 0x0(r3), 0, 0
    frsp f2, f2
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_80112B64_00000B5C:
    lwz r3, 0x2c(r29)
    addi r0, r3, 0x1
    stw r0, 0x2c(r29)
    b lbl_fn_80112B64_00000E6C
lbl_fn_80112B64_00000B6C:
    lis r3, 0x1000
    li r4, 0x1
    subi r0, r3, 0x1
    stw r4, 0x1c(r1)
    subf r0, r31, r0
    cmplwi r0, 0x1
    bge lbl_fn_80112B64_00000BAC
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80112B64_00000BAC:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80112B64_00000BE4
    addi r4, r31, 0x1
    lis r3, 0xcccd
    slwi r0, r4, 2
    subf r0, r4, r0
    subi r3, r3, 0x3333
    mulhwu r0, r3, r0
    srwi r0, r0, 2
    stw r0, 0x14(r1)
    cmplwi r0, 0x1
    b lbl_fn_80112B64_00000C04
lbl_fn_80112B64_00000BE4:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80112B64_00000C04
    addi r0, r31, 0x1
    srwi r0, r0, 1
    stw r0, 0x18(r1)
    cmplwi r0, 0x1
lbl_fn_80112B64_00000C04:
    li r4, 0x0
    addi r5, r29, 0x30
    lis r3, 0x1000
    stw r4, 0x30(r1)
    subi r0, r3, 0x1
    stw r4, 0x34(r1)
    stw r4, 0x38(r1)
    stw r5, 0x3c(r1)
    stw r4, 0x40(r1)
    lwz r3, 0x2c(r29)
    lwz r31, 0x30(r29)
    addi r3, r3, 0x1
    subf r3, r31, r3
    subf r0, r31, r0
    cmplw r3, r0
    stw r3, 0x8(r1)
    ble lbl_fn_80112B64_00000C6C
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80112B64_00000C6C:
    lis r3, 0x555
    addi r0, r3, 0x5555
    cmplw r31, r0
    bge lbl_fn_80112B64_00000CBC
    addi r5, r31, 0x1
    lis r3, 0xcccd
    slwi r4, r5, 2
    lwz r0, 0x8(r1)
    subf r4, r5, r4
    subi r3, r3, 0x3333
    mulhwu r4, r3, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_80112B64_00000CB0
    addi r3, r1, 0x8
lbl_fn_80112B64_00000CB0:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80112B64_00000D00
lbl_fn_80112B64_00000CBC:
    lis r3, 0xaab
    subi r0, r3, 0x5556
    cmplw r31, r0
    bge lbl_fn_80112B64_00000CF8
    addi r3, r31, 0x1
    lwz r0, 0x8(r1)
    srwi r3, r3, 1
    stw r3, 0xc(r1)
    cmplw r3, r0
    addi r3, r1, 0xc
    bge lbl_fn_80112B64_00000CEC
    addi r3, r1, 0x8
lbl_fn_80112B64_00000CEC:
    lwz r0, 0x0(r3)
    add r28, r31, r0
    b lbl_fn_80112B64_00000D00
lbl_fn_80112B64_00000CF8:
    lis r3, 0x1000
    subi r28, r3, 0x1
lbl_fn_80112B64_00000D00:
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r28, r0
    ble lbl_fn_80112B64_00000D34
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80112B64_00000D34:
    slwi r3, r28, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80112B64_00000D68
    lis r3, __files@ha
    lis r4, lbl_80779F84@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F84@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80112B64_00000D68:
    lwz r0, 0x34(r1)
    stw r31, 0x30(r1)
    slwi r3, r0, 4
    lfs f0, 0x2c(r1)
    stw r28, 0x38(r1)
    lwz r0, 0x2c(r29)
    stw r0, 0x40(r1)
    slwi r0, r0, 4
    add r0, r31, r0
    add. r3, r3, r0
    beq lbl_fn_80112B64_00000DA8
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    lfs f2, 0x28(r1)
    stfs f2, 0x8(r3)
    stfs f0, 0xc(r3)
lbl_fn_80112B64_00000DA8:
    lwz r3, 0x34(r1)
    lwz r0, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x34(r1)
    lwz r3, 0x30(r1)
    slwi r0, r0, 4
    lwz r4, 0x2c(r29)
    lwz r7, 0x28(r29)
    add r6, r3, r0
    slwi r0, r4, 4
    add r5, r7, r0
    b lbl_fn_80112B64_00000E14
lbl_fn_80112B64_00000DD8:
    subic. r6, r6, 0x10
    subi r5, r5, 0x10
    beq lbl_fn_80112B64_00000DFC
    lfs f2, 0x8(r5)
    psq_l f1, 0x0(r5), 0, 0
    psq_st f1, 0x0(r6), 0, 0
    stfs f2, 0x8(r6)
    lfs f0, 0xc(r5)
    stfs f0, 0xc(r6)
lbl_fn_80112B64_00000DFC:
    lwz r4, 0x40(r1)
    lwz r3, 0x34(r1)
    subi r0, r4, 0x1
    stw r0, 0x40(r1)
    addi r0, r3, 0x1
    stw r0, 0x34(r1)
lbl_fn_80112B64_00000E14:
    cmplw r7, r5
    blt lbl_fn_80112B64_00000DD8
    li r4, 0x0
    stw r4, 0x2c(r29)
    addic. r0, r1, 0x30
    lwz r3, 0x30(r29)
    lwz r0, 0x38(r1)
    stw r0, 0x30(r29)
    stw r3, 0x38(r1)
    lwz r0, 0x30(r1)
    lwz r3, 0x28(r29)
    stw r0, 0x28(r29)
    stw r3, 0x30(r1)
    lwz r0, 0x34(r1)
    stw r0, 0x2c(r29)
    stw r4, 0x34(r1)
    beq lbl_fn_80112B64_00000E6C
    lwz r3, 0x30(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80112B64_00000E6C
    stw r4, 0x34(r1)
    bl dtor_80084684
lbl_fn_80112B64_00000E6C:
    mr r3, r29
    bl fn_80548760
    lwz r0, 0x2c(r29)
    cmpwi r0, 0x2
    ble lbl_fn_80112B64_00000E8C
    lwz r4, 0x28(r29)
    mr r3, r29
    bl fn_80547EA4
lbl_fn_80112B64_00000E8C:
    addi r11, r1, 0x60
    bl _restgpr_27
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80112F54(void)
{
    nofralloc
    lwz r3, 0x70(r3)
    blr
}

asm void fn_80112F5C(void)
{
    nofralloc
    stwu r1, -0x180(r1)
    mflr r0
    stw r0, 0x184(r1)
    addi r11, r1, 0x160
    stfd f31, 0x170(r1)
    psq_st f31, 0x178(r1), 0, 0
    stfd f30, 0x160(r1)
    psq_st f30, 0x168(r1), 0, 0
    bl _savegpr_27
    fmr f30, f1
    mr r28, r4
    mr r27, r3
    mr r29, r5
    mr r4, r6
    mr r30, r7
    mr r31, r8
    bl fn_801128C4
    bl fn_8000DB1C
    mr r4, r31
    bl fn_8048B048
    stw r3, 0x290(r27)
    li r0, 0x1
    mr r4, r28
    addi r3, r27, 0x210
    stw r0, 0x1f4(r27)
    bl fn_801130FC
    mr r4, r29
    addi r3, r27, 0x240
    bl fn_801130FC
    addi r3, r1, 0xbc
    addi r4, r27, 0x29c
    bl fn_80113128
    lfs f1, lbl_808816B0
    addi r3, r1, 0x2c
    addi r4, r27, 0x210
    bl fn_80112A00
    mr r3, r27
    mr r6, r30
    addi r4, r1, 0x2c
    addi r5, r1, 0xbc
    bl fn_80112B64
    addi r3, r1, 0xbc
    li r4, -0x1
    bl fn_80112604
    addi r3, r1, 0x38
    addi r4, r27, 0x320
    bl fn_80113128
    lfs f1, lbl_808816B0
    addi r3, r1, 0x20
    addi r4, r27, 0x240
    bl fn_80112A00
    mr r3, r27
    mr r6, r30
    addi r4, r1, 0x20
    addi r5, r1, 0x38
    bl fn_80112B64
    addi r3, r1, 0x38
    li r4, -0x1
    bl fn_80112604
    lfs f0, lbl_808816B0
    stfs f0, 0x294(r27)
    bl fn_8000DB1C
    lwz r4, 0x290(r27)
    lfs f1, 0x294(r27)
    bl fn_8048BCA4
    fmr f31, f1
    addi r3, r1, 0x14
    addi r4, r27, 0x210
    bl fn_80112A00
    addi r3, r27, 0x204
    addi r4, r1, 0x14
    bl fn_8000D124
    fmr f1, f31
    addi r3, r1, 0x8
    addi r4, r27, 0x240
    bl fn_80112A00
    addi r3, r27, 0x228
    addi r4, r1, 0x8
    bl fn_8000D124
    stfs f30, 0x258(r27)
    mr r3, r27
    bl fn_80112958
    mr r4, r3
    addi r3, r27, 0x234
    bl fn_8000D124
    bl fn_8000DB1C
    bl fn_801130F4
    cmpwi r3, 0x0
    beq lbl_fn_80112F5C_0000101C
    mr r3, r27
    li r4, 0x0
    bl fn_801162A4
lbl_fn_80112F5C_0000101C:
    addi r11, r1, 0x160
    psq_l f31, 0x178(r1), 0, 0
    lfd f31, 0x170(r1)
    psq_l f30, 0x168(r1), 0, 0
    lfd f30, 0x160(r1)
    bl _restgpr_27
    lwz r0, 0x184(r1)
    mtlr r0
    addi r1, r1, 0x180
    blr
}

asm void fn_801130F4(void)
{
    nofralloc
    lwz r3, 0xc4(r3)
    blr
}

asm void fn_801130FC(void)
{
    nofralloc
    lwz r6, 0x0(r4)
    lwz r5, 0x4(r4)
    psq_l f1, 0x8(r4), 0, 0
    lfs f2, 0x10(r4)
    lwz r0, 0x14(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    psq_st f1, 0x8(r3), 0, 0
    stfs f2, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_80113128(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_25
    lwz r6, 0x8(r4)
    lis r7, lbl_80775A48@ha
    lwz r5, 0x4(r4)
    addi r7, r7, lbl_80775A48@l
    srwi r0, r6, 31
    stw r7, 0x0(r3)
    cntlzw r0, r0
    mr r27, r3
    srwi r0, r0, 5
    stw r5, 0x4(r3)
    cntlzw r0, r0
    mr r28, r4
    srwi. r0, r0, 5
    bne lbl_fn_80113128_000010DC
    lwz r5, 0xc(r4)
    lwz r0, 0x10(r4)
    stw r6, 0x8(r3)
    stw r5, 0xc(r3)
    stw r0, 0x10(r3)
    b lbl_fn_80113128_0000111C
lbl_fn_80113128_000010DC:
    li r0, 0x0
    stwu r0, 0x8(r3)
    lwz r4, 0xc(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0x10(r1)
    addi r3, r27, 0x8
    stb r5, 0x14(r1)
    addi r8, r1, 0x14
    lwz r6, 0x10(r28)
    li r4, 0x0
    lwz r0, 0xc(r28)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80113128_0000111C:
    lwz r4, 0x1c(r28)
    lis r5, lbl_80779F40@ha
    lwz r6, 0x14(r28)
    addi r5, r5, lbl_80779F40@l
    srwi r0, r4, 31
    lwz r3, 0x18(r28)
    cntlzw r0, r0
    stw r6, 0x14(r27)
    srwi r0, r0, 5
    cntlzw r0, r0
    stw r5, 0x0(r27)
    srwi. r0, r0, 5
    stw r3, 0x18(r27)
    bne lbl_fn_80113128_0000116C
    lwz r3, 0x20(r28)
    lwz r0, 0x24(r28)
    stw r4, 0x1c(r27)
    stw r3, 0x20(r27)
    stw r0, 0x24(r27)
    b lbl_fn_80113128_000011B0
lbl_fn_80113128_0000116C:
    li r0, 0x0
    stw r0, 0x1c(r27)
    lwz r4, 0x20(r28)
    addi r3, r27, 0x1c
    stw r0, 0x20(r27)
    stw r0, 0x24(r27)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    addi r3, r27, 0x1c
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x24(r28)
    li r4, 0x0
    lwz r0, 0x20(r28)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80113128_000011B0:
    lwz r0, 0x2c(r28)
    li r3, 0x0
    lwz r30, 0x28(r28)
    slwi r0, r0, 4
    stw r3, 0x28(r27)
    add r31, r30, r0
    subf r0, r30, r31
    stw r3, 0x2c(r27)
    srawi r0, r0, 4
    addze. r25, r0
    stw r3, 0x30(r27)
    beq lbl_fn_80113128_0000129C
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_80113128_00001214
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001214:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80113128_00001248
    lis r3, __files@ha
    lis r4, lbl_80779F84@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F84@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001248:
    lwz r0, 0x2c(r27)
    stw r26, 0x28(r27)
    slwi r0, r0, 4
    stw r25, 0x30(r27)
    add r4, r26, r0
    b lbl_fn_80113128_00001294
lbl_fn_80113128_00001260:
    cmpwi r4, 0x0
    beq lbl_fn_80113128_00001280
    lfs f2, 0x8(r30)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x8(r4)
    lfs f0, 0xc(r30)
    stfs f0, 0xc(r4)
lbl_fn_80113128_00001280:
    lwz r3, 0x2c(r27)
    addi r30, r30, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x2c(r27)
lbl_fn_80113128_00001294:
    cmplw r30, r31
    bne lbl_fn_80113128_00001260
lbl_fn_80113128_0000129C:
    lwz r0, 0x58(r28)
    li r3, 0x0
    lwz r29, 0x54(r28)
    addi r31, r27, 0x54
    slwi r0, r0, 4
    psq_l f1, 0x3c(r28), 0, 0
    add r30, r29, r0
    lfs f2, 0x44(r28)
    subf r0, r29, r30
    psq_st f1, 0x3c(r27), 0, 0
    srawi r0, r0, 4
    lwz r4, 0x34(r28)
    stfs f2, 0x44(r27)
    addze. r25, r0
    lfs f0, 0x38(r28)
    psq_l f1, 0x48(r28), 0, 0
    lfs f2, 0x50(r28)
    stw r4, 0x34(r27)
    stfs f0, 0x38(r27)
    psq_st f1, 0x48(r27), 0, 0
    stfs f2, 0x50(r27)
    stw r3, 0x54(r27)
    stw r3, 0x58(r27)
    stw r3, 0x5c(r27)
    beq lbl_fn_80113128_000013C4
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_80113128_00001334
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001334:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80113128_00001368
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001368:
    lwz r0, 0x4(r31)
    stw r26, 0x0(r31)
    slwi r0, r0, 4
    stw r25, 0x8(r31)
    add r4, r26, r0
    b lbl_fn_80113128_000013BC
lbl_fn_80113128_00001380:
    cmpwi r4, 0x0
    beq lbl_fn_80113128_000013A8
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r29)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r29)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r4)
lbl_fn_80113128_000013A8:
    lwz r3, 0x4(r31)
    addi r29, r29, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
lbl_fn_80113128_000013BC:
    cmplw r29, r30
    bne lbl_fn_80113128_00001380
lbl_fn_80113128_000013C4:
    lwz r0, 0x64(r28)
    li r3, 0x0
    lwz r29, 0x60(r28)
    addi r31, r27, 0x60
    slwi r0, r0, 4
    stw r3, 0x60(r27)
    add r30, r29, r0
    subf r0, r29, r30
    stw r3, 0x64(r27)
    srawi r0, r0, 4
    addze. r25, r0
    stw r3, 0x68(r27)
    beq lbl_fn_80113128_000014BC
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_80113128_0000142C
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_0000142C:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80113128_00001460
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001460:
    lwz r0, 0x4(r31)
    stw r26, 0x0(r31)
    slwi r0, r0, 4
    stw r25, 0x8(r31)
    add r4, r26, r0
    b lbl_fn_80113128_000014B4
lbl_fn_80113128_00001478:
    cmpwi r4, 0x0
    beq lbl_fn_80113128_000014A0
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r29)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r29)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r4)
lbl_fn_80113128_000014A0:
    lwz r3, 0x4(r31)
    addi r29, r29, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
lbl_fn_80113128_000014B4:
    cmplw r29, r30
    bne lbl_fn_80113128_00001478
lbl_fn_80113128_000014BC:
    lwz r0, 0x70(r28)
    li r3, 0x0
    lwz r29, 0x6c(r28)
    addi r31, r27, 0x6c
    slwi r0, r0, 4
    stw r3, 0x6c(r27)
    add r30, r29, r0
    subf r0, r29, r30
    stw r3, 0x70(r27)
    srawi r0, r0, 4
    addze. r25, r0
    stw r3, 0x74(r27)
    beq lbl_fn_80113128_000015B4
    lis r3, 0x1000
    subi r0, r3, 0x1
    cmplw r25, r0
    ble lbl_fn_80113128_00001524
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001524:
    slwi r3, r25, 4
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r26, r3
    bne lbl_fn_80113128_00001558
    lis r3, __files@ha
    lis r4, lbl_80779F68@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80779F68@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001558:
    lwz r0, 0x4(r31)
    stw r26, 0x0(r31)
    slwi r0, r0, 4
    stw r25, 0x8(r31)
    add r4, r26, r0
    b lbl_fn_80113128_000015AC
lbl_fn_80113128_00001570:
    cmpwi r4, 0x0
    beq lbl_fn_80113128_00001598
    lfs f0, 0x0(r29)
    stfs f0, 0x0(r4)
    lfs f0, 0x4(r29)
    stfs f0, 0x4(r4)
    lfs f0, 0x8(r29)
    stfs f0, 0x8(r4)
    lfs f0, 0xc(r29)
    stfs f0, 0xc(r4)
lbl_fn_80113128_00001598:
    lwz r3, 0x4(r31)
    addi r29, r29, 0x10
    addi r4, r4, 0x10
    addi r0, r3, 0x1
    stw r0, 0x4(r31)
lbl_fn_80113128_000015AC:
    cmplw r29, r30
    bne lbl_fn_80113128_00001570
lbl_fn_80113128_000015B4:
    lwz r0, 0x7c(r28)
    li r3, 0x0
    lwz r29, 0x78(r28)
    addi r31, r27, 0x78
    slwi r0, r0, 2
    stw r3, 0x78(r27)
    add r25, r29, r0
    subf r30, r29, r25
    stw r3, 0x7c(r27)
    srawi r0, r30, 2
    addze. r26, r0
    stw r3, 0x80(r27)
    beq lbl_fn_80113128_00001690
    lis r3, 0x4000
    subi r0, r3, 0x1
    cmplw r26, r0
    ble lbl_fn_80113128_0000161C
    lis r4, lbl_807366D4@ha
    lis r3, __files@ha
    addi r4, r4, lbl_807366D4@l
    addi r3, r3, __files@l
    addi r4, r4, 0x1
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_0000161C:
    slwi r3, r26, 2
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80113128_00001650
    lis r3, __files@ha
    lis r4, lbl_80775A88@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775A88@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80113128_00001650:
    subf r0, r29, r25
    lwz r3, 0x4(r31)
    srawi r0, r0, 2
    stw r28, 0x0(r31)
    slwi r3, r3, 2
    mr r4, r29
    addze r0, r0
    stw r26, 0x8(r31)
    add r3, r28, r3
    slwi r5, r0, 2
    bl memmove
    srawi r0, r30, 2
    lwz r3, 0x4(r31)
    addze r0, r0
    add r0, r3, r0
    stw r0, 0x4(r31)
lbl_fn_80113128_00001690:
    addi r11, r1, 0x40
    mr r3, r27
    bl _restgpr_25
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}
