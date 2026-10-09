#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void LCDisable(void);
extern void _restgpr_23(void);
extern void _restgpr_27(void);
extern void _savegpr_23(void);
extern void _savegpr_27(void);
extern void fn_8006144C(void);
extern void fn_8007192C(void);
extern void fn_80071AFC(void);
extern void fn_80071D80(void);
extern void fn_80075DEC(void);
extern void fn_8007A100(void);
extern void fn_8007A4CC(void);
extern void fn_800827E0(void);
extern void fn_800839EC(void);
extern void fn_80083F50(void);
extern void fn_80084110(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084A78(void);
extern void fn_80084C24(void);
extern void fn_8009DE60(void);
extern void fn_800BC468(void);
extern void fn_800BC618(void);
extern void fn_800BF0EC(void);
extern void fn_800C5644(void);
extern void fn_800D5B58(void);
extern void fn_800D5F68(void);
extern void fn_800DCA6C(void);
extern void fn_805ED390(void);
extern void fn_805F89F0(void);
extern void fn_80615E00(void);
extern void fn_80615FF0(void);
extern void fn_80616250(void);
extern void fn_806952C4(void);
extern void fn_80695D84(void);
extern char* strcpy(char* dest, const char* src);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_807336B0[];
extern u8 lbl_80775B30[];
extern u8 lbl_80775B60[];
extern u8 lbl_80775B98[];
extern u8 lbl_80775BC8[];

/* Small data declarations */
extern u32 lbl_8087D728;
extern u32 lbl_8087D72C;
extern u32 lbl_8087D910;
extern u32 lbl_8087D914;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEE0;
extern u32 lbl_8087EEF8;
extern u32 lbl_8087EF8C;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087EFB8;
extern u32 lbl_80881088;
extern u32 lbl_80881094;
extern u32 lbl_80881098;
extern u32 lbl_808810B0;
extern u32 lbl_808810B4;
extern u32 lbl_808810B8;
extern u32 lbl_808810BC;
extern u32 lbl_808810C0;
extern u32 lbl_808810C4;
extern u32 lbl_808810C8;

/* Function declarations */
void fn_800BD94C(void);
void fn_800BD9C0(void);
void fn_800BDB40(void);
void fn_800BDB58(void);
void fn_800BDBC8(void);
void fn_800BECF0(void);
void fn_800BEDA8(void);

asm void fn_800BD94C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r6, r4
    stw r0, 0x14(r1)
    li r0, 0x0
    stw r31, 0xc(r1)
    mr r31, r5
    stw r30, 0x8(r1)
    mr r30, r3
    stw r0, 0x0(r3)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x0
    beq lbl_fn_800BD94C_00000054
    stw r0, 0x0(r3)
    addi r3, r4, 0x4
    addi r4, r30, 0x4
    li r5, 0x0
    lwz r6, 0x0(r6)
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_800BD94C_00000054:
    stw r31, 0x14(r30)
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800BD9C0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_27
    mr r27, r3
    mr r28, r4
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x20
    bl fn_80083F50
    stw r28, 0xf4(r27)
    mr r3, r28
    li r4, 0x6
    la r5, lbl_8087D72C
    la r6, lbl_8087D728
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xf0(r27)
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_80084110
    bl fn_800C5644
    bl fn_8007A100
    lwz r3, lbl_8087EEE0
    li r5, 0x13
    li r6, 0x0
    li r7, 0x0
    lwz r29, 0x40(r3)
    lwz r30, 0x3c(r3)
    clrlwi r4, r29, 16
    clrlwi r3, r30, 16
    bl fn_80615E00
    mr r28, r3
    bl fn_800827E0
    lis r31, lbl_807336B0@ha
    mr r4, r28
    addi r7, r31, lbl_807336B0@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x6
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    stw r3, 0x79c(r27)
    addi r6, r31, lbl_807336B0@l
    addi r8, r6, 0xe8
    mr r4, r30
    mr r5, r29
    addi r3, r27, 0x74c
    li r6, 0x6
    li r7, 0x1
    bl fn_800D5B58
    lfs f1, lbl_80881088
    addi r3, r27, 0x74c
    li r4, 0x1
    li r5, 0x1
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    mr r3, r27
    addi r4, r27, 0x530
    bl fn_800BC468
    lwz r5, lbl_8087EFA8
    mr r3, r27
    addi r4, r27, 0x50c
    lwz r5, 0x154(r5)
    bl fn_800BC618
    lwz r4, 0x79c(r27)
    addi r3, r27, 0x77c
    clrlwi r5, r30, 16
    clrlwi r6, r29, 16
    li r7, 0x3
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_80615FF0
    lfs f1, lbl_80881088
    addi r3, r27, 0x77c
    li r4, 0x0
    li r5, 0x0
    fmr f2, f1
    li r6, 0x0
    fmr f3, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_80616250
    addi r11, r1, 0x30
    bl _restgpr_27
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_800BDB40(void)
{
    nofralloc
    cmpwi r4, 0x0
    stw r4, 0x2fc(r3)
    bnelr
    lwz r0, lbl_8087EFB8
    stw r0, 0x2fc(r3)
    blr
}

asm void fn_800BDB58(void)
{
    nofralloc
    slwi r7, r5, 2
    lwzx r0, r3, r7
    cmpwi r0, 0x0
    beqlr
    lwz r6, 0xf8(r3)
    lwz r0, 0xf4(r3)
    addi r5, r6, 0x10
    cmpw r5, r0
    ble lbl_fn_800BDB58_00000238
    li r5, 0x0
    b lbl_fn_800BDB58_00000244
lbl_fn_800BDB58_00000238:
    lwz r0, 0xf0(r3)
    stw r5, 0xf8(r3)
    add r5, r0, r6
lbl_fn_800BDB58_00000244:
    cmpwi r5, 0x0
    beqlr
    stw r4, 0x0(r5)
    li r0, 0x0
    add r4, r3, r7
    stfs f1, 0x4(r5)
    stw r0, 0x8(r5)
    lwz r0, 0x50(r4)
    stw r0, 0x8(r5)
    stw r5, 0x50(r4)
    lwz r3, 0xa0(r4)
    addi r0, r3, 0x1
    stw r0, 0xa0(r4)
    blr
}

asm void fn_800BDBC8(void)
{
    nofralloc
    stwu r1, -0x270(r1)
    mflr r0
    stw r0, 0x274(r1)
    addi r11, r1, 0x230
    stfd f31, 0x260(r1)
    psq_st f31, 0x268(r1), 0, 0
    stfd f30, 0x250(r1)
    psq_st f30, 0x258(r1), 0, 0
    stfd f29, 0x240(r1)
    psq_st f29, 0x248(r1), 0, 0
    stfd f28, 0x230(r1)
    psq_st f28, 0x238(r1), 0, 0
    bl _savegpr_23
    li r30, 0x0
    mr r23, r3
    lwz r26, lbl_8087EEE0
    li r25, 0x0
    stw r30, 0x78(r1)
    mr r27, r23
    li r31, 0x8
    stw r30, 0x7c(r1)
    stw r30, 0x80(r1)
lbl_fn_800BDBC8_000002D4:
    lwz r29, 0xa0(r27)
    lwz r0, 0x7c(r1)
    cmplw r0, r29
    bgt lbl_fn_800BDBC8_000003FC
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087D914
    la r6, lbl_8087D910
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x80(r1)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_000003F4
    lwz r0, 0x78(r1)
    mr r7, r29
    cmplw r29, r0
    ble lbl_fn_800BDBC8_00000320
    mr r7, r0
lbl_fn_800BDBC8_00000320:
    cmpwi r7, 0x0
    li r8, 0x0
    beq lbl_fn_800BDBC8_000003EC
    cmplwi r7, 0x8
    subi r5, r7, 0x8
    ble lbl_fn_800BDBC8_000003B4
    addi r0, r5, 0x7
    lwz r6, 0x80(r1)
    srwi r0, r0, 3
    mr r10, r28
    mr r4, r6
    li r9, 0x0
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_800BDBC8_000003B4
lbl_fn_800BDBC8_0000035C:
    lwz r0, 0x0(r4)
    add r5, r6, r9
    stw r0, 0x0(r10)
    addi r9, r9, 0x20
    addi r4, r4, 0x20
    addi r8, r8, 0x8
    lwz r0, 0x4(r5)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r10)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r10)
    lwz r0, 0x1c(r5)
    stw r0, 0x1c(r10)
    addi r10, r10, 0x20
    bdnz lbl_fn_800BDBC8_0000035C
