#include "revolution/types.h"
#include "revolution/os.h"

/* External functions (non-OS) */
extern void _restgpr_22(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);
extern void _savegpr_22(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void fn_80603780(void);
extern void fn_80604050(void);
extern void fn_80604300(void);
extern void fn_806043E0(void);
extern void fn_80624A50(void);
extern void __div2i(void);
extern void fn_80696324(void);

/* External data symbols (> 8 bytes) */
extern void* jumptable_807ABF44[];
extern char lbl_807ABA10[];
extern u8 lbl_807ABF20[];
extern u8 lbl_807ABF68[];
extern u8 lbl_807D14A0[];
extern u8 lbl_807D1518[];
extern u8 lbl_807D1590[];
extern u8 lbl_807D15E8[];
extern u8 lbl_807D1610[];

/* External small data symbols (<= 8 bytes, SDA21) */
extern u32 CurrTvMode_8087FE50;
extern char lbl_8087E820[8];
extern u8 lbl_8087E828[8];
extern u32 lbl_8087E830;
extern u8 lbl_8087E834;
extern u8 lbl_8087E835;
extern u8 lbl_8087E836;
extern u8 lbl_8087E837;
extern u8 lbl_8087E838;
extern u8 lbl_8087E839;
extern u8 lbl_8087E83A;
extern u8 lbl_8087E83B;
extern u8 lbl_8087E83C;
extern u8 lbl_8087E83D;
extern u8 lbl_8087E83E;
extern u8 lbl_8087E83F;
extern u32 lbl_8087FDF4;
extern u16 lbl_8087FE0C;
extern u16 lbl_8087FE0E;
extern u8 lbl_8087FE10[8];
extern u32 lbl_8087FE18;
extern u32 lbl_8087FE1C;
extern u8 lbl_8087FE20[8];
extern u32 lbl_8087FE28;
extern u32 lbl_8087FE2C;
extern u32 lbl_8087FE30;
extern u32 lbl_8087FE44;
extern u32 lbl_8087FE4C;
extern u32 lbl_8087FE54;
extern u32 lbl_8087FE74;
extern u32 lbl_8087FE78;
extern u32 lbl_8087FE80;
extern u32 lbl_8087FE84;
extern u32 lbl_8087FE88;
extern u32 lbl_8087FE8C;
extern u8 lbl_8087FE90[8];
extern u32 lbl_8087FE98;
extern u32 lbl_8087FE9C;
extern u32 lbl_8087FEA0;
extern u32 lbl_8087FEA4;
extern u32 lbl_8087FEA8;
extern u32 lbl_8087FEAC;

/* Function declarations */
void fn_80604580(void);
void fn_80604C50(void);
void fn_80604FB0(void);
void fn_806050D0(void);
void fn_80605140(void);
void fn_806051C0(void);
void fn_806051D0(void);
void VIGetTvFormat(void);
void fn_806052C0(void);
void fn_80605300(void);
void fn_80605540(void);
void fn_806055A0(void);
void fn_806056A0(void);
void fn_806056C0(void);
void fn_806056D0(void);
void fn_80605760(void);
void fn_80605AB0(void);
void fn_80605FF0(void);
void fn_80606090(void);
void fn_806060D0(void);
void fn_80606130(void);
void fn_806061A0(void);
void fn_80606210(void);
void fn_80606F90(void);
void fn_806070F0(void);
void fn_80607100(void);
void fn_80607120(void);
void fn_80607140(void);
void fn_806071A0(void);
void fn_80607230(void);
void __VISetRGBModeImm(void);
void fn_80607290(void);

asm void fn_80604580(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    lis r31, lbl_807ABA10@ha
    mr r30, r3
    addi r31, r31, lbl_807ABA10@l
    bl OSDisableInterrupts
    lis r4, lbl_807D1590@ha
    lwz r5, 0x0(r30)
    addi r4, r4, lbl_807D1590@l
    mr r29, r3
    lwz r0, 0x24(r4)
    clrlwi r3, r5, 30
    cmplw r0, r3
    beq lbl_fn_80604580_50
    li r0, 0x1
    stw r0, lbl_8087FE10
    stw r3, 0x24(r4)
lbl_fn_80604580_50:
    lwz r0, 0x0(r30)
    lis r3, 0x8000
    lwz r27, 0xcc(r3)
    srwi r28, r0, 2
    cmplwi r28, 0x4
    bne lbl_fn_80604580_d0
    lwz r0, lbl_8087FE44
    cmpwi r0, 0x0
    bne lbl_fn_80604580_d0
    li r0, 0x1
    stw r0, lbl_8087FE44
    addi r3, r31, 0x3bc
    crclr 6
    bl OSReport
    addi r3, r31, 0x3e8
    crclr 6
    bl OSReport
    addi r3, r31, 0x414
    crclr 6
    bl OSReport
    addi r3, r31, 0x440
    crclr 6
    bl OSReport
    addi r3, r31, 0x46c
    crclr 6
    bl OSReport
    addi r3, r31, 0x498
    crclr 6
    bl OSReport
    addi r3, r31, 0x3bc
    crclr 6
    bl OSReport
lbl_fn_80604580_d0:
    cmplwi r27, 0x1
    beq lbl_fn_80604580_f0
    cmplwi r27, 0x5
    beq lbl_fn_80604580_f0
    cmplwi r28, 0x1
    beq lbl_fn_80604580_110
    cmplwi r28, 0x5
    beq lbl_fn_80604580_110
lbl_fn_80604580_f0:
    cmplwi r27, 0x1
    beq lbl_fn_80604580_100
    cmplwi r27, 0x5
    bne lbl_fn_80604580_12c
lbl_fn_80604580_100:
    cmplwi r28, 0x1
    beq lbl_fn_80604580_12c
    cmplwi r28, 0x5
    beq lbl_fn_80604580_12c
lbl_fn_80604580_110:
    mr r6, r27
    mr r7, r28
    addi r5, r31, 0x4c4
    la r3, lbl_8087E820
    li r4, 0xa5b
    crclr 6
    bl OSPanic
lbl_fn_80604580_12c:
    cmpwi r28, 0x0
    beq lbl_fn_80604580_13c
    cmplwi r28, 0x2
    bne lbl_fn_80604580_14c
lbl_fn_80604580_13c:
    lis r3, lbl_807D1590@ha
    addi r3, r3, lbl_807D1590@l
    stw r27, 0x28(r3)
    b lbl_fn_80604580_158
lbl_fn_80604580_14c:
    lis r3, lbl_807D1590@ha
    addi r3, r3, lbl_807D1590@l
    stw r28, 0x28(r3)
lbl_fn_80604580_158:
    lis r4, lbl_807D1590@ha
    lhz r0, 0xa(r30)
    addi r3, r4, lbl_807D1590@l
    sth r0, lbl_807D1590@l(r4)
    lwz r0, 0x24(r3)
    cmplwi r0, 0x1
    bne lbl_fn_80604580_180
    lhz r0, 0xc(r30)
    clrlslwi r8, r0, 17, 1
    b lbl_fn_80604580_184
lbl_fn_80604580_180:
    lhz r8, 0xc(r30)
lbl_fn_80604580_184:
    lis r7, lbl_807D1590@ha
    lhz r6, 0xe(r30)
    addi r7, r7, lbl_807D1590@l
    lhz r4, 0x4(r30)
    lwz r9, 0x24(r7)
    li r0, 0x0
    lhz r5, 0x8(r30)
    lwz r3, 0x14(r30)
    cmplwi r9, 0x2
    sth r8, 0x2(r7)
    sth r6, 0x4(r7)
    sth r4, 0x12(r7)
    sth r5, 0x14(r7)
    stw r3, 0x20(r7)
    sth r4, 0x1a(r7)
    sth r5, 0x1c(r7)
    sth r0, 0x16(r7)
    sth r0, 0x18(r7)
    bne lbl_fn_80604580_1d4
    b lbl_fn_80604580_1ec
lbl_fn_80604580_1d4:
    cmplwi r9, 0x3
    bne lbl_fn_80604580_1e0
    b lbl_fn_80604580_1ec
lbl_fn_80604580_1e0:
    cmpwi r3, 0x0
    bne lbl_fn_80604580_1ec
    clrlslwi r5, r5, 17, 1
lbl_fn_80604580_1ec:
    lis r30, lbl_807D1590@ha
    addi r31, r30, lbl_807D1590@l
    lwz r4, 0x24(r31)
    lwz r0, 0x28(r31)
    subi r3, r4, 0x3
    sth r5, 0x6(r31)
    cntlzw r3, r3
    slwi r0, r0, 2
    srwi r3, r3, 5
    stw r3, 0x44(r31)
    add r3, r0, r4
    bl fn_80603780
    lhz r4, lbl_807D1590@l(r30)
    mr r30, r3
    lhz r5, 0x4(r31)
    lha r0, lbl_8087FE0C
    extsh r4, r4
    stw r3, 0x54(r31)
    subfic r8, r5, 0x2d0
    add r4, r4, r0
    cmpw r4, r8
    lhz r6, 0x2(r3)
    ble lbl_fn_80604580_24c
    b lbl_fn_80604580_254
lbl_fn_80604580_24c:
    srawi r0, r4, 31
    andc r8, r4, r0
lbl_fn_80604580_254:
    lis r5, lbl_807D1590@ha
    lha r10, lbl_8087FE0E
    addi r5, r5, lbl_807D1590@l
    lhz r7, 0x2(r5)
    lwz r4, 0x20(r5)
    extsh r0, r7
    clrlwi r12, r7, 31
    add r7, r0, r10
    sth r8, 0x8(r5)
    cntlzw r0, r4
    mr r9, r12
    srwi r4, r0, 5
    cmpw r7, r12
    addi r11, r4, 0x1
    ble lbl_fn_80604580_294
    mr r9, r7
lbl_fn_80604580_294:
    lis r4, lbl_807D1590@ha
    extsh r5, r6
    addi r4, r4, lbl_807D1590@l
    lhz r7, 0x2(r4)
    slwi r5, r5, 1
    lhz r0, 0x6(r4)
    subf r28, r12, r5
    extsh r7, r7
    sth r9, 0xa(r4)
    extsh r5, r0
    lhz r6, 0x1c(r4)
    add r5, r7, r5
    add r7, r7, r10
    add r5, r10, r5
    lhz r8, 0x18(r4)
    subf r28, r28, r5
    subf r31, r12, r7
    neg r5, r28
    andc r7, r5, r28
    srawi r10, r7, 31
    srawi r5, r31, 31
    srawi r9, r31, 31
    and r12, r28, r10
    and r10, r31, r5
    srawi r7, r7, 31
    srawi r5, r31, 31
    and r9, r31, r9
    and r5, r31, r5
    and r31, r28, r7
    divw r5, r5, r11
    add r0, r0, r10
    subf r0, r12, r0
    sth r0, 0xc(r4)
    add r0, r6, r5
    divw r7, r9, r11
    divw r5, r31, r11
    subf r6, r7, r8
    sth r6, 0xe(r4)
    subf r0, r5, r0
    sth r0, 0x10(r4)
    lhz r5, 0x18(r3)
    srwi r4, r5, 31
    clrlwi r0, r5, 31
    xor r0, r0, r4
    extrwi r7, r5, 16, 15
    subf r0, r4, r0
    clrlwi. r0, r0, 16
    beq lbl_fn_80604580_35c
    lhz r6, 0x1a(r3)
    b lbl_fn_80604580_360
lbl_fn_80604580_35c:
    li r6, 0x0
lbl_fn_80604580_360:
    lwz r0, lbl_8087FE18
    lis r3, lbl_807D1590@ha
    addi r3, r3, lbl_807D1590@l
    lwz r4, lbl_8087FE1C
    stw r4, lbl_8087FE1C
    ori r5, r0, 0x40
    lwz r9, 0x24(r3)
    addi r4, r7, 0x1
    stw r5, lbl_8087FE18
    lis r7, lbl_807D1518@ha
    subi r0, r9, 0x2
    clrlwi r5, r4, 16
    addi r8, r6, 0x1
    addi r7, r7, lbl_807D1518@l
    ori r6, r5, 0x1000
    lwz r4, lbl_8087FE18
    lwz r5, lbl_8087FE1C
    cmplwi r0, 0x1
    ori r0, r4, 0x80
    stw r5, lbl_8087FE1C
    lhz r4, 0x2(r7)
    sth r8, 0x32(r7)
    lhz r5, 0x6c(r7)
    sth r6, 0x30(r7)
    stw r0, lbl_8087FE18
    bgt lbl_fn_80604580_3f0
    lwz r0, 0x28(r3)
    rlwinm r3, r4, 0, 30, 28
    ori r4, r3, 0x4
    cmplwi r0, 0x8
    bne lbl_fn_80604580_3e4
    clrrwi r10, r5, 1
    b lbl_fn_80604580_3fc
lbl_fn_80604580_3e4:
    clrrwi r0, r5, 1
    ori r10, r0, 0x1
    b lbl_fn_80604580_3fc
lbl_fn_80604580_3f0:
    rlwinm r4, r4, 0, 30, 28
    clrrwi r10, r5, 1
    rlwimi r4, r9, 2, 29, 29
lbl_fn_80604580_3fc:
    lis r3, lbl_807D1590@ha
    rlwinm r4, r4, 0, 29, 27
    addi r3, r3, lbl_807D1590@l
    lwz r5, 0x28(r3)
    lwz r8, 0x44(r3)
    subi r0, r5, 0x1
    slwi r3, r8, 3
    or r3, r4, r3
    cmplwi r0, 0x2
    rlwinm r6, r3, 0, 24, 21
    bgt lbl_fn_80604580_430
    slwi r0, r5, 8
    or r6, r6, r0
lbl_fn_80604580_430:
    lwz r0, lbl_8087FE18
    lis r3, lbl_807D1590@ha
    lwz r4, lbl_8087FE1C
    addi r3, r3, lbl_807D1590@l
    stw r4, lbl_8087FE1C
    oris r0, r0, 0x4000
    lis r4, lbl_807D1518@ha
    lhz r7, 0x1a(r3)
    stw r0, lbl_8087FE18
    addi r4, r4, lbl_807D1518@l
    lhz r5, 0x4(r3)
    cmpwi r8, 0x0
    lwz r3, lbl_8087FE18
    lwz r0, lbl_8087FE1C
    sth r6, 0x2(r4)
    ori r0, r0, 0x200
    stw r0, lbl_8087FE1C
    sth r10, 0x6c(r4)
    stw r3, lbl_8087FE18
    beq lbl_fn_80604580_484
    clrlslwi r7, r7, 16, 1
lbl_fn_80604580_484:
    clrlwi r7, r7, 16
    cmplw r7, r5
    bge lbl_fn_80604580_4e0
    clrlslwi r0, r7, 16, 8
    lwz r3, lbl_8087FE18
    add r4, r5, r0
    lwz r0, lbl_8087FE1C
    subi r6, r4, 0x1
    divwu r6, r6, r5
    oris r0, r0, 0x400
    stw r0, lbl_8087FE1C
    lis r4, lbl_807D1518@ha
    stw r3, lbl_8087FE18
    addi r4, r4, lbl_807D1518@l
    lwz r3, lbl_8087FE18
    ori r6, r6, 0x1000
    lwz r0, lbl_8087FE1C
    sth r6, 0x4a(r4)
    ori r0, r0, 0x80
    stw r0, lbl_8087FE1C
    sth r7, 0x70(r4)
    stw r3, lbl_8087FE18
    b lbl_fn_80604580_504
lbl_fn_80604580_4e0:
    lwz r3, lbl_8087FE18
    lis r4, lbl_807D1518@ha
    lwz r0, lbl_8087FE1C
    addi r4, r4, lbl_807D1518@l
    li r6, 0x100
    sth r6, 0x4a(r4)
    oris r0, r0, 0x400
    stw r0, lbl_8087FE1C
    stw r3, lbl_8087FE18
lbl_fn_80604580_504:
    lis r31, lbl_807D1590@ha
    mr r3, r30
    addi r31, r31, lbl_807D1590@l
    lhz r4, 0x8(r31)
    bl fn_80604300
    lhz r4, 0x10(r30)
    lis r3, lbl_807D1518@ha
    lwz r0, lbl_8087FE18
    addi r3, r3, lbl_807D1518@l
    slwi r5, r4, 5
    lbz r6, 0xc(r30)
    lwz r4, lbl_8087FE1C
    oris r0, r0, 0x10
    stw r4, lbl_8087FE1C
    or r5, r6, r5
    lwz r6, 0x20(r31)
    lhz r4, 0x12(r31)
    stw r0, lbl_8087FE18
    cmpwi r6, 0x0
    addi r0, r4, 0xf
    lhz r9, 0x16(r31)
    sth r5, 0x16(r3)
    srawi r0, r0, 4
    lwz r5, lbl_8087FE18
    addze r4, r0
    lhz r6, 0x14(r30)
    lbz r7, 0xe(r30)
    oris r5, r5, 0x20
    slwi r6, r6, 5
    lwz r0, lbl_8087FE1C
    stw r0, lbl_8087FE1C
    or r6, r7, r6
    lhz r0, 0x1a(r31)
    stw r5, lbl_8087FE18
    sth r6, 0x14(r3)
    lwz r5, lbl_8087FE18
    lhz r6, 0x12(r30)
    lbz r8, 0xd(r30)
    oris r5, r5, 0x4
    slwi r7, r6, 5
    lwz r6, lbl_8087FE1C
    stw r6, lbl_8087FE1C
    or r6, r8, r7
    stw r5, lbl_8087FE18
    sth r6, 0x1a(r3)
    lwz r5, lbl_8087FE18
    lhz r6, 0x16(r30)
    lbz r8, 0xf(r30)
    oris r5, r5, 0x8
    slwi r7, r6, 5
    lwz r6, lbl_8087FE1C
    stw r6, lbl_8087FE1C
    or r6, r8, r7
    sth r6, 0x18(r3)
    stw r5, lbl_8087FE18
    stb r4, 0x2c(r31)
    bne lbl_fn_80604580_5f0
    clrlwi r10, r4, 24
    b lbl_fn_80604580_5f4
lbl_fn_80604580_5f0:
    clrlslwi r10, r4, 25, 1
lbl_fn_80604580_5f4:
    slwi r3, r9, 28
    srwi r6, r9, 31
    subf r3, r6, r3
    lwz r4, lbl_8087FE30
    rotlwi r3, r3, 4
    lwz r5, lbl_8087FE18
    add r9, r3, r6
    lwz r6, lbl_8087FE1C
    clrlwi r7, r9, 24
    lis r3, lbl_807D1590@ha
    add r8, r0, r7
    cmpwi r4, 0x0
    addi r0, r8, 0xf
    addi r3, r3, lbl_807D1590@l
    lis r7, lbl_807D1518@ha
    stb r10, 0x2d(r3)
    srawi r8, r0, 4
    oris r0, r6, 0x800
    stw r0, lbl_8087FE1C
    addze r6, r8
    mr r0, r10
    addi r7, r7, lbl_807D1518@l
    rlwimi r0, r6, 8, 16, 23
    stb r9, 0x3c(r3)
    stb r6, 0x2e(r3)
    sth r0, 0x48(r7)
    stw r5, lbl_8087FE18
    beq lbl_fn_80604580_678
    addi r4, r3, 0x34
    addi r5, r3, 0x38
    addi r6, r3, 0x4c
    addi r7, r3, 0x50
    bl fn_80604050
lbl_fn_80604580_678:
    lis r4, lbl_807D1590@ha
    addi r4, r4, lbl_807D1590@l
    lwz r0, 0x40(r4)
    stw r0, 0x8(r1)
    lhz r3, 0xa(r4)
    lhz r4, 0xc(r4)
    lbz r5, 0x0(r30)
    lhz r6, 0x2(r30)
    lhz r7, 0x4(r30)
    lhz r8, 0x6(r30)
    lhz r9, 0x8(r30)
    lhz r10, 0xa(r30)
    bl fn_806043E0
    mr r3, r29
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80604C50(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_26
    mr r29, r3
    mr r28, r4
    mr r27, r5
    mr r26, r6
    bl OSDisableInterrupts
    lis r4, lbl_807D1590@ha
    mr r31, r3
    addi r4, r4, lbl_807D1590@l
    lwz r0, 0x24(r4)
    sth r29, 0x16(r4)
    cmplwi r0, 0x2
    sth r28, 0x18(r4)
    sth r27, 0x1a(r4)
    sth r26, 0x1c(r4)
    bne lbl_fn_80604C50_724
    b lbl_fn_80604C50_740
lbl_fn_80604C50_724:
    cmplwi r0, 0x3
    bne lbl_fn_80604C50_730
    b lbl_fn_80604C50_740
lbl_fn_80604C50_730:
    lwz r0, 0x20(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80604C50_740
    clrlslwi r26, r26, 17, 1
lbl_fn_80604C50_740:
    lis r4, lbl_807D1590@ha
    lha r3, lbl_8087FE0C
    addi r5, r4, lbl_807D1590@l
    lha r4, lbl_807D1590@l(r4)
    lhz r0, 0x4(r5)
    sth r26, 0x6(r5)
    add r3, r4, r3
    subfic r6, r0, 0x2d0
    lwz r30, 0x54(r5)
    cmpw r3, r6
    lhz r5, 0x2(r30)
    ble lbl_fn_80604C50_774
    b lbl_fn_80604C50_77c
lbl_fn_80604C50_774:
    srawi r0, r3, 31
    andc r6, r3, r0
lbl_fn_80604C50_77c:
    lis r4, lbl_807D1590@ha
    lha r9, lbl_8087FE0E
    addi r4, r4, lbl_807D1590@l
    lhz r7, 0x2(r4)
    lwz r3, 0x20(r4)
    extsh r0, r7
    clrlwi r12, r7, 31
    add r7, r0, r9
    sth r6, 0x8(r4)
    cntlzw r0, r3
    srwi r3, r0, 5
    cmpw r7, r12
    mr r0, r12
    addi r4, r3, 0x1
    ble lbl_fn_80604C50_7bc
    mr r0, r7
lbl_fn_80604C50_7bc:
    lis r3, lbl_807D1590@ha
    extsh r5, r5
    addi r3, r3, lbl_807D1590@l
    lhz r7, 0x2(r3)
    slwi r6, r5, 1
    lhz r5, 0x6(r3)
    subf r27, r12, r6
    extsh r6, r7
    lha r8, 0x2(r3)
    add r11, r9, r6
    lha r7, 0x6(r3)
    extsh r6, r5
    add r9, r8, r9
    add r6, r6, r11
    subf r26, r12, r11
    subf r6, r27, r6
    add r7, r7, r11
    neg r8, r6
    subf r12, r12, r9
    andc r10, r8, r6
    subf r27, r27, r7
    srawi r28, r10, 31
    lwz r8, 0x44(r3)
    srawi r11, r26, 31
    neg r9, r27
    srawi r10, r12, 31
    cmpwi r8, 0x0
    andc r9, r9, r27
    and r29, r26, r11
    srawi r11, r9, 31
    and r12, r12, r10
    srawi r9, r26, 31
    and r28, r6, r28
    and r9, r26, r9
    and r27, r27, r11
    divw r9, r9, r4
    sth r0, 0xa(r3)
    add r0, r5, r29
    lhz r10, 0x1c(r3)
    lhz r11, 0x18(r3)
    subf r0, r28, r0
    divw r6, r12, r4
    lhz r7, 0x1a(r3)
    sth r0, 0xc(r3)
    add r5, r10, r9
    lhz r8, 0x4(r3)
    mr r0, r7
    divw r4, r27, r4
    subf r6, r6, r11
    sth r6, 0xe(r3)
    subf r4, r4, r5
    sth r4, 0x10(r3)
    beq lbl_fn_80604C50_894
    clrlslwi r0, r7, 16, 1
lbl_fn_80604C50_894:
    clrlwi r6, r0, 16
    cmplw r6, r8
    bge lbl_fn_80604C50_8f0
    clrlslwi r0, r6, 16, 8
    lwz r3, lbl_8087FE18
    add r4, r8, r0
    lwz r0, lbl_8087FE1C
    subi r5, r4, 0x1
    divwu r5, r5, r8
    oris r0, r0, 0x400
    stw r0, lbl_8087FE1C
    lis r4, lbl_807D1518@ha
    stw r3, lbl_8087FE18
    addi r4, r4, lbl_807D1518@l
    lwz r3, lbl_8087FE18
    ori r5, r5, 0x1000
    lwz r0, lbl_8087FE1C
    sth r5, 0x4a(r4)
    ori r0, r0, 0x80
    stw r0, lbl_8087FE1C
    sth r6, 0x70(r4)
    stw r3, lbl_8087FE18
    b lbl_fn_80604C50_914
lbl_fn_80604C50_8f0:
    lwz r3, lbl_8087FE18
    lis r4, lbl_807D1518@ha
    lwz r0, lbl_8087FE1C
    addi r4, r4, lbl_807D1518@l
    li r5, 0x100
    sth r5, 0x4a(r4)
    oris r0, r0, 0x400
    stw r0, lbl_8087FE1C
    stw r3, lbl_8087FE18
lbl_fn_80604C50_914:
    lis r4, lbl_807D1590@ha
    addi r4, r4, lbl_807D1590@l
    lhz r3, 0x12(r4)
    lwz r5, 0x20(r4)
    addi r0, r3, 0xf
    lhz r3, 0x16(r4)
    srawi r0, r0, 4
    cmpwi r5, 0x0
    addze r0, r0
    stb r0, 0x2c(r4)
    bne lbl_fn_80604C50_948
    clrlwi r9, r0, 24
    b lbl_fn_80604C50_94c
lbl_fn_80604C50_948:
    clrlslwi r9, r0, 25, 1
lbl_fn_80604C50_94c:
    slwi r0, r3, 28
    srwi r4, r3, 31
    subf r3, r4, r0
    lwz r0, lbl_8087FE30
    rotlwi r3, r3, 4
    lwz r5, lbl_8087FE18
    add r8, r3, r4
    lwz r4, lbl_8087FE1C
    clrlwi r6, r8, 24
    lis r3, lbl_807D1590@ha
    add r7, r7, r6
    cmpwi r0, 0x0
    addi r7, r7, 0xf
    addi r3, r3, lbl_807D1590@l
    lis r6, lbl_807D1518@ha
    oris r4, r4, 0x800
    srawi r7, r7, 4
    stw r4, lbl_8087FE1C
    addze r7, r7
    mr r0, r9
    addi r6, r6, lbl_807D1518@l
    stb r9, 0x2d(r3)
    rlwimi r0, r7, 8, 16, 23
    stb r8, 0x3c(r3)
    stb r7, 0x2e(r3)
    sth r0, 0x48(r6)
    stw r5, lbl_8087FE18
    beq lbl_fn_80604C50_9d0
    addi r4, r3, 0x34
    addi r5, r3, 0x38
    addi r6, r3, 0x4c
    addi r7, r3, 0x50
    bl fn_80604050
lbl_fn_80604C50_9d0:
    lis r4, lbl_807D1590@ha
    addi r4, r4, lbl_807D1590@l
    lwz r0, 0x40(r4)
    stw r0, 0x8(r1)
    lhz r3, 0xa(r4)
    lhz r4, 0x6(r4)
    lbz r5, 0x0(r30)
    lhz r6, 0x2(r30)
    lhz r7, 0x4(r30)
    lhz r8, 0x6(r30)
    lhz r9, 0x8(r30)
    lhz r10, 0xa(r30)
    bl fn_806043E0
    mr r3, r31
    bl OSRestoreInterrupts
    addi r11, r1, 0x30
    bl _restgpr_26
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80604FB0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    lis r31, lbl_807D14A0@ha
    addi r31, r31, lbl_807D14A0@l
    bl OSDisableInterrupts
    lwz r5, lbl_8087FE20
    li r0, 0x0
    lwz r4, lbl_8087FE10
    mr r30, r3
    addi r28, r31, 0x78
    addi r29, r31, 0x0
    or r3, r5, r4
    stw r3, lbl_8087FE20
    li r27, -0x1
    stw r0, lbl_8087FE10
    lwz r4, lbl_8087FE28
    lwz r5, lbl_8087FE2C
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    or r0, r4, r0
    or r3, r5, r3
    stw r3, lbl_8087FE2C
    stw r0, lbl_8087FE28
    b lbl_fn_80604FB0_afc
lbl_fn_80604FB0_a9c:
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    cntlzw r0, r0
    cmpwi r0, 0x20
    and r3, r3, r27
    bge lbl_fn_80604FB0_ab8
    b lbl_fn_80604FB0_ac0
lbl_fn_80604FB0_ab8:
    cntlzw r3, r3
    addi r0, r3, 0x20
lbl_fn_80604FB0_ac0:
    slwi r3, r0, 1
    subfic r5, r0, 0x3f
    lhzx r0, r28, r3
    li r4, 0x1
    sthx r0, r29, r3
    li r3, 0x0
    bl fn_80696324
    lwz r0, lbl_8087FE18
    nor r5, r3, r3
    lwz r3, lbl_8087FE1C
    nor r4, r4, r4
    and r0, r0, r5
    and r3, r3, r4
    stw r3, lbl_8087FE1C
    stw r0, lbl_8087FE18
lbl_fn_80604FB0_afc:
    lwz r0, lbl_8087FE18
    lwz r3, lbl_8087FE1C
    or. r0, r3, r0
    bne lbl_fn_80604FB0_a9c
    addi r3, r31, 0xf0
    li r4, 0x1
    lwz r0, 0x30(r3)
    mr r3, r30
    stw r4, lbl_8087FE88
    stw r4, lbl_8087FE84
    stw r0, lbl_8087FE4C
    bl OSRestoreInterrupts
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806050D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r7, lbl_807D1590@ha
    li r0, 0x1
    addi r7, r7, lbl_807D1590@l
    mr r31, r3
    stw r30, 0x30(r7)
    mr r3, r7
    addi r4, r7, 0x34
    addi r5, r7, 0x38
    addi r6, r7, 0x4c
    stw r0, lbl_8087FE30
    addi r7, r7, 0x50
    bl fn_80604050
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80605140(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    bl OSDisableInterrupts
    lis r4, lbl_807D1590@ha
    mr r31, r3
    addi r4, r4, lbl_807D1590@l
    lwz r10, 0x54(r4)
    stw r30, 0x40(r4)
    stw r30, 0x8(r1)
    lhz r3, 0xa(r4)
    lhz r4, 0x6(r4)
    lbz r5, 0x0(r10)
    lhz r6, 0x2(r10)
    lhz r7, 0x4(r10)
    lhz r8, 0x6(r10)
    lhz r9, 0x8(r10)
    lhz r10, 0xa(r10)
    bl fn_806043E0
    mr r3, r31
    bl OSRestoreInterrupts
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_806051C0(void)
{
    nofralloc
    lwz r3, lbl_8087FE8C
    blr
}

asm void fn_806051D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, lbl_8087FE54
    bl OSDisableInterrupts
    lis r5, 0xcc00
    lhz r0, 0x202c(r5)
    clrlwi r8, r0, 21
lbl_fn_806051D0_c78:
    lhz r4, 0x202e(r5)
    mr r6, r8
    lhz r0, 0x202c(r5)
    clrlwi r7, r4, 21
    clrlwi r8, r0, 21
    cmplw r6, r8
    bne lbl_fn_806051D0_c78
    lwz r4, lbl_8087FE54
    subi r5, r7, 0x1
    subi r6, r8, 0x1
    lhz r0, 0x1a(r4)
    slwi r4, r6, 1
    divwu r0, r5, r0
    add r31, r4, r0
    bl OSRestoreInterrupts
    lhz r0, 0x18(r30)
    cmplw r31, r0
    blt lbl_fn_806051D0_cc4
    subf r31, r0, r31
lbl_fn_806051D0_cc4:
    srwi r3, r31, 1
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void VIGetTvFormat(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lwz r31, CurrTvMode_8087FE50
    cmplwi r31, 0x8
    bgt lbl_VIGetTvFormat_d24
    lis r4, lbl_807ABF20@ha
    slwi r0, r31, 2
    addi r4, r4, lbl_807ABF20@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_VIGetTvFormat_d24
    li r31, 0x1
lbl_VIGetTvFormat_d24:
    bl OSRestoreInterrupts
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806052C0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl OSDisableInterrupts
    lis r4, 0xcc00
    lhz r0, 0x206e(r4)
    clrlwi r31, r0, 30
    bl OSRestoreInterrupts
    clrlwi r3, r31, 31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80605300(void)
{
    nofralloc
    lwz r7, lbl_8087FE54
    subi r9, r4, 0x1
    lis r8, lbl_807D1590@ha
    subi r4, r3, 0x1
    lhz r0, 0x1a(r7)
    addi r8, r8, lbl_807D1590@l
    lwz r10, 0x24(r8)
    slwi r8, r9, 1
    divwu r0, r4, r0
    cmpwi r10, 0x0
    add r0, r8, r0
    bne lbl_fn_80605300_e74
    lhz r9, 0x18(r7)
    cmplw r0, r9
    bge lbl_fn_80605300_e14
    lbz r8, 0x0(r7)
    lhz r10, 0x4(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_fn_80605300_de4
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_de4:
    lhz r4, 0x8(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_fn_80605300_e00
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_e00:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r0, r0, 1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_e14:
    lbz r8, 0x0(r7)
    subf r0, r9, r0
    lhz r10, 0x6(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_fn_80605300_e40
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_e40:
    lhz r4, 0xa(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_fn_80605300_e5c
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_e5c:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r4, r0, 1
    addi r0, r4, 0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_e74:
    cmplwi r10, 0x1
    bne lbl_fn_80605300_ee8
    lhz r9, 0x18(r7)
    cmplw r0, r9
    blt lbl_fn_80605300_e8c
    subf r0, r9, r0
lbl_fn_80605300_e8c:
    lwz r4, lbl_8087FE54
    lbz r8, 0x0(r4)
    lhz r10, 0x4(r4)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_fn_80605300_eb8
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_eb8:
    lhz r4, 0x8(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_fn_80605300_ed4
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_ed4:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r0, r0, 1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_ee8:
    cmplwi r10, 0x2
    bne lbl_fn_80605300_fa8
    lhz r9, 0x18(r7)
    cmplw r0, r9
    bge lbl_fn_80605300_f50
    lbz r8, 0x0(r7)
    lhz r10, 0x4(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_fn_80605300_f24
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_f24:
    lhz r4, 0x8(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_fn_80605300_f40
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_f40:
    subf r0, r8, r0
    subf r0, r10, r0
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_f50:
    lbz r8, 0x0(r7)
    subf r0, r9, r0
    lhz r10, 0x6(r7)
    slwi r4, r8, 2
    subf r8, r8, r4
    add r4, r10, r8
    cmplw r0, r4
    bge lbl_fn_80605300_f7c
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_f7c:
    lhz r4, 0xa(r7)
    subf r4, r4, r9
    cmplw r0, r4
    blt lbl_fn_80605300_f98
    li r0, -0x1
    sth r0, 0x0(r6)
    b lbl_fn_80605300_fa8
lbl_fn_80605300_f98:
    subf r0, r8, r0
    subf r0, r10, r0
    clrrwi r0, r0, 1
    sth r0, 0x0(r6)
lbl_fn_80605300_fa8:
    subi r0, r3, 0x1
    sth r0, 0x0(r5)
    blr
}

asm void fn_80605540(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r31, lbl_8087FE80
    bne lbl_fn_80605540_ff4
    bl fn_80624A50
    clrlwi. r0, r3, 24
    bne lbl_fn_80605540_ff4
    li r30, 0x0
lbl_fn_80605540_ff4:
    stw r30, lbl_8087FE80
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806055A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r30, lbl_8087FE78
    stw r3, lbl_8087FE78
    bl OSDisableInterrupts
    lwz r31, CurrTvMode_8087FE50
    cmplwi r31, 0x8
    bgt lbl_fn_806055A0_1070
    lis r4, jumptable_807ABF44@ha
    slwi r0, r31, 2
    addi r4, r4, jumptable_807ABF44@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_fn_806055A0_1070
    li r31, 0x1
lbl_fn_806055A0_1070:
    bl OSRestoreInterrupts
    cmplwi r31, 0x1
    bne lbl_fn_806055A0_10bc
    lwz r0, lbl_8087FE78
    cmpwi r0, 0x1
    beq lbl_fn_806055A0_1094
    cmpwi r0, 0x2
    beq lbl_fn_806055A0_10a0
    b lbl_fn_806055A0_10b0
lbl_fn_806055A0_1094:
    li r0, 0x7530
    stw r0, lbl_8087FDF4
    b lbl_fn_806055A0_10fc
lbl_fn_806055A0_10a0:
    lis r3, 0x1
    subi r0, r3, 0x5038
    stw r0, lbl_8087FDF4
    b lbl_fn_806055A0_10fc
lbl_fn_806055A0_10b0:
    li r0, 0x3a98
    stw r0, lbl_8087FDF4
    b lbl_fn_806055A0_10fc
lbl_fn_806055A0_10bc:
    lwz r0, lbl_8087FE78
    cmpwi r0, 0x1
    beq lbl_fn_806055A0_10d4
    cmpwi r0, 0x2
    beq lbl_fn_806055A0_10e4
    b lbl_fn_806055A0_10f4
lbl_fn_806055A0_10d4:
    lis r3, 0x1
    subi r0, r3, 0x7360
    stw r0, lbl_8087FDF4
    b lbl_fn_806055A0_10fc
lbl_fn_806055A0_10e4:
    lis r3, 0x1
    subi r0, r3, 0x2d10
    stw r0, lbl_8087FDF4
    b lbl_fn_806055A0_10fc
lbl_fn_806055A0_10f4:
    li r0, 0x4650
    stw r0, lbl_8087FDF4
lbl_fn_806055A0_10fc:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806056A0(void)
{
    nofralloc
    lis r3, lbl_807D15E8@ha
    li r0, 0x0
    stw r0, lbl_807D15E8@l(r3)
    li r3, 0x1
    blr
}

asm void fn_806056C0(void)
{
    nofralloc
    li r0, 0x0
    stw r0, lbl_8087FE74
    li r3, 0x1
    blr
}

asm void fn_806056D0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl __OSGetSystemTime
    mr r30, r4
    mr r31, r3
lbl_fn_806056D0_1178:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r31, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    srawi r5, r29, 31
    xoris r0, r3, 0x8000
    xoris r5, r5, 0x8000
    subfc r3, r29, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_806056D0_1178
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80605760(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, lbl_8087E828
    mr r29, r3
    cmpwi r0, 0x0
    bne lbl_fn_80605760_121c
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
    b lbl_fn_80605760_122c
lbl_fn_80605760_121c:
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
lbl_fn_80605760_122c:
    bl __OSGetSystemTime
    mr r28, r4
    mr r27, r3
    li r26, 0x2
    li r25, 0x0
lbl_fn_80605760_1240:
    bl __OSGetSystemTime
    subfc r7, r28, r4
    li r6, 0x1e6
    subfe r0, r27, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r26, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605760_1240
    lis r31, 0xcd80
    li r30, 0x0
    lwz r0, 0xc0(r31)
    li r27, 0x2
    li r28, 0x0
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
lbl_fn_80605760_129c:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_fn_80605760_12d4
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605760_12c0
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
    b lbl_fn_80605760_1300
lbl_fn_80605760_12c0:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_fn_80605760_1300
lbl_fn_80605760_12d4:
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605760_12f4
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_fn_80605760_1300
lbl_fn_80605760_12f4:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
lbl_fn_80605760_1300:
    bl __OSGetSystemTime
    mr r26, r4
    mr r25, r3
lbl_fn_80605760_130c:
    bl __OSGetSystemTime
    subfc r7, r26, r4
    li r6, 0x1e6
    subfe r0, r25, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r28, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605760_130c
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r31)
    bl __OSGetSystemTime
    mr r25, r4
    mr r26, r3
lbl_fn_80605760_1368:
    bl __OSGetSystemTime
    subfc r7, r25, r4
    li r6, 0x1e6
    subfe r0, r26, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r28, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605760_1368
    lwz r0, 0xc0(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0x8
    clrlslwi r29, r29, 25, 1
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
    blt lbl_fn_80605760_129c
    lis r3, 0xcd80
    lwz r0, 0xc4(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x4000
    stw r0, 0xc4(r3)
    bl __OSGetSystemTime
    mr r31, r4
    mr r30, r3
    li r29, 0x2
    li r28, 0x0
lbl_fn_80605760_13ec:
    bl __OSGetSystemTime
    subfc r7, r31, r4
    li r6, 0x1e6
    subfe r0, r30, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r28, 0x8000
    subfc r3, r29, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605760_13ec
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r3)
    bl __OSGetSystemTime
    mr r28, r4
    mr r31, r3
    li r30, 0x2
    li r29, 0x0
lbl_fn_80605760_1454:
    bl __OSGetSystemTime
    subfc r7, r28, r4
    li r6, 0x1e6
    subfe r0, r31, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r29, 0x8000
    subfc r3, r30, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605760_1454
    lwz r0, lbl_8087E828
    cmplwi r0, 0x1
    bne lbl_fn_80605760_14b8
    lis r3, 0xcd80
    lwz r0, 0xc8(r3)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_80605760_14b8
    li r3, 0x0
    b lbl_fn_80605760_1510
lbl_fn_80605760_14b8:
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605760_14dc
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
    b lbl_fn_80605760_14ec
lbl_fn_80605760_14dc:
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
lbl_fn_80605760_14ec:
    lis r4, 0xcd80
    li r3, 0x1
    lwz r0, 0xc4(r4)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r4)
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r4)
lbl_fn_80605760_1510:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80605AB0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_22
    lwz r0, lbl_8087FE90
    mr r29, r3
    mr r26, r4
    mr r27, r5
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_1568
    li r0, 0x1
    stw r0, lbl_8087E828
    stw r0, lbl_8087FE90
lbl_fn_80605AB0_1568:
    bl OSDisableInterrupts
    lis r4, 0xcd80
    mr r28, r3
    lwz r0, 0xc4(r4)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r4)
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r4)
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_15b0
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r4)
    b lbl_fn_80605AB0_15c0
lbl_fn_80605AB0_15b0:
    lwz r0, 0xc0(r4)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r4)
lbl_fn_80605AB0_15c0:
    bl __OSGetSystemTime
    mr r25, r4
    mr r24, r3
    li r23, 0x2
    li r22, 0x0
lbl_fn_80605AB0_15d4:
    bl __OSGetSystemTime
    subfc r7, r25, r4
    li r6, 0x1e6
    subfe r0, r24, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r22, 0x8000
    subfc r3, r23, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_15d4
    bl __OSGetSystemTime
    mr r25, r4
    mr r24, r3
    li r23, 0x2
    li r22, 0x0
lbl_fn_80605AB0_1628:
    bl __OSGetSystemTime
    subfc r7, r25, r4
    li r6, 0x1e6
    subfe r0, r24, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r22, 0x8000
    subfc r3, r23, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_1628
    mr r3, r29
    bl fn_80605760
    cmpwi r3, 0x0
    bne lbl_fn_80605AB0_1688
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80605AB0_1a4c
lbl_fn_80605AB0_1688:
    lis r31, 0xcd80
    li r24, 0x2
    lwz r0, 0xc4(r31)
    li r25, 0x0
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r31)
    b lbl_fn_80605AB0_1908
lbl_fn_80605AB0_16a8:
    lbz r29, 0x0(r26)
    li r30, 0x0
    addi r26, r26, 0x1
lbl_fn_80605AB0_16b4:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_fn_80605AB0_16ec
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_16d8
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
    b lbl_fn_80605AB0_1718
lbl_fn_80605AB0_16d8:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_fn_80605AB0_1718
lbl_fn_80605AB0_16ec:
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_170c
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_fn_80605AB0_1718
lbl_fn_80605AB0_170c:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
lbl_fn_80605AB0_1718:
    bl __OSGetSystemTime
    mr r23, r4
    mr r22, r3
lbl_fn_80605AB0_1724:
    bl __OSGetSystemTime
    subfc r7, r23, r4
    li r6, 0x1e6
    subfe r0, r22, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_1724
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r31)
    bl __OSGetSystemTime
    mr r22, r4
    mr r23, r3
lbl_fn_80605AB0_1780:
    bl __OSGetSystemTime
    subfc r7, r22, r4
    li r6, 0x1e6
    subfe r0, r23, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_1780
    lwz r0, 0xc0(r31)
    addi r30, r30, 0x1
    cmpwi r30, 0x8
    clrlslwi r29, r29, 25, 1
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
    blt lbl_fn_80605AB0_16b4
    lwz r0, 0xc4(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x4000
    stw r0, 0xc4(r31)
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
lbl_fn_80605AB0_17f8:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_17f8
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r31)
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
lbl_fn_80605AB0_1854:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r25, 0x8000
    subfc r3, r24, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_1854
    lwz r0, lbl_8087E828
    cmplwi r0, 0x1
    bne lbl_fn_80605AB0_18bc
    lwz r0, 0xc8(r31)
    extrwi. r0, r0, 1, 16
    beq lbl_fn_80605AB0_18bc
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x0
    b lbl_fn_80605AB0_1a4c
lbl_fn_80605AB0_18bc:
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_18dc
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r31)
    b lbl_fn_80605AB0_18e8
lbl_fn_80605AB0_18dc:
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r31)
lbl_fn_80605AB0_18e8:
    lwz r0, 0xc4(r31)
    subi r27, r27, 0x1
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r31)
    lwz r0, 0xc0(r31)
    rlwinm r0, r0, 0, 18, 16
    stw r0, 0xc0(r31)
lbl_fn_80605AB0_1908:
    cmpwi r27, 0x0
    bne lbl_fn_80605AB0_16a8
    lis r3, 0xcd80
    lwz r0, 0xc4(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0xc000
    stw r0, 0xc4(r3)
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_1944
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
    b lbl_fn_80605AB0_1950
lbl_fn_80605AB0_1944:
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
lbl_fn_80605AB0_1950:
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
    li r27, 0x2
    li r26, 0x0
lbl_fn_80605AB0_1964:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r26, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_1964
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 18, 16
    ori r0, r0, 0x4000
    stw r0, 0xc0(r3)
    bl __OSGetSystemTime
    mr r30, r4
    mr r29, r3
    li r27, 0x2
    li r26, 0x0
lbl_fn_80605AB0_19cc:
    bl __OSGetSystemTime
    subfc r7, r30, r4
    li r6, 0x1e6
    subfe r0, r29, r3
    li r5, 0x0
    slwi r3, r0, 3
    slwi r4, r7, 3
    rlwimi r3, r7, 3, 29, 31
    bl __div2i
    xoris r0, r3, 0x8000
    xoris r5, r26, 0x8000
    subfc r3, r27, r4
    subfe r5, r5, r0
    subfe r5, r0, r0
    neg. r5, r5
    bne lbl_fn_80605AB0_19cc
    lwz r0, lbl_8087E828
    cmpwi r0, 0x0
    bne lbl_fn_80605AB0_1a2c
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    stw r0, 0xc0(r3)
    b lbl_fn_80605AB0_1a40
lbl_fn_80605AB0_1a2c:
    lis r3, 0xcd80
    lwz r0, 0xc0(r3)
    rlwinm r0, r0, 0, 17, 15
    ori r0, r0, 0x8000
    stw r0, 0xc0(r3)
lbl_fn_80605AB0_1a40:
    mr r3, r28
    bl OSRestoreInterrupts
    li r3, 0x1
lbl_fn_80605AB0_1a4c:
    addi r11, r1, 0x30
    bl _restgpr_22
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80605FF0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, 0x8000
    stw r0, 0x14(r1)
    lwz r0, 0xcc(r4)
    cmplwi r0, 0x1
    beq lbl_fn_80605FF0_1aa8
    cmplwi r0, 0x5
    beq lbl_fn_80605FF0_1aa8
    cmplwi r0, 0x2
    beq lbl_fn_80605FF0_1ab4
    cmpwi r0, 0x0
    beq lbl_fn_80605FF0_1ac0
    b lbl_fn_80605FF0_1acc
lbl_fn_80605FF0_1aa8:
    li r0, 0x2
    stw r0, lbl_8087FEAC
    b lbl_fn_80605FF0_1ad4
lbl_fn_80605FF0_1ab4:
    li r0, 0x1
    stw r0, lbl_8087FEAC
    b lbl_fn_80605FF0_1ad4
lbl_fn_80605FF0_1ac0:
    li r0, 0x0
    stw r0, lbl_8087FEAC
    b lbl_fn_80605FF0_1ad4
lbl_fn_80605FF0_1acc:
    li r0, 0x0
    stw r0, lbl_8087FEAC
lbl_fn_80605FF0_1ad4:
    clrlslwi r3, r3, 24, 5
    li r4, 0x1
    or r0, r3, r0
    stb r4, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0xe0
    stb r0, 0x9(r1)
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80606090(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x2
    stw r0, 0x14(r1)
    li r0, 0x6e
    addi r4, r1, 0x8
    stb r3, 0x9(r1)
    li r3, 0xe0
    stb r0, 0x8(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806060D0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x5
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    lbz r3, lbl_8087E834
    lbz r0, lbl_8087E836
    clrlwi r6, r3, 30
    lbz r5, lbl_8087E835
    stb r7, 0x8(r1)
    li r3, 0xe0
    rlwimi r6, r5, 2, 26, 29
    li r5, 0x3
    stb r6, 0x9(r1)
    stb r0, 0xa(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80606130(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r7, 0x8
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    lbz r3, lbl_8087E837
    lbz r0, lbl_8087E839
    clrlwi r5, r3, 28
    lbz r6, lbl_8087E838
    lbz r3, lbl_8087E83A
    clrlwi r0, r0, 29
    rlwimi r5, r6, 4, 24, 27
    stb r5, 0x9(r1)
    rlwimi r0, r3, 3, 26, 28
    li r3, 0xe0
    stb r7, 0x8(r1)
    li r5, 0x3
    stb r0, 0xa(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806061A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r9, 0x7a
    stw r0, 0x14(r1)
    addi r4, r1, 0x8
    lbz r0, lbl_8087E83B
    lbz r5, lbl_8087E83C
    clrlwi r8, r0, 25
    lbz r3, lbl_8087E83D
    lbz r0, lbl_8087E83E
    clrlwi r7, r5, 25
    clrlwi r6, r3, 25
    stb r9, 0x8(r1)
    clrlwi r0, r0, 25
    li r3, 0xe0
    stb r8, 0x9(r1)
    li r5, 0x5
    stb r7, 0xa(r1)
    stb r6, 0xb(r1)
    stb r0, 0xc(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80606210(void)
{
    nofralloc
    stwu r1, -0x190(r1)
    mflr r0
    lis r3, lbl_807ABF68@ha
    stw r0, 0x194(r1)
    addi r3, r3, lbl_807ABF68@l
    stw r31, 0x18c(r1)
    stw r30, 0x188(r1)
    stw r29, 0x184(r1)
    stw r28, 0x180(r1)
    lwz r0, lbl_8087FEA8
    cmpwi r0, 0x2
    beq lbl_fn_80606210_1cdc
    cmpwi r0, 0x3
    beq lbl_fn_80606210_20e4
    cmpwi r0, 0x4
    beq lbl_fn_80606210_24ec
    cmpwi r0, 0x1
    beq lbl_fn_80606210_28f4
    b lbl_fn_80606210_29e8
lbl_fn_80606210_1cdc:
    lwz r0, lbl_8087E830
    cmpwi r0, 0x0
    beq lbl_fn_80606210_1d04
    cmplwi r0, 0x1
    beq lbl_fn_80606210_1dfc
    cmplwi r0, 0x2
    beq lbl_fn_80606210_1ef4
    cmplwi r0, 0x5
    beq lbl_fn_80606210_1fec
    b lbl_fn_80606210_29e8
lbl_fn_80606210_1d04:
    addi r30, r3, 0x420
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x158
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x159(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x15a(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x15b(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x15c(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x15d(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x15e(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x15f(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x160(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x161(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x162(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x163(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x164(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x165(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x166(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x167(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x168(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x158(r1)
    stb r29, 0x169(r1)
    stb r28, 0x16a(r1)
    stb r12, 0x16b(r1)
    stb r11, 0x16c(r1)
    stb r10, 0x16d(r1)
    stb r9, 0x16e(r1)
    stb r8, 0x16f(r1)
    stb r7, 0x170(r1)
    stb r6, 0x171(r1)
    stb r0, 0x172(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_1dfc:
    addi r30, r3, 0x474
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x13c
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x13d(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x13e(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x13f(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x140(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x141(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x142(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x143(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x144(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x145(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x146(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x147(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x148(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x149(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x14a(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x14b(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x14c(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x13c(r1)
    stb r29, 0x14d(r1)
    stb r28, 0x14e(r1)
    stb r12, 0x14f(r1)
    stb r11, 0x150(r1)
    stb r10, 0x151(r1)
    stb r9, 0x152(r1)
    stb r8, 0x153(r1)
    stb r7, 0x154(r1)
    stb r6, 0x155(r1)
    stb r0, 0x156(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_1ef4:
    addi r30, r3, 0x51c
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x120
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x121(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x122(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x123(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x124(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x125(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x126(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x127(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x128(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x129(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x12a(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x12b(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x12c(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x12d(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x12e(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x12f(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x130(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x120(r1)
    stb r29, 0x131(r1)
    stb r28, 0x132(r1)
    stb r12, 0x133(r1)
    stb r11, 0x134(r1)
    stb r10, 0x135(r1)
    stb r9, 0x136(r1)
    stb r8, 0x137(r1)
    stb r7, 0x138(r1)
    stb r6, 0x139(r1)
    stb r0, 0x13a(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_1fec:
    addi r30, r3, 0x4c8
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x104
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x105(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x106(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x107(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x108(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x109(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x10a(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x10b(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x10c(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x10d(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x10e(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x10f(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x110(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x111(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x112(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x113(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x114(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x104(r1)
    stb r29, 0x115(r1)
    stb r28, 0x116(r1)
    stb r12, 0x117(r1)
    stb r11, 0x118(r1)
    stb r10, 0x119(r1)
    stb r9, 0x11a(r1)
    stb r8, 0x11b(r1)
    stb r7, 0x11c(r1)
    stb r6, 0x11d(r1)
    stb r0, 0x11e(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_20e4:
    lwz r0, lbl_8087E830
    cmpwi r0, 0x0
    beq lbl_fn_80606210_210c
    cmplwi r0, 0x1
    beq lbl_fn_80606210_2204
    cmplwi r0, 0x2
    beq lbl_fn_80606210_22fc
    cmplwi r0, 0x5
    beq lbl_fn_80606210_23f4
    b lbl_fn_80606210_29e8
lbl_fn_80606210_210c:
    addi r30, r3, 0x43c
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0xe8
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0xe9(r1)
    lbz r29, 0x8(r30)
    stb r28, 0xea(r1)
    lbz r28, 0x9(r30)
    stb r12, 0xeb(r1)
    lbz r12, 0xa(r30)
    stb r11, 0xec(r1)
    lbz r11, 0xb(r30)
    stb r10, 0xed(r1)
    lbz r10, 0xc(r30)
    stb r9, 0xee(r1)
    lbz r9, 0xd(r30)
    stb r8, 0xef(r1)
    lbz r8, 0xe(r30)
    stb r7, 0xf0(r1)
    lbz r7, 0xf(r30)
    stb r29, 0xf1(r1)
    lbz r29, 0x10(r30)
    stb r28, 0xf2(r1)
    lbz r28, 0x11(r30)
    stb r12, 0xf3(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xf4(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xf5(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xf6(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xf7(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xf8(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0xe8(r1)
    stb r29, 0xf9(r1)
    stb r28, 0xfa(r1)
    stb r12, 0xfb(r1)
    stb r11, 0xfc(r1)
    stb r10, 0xfd(r1)
    stb r9, 0xfe(r1)
    stb r8, 0xff(r1)
    stb r7, 0x100(r1)
    stb r6, 0x101(r1)
    stb r0, 0x102(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_2204:
    addi r30, r3, 0x490
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0xcc
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0xcd(r1)
    lbz r29, 0x8(r30)
    stb r28, 0xce(r1)
    lbz r28, 0x9(r30)
    stb r12, 0xcf(r1)
    lbz r12, 0xa(r30)
    stb r11, 0xd0(r1)
    lbz r11, 0xb(r30)
    stb r10, 0xd1(r1)
    lbz r10, 0xc(r30)
    stb r9, 0xd2(r1)
    lbz r9, 0xd(r30)
    stb r8, 0xd3(r1)
    lbz r8, 0xe(r30)
    stb r7, 0xd4(r1)
    lbz r7, 0xf(r30)
    stb r29, 0xd5(r1)
    lbz r29, 0x10(r30)
    stb r28, 0xd6(r1)
    lbz r28, 0x11(r30)
    stb r12, 0xd7(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xd8(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xd9(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xda(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xdb(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xdc(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0xcc(r1)
    stb r29, 0xdd(r1)
    stb r28, 0xde(r1)
    stb r12, 0xdf(r1)
    stb r11, 0xe0(r1)
    stb r10, 0xe1(r1)
    stb r9, 0xe2(r1)
    stb r8, 0xe3(r1)
    stb r7, 0xe4(r1)
    stb r6, 0xe5(r1)
    stb r0, 0xe6(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_22fc:
    addi r30, r3, 0x538
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0xb0
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0xb1(r1)
    lbz r29, 0x8(r30)
    stb r28, 0xb2(r1)
    lbz r28, 0x9(r30)
    stb r12, 0xb3(r1)
    lbz r12, 0xa(r30)
    stb r11, 0xb4(r1)
    lbz r11, 0xb(r30)
    stb r10, 0xb5(r1)
    lbz r10, 0xc(r30)
    stb r9, 0xb6(r1)
    lbz r9, 0xd(r30)
    stb r8, 0xb7(r1)
    lbz r8, 0xe(r30)
    stb r7, 0xb8(r1)
    lbz r7, 0xf(r30)
    stb r29, 0xb9(r1)
    lbz r29, 0x10(r30)
    stb r28, 0xba(r1)
    lbz r28, 0x11(r30)
    stb r12, 0xbb(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xbc(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xbd(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xbe(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xbf(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xc0(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0xb0(r1)
    stb r29, 0xc1(r1)
    stb r28, 0xc2(r1)
    stb r12, 0xc3(r1)
    stb r11, 0xc4(r1)
    stb r10, 0xc5(r1)
    stb r9, 0xc6(r1)
    stb r8, 0xc7(r1)
    stb r7, 0xc8(r1)
    stb r6, 0xc9(r1)
    stb r0, 0xca(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_23f4:
    addi r30, r3, 0x4e4
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x94
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x95(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x96(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x97(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x98(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x99(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x9a(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x9b(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x9c(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x9d(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x9e(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x9f(r1)
    lbz r12, 0x12(r30)
    stb r11, 0xa0(r1)
    lbz r11, 0x13(r30)
    stb r10, 0xa1(r1)
    lbz r10, 0x14(r30)
    stb r9, 0xa2(r1)
    lbz r9, 0x15(r30)
    stb r8, 0xa3(r1)
    lbz r8, 0x16(r30)
    stb r7, 0xa4(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x94(r1)
    stb r29, 0xa5(r1)
    stb r28, 0xa6(r1)
    stb r12, 0xa7(r1)
    stb r11, 0xa8(r1)
    stb r10, 0xa9(r1)
    stb r9, 0xaa(r1)
    stb r8, 0xab(r1)
    stb r7, 0xac(r1)
    stb r6, 0xad(r1)
    stb r0, 0xae(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_24ec:
    lwz r0, lbl_8087E830
    cmpwi r0, 0x0
    beq lbl_fn_80606210_2514
    cmplwi r0, 0x1
    beq lbl_fn_80606210_260c
    cmplwi r0, 0x2
    beq lbl_fn_80606210_2704
    cmplwi r0, 0x5
    beq lbl_fn_80606210_27fc
    b lbl_fn_80606210_29e8
lbl_fn_80606210_2514:
    addi r30, r3, 0x458
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x78
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x79(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x7a(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x7b(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x7c(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x7d(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x7e(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x7f(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x80(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x81(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x82(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x83(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x84(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x85(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x86(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x87(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x88(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x78(r1)
    stb r29, 0x89(r1)
    stb r28, 0x8a(r1)
    stb r12, 0x8b(r1)
    stb r11, 0x8c(r1)
    stb r10, 0x8d(r1)
    stb r9, 0x8e(r1)
    stb r8, 0x8f(r1)
    stb r7, 0x90(r1)
    stb r6, 0x91(r1)
    stb r0, 0x92(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_260c:
    addi r30, r3, 0x4ac
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x5c
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x5d(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x5e(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x5f(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x60(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x61(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x62(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x63(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x64(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x65(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x66(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x67(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x68(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x69(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x6a(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x6b(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x6c(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x5c(r1)
    stb r29, 0x6d(r1)
    stb r28, 0x6e(r1)
    stb r12, 0x6f(r1)
    stb r11, 0x70(r1)
    stb r10, 0x71(r1)
    stb r9, 0x72(r1)
    stb r8, 0x73(r1)
    stb r7, 0x74(r1)
    stb r6, 0x75(r1)
    stb r0, 0x76(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_2704:
    addi r30, r3, 0x554
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x40
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x41(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x42(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x43(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x44(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x45(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x46(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x47(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x48(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x49(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x4a(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x4b(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x4c(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x4d(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x4e(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x4f(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x50(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x40(r1)
    stb r29, 0x51(r1)
    stb r28, 0x52(r1)
    stb r12, 0x53(r1)
    stb r11, 0x54(r1)
    stb r10, 0x55(r1)
    stb r9, 0x56(r1)
    stb r8, 0x57(r1)
    stb r7, 0x58(r1)
    stb r6, 0x59(r1)
    stb r0, 0x5a(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_27fc:
    addi r30, r3, 0x500
    li r31, 0x40
    lbz r29, 0x0(r30)
    addi r4, r1, 0x24
    lbz r28, 0x1(r30)
    li r3, 0xe0
    lbz r12, 0x2(r30)
    li r5, 0x1b
    lbz r11, 0x3(r30)
    lbz r10, 0x4(r30)
    lbz r9, 0x5(r30)
    lbz r8, 0x6(r30)
    lbz r7, 0x7(r30)
    stb r29, 0x25(r1)
    lbz r29, 0x8(r30)
    stb r28, 0x26(r1)
    lbz r28, 0x9(r30)
    stb r12, 0x27(r1)
    lbz r12, 0xa(r30)
    stb r11, 0x28(r1)
    lbz r11, 0xb(r30)
    stb r10, 0x29(r1)
    lbz r10, 0xc(r30)
    stb r9, 0x2a(r1)
    lbz r9, 0xd(r30)
    stb r8, 0x2b(r1)
    lbz r8, 0xe(r30)
    stb r7, 0x2c(r1)
    lbz r7, 0xf(r30)
    stb r29, 0x2d(r1)
    lbz r29, 0x10(r30)
    stb r28, 0x2e(r1)
    lbz r28, 0x11(r30)
    stb r12, 0x2f(r1)
    lbz r12, 0x12(r30)
    stb r11, 0x30(r1)
    lbz r11, 0x13(r30)
    stb r10, 0x31(r1)
    lbz r10, 0x14(r30)
    stb r9, 0x32(r1)
    lbz r9, 0x15(r30)
    stb r8, 0x33(r1)
    lbz r8, 0x16(r30)
    stb r7, 0x34(r1)
    lbz r7, 0x17(r30)
    lbz r6, 0x18(r30)
    lbz r0, 0x19(r30)
    stb r31, 0x24(r1)
    stb r29, 0x35(r1)
    stb r28, 0x36(r1)
    stb r12, 0x37(r1)
    stb r11, 0x38(r1)
    stb r10, 0x39(r1)
    stb r9, 0x3a(r1)
    stb r8, 0x3b(r1)
    stb r7, 0x3c(r1)
    stb r6, 0x3d(r1)
    stb r0, 0x3e(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80606210_29e8
lbl_fn_80606210_28f4:
    lis r29, lbl_807D1610@ha
    lbzu r30, lbl_807D1610@l(r29)
    stb r30, 0x9(r1)
    li r28, 0x40
    lbz r31, 0x1(r29)
    addi r4, r1, 0x8
    lbz r12, 0x2(r29)
    li r3, 0xe0
    lbz r11, 0x3(r29)
    li r5, 0x1b
    lbz r10, 0x4(r29)
    lbz r9, 0x5(r29)
    lbz r8, 0x6(r29)
    lbz r7, 0x7(r29)
    lbz r30, 0x8(r29)
    stb r31, 0xa(r1)
    lbz r31, 0x9(r29)
    stb r12, 0xb(r1)
    lbz r12, 0xa(r29)
    stb r11, 0xc(r1)
    lbz r11, 0xb(r29)
    stb r10, 0xd(r1)
    lbz r10, 0xc(r29)
    stb r9, 0xe(r1)
    lbz r9, 0xd(r29)
    stb r8, 0xf(r1)
    lbz r8, 0xe(r29)
    stb r7, 0x10(r1)
    lbz r7, 0xf(r29)
    stb r30, 0x11(r1)
    lbz r30, 0x10(r29)
    stb r31, 0x12(r1)
    lbz r31, 0x11(r29)
    stb r12, 0x13(r1)
    lbz r12, 0x12(r29)
    stb r11, 0x14(r1)
    lbz r11, 0x13(r29)
    stb r10, 0x15(r1)
    lbz r10, 0x14(r29)
    stb r9, 0x16(r1)
    lbz r9, 0x15(r29)
    stb r8, 0x17(r1)
    lbz r8, 0x16(r29)
    stb r7, 0x18(r1)
    lbz r7, 0x17(r29)
    lbz r6, 0x18(r29)
    lbz r0, 0x19(r29)
    stb r28, 0x8(r1)
    stb r30, 0x19(r1)
    stb r31, 0x1a(r1)
    stb r12, 0x1b(r1)
    stb r11, 0x1c(r1)
    stb r10, 0x1d(r1)
    stb r9, 0x1e(r1)
    stb r8, 0x1f(r1)
    stb r7, 0x20(r1)
    stb r6, 0x21(r1)
    stb r0, 0x22(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
lbl_fn_80606210_29e8:
    lwz r0, 0x194(r1)
    lwz r31, 0x18c(r1)
    lwz r30, 0x188(r1)
    lwz r29, 0x184(r1)
    lwz r28, 0x180(r1)
    mtlr r0
    addi r1, r1, 0x190
    blr
}

asm void fn_80606F90(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    li r5, 0x22
    stw r0, 0x34(r1)
    li r0, 0x10
    addi r4, r1, 0x8
    stb r0, 0x8(r1)
    lhz r0, 0x0(r3)
    stb r0, 0xa(r1)
    extrwi r0, r0, 8, 16
    stb r0, 0x9(r1)
    lhz r0, 0x2(r3)
    stb r0, 0xc(r1)
    extrwi r0, r0, 8, 16
    stb r0, 0xb(r1)
    lhz r0, 0x4(r3)
    stb r0, 0xe(r1)
    extrwi r0, r0, 8, 16
    stb r0, 0xd(r1)
    lhz r0, 0x6(r3)
    stb r0, 0x10(r1)
    extrwi r0, r0, 8, 16
    stb r0, 0xf(r1)
    lhz r0, 0x8(r3)
    stb r0, 0x12(r1)
    extrwi r0, r0, 8, 16
    stb r0, 0x11(r1)
    lhz r0, 0xa(r3)
    stb r0, 0x14(r1)
    extrwi r0, r0, 8, 16
    stb r0, 0x13(r1)
    lbz r0, 0xc(r3)
    stb r0, 0x15(r1)
    lbz r0, 0xd(r3)
    stb r0, 0x16(r1)
    lbz r0, 0xe(r3)
    stb r0, 0x17(r1)
    lbz r0, 0xf(r3)
    stb r0, 0x18(r1)
    lbz r0, 0x10(r3)
    stb r0, 0x19(r1)
    lbz r0, 0x11(r3)
    stb r0, 0x1a(r1)
    lbz r0, 0x12(r3)
    stb r0, 0x1b(r1)
    lhz r0, 0x14(r3)
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x1c(r1)
    stb r0, 0x1d(r1)
    lhz r0, 0x16(r3)
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x1e(r1)
    stb r0, 0x1f(r1)
    lhz r0, 0x18(r3)
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x20(r1)
    stb r0, 0x21(r1)
    lhz r0, 0x1a(r3)
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x22(r1)
    stb r0, 0x23(r1)
    lhz r0, 0x1c(r3)
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x24(r1)
    stb r0, 0x25(r1)
    lhz r0, 0x1e(r3)
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x26(r1)
    stb r0, 0x27(r1)
    lhz r0, 0x20(r3)
    li r3, 0xe0
    extrwi r6, r0, 8, 16
    rlwinm r0, r0, 0, 24, 25
    stb r6, 0x28(r1)
    stb r0, 0x29(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_806070F0(void)
{
    nofralloc
    lis r3, lbl_807ABF68@ha
    addi r3, r3, lbl_807ABF68@l
    addi r3, r3, 0x154
    b fn_80606F90
}

asm void fn_80607100(void)
{
    nofralloc
    lwz r0, lbl_8087FEA4
    lis r3, lbl_807ABF68@ha
    addi r3, r3, lbl_807ABF68@l
    mulli r0, r0, 0x22
    add r3, r3, r0
    b fn_80606F90
}

asm void fn_80607120(void)
{
    nofralloc
    lwz r0, lbl_8087FEA4
    cmpw r0, r3
    beqlr
    lwz r0, lbl_8087FE98
    stw r3, lbl_8087FEA4
    ori r0, r0, 0x10
    stw r0, lbl_8087FE98
    blr
}

asm void fn_80607140(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r3, 0x3
    stw r0, 0x14(r1)
    lbz r0, lbl_8087E83F
    stb r3, 0x8(r1)
    cmplwi r0, 0x1
    bne lbl_fn_80607140_2bec
    li r0, 0x0
    stb r0, 0x9(r1)
    b lbl_fn_80607140_2bf4
lbl_fn_80607140_2bec:
    li r0, 0x1
    stb r0, 0x9(r1)
lbl_fn_80607140_2bf4:
    addi r4, r1, 0x8
    li r3, 0xe0
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_806071A0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r0, lbl_8087FEAC
    cmpwi r0, 0x3
    bne lbl_fn_806071A0_2c6c
    lwz r0, lbl_8087FEA0
    li r3, 0xa
    stb r3, 0x8(r1)
    addi r4, r1, 0x8
    slwi r0, r0, 1
    li r3, 0xe0
    ori r0, r0, 0x1
    stb r0, 0x9(r1)
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_806071A0_2c94
lbl_fn_806071A0_2c6c:
    li r3, 0xa
    li r0, 0x0
    stb r3, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0x9(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
lbl_fn_806071A0_2c94:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80607230(void)
{
    nofralloc
    lwz r0, lbl_8087FE98
    ori r0, r0, 0x80
    stw r0, lbl_8087FE98
    blr
}

asm void __VISetRGBModeImm(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r6, 0x3
    li r3, 0xe0
    stw r0, 0x14(r1)
    li r0, 0x1
    addi r4, r1, 0x8
    li r5, 0x2
    stw r6, lbl_8087FEAC
    stb r0, 0x8(r1)
    stb r6, 0x9(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80607290(void)
{
    nofralloc
    stwu r1, -0x70(r1)
    mflr r0
    li r3, 0xe0
    li r5, 0x2
    stw r0, 0x74(r1)
    li r0, 0x6a
    addi r4, r1, 0x20
    stw r31, 0x6c(r1)
    stw r30, 0x68(r1)
    stw r29, 0x64(r1)
    stw r28, 0x60(r1)
    li r28, 0x1
    stb r0, 0x20(r1)
    stb r28, 0x21(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    li r0, 0x65
    stb r0, 0x1c(r1)
    addi r4, r1, 0x1c
    li r3, 0xe0
    stb r28, 0x1d(r1)
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    bl fn_806052C0
    lis r4, 0x8000
    lwz r0, 0xcc(r4)
    cmplwi r0, 0x1
    beq lbl_fn_80607290_2da8
    cmplwi r0, 0x5
    beq lbl_fn_80607290_2da8
    cmplwi r0, 0x2
    beq lbl_fn_80607290_2db4
    cmpwi r0, 0x0
    beq lbl_fn_80607290_2dbc
    b lbl_fn_80607290_2dc8
lbl_fn_80607290_2da8:
    li r28, 0x2
    stw r28, lbl_8087FEAC
    b lbl_fn_80607290_2dd0
lbl_fn_80607290_2db4:
    stw r28, lbl_8087FEAC
    b lbl_fn_80607290_2dd0
lbl_fn_80607290_2dbc:
    li r28, 0x0
    stw r28, lbl_8087FEAC
    b lbl_fn_80607290_2dd0
lbl_fn_80607290_2dc8:
    li r28, 0x0
    stw r28, lbl_8087FEAC
lbl_fn_80607290_2dd0:
    clrlslwi r0, r3, 24, 5
    li r3, 0x1
    or r0, r0, r28
    stb r3, 0x18(r1)
    addi r4, r1, 0x18
    li r3, 0xe0
    stb r0, 0x19(r1)
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    li r28, 0x0
    stb r28, 0x14(r1)
    addi r4, r1, 0x14
    li r3, 0xe0
    stb r28, 0x15(r1)
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    li r0, 0x8e
    li r3, 0x71
    stb r3, 0x2c(r1)
    addi r4, r1, 0x2c
    li r3, 0xe0
    li r5, 0x3
    stb r0, 0x2d(r1)
    stb r0, 0x2e(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    li r3, 0x2
    li r0, 0x7
    stb r3, 0x10(r1)
    addi r4, r1, 0x10
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0x11(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    li r0, 0x5
    stb r28, lbl_8087E834
    addi r4, r1, 0x28
    li r3, 0xe0
    stb r28, lbl_8087E835
    li r5, 0x3
    stb r28, lbl_8087E836
    stb r0, 0x28(r1)
    stb r28, 0x29(r1)
    stb r28, 0x2a(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lbz r0, lbl_8087E837
    cmpwi r0, 0x0
    bne lbl_fn_80607290_2ed8
    lbz r0, lbl_8087E838
    cmpwi r0, 0x0
    bne lbl_fn_80607290_2ed8
    lbz r0, lbl_8087E839
    cmpwi r0, 0x0
    bne lbl_fn_80607290_2ed8
    lbz r0, lbl_8087E83A
    cmpwi r0, 0x0
    beq lbl_fn_80607290_2ef8
lbl_fn_80607290_2ed8:
    lwz r0, lbl_8087FE98
    li r3, 0x0
    stb r3, lbl_8087E837
    ori r0, r0, 0x2
    stb r3, lbl_8087E838
    stb r3, lbl_8087E839
    stb r3, lbl_8087E83A
    stw r0, lbl_8087FE98
lbl_fn_80607290_2ef8:
    lbz r3, lbl_8087E837
    li r7, 0x8
    lbz r0, lbl_8087E839
    addi r4, r1, 0x24
    clrlwi r5, r3, 28
    lbz r6, lbl_8087E838
    lbz r3, lbl_8087E83A
    clrlwi r0, r0, 29
    rlwimi r5, r6, 4, 24, 27
    stb r5, 0x25(r1)
    rlwimi r0, r3, 3, 26, 28
    li r3, 0xe0
    stb r7, 0x24(r1)
    li r5, 0x3
    stb r0, 0x26(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lbz r0, lbl_8087E83B
    cmpwi r0, 0x0
    bne lbl_fn_80607290_2f70
    lbz r0, lbl_8087E83C
    cmpwi r0, 0x0
    bne lbl_fn_80607290_2f70
    lbz r0, lbl_8087E83D
    cmpwi r0, 0x0
    bne lbl_fn_80607290_2f70
    lbz r0, lbl_8087E83E
    cmpwi r0, 0x0
    beq lbl_fn_80607290_2f90
lbl_fn_80607290_2f70:
    lwz r0, lbl_8087FE98
    li r3, 0x0
    stb r3, lbl_8087E83B
    ori r0, r0, 0x4
    stb r3, lbl_8087E83C
    stb r3, lbl_8087E83D
    stb r3, lbl_8087E83E
    stw r0, lbl_8087FE98
lbl_fn_80607290_2f90:
    lbz r0, lbl_8087E83B
    li r9, 0x7a
    lbz r5, lbl_8087E83C
    addi r4, r1, 0x30
    clrlwi r8, r0, 25
    lbz r3, lbl_8087E83D
    lbz r0, lbl_8087E83E
    clrlwi r7, r5, 25
    clrlwi r6, r3, 25
    stb r9, 0x30(r1)
    clrlwi r0, r0, 25
    li r3, 0xe0
    stb r8, 0x31(r1)
    li r5, 0x5
    stb r7, 0x32(r1)
    stb r6, 0x33(r1)
    stb r0, 0x34(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lis r29, lbl_807D1610@ha
    lbzu r30, lbl_807D1610@l(r29)
    stb r30, 0x39(r1)
    li r28, 0x40
    lbz r31, 0x1(r29)
    addi r4, r1, 0x38
    lbz r12, 0x2(r29)
    li r3, 0xe0
    lbz r11, 0x3(r29)
    li r5, 0x1b
    lbz r10, 0x4(r29)
    lbz r9, 0x5(r29)
    lbz r8, 0x6(r29)
    lbz r7, 0x7(r29)
    lbz r30, 0x8(r29)
    stb r31, 0x3a(r1)
    lbz r31, 0x9(r29)
    stb r12, 0x3b(r1)
    lbz r12, 0xa(r29)
    stb r11, 0x3c(r1)
    lbz r11, 0xb(r29)
    stb r10, 0x3d(r1)
    lbz r10, 0xc(r29)
    stb r9, 0x3e(r1)
    lbz r9, 0xd(r29)
    stb r8, 0x3f(r1)
    lbz r8, 0xe(r29)
    stb r7, 0x40(r1)
    lbz r7, 0xf(r29)
    stb r30, 0x41(r1)
    lbz r30, 0x10(r29)
    stb r31, 0x42(r1)
    lbz r31, 0x11(r29)
    stb r12, 0x43(r1)
    lbz r12, 0x12(r29)
    stb r11, 0x44(r1)
    lbz r11, 0x13(r29)
    stb r10, 0x45(r1)
    lbz r10, 0x14(r29)
    stb r9, 0x46(r1)
    lbz r9, 0x15(r29)
    stb r8, 0x47(r1)
    lbz r8, 0x16(r29)
    stb r7, 0x48(r1)
    lbz r7, 0x17(r29)
    lbz r6, 0x18(r29)
    lbz r0, 0x19(r29)
    stb r28, 0x38(r1)
    stb r30, 0x49(r1)
    stb r31, 0x4a(r1)
    stb r12, 0x4b(r1)
    stb r11, 0x4c(r1)
    stb r10, 0x4d(r1)
    stb r9, 0x4e(r1)
    stb r8, 0x4f(r1)
    stb r7, 0x50(r1)
    stb r6, 0x51(r1)
    stb r0, 0x52(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lwz r0, lbl_8087FEA0
    cmpwi r0, 0x0
    beq lbl_fn_80607290_30f4
    lwz r0, lbl_8087FE98
    li r3, 0x0
    stw r3, lbl_8087FEA0
    ori r0, r0, 0x40
    stw r0, lbl_8087FE98
lbl_fn_80607290_30f4:
    lwz r0, lbl_8087FEAC
    cmpwi r0, 0x3
    bne lbl_fn_80607290_3134
    lwz r0, lbl_8087FEA0
    li r3, 0xa
    stb r3, 0xc(r1)
    addi r4, r1, 0xc
    slwi r0, r0, 1
    li r3, 0xe0
    ori r0, r0, 0x1
    stb r0, 0xd(r1)
    li r5, 0x2
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    b lbl_fn_80607290_315c
lbl_fn_80607290_3134:
    li r3, 0xa
    li r0, 0x0
    stb r3, 0xc(r1)
    addi r4, r1, 0xc
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0xd(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
lbl_fn_80607290_315c:
    li r3, 0x3
    li r0, 0x1
    stb r3, 0x8(r1)
    addi r4, r1, 0x8
    li r3, 0xe0
    li r5, 0x2
    stb r0, 0x9(r1)
    bl fn_80605AB0
    li r3, 0x2
    bl fn_806056D0
    lis r3, lbl_807ABF68@ha
    addi r3, r3, lbl_807ABF68@l
    addi r3, r3, 0x154
    bl fn_80606F90
    li r0, 0x0
    stw r0, lbl_8087FE9C
    lwz r31, 0x6c(r1)
    lwz r30, 0x68(r1)
    lwz r29, 0x64(r1)
    lwz r28, 0x60(r1)
    lwz r0, 0x74(r1)
    mtlr r0
    addi r1, r1, 0x70
    blr
}