lbl_fn_800BDBC8_000003B4:
    lwz r4, 0x80(r1)
    slwi r6, r8, 2
    subf r0, r8, r7
    add r5, r3, r6
    add r3, r4, r6
    mtctr r0
    cmplw r8, r7
    bge lbl_fn_800BDBC8_000003EC
lbl_fn_800BDBC8_000003D4:
    lwz r0, 0x0(r3)
    addi r8, r8, 0x1
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    addi r3, r3, 0x4
    bdnz lbl_fn_800BDBC8_000003D4
lbl_fn_800BDBC8_000003EC:
    lwz r3, 0x80(r1)
    bl fn_80084C24
lbl_fn_800BDBC8_000003F4:
    stw r28, 0x80(r1)
    stw r29, 0x7c(r1)
lbl_fn_800BDBC8_000003FC:
    lwz r24, 0x50(r27)
    cmpwi r24, 0x0
    beq lbl_fn_800BDBC8_00000724
    stw r30, 0x78(r1)
    b lbl_fn_800BDBC8_0000069C
lbl_fn_800BDBC8_00000410:
    lwz r0, 0x80(r1)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000428
    lwz r0, 0x7c(r1)
    cmpwi r0, 0x0
    bne lbl_fn_800BDBC8_00000550
lbl_fn_800BDBC8_00000428:
    lwz r0, 0x7c(r1)
    cmplwi r0, 0x8
    bgt lbl_fn_800BDBC8_00000680
    li r3, 0x20
    li r4, 0x0
    la r5, lbl_8087D914
    la r6, lbl_8087D910
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x80(r1)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000544
    lwz r0, 0x78(r1)
    li r7, 0x8
    cmplwi r0, 0x8
    bge lbl_fn_800BDBC8_00000470
    mr r7, r0
lbl_fn_800BDBC8_00000470:
    cmpwi r7, 0x0
    li r8, 0x0
    beq lbl_fn_800BDBC8_0000053C
    cmplwi r7, 0x8
    subi r5, r7, 0x8
    ble lbl_fn_800BDBC8_00000504
    addi r0, r5, 0x7
    lwz r6, 0x80(r1)
    srwi r0, r0, 3
    mr r10, r28
    mr r4, r6
    li r9, 0x0
    mtctr r0
    cmplwi r5, 0x0
    ble lbl_fn_800BDBC8_00000504
lbl_fn_800BDBC8_000004AC:
    lwz r0, 0x0(r4)
    add r5, r6, r9
    stw r0, 0x0(r10)
    addi r9, r9, 0x20
    addi r4, r4, 0x20
    addi r8, r8, 0x8
    lwz r0, 0x4(r5)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r5)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r5)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r5)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r5)
    stw r0, 0x14(r10)
    lwz r0, 0x18(r5)
    stw r0, 0x18(r10)
    lwz r0, 0x1c(r5)
    stw r0, 0x1c(r10)
    addi r10, r10, 0x20
    bdnz lbl_fn_800BDBC8_000004AC
lbl_fn_800BDBC8_00000504:
    lwz r4, 0x80(r1)
    slwi r6, r8, 2
    subf r0, r8, r7
    add r5, r3, r6
    add r3, r4, r6
    mtctr r0
    cmplw r8, r7
    bge lbl_fn_800BDBC8_0000053C
lbl_fn_800BDBC8_00000524:
    lwz r0, 0x0(r3)
    addi r8, r8, 0x1
    stw r0, 0x0(r5)
    addi r5, r5, 0x4
    addi r3, r3, 0x4
    bdnz lbl_fn_800BDBC8_00000524
lbl_fn_800BDBC8_0000053C:
    lwz r3, 0x80(r1)
    bl fn_80084C24
lbl_fn_800BDBC8_00000544:
    stw r28, 0x80(r1)
    stw r31, 0x7c(r1)
    b lbl_fn_800BDBC8_00000680
lbl_fn_800BDBC8_00000550:
    lwz r3, 0x78(r1)
    cmplw r3, r0
    blt lbl_fn_800BDBC8_00000680
    slwi r29, r3, 1
    cmplw r0, r29
    bgt lbl_fn_800BDBC8_00000680
    slwi r3, r29, 2
    li r4, 0x0
    la r5, lbl_8087D914
    la r6, lbl_8087D910
    li r7, 0x0
    bl fn_800846FC
    lwz r0, 0x80(r1)
    mr r28, r3
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000678
    lwz r0, 0x78(r1)
    mr r8, r29
    cmplw r29, r0
    ble lbl_fn_800BDBC8_000005A4
    mr r8, r0
lbl_fn_800BDBC8_000005A4:
    cmpwi r8, 0x0
    li r4, 0x0
    beq lbl_fn_800BDBC8_00000670
    cmplwi r8, 0x8
    subi r6, r8, 0x8
    ble lbl_fn_800BDBC8_00000638
    addi r0, r6, 0x7
    lwz r7, 0x80(r1)
    srwi r0, r0, 3
    mr r10, r28
    mr r5, r7
    li r9, 0x0
    mtctr r0
    cmplwi r6, 0x0
    ble lbl_fn_800BDBC8_00000638
lbl_fn_800BDBC8_000005E0:
    lwz r0, 0x0(r5)
    add r6, r7, r9
    stw r0, 0x0(r10)
    addi r9, r9, 0x20
    addi r5, r5, 0x20
    addi r4, r4, 0x8
    lwz r0, 0x4(r6)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r10)
    lwz r0, 0x18(r6)
    stw r0, 0x18(r10)
    lwz r0, 0x1c(r6)
    stw r0, 0x1c(r10)
    addi r10, r10, 0x20
    bdnz lbl_fn_800BDBC8_000005E0
lbl_fn_800BDBC8_00000638:
    lwz r5, 0x80(r1)
    slwi r7, r4, 2
    subf r0, r4, r8
    add r6, r3, r7
    add r3, r5, r7
    mtctr r0
    cmplw r4, r8
    bge lbl_fn_800BDBC8_00000670
lbl_fn_800BDBC8_00000658:
    lwz r0, 0x0(r3)
    addi r4, r4, 0x1
    stw r0, 0x0(r6)
    addi r6, r6, 0x4
    addi r3, r3, 0x4
    bdnz lbl_fn_800BDBC8_00000658
lbl_fn_800BDBC8_00000670:
    lwz r3, 0x80(r1)
    bl fn_80084C24
lbl_fn_800BDBC8_00000678:
    stw r28, 0x80(r1)
    stw r29, 0x7c(r1)
lbl_fn_800BDBC8_00000680:
    lwz r4, 0x78(r1)
    lwz r5, 0x80(r1)
    slwi r3, r4, 2
    addi r0, r4, 0x1
    stwx r24, r5, r3
    stw r0, 0x78(r1)
    lwz r24, 0x8(r24)
lbl_fn_800BDBC8_0000069C:
    cmpwi r24, 0x0
    bne lbl_fn_800BDBC8_00000410
    lwz r0, 0x78(r1)
    addi r5, r1, 0x18
    lwz r3, 0x80(r1)
    slwi r0, r0, 2
    stb r30, 0x18(r1)
    add r4, r3, r0
    bl fn_800BF0EC
    lwz r4, 0x78(r1)
    li r7, 0x0
    lwz r0, 0x78(r1)
    li r3, 0x0
    subi r5, r4, 0x1
    lwz r6, 0x80(r1)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_800BDBC8_00000718
lbl_fn_800BDBC8_000006E4:
    cmplw r7, r5
    bne lbl_fn_800BDBC8_000006F8
    lwzx r4, r6, r3
    stw r30, 0x8(r4)
    b lbl_fn_800BDBC8_0000070C
lbl_fn_800BDBC8_000006F8:
    addi r0, r7, 0x1
    lwzx r4, r6, r3
    slwi r0, r0, 2
    lwzx r0, r6, r0
    stw r0, 0x8(r4)
lbl_fn_800BDBC8_0000070C:
    addi r7, r7, 0x1
    addi r3, r3, 0x4
    bdnz lbl_fn_800BDBC8_000006E4
lbl_fn_800BDBC8_00000718:
    lwz r3, 0x80(r1)
    lwz r0, 0x0(r3)
    stw r0, 0x50(r27)
lbl_fn_800BDBC8_00000724:
    addi r25, r25, 0x1
    addi r27, r27, 0x4
    cmpwi r25, 0x14
    blt lbl_fn_800BDBC8_000002D4
    lwz r3, 0x80(r1)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00000744
    bl fn_80084C24
lbl_fn_800BDBC8_00000744:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x1c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_000007D4
    lwz r0, 0x44(r26)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_000007D4
    lfs f0, lbl_808810B8
    li r0, 0x13
    lfs f8, lbl_808810B0
    lis r4, 0xffff
    lfs f29, lbl_80881088
    fsubs f7, f8, f0
    lfs f0, lbl_80881094
    lwz r3, lbl_8087EEB0
    fmr f2, f29
    lfs f30, lbl_808810B4
    fmr f5, f29
    fnmsubs f1, f0, f7, f8
    stw r0, 0xa0(r3)
    fmr f4, f30
    fmuls f28, f0, f7
    lwz r3, lbl_8087EEB0
    fmr f3, f1
    bl fn_8006144C
    fmr f1, f28
    lwz r3, lbl_8087EEB0
    fmr f2, f30
    lfs f5, lbl_80881088
    fmr f3, f28
    lis r4, 0xffff
    fmr f4, f29
    bl fn_8006144C
    lwz r3, lbl_8087EEB0
    li r0, 0x12
    stw r0, 0xa0(r3)
lbl_fn_800BDBC8_000007D4:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x18(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_0000095C
    lfs f11, lbl_808810BC
    li r25, 0x13
    lfs f0, lbl_80881098
    li r4, -0x100
    lfs f9, lbl_808810B0
    fsubs f7, f0, f11
    lfs f10, lbl_808810C0
    lfs f8, lbl_808810B4
    fmuls f28, f9, f11
    fsubs f0, f0, f10
    lwz r3, lbl_8087EEB0
    fmuls f29, f8, f10
    stw r25, 0xa0(r3)
    fmuls f30, f9, f7
    lfs f5, lbl_80881088
    fmr f1, f28
    lwz r3, lbl_8087EEB0
    fmr f2, f29
    fmr f3, f30
    fmr f4, f29
    fmuls f31, f8, f0
    bl fn_8006144C
    fmr f1, f30
    lwz r3, lbl_8087EEB0
    fmr f2, f29
    lfs f5, lbl_80881088
    fmr f3, f30
    li r4, -0x100
    fmr f4, f31
    bl fn_8006144C
    fmr f1, f30
    lwz r3, lbl_8087EEB0
    fmr f2, f31
    lfs f5, lbl_80881088
    fmr f3, f28
    li r4, -0x100
    fmr f4, f31
    bl fn_8006144C
    fmr f1, f28
    lwz r3, lbl_8087EEB0
    fmr f2, f31
    lfs f5, lbl_80881088
    fmr f3, f28
    li r4, -0x100
    fmr f4, f29
    bl fn_8006144C
    lfs f9, lbl_808810C4
    li r24, 0x12
    lfs f0, lbl_80881098
    li r4, -0x1
    lwz r3, lbl_8087EEB0
    lfs f8, lbl_808810B0
    fsubs f0, f0, f9
    lfs f7, lbl_808810B4
    stw r24, 0xa0(r3)
    fmuls f31, f8, f9
    fmuls f30, f7, f9
    lfs f5, lbl_80881088
    fmuls f29, f8, f0
    lwz r3, lbl_8087EEB0
    fmr f1, f31
    stw r25, 0xa0(r3)
    fmr f2, f30
    fmr f3, f29
    lwz r3, lbl_8087EEB0
    fmr f4, f30
    fmuls f28, f7, f0
    bl fn_8006144C
    fmr f1, f29
    lwz r3, lbl_8087EEB0
    fmr f2, f30
    lfs f5, lbl_80881088
    fmr f3, f29
    li r4, -0x1
    fmr f4, f28
    bl fn_8006144C
    fmr f1, f29
    lwz r3, lbl_8087EEB0
    fmr f2, f28
    lfs f5, lbl_80881088
    fmr f3, f31
    li r4, -0x1
    fmr f4, f28
    bl fn_8006144C
    fmr f1, f31
    lwz r3, lbl_8087EEB0
    fmr f2, f28
    lfs f5, lbl_80881088
    fmr f3, f31
    li r4, -0x1
    fmr f4, f30
    bl fn_8006144C
    lwz r3, lbl_8087EEB0
    stw r24, 0xa0(r3)
lbl_fn_800BDBC8_0000095C:
    lwz r4, lbl_8087EF8C
    li r3, 0x0
    lfs f0, lbl_80881098
    stw r3, 0x54(r4)
    lwz r28, lbl_8087EFA8
    lfs f8, 0x3c(r28)
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_800BDBC8_00000988
    li r27, 0xff
    b lbl_fn_800BDBC8_000009B0
lbl_fn_800BDBC8_00000988:
    lfs f0, lbl_80881088
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_800BDBC8_0000099C
    b lbl_fn_800BDBC8_000009AC
lbl_fn_800BDBC8_0000099C:
    lfs f7, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_800BDBC8_000009AC:
    mr r27, r3
lbl_fn_800BDBC8_000009B0:
    lfs f8, 0x40(r28)
    lfs f0, lbl_80881098
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_800BDBC8_000009CC
    li r25, 0xff
    b lbl_fn_800BDBC8_000009F8
lbl_fn_800BDBC8_000009CC:
    lfs f0, lbl_80881088
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_800BDBC8_000009E4
    li r3, 0x0
    b lbl_fn_800BDBC8_000009F4
lbl_fn_800BDBC8_000009E4:
    lfs f7, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_800BDBC8_000009F4:
    mr r25, r3
lbl_fn_800BDBC8_000009F8:
    lfs f8, 0x44(r28)
    lfs f0, lbl_80881098
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_800BDBC8_00000A14
    li r24, 0xff
    b lbl_fn_800BDBC8_00000A40
lbl_fn_800BDBC8_00000A14:
    lfs f0, lbl_80881088
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_800BDBC8_00000A2C
    li r3, 0x0
    b lbl_fn_800BDBC8_00000A3C
lbl_fn_800BDBC8_00000A2C:
    lfs f7, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_800BDBC8_00000A3C:
    mr r24, r3
lbl_fn_800BDBC8_00000A40:
    lfs f8, 0x48(r28)
    lfs f0, lbl_80881098
    fcmpo cr0, f8, f0
    cror eq, gt, eq
    bne lbl_fn_800BDBC8_00000A5C
    li r3, 0xff
    b lbl_fn_800BDBC8_00000A84
lbl_fn_800BDBC8_00000A5C:
    lfs f0, lbl_80881088
    fcmpo cr0, f8, f0
    cror eq, lt, eq
    bne lbl_fn_800BDBC8_00000A74
    li r3, 0x0
    b lbl_fn_800BDBC8_00000A84
lbl_fn_800BDBC8_00000A74:
    lfs f7, lbl_808810C8
    lfs f0, lbl_80881094
    fmadds f1, f7, f8, f0
    bl fn_80695D84
lbl_fn_800BDBC8_00000A84:
    slwi r5, r25, 8
    slwi r4, r3, 24
    slwi r0, r27, 16
    mr r3, r26
    or r5, r24, r5
    or r0, r4, r0
    or r0, r5, r0
    stw r0, 0x48(r26)
    bl fn_8007192C
    li r0, 0x0
    stw r0, 0x2fc(r23)
    lwz r0, lbl_8087EFB8
    stw r0, 0x2fc(r23)
    lwz r0, 0x8b0(r23)
    cntlzw r0, r0
    srwi r3, r0, 5
    cntlzw r0, r3
    srwi. r0, r0, 5
    beq lbl_fn_800BDBC8_00000BC0
    cmpwi r3, 0x0
    lwz r25, 0x8c4(r23)
    beq lbl_fn_800BDBC8_00000BA8
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x6c(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x14(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x14
    stw r3, 0x70(r1)
    mr r24, r3
    stw r3, 0x38(r1)
    li r3, 0x10
    stw r0, 0x3c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00000B4C
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_800BDBC8_00000B4C:
    li r0, 0x0
    stw r3, 0x74(r1)
    stw r0, 0x38(r1)
    b lbl_fn_800BDBC8_00000B60
    bl fn_80084C24
lbl_fn_800BDBC8_00000B60:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x70(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x6c
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x6c(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x6c
    beq lbl_fn_800BDBC8_00000BA8
    addic. r3, r3, 0x4
    beq lbl_fn_800BDBC8_00000BA8
    beq lbl_fn_800BDBC8_00000BA8
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00000BA8
    bl fn_806952C4
lbl_fn_800BDBC8_00000BA8:
    lwz r5, 0x8b0(r23)
    mr r4, r25
    addi r3, r23, 0x8b4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800BDBC8_00000BC0:
    lfs f0, lbl_80881088
    addi r3, r1, 0x40
    stfs f0, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0xfc(r23), 0, 0
    lwz r3, lbl_8087EEE0
    bl fn_80075DEC
    lwz r3, lbl_8087EFA8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000BF8
    lwz r3, lbl_8087EEF8
    bl fn_8007A4CC
lbl_fn_800BDBC8_00000BF8:
    mr r24, r23
    li r25, 0x0
lbl_fn_800BDBC8_00000C00:
    cmpwi r25, 0x3
    bne lbl_fn_800BDBC8_00000C18
    lwz r3, lbl_8087EFA8
    lwz r0, 0x104(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000C60
lbl_fn_800BDBC8_00000C18:
    cmpwi r25, 0x4
    bne lbl_fn_800BDBC8_00000C30
    addis r3, r23, 0x5
    lwz r0, 0x4960(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000C60
lbl_fn_800BDBC8_00000C30:
    stw r25, 0x2f8(r23)
    lwz r3, 0x0(r24)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00000C60
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000C60
    lwz r12, 0x0(r3)
    lwz r4, 0x50(r24)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
lbl_fn_800BDBC8_00000C60:
    addi r25, r25, 0x1
    addi r24, r24, 0x4
    cmpwi r25, 0x14
    blt lbl_fn_800BDBC8_00000C00
    addi r3, r1, 0xe8
    li r4, 0x1
    li r5, -0x1
    li r6, -0x1
    li r7, 0x0
    bl fn_800D5F68
    addi r3, r1, 0xe8
    lwz r0, 0x554(r23)
    psq_l f1, 0x0(r3), 0, 0
    addi r4, r23, 0x800
    psq_l f2, 0x8(r3), 0, 0
    cmpwi r0, 0x0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    beq lbl_fn_800BDBC8_00000DA0
    psq_l f1, 0x1d4(r23), 0, 0
    addi r4, r1, 0x88
    psq_l f2, 0x1dc(r23), 0, 0
    addi r3, r1, 0xb8
    psq_l f3, 0x1e4(r23), 0, 0
    addi r5, r1, 0x148
    psq_l f4, 0x1ec(r23), 0, 0
    psq_l f5, 0x1f4(r23), 0, 0
    psq_l f6, 0x1fc(r23), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lfs f0, lbl_80881088
    psq_st f2, 0x8(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    stfs f0, 0x94(r1)
    stfs f0, 0xa4(r1)
    stfs f0, 0xb4(r1)
    psq_l f1, 0x5b0(r23), 0, 0
    psq_l f2, 0x5b8(r23), 0, 0
    psq_l f3, 0x5c0(r23), 0, 0
    psq_l f4, 0x5c8(r23), 0, 0
    psq_l f5, 0x5d0(r23), 0, 0
    psq_l f6, 0x5d8(r23), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    stfs f0, 0xc4(r1)
    stfs f0, 0xd4(r1)
    stfs f0, 0xe4(r1)
    bl fn_805F89F0
    addi r3, r23, 0x800
    addi r4, r1, 0x148
    addi r5, r1, 0x118
    bl fn_805F89F0
    addi r3, r1, 0x118
    addi r4, r23, 0x800
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
lbl_fn_800BDBC8_00000DA0:
    addi r3, r1, 0x178
    li r4, 0x2
    li r5, -0x1
    li r6, -0x1
    li r7, 0x0
    bl fn_800D5F68
    addi r8, r1, 0x178
    addi r3, r1, 0x1a8
    psq_l f1, 0x0(r8), 0, 0
    li r4, 0x3
    psq_l f2, 0x8(r8), 0, 0
    li r5, -0x1
    psq_l f3, 0x10(r8), 0, 0
    li r6, -0x1
    psq_l f4, 0x18(r8), 0, 0
    li r7, 0x0
    psq_l f5, 0x20(r8), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_st f6, 0x7c8(r23), 0, 0
    psq_st f1, 0x7a0(r23), 0, 0
    psq_st f2, 0x7a8(r23), 0, 0
    psq_st f3, 0x7b0(r23), 0, 0
    psq_st f4, 0x7b8(r23), 0, 0
    psq_st f5, 0x7c0(r23), 0, 0
    bl fn_800D5F68
    addi r8, r1, 0x1a8
    addi r3, r1, 0x1d8
    psq_l f1, 0x0(r8), 0, 0
    li r4, 0x4
    psq_l f2, 0x8(r8), 0, 0
    li r5, -0x1
    psq_l f3, 0x10(r8), 0, 0
    li r6, -0x1
    psq_l f4, 0x18(r8), 0, 0
    li r7, 0x0
    psq_l f5, 0x20(r8), 0, 0
    psq_l f6, 0x28(r8), 0, 0
    psq_st f6, 0x7f8(r23), 0, 0
    psq_st f1, 0x7d0(r23), 0, 0
    psq_st f2, 0x7d8(r23), 0, 0
    psq_st f3, 0x7e0(r23), 0, 0
    psq_st f4, 0x7e8(r23), 0, 0
    psq_st f5, 0x7f0(r23), 0, 0
    bl fn_800D5F68
    addi r4, r1, 0x1d8
    addi r3, r23, 0x830
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    lfs f7, lbl_80881088
    lfs f0, lbl_80881098
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    stfs f7, 0x88c(r23)
    stfs f7, 0x884(r23)
    stfs f7, 0x880(r23)
    stfs f7, 0x87c(r23)
    stfs f7, 0x878(r23)
    stfs f7, 0x870(r23)
    stfs f7, 0x86c(r23)
    stfs f7, 0x868(r23)
    stfs f7, 0x864(r23)
    stfs f0, 0x888(r23)
    stfs f0, 0x874(r23)
    stfs f0, 0x860(r23)
    bl fn_805ED390
    mr r28, r23
    li r24, 0x0
    li r31, 0x0
lbl_fn_800BDBC8_00000ED0:
    cmpwi r24, 0x3
    stw r31, 0x890(r23)
    bne lbl_fn_800BDBC8_00000EEC
    lwz r3, lbl_8087EFA8
    lwz r0, 0x104(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00001030
lbl_fn_800BDBC8_00000EEC:
    cmpwi r24, 0x4
    bne lbl_fn_800BDBC8_00000F04
    addis r3, r23, 0x5
    lwz r0, 0x4960(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00001030
lbl_fn_800BDBC8_00000F04:
    stw r24, 0x2f8(r23)
    lwz r3, 0x0(r28)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00000FF8
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000FF8
    lwz r0, 0x50(r28)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000FF8
    addis r3, r23, 0x1
    stw r31, 0x958(r23)
    stw r31, -0x76a4(r3)
    lwz r3, 0x0(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x1c(r12)
    mtctr r12
    bctrl
    lwz r3, 0x0(r28)
    lwz r4, 0x50(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087EFA8
    lwz r0, 0x39c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000F90
    addis r3, r23, 0x1
    lwz r0, -0x76a4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_00000F90
    lwz r4, 0x958(r23)
    addi r3, r23, 0x95c
    bl fn_800BECF0
lbl_fn_800BDBC8_00000F90:
    mr r27, r23
    addis r25, r23, 0x1
    li r29, 0x0
    b lbl_fn_800BDBC8_00000FC0
lbl_fn_800BDBC8_00000FA0:
    lwz r0, 0x960(r27)
    lfs f1, lbl_80881088
    mulli r0, r0, 0x4c
    add r3, r25, r0
    subi r3, r3, 0x76a0
    bl fn_8009DE60
    addi r27, r27, 0x8
    addi r29, r29, 0x1
lbl_fn_800BDBC8_00000FC0:
    lwz r0, -0x76a4(r25)
    cmplw r29, r0
    blt lbl_fn_800BDBC8_00000FA0
    lwz r3, 0x0(r28)
    lwz r4, 0x50(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    lwz r3, 0x0(r28)
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
lbl_fn_800BDBC8_00000FF8:
    mr r25, r23
    li r27, 0x0
    b lbl_fn_800BDBC8_00001024
lbl_fn_800BDBC8_00001004:
    lwz r0, 0x918(r25)
    cmpw r24, r0
    bne lbl_fn_800BDBC8_0000101C
    lwz r4, 0x914(r25)
    mr r3, r26
    bl fn_80071D80
lbl_fn_800BDBC8_0000101C:
    addi r25, r25, 0x8
    addi r27, r27, 0x1
lbl_fn_800BDBC8_00001024:
    lwz r0, 0x910(r23)
    cmplw r27, r0
    blt lbl_fn_800BDBC8_00001004
lbl_fn_800BDBC8_00001030:
    addi r24, r24, 0x1
    addi r28, r28, 0x4
    cmpwi r24, 0x14
    blt lbl_fn_800BDBC8_00000ED0
    bl LCDisable
    lwz r0, 0x8c8(r23)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_0000113C
    lwz r25, 0x8dc(r23)
    bne lbl_fn_800BDBC8_00001124
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x60(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x10(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x10
    stw r3, 0x64(r1)
    mr r24, r3
    stw r3, 0x30(r1)
    li r3, 0x10
    stw r0, 0x34(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_000010C8
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_800BDBC8_000010C8:
    li r0, 0x0
    stw r3, 0x68(r1)
    stw r0, 0x30(r1)
    b lbl_fn_800BDBC8_000010DC
    bl fn_80084C24
lbl_fn_800BDBC8_000010DC:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x64(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x60
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x60(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x60
    beq lbl_fn_800BDBC8_00001124
    addic. r3, r3, 0x4
    beq lbl_fn_800BDBC8_00001124
    beq lbl_fn_800BDBC8_00001124
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00001124
    bl fn_806952C4
lbl_fn_800BDBC8_00001124:
    lwz r5, 0x8c8(r23)
    mr r4, r25
    addi r3, r23, 0x8cc
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800BDBC8_0000113C:
    addi r3, r23, 0x50
    li r4, 0x0
    li r5, 0x50
    bl memset
    addi r3, r23, 0xa0
    li r4, 0x0
    li r5, 0x50
    bl memset
    li r5, 0x0
    stw r5, 0xf8(r23)
    addis r3, r23, 0x5
    lwz r4, lbl_8087EEB0
    stw r5, 0xc(r4)
    lwz r0, 0x8e0(r23)
    stw r5, 0x910(r23)
    cmpwi r0, 0x0
    stw r5, 0x4960(r3)
    beq lbl_fn_800BDBC8_0000126C
    lwz r25, 0x8f4(r23)
    bne lbl_fn_800BDBC8_00001254
    lis r4, lbl_80775B60@ha
    lis r3, lbl_80775BC8@ha
    addi r4, r4, lbl_80775B60@l
    stw r4, 0x54(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r5, 0xc(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0xc
    stw r3, 0x58(r1)
    mr r24, r3
    stw r3, 0x28(r1)
    li r3, 0x10
    stw r0, 0x2c(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_000011F8
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_800BDBC8_000011F8:
    li r0, 0x0
    stw r3, 0x5c(r1)
    stw r0, 0x28(r1)
    b lbl_fn_800BDBC8_0000120C
    bl fn_80084C24
lbl_fn_800BDBC8_0000120C:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x58(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x54
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x54(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x54
    beq lbl_fn_800BDBC8_00001254
    addic. r3, r3, 0x4
    beq lbl_fn_800BDBC8_00001254
    beq lbl_fn_800BDBC8_00001254
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00001254
    bl fn_806952C4
lbl_fn_800BDBC8_00001254:
    lwz r5, 0x8e0(r23)
    mr r4, r25
    addi r3, r23, 0x8e4
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800BDBC8_0000126C:
    mr r3, r26
    bl fn_80071AFC
    lwz r0, 0x8f8(r23)
    cmpwi r0, 0x0
    beq lbl_fn_800BDBC8_0000136C
    lwz r25, 0x90c(r23)
    bne lbl_fn_800BDBC8_00001354
    lis r4, lbl_80775B60@ha
    li r0, 0x0
    addi r4, r4, lbl_80775B60@l
    lis r3, lbl_80775BC8@ha
    stw r4, 0x48(r1)
    addi r3, r3, lbl_80775BC8@l
    stb r0, 0x8(r1)
    bl strlen
    addi r3, r3, 0x1
    slwi r0, r3, 1
    subf r3, r3, r0
    bl fn_80084A78
    addi r0, r1, 0x8
    stw r3, 0x4c(r1)
    mr r24, r3
    stw r3, 0x20(r1)
    li r3, 0x10
    stw r0, 0x24(r1)
    bl fn_800844D8
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_000012F8
    li r0, 0x1
    stw r0, 0x4(r3)
    lis r4, lbl_80775B98@ha
    stw r0, 0x8(r3)
    addi r4, r4, lbl_80775B98@l
    stw r4, 0x0(r3)
    stw r24, 0xc(r3)
lbl_fn_800BDBC8_000012F8:
    li r0, 0x0
    stw r3, 0x50(r1)
    stw r0, 0x20(r1)
    b lbl_fn_800BDBC8_0000130C
    bl fn_80084C24
lbl_fn_800BDBC8_0000130C:
    lis r4, lbl_80775BC8@ha
    lwz r3, 0x4c(r1)
    addi r4, r4, lbl_80775BC8@l
    bl strcpy
    lis r4, lbl_80775B30@ha
    addi r3, r1, 0x48
    addi r4, r4, lbl_80775B30@l
    stw r4, 0x48(r1)
    bl fn_800DCA6C
    addic. r3, r1, 0x48
    beq lbl_fn_800BDBC8_00001354
    addic. r3, r3, 0x4
    beq lbl_fn_800BDBC8_00001354
    beq lbl_fn_800BDBC8_00001354
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_800BDBC8_00001354
    bl fn_806952C4
lbl_fn_800BDBC8_00001354:
    lwz r5, 0x8f8(r23)
    mr r4, r25
    addi r3, r23, 0x8fc
    lwz r12, 0x4(r5)
    mtctr r12
    bctrl
lbl_fn_800BDBC8_0000136C:
    addi r11, r1, 0x230
    psq_l f31, 0x268(r1), 0, 0
    lfd f31, 0x260(r1)
    psq_l f30, 0x258(r1), 0, 0
    lfd f30, 0x250(r1)
    psq_l f29, 0x248(r1), 0, 0
    lfd f29, 0x240(r1)
    psq_l f28, 0x238(r1), 0, 0
    lfd f28, 0x230(r1)
    bl _restgpr_23
    lwz r0, 0x274(r1)
    mtlr r0
    addi r1, r1, 0x270
    blr
}

asm void fn_800BECF0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lis r11, 0x0
    stw r0, 0x24(r1)
    addi r11, r11, -0x8000
    stw r31, 0x1c(r1)
    mr r31, r1
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    lwz r0, 0x0(r1)
    stwux r0, r1, r11
    addis r5, r31, 0x0
    mr r28, r3
    mr r29, r4
    li r3, 0x0
    subi r30, r5, 0x7ff8
    mr r4, r28
    mr r5, r30
    mr r6, r29
    bl fn_800BEDA8
    mr r4, r30
    mr r5, r28
    mr r6, r29
    li r3, 0x8
    bl fn_800BEDA8
    mr r4, r28
    mr r5, r30
    mr r6, r29
    li r3, 0x10
    bl fn_800BEDA8
    mr r4, r30
    mr r5, r28
    mr r6, r29
    li r3, 0x18
    bl fn_800BEDA8
    mr r10, r31
    lwz r31, 0x1c(r31)
    lwz r30, 0x18(r10)
    lwz r29, 0x14(r10)
    lwz r28, 0x10(r10)
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    mr r1, r10
    mtlr r0
    blr
}

asm void fn_800BEDA8(void)
{
    nofralloc
    stwu r1, -0x420(r1)
    mflr r0
    stw r0, 0x424(r1)
    stw r31, 0x41c(r1)
    mr r31, r6
    stw r30, 0x418(r1)
    mr r30, r5
    li r5, 0x400
    stw r29, 0x414(r1)
    mr r29, r4
    li r4, 0x0
    stw r28, 0x410(r1)
    mr r28, r3
    addi r3, r1, 0x8
    bl memset
    cmpwi r31, 0x0
    mr r8, r29
    mr r3, r31
    addi r4, r1, 0x8
    beq lbl_fn_800BEDA8_000015AC
    srwi. r0, r31, 3
    mtctr r0
    beq lbl_fn_800BEDA8_00001588
lbl_fn_800BEDA8_000014B8:
    lwz r7, 0x0(r8)
    srw r6, r7, r28
    lwz r7, 0x8(r8)
    clrlslwi r5, r6, 24, 2
    lwzx r3, r4, r5
    srw r6, r7, r28
    lwz r7, 0x10(r8)
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    srw r6, r7, r28
    lwzx r3, r4, r5
    lwz r7, 0x18(r8)
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    srw r6, r7, r28
    lwzx r3, r4, r5
    lwz r7, 0x20(r8)
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    srw r6, r7, r28
    lwzx r3, r4, r5
    lwz r7, 0x28(r8)
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    srw r6, r7, r28
    lwzx r3, r4, r5
    lwz r7, 0x30(r8)
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    srw r6, r7, r28
    lwzx r3, r4, r5
    lwz r7, 0x38(r8)
    addi r8, r8, 0x40
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    srw r6, r7, r28
    lwzx r3, r4, r5
    addi r0, r3, 0x1
    stwx r0, r4, r5
    clrlslwi r5, r6, 24, 2
    lwzx r3, r4, r5
    addi r0, r3, 0x1
    stwx r0, r4, r5
    bdnz lbl_fn_800BEDA8_000014B8
    andi. r3, r31, 0x7
    beq lbl_fn_800BEDA8_000015AC
lbl_fn_800BEDA8_00001588:
    mtctr r3
lbl_fn_800BEDA8_0000158C:
    lwz r7, 0x0(r8)
    addi r8, r8, 0x8
    srw r6, r7, r28
    clrlslwi r5, r6, 24, 2
    lwzx r3, r4, r5
    addi r0, r3, 0x1
    stwx r0, r4, r5
    bdnz lbl_fn_800BEDA8_0000158C
lbl_fn_800BEDA8_000015AC:
    li r0, 0x10
    addi r4, r1, 0x8
    li r3, 0x0
    mtctr r0
lbl_fn_800BEDA8_000015BC:
    lwz r0, 0x0(r4)
    stw r3, 0x0(r4)
    add r3, r3, r0
    lwz r0, 0x4(r4)
    stw r3, 0x4(r4)
    add r3, r3, r0
    lwz r0, 0x8(r4)
    stw r3, 0x8(r4)
    add r3, r3, r0
    lwz r0, 0xc(r4)
    stw r3, 0xc(r4)
    add r3, r3, r0
    lwz r0, 0x10(r4)
    stw r3, 0x10(r4)
    add r3, r3, r0
    lwz r0, 0x14(r4)
    stw r3, 0x14(r4)
    add r3, r3, r0
    lwz r0, 0x18(r4)
    stw r3, 0x18(r4)
    add r3, r3, r0
    lwz r0, 0x1c(r4)
    stw r3, 0x1c(r4)
    add r3, r3, r0
    lwz r0, 0x20(r4)
    stw r3, 0x20(r4)
    add r3, r3, r0
    lwz r0, 0x24(r4)
    stw r3, 0x24(r4)
    add r3, r3, r0
    lwz r0, 0x28(r4)
    stw r3, 0x28(r4)
    add r3, r3, r0
    lwz r0, 0x2c(r4)
    stw r3, 0x2c(r4)
    add r3, r3, r0
    lwz r0, 0x30(r4)
    stw r3, 0x30(r4)
    add r3, r3, r0
    lwz r0, 0x34(r4)
    stw r3, 0x34(r4)
    add r3, r3, r0
    lwz r0, 0x38(r4)
    stw r3, 0x38(r4)
    add r3, r3, r0
    lwz r0, 0x3c(r4)
    stw r3, 0x3c(r4)
    add r3, r3, r0
    addi r4, r4, 0x40
    bdnz lbl_fn_800BEDA8_000015BC
    cmpwi r31, 0x0
    addi r5, r1, 0x8
    beq lbl_fn_800BEDA8_00001780
    srwi. r0, r31, 2
    mtctr r0
    beq lbl_fn_800BEDA8_0000174C
lbl_fn_800BEDA8_0000169C:
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    srw r3, r7, r28
    clrlslwi r6, r3, 24, 2
    lwzx r3, r5, r6
    addi r4, r3, 0x1
    stwx r4, r5, r6
    slwi r3, r3, 3
    stwux r7, r3, r30
    lwz r7, 0x8(r29)
    stw r0, 0x4(r3)
    srw r3, r7, r28
    lwz r0, 0xc(r29)
    clrlslwi r6, r3, 24, 2
    lwzx r3, r5, r6
    addi r4, r3, 0x1
    stwx r4, r5, r6
    slwi r3, r3, 3
    stwux r7, r3, r30
    lwz r7, 0x10(r29)
    stw r0, 0x4(r3)
    srw r3, r7, r28
    lwz r0, 0x14(r29)
    clrlslwi r6, r3, 24, 2
    lwzx r3, r5, r6
    addi r4, r3, 0x1
    stwx r4, r5, r6
    slwi r3, r3, 3
    stwux r7, r3, r30
    lwz r7, 0x18(r29)
    stw r0, 0x4(r3)
    srw r3, r7, r28
    lwz r0, 0x1c(r29)
    clrlslwi r6, r3, 24, 2
    addi r29, r29, 0x20
    lwzx r3, r5, r6
    addi r4, r3, 0x1
    stwx r4, r5, r6
    slwi r3, r3, 3
    stwux r7, r3, r30
    stw r0, 0x4(r3)
    bdnz lbl_fn_800BEDA8_0000169C
    andi. r31, r31, 0x3
    beq lbl_fn_800BEDA8_00001780
lbl_fn_800BEDA8_0000174C:
    mtctr r31
lbl_fn_800BEDA8_00001750:
    lwz r7, 0x0(r29)
    lwz r0, 0x4(r29)
    addi r29, r29, 0x8
    srw r3, r7, r28
    clrlslwi r6, r3, 24, 2
    lwzx r3, r5, r6
    addi r4, r3, 0x1
    stwx r4, r5, r6
    slwi r3, r3, 3
    stwux r7, r3, r30
    stw r0, 0x4(r3)
    bdnz lbl_fn_800BEDA8_00001750
lbl_fn_800BEDA8_00001780:
    lwz r0, 0x424(r1)
    lwz r31, 0x41c(r1)
    lwz r30, 0x418(r1)
    lwz r29, 0x414(r1)
    lwz r28, 0x410(r1)
    mtlr r0
    addi r1, r1, 0x420
    blr
}
