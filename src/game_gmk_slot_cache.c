#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_18(void);
extern void _savegpr_18(void);
extern void fn_8003EA3C(void);
extern void fn_800DD3FC(void);
extern void fn_80108C10(void);
extern void fn_801092C8(void);
extern void fn_80206B14(void);
extern void fn_80206B9C(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_802085E0(void);
extern void fn_8020BD3C(void);
extern void fn_8020BD78(void);
extern void fn_8020BDAC(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF80(void);
extern void fn_8020EFEC(void);
extern void fn_80210AC4(void);
extern void fn_80211480(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_8021150C(void);
extern void fn_80213B78(void);
extern void fn_80219E6C(void);
extern void fn_8021E444(void);
extern void fn_8021E5A4(void);
extern void fn_80370174(void);
extern void fn_80373148(void);
extern void fn_803750E4(void);
extern void fn_80445F44(void);
extern void fn_804490E0(void);
extern void fn_80473F50(void);
extern void fn_80473F88(void);
extern void fn_804A24C4(void);
extern void fn_804A28F8(void);
extern void fn_80680CF8(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_8078F2F8[];
extern u8 lbl_80754628[];
extern u8 lbl_8075463C[];
extern u8 lbl_80754730[];
extern u8 lbl_80754750[];
extern u8 lbl_807C6B90[];

/* Small data declarations */
extern u32 lbl_8087F048;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F578;
extern u32 lbl_8087F610;
extern u32 lbl_8087F8A0;
extern u32 lbl_808813D0;
extern u32 lbl_80886AE8;
extern u32 lbl_80886AEC;
extern u32 lbl_80886AF0;
extern u32 lbl_80886AF4;
extern u32 lbl_80886AF8;
extern u32 lbl_80886AFC;

/* Function declarations */
void fn_8044386C(void);
void fn_804438E0(void);
void fn_804439FC(void);
void fn_80444020(void);
void fn_8044441C(void);
void fn_804444E8(void);
void fn_8044453C(void);
void fn_80444564(void);
void fn_804446BC(void);
void fn_80444744(void);
void fn_80444804(void);
void fn_80444828(void);
void fn_8044493C(void);
void fn_80444A50(void);
void fn_80444B64(void);
void fn_80444BE8(void);
void fn_80444C48(void);
void fn_80444C50(void);
void fn_80444CF8(void);
void fn_80444EFC(void);
void fn_80445130(void);

asm void fn_8044386C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    addis r4, r3, 0x1
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, -0x24f8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8044386C_0000002C
    li r3, 0x0
    b lbl_fn_8044386C_00000060
lbl_fn_8044386C_0000002C:
    mr r3, r4
    subi r3, r3, 0x2500
    bl fn_80473F50
    cmpwi r3, 0x0
    bne lbl_fn_8044386C_0000005C
    addis r3, r31, 0x1
    li r0, 0x1
    stw r0, -0x24f8(r3)
    subi r3, r3, 0x2500
    bl fn_80473F88
    li r3, 0x0
    b lbl_fn_8044386C_00000060
lbl_fn_8044386C_0000005C:
    li r3, 0x1
lbl_fn_8044386C_00000060:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804438E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8021150C
    slwi r0, r3, 4
    add r4, r31, r0
    lhz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804438E0_0000017C
    li r0, 0x60
    mtctr r0
lbl_fn_804438E0_000000AC:
    lhz r3, 0x8(r31)
    addi r0, r3, 0x1
    sth r0, 0x8(r31)
    lhz r3, 0x18(r31)
    addi r0, r3, 0x1
    sth r0, 0x18(r31)
    lhz r3, 0x28(r31)
    addi r0, r3, 0x1
    sth r0, 0x28(r31)
    lhz r3, 0x38(r31)
    addi r0, r3, 0x1
    sth r0, 0x38(r31)
    lhz r3, 0x48(r31)
    addi r0, r3, 0x1
    sth r0, 0x48(r31)
    lhz r3, 0x58(r31)
    addi r0, r3, 0x1
    sth r0, 0x58(r31)
    lhz r3, 0x68(r31)
    addi r0, r3, 0x1
    sth r0, 0x68(r31)
    lhz r3, 0x78(r31)
    addi r0, r3, 0x1
    sth r0, 0x78(r31)
    lhz r3, 0x88(r31)
    addi r0, r3, 0x1
    sth r0, 0x88(r31)
    lhz r3, 0x98(r31)
    addi r0, r3, 0x1
    sth r0, 0x98(r31)
    lhz r3, 0xa8(r31)
    addi r0, r3, 0x1
    sth r0, 0xa8(r31)
    lhz r3, 0xb8(r31)
    addi r0, r3, 0x1
    sth r0, 0xb8(r31)
    lhz r3, 0xc8(r31)
    addi r0, r3, 0x1
    sth r0, 0xc8(r31)
    lhz r3, 0xd8(r31)
    addi r0, r3, 0x1
    sth r0, 0xd8(r31)
    lhz r3, 0xe8(r31)
    addi r0, r3, 0x1
    sth r0, 0xe8(r31)
    lhz r3, 0xf8(r31)
    addi r0, r3, 0x1
    sth r0, 0xf8(r31)
    addi r31, r31, 0x100
    bdnz lbl_fn_804438E0_000000AC
    li r0, 0x0
    sth r0, 0x8(r4)
lbl_fn_804438E0_0000017C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_804439FC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stmw r23, 0x1c(r1)
    mr r24, r6
    mr r25, r3
    mr r23, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    li r6, 0x0
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r5, 0xc(r1)
    addi r5, r1, 0xc
    bl fn_80445130
    lwz r3, 0x8(r1)
    bl fn_8021150C
    cmpwi r3, 0x0
    mr r31, r3
    blt lbl_fn_804439FC_000001EC
    cmpwi r3, 0x600
    blt lbl_fn_804439FC_000001F4
lbl_fn_804439FC_000001EC:
    li r3, 0x0
    b lbl_fn_804439FC_000007A0
lbl_fn_804439FC_000001F4:
    lwz r3, 0x8(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_804439FC_00000210
    li r3, 0x0
    b lbl_fn_804439FC_000007A0
lbl_fn_804439FC_00000210:
    lwz r3, 0x8(r1)
    li r29, 0x1
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_00000344
    cmpwi r23, 0x0
    beq lbl_fn_804439FC_00000304
    cmpwi r24, 0x0
    beq lbl_fn_804439FC_0000023C
    li r24, 0x64
    b lbl_fn_804439FC_00000314
lbl_fn_804439FC_0000023C:
    lwz r23, 0x8(r1)
    li r24, 0x64
    mr r3, r23
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_00000314
    mr r3, r23
    bl fn_80206C50
    mr r24, r3
    mr r3, r23
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_804439FC_00000278
    cmpwi r3, 0x600
    blt lbl_fn_804439FC_00000280
lbl_fn_804439FC_00000278:
    li r0, 0x0
    b lbl_fn_804439FC_0000028C
lbl_fn_804439FC_00000280:
    slwi r0, r3, 4
    add r3, r25, r0
    lwz r0, 0xc(r3)
lbl_fn_804439FC_0000028C:
    clrlwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_804439FC_000002B0
    lwz r0, 0x118(r24)
    lis r3, lbl_8075463C@ha
    addi r3, r3, lbl_8075463C@l
    slwi r0, r0, 2
    lwzx r24, r3, r0
    b lbl_fn_804439FC_000002C4
lbl_fn_804439FC_000002B0:
    lwz r0, 0x118(r24)
    lis r3, lbl_80754628@ha
    addi r3, r3, lbl_80754628@l
    slwi r0, r0, 2
    lwzx r24, r3, r0
lbl_fn_804439FC_000002C4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_00000314
    li r4, 0x8a
    bl fn_80370174
    cmpwi r3, 0x1
    bne lbl_fn_804439FC_000002E8
    li r24, 0x0
    b lbl_fn_804439FC_00000314
lbl_fn_804439FC_000002E8:
    lwz r3, lbl_8087F430
    li r4, 0x8a
    bl fn_80370174
    cmpwi r3, 0x2
    blt lbl_fn_804439FC_00000314
    li r24, 0x64
    b lbl_fn_804439FC_00000314
lbl_fn_804439FC_00000304:
    neg r0, r24
    or r0, r0, r24
    srawi r0, r0, 31
    andi. r24, r0, 0x64
lbl_fn_804439FC_00000314:
    bl fn_80680CF8
    lis r4, 0x51ec
    subi r0, r4, 0x7ae1
    mulhw r0, r0, r3
    srawi r0, r0, 5
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x64
    subf r0, r0, r3
    cmpw r24, r0
    bgt lbl_fn_804439FC_00000344
    li r29, 0x0
lbl_fn_804439FC_00000344:
    lwz r3, 0x8(r1)
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_804439FC_00000364
    lwz r3, 0x8(r1)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_000003A8
lbl_fn_804439FC_00000364:
    cmpwi r27, 0x0
    beq lbl_fn_804439FC_00000424
    cmpwi r29, 0x0
    beq lbl_fn_804439FC_00000424
    lwz r4, 0x8(r1)
    mr r3, r25
    bl fn_80444564
    lwz r0, 0xc(r1)
    add r0, r0, r3
    cmpwi r0, 0xa
    ble lbl_fn_804439FC_00000424
    lwz r4, 0x8(r1)
    mr r3, r25
    bl fn_80444564
    subfic r0, r3, 0xa
    stw r0, 0xc(r1)
    b lbl_fn_804439FC_00000424
lbl_fn_804439FC_000003A8:
    lha r0, 0xbc(r30)
    cmpwi r0, 0x6
    bne lbl_fn_804439FC_00000400
    lwz r0, 0x64(r30)
    cmpwi r0, 0x2
    bne lbl_fn_804439FC_000003E4
    li r23, 0x0
lbl_fn_804439FC_000003C4:
    mr r3, r25
    mr r4, r30
    mr r5, r23
    bl fn_804490E0
    addi r23, r23, 0x1
    cmpwi r23, 0x7
    blt lbl_fn_804439FC_000003C4
    b lbl_fn_804439FC_000003F4
lbl_fn_804439FC_000003E4:
    mr r3, r25
    mr r4, r30
    li r5, 0x0
    bl fn_804490E0
lbl_fn_804439FC_000003F4:
    li r0, 0x0
    stw r0, 0xc(r1)
    b lbl_fn_804439FC_00000424
lbl_fn_804439FC_00000400:
    slwi r3, r31, 4
    lwz r0, 0xc(r1)
    add r3, r25, r3
    lwz r3, 0x4(r3)
    add r0, r0, r3
    cmpwi r0, 0x63
    ble lbl_fn_804439FC_00000424
    subfic r0, r3, 0x63
    stw r0, 0xc(r1)
lbl_fn_804439FC_00000424:
    cmpwi r29, 0x0
    beq lbl_fn_804439FC_0000054C
    slwi r3, r31, 4
    lwz r0, 0x8(r1)
    stwx r0, r25, r3
    add r4, r25, r3
    cmpwi r28, 0x0
    lwz r3, 0x4(r4)
    lwz r0, 0xc(r1)
    add r0, r3, r0
    stw r0, 0x4(r4)
    beq lbl_fn_804439FC_000005D0
    lwz r3, 0x8(r1)
    bl fn_8021150C
    slwi r0, r3, 4
    add r4, r25, r0
    lhz r0, 0x8(r4)
    cmpwi r0, 0x0
    beq lbl_fn_804439FC_000005D0
    li r0, 0x60
    mtctr r0
lbl_fn_804439FC_00000478:
    lhz r3, 0x8(r25)
    addi r0, r3, 0x1
    sth r0, 0x8(r25)
    lhz r3, 0x18(r25)
    addi r0, r3, 0x1
    sth r0, 0x18(r25)
    lhz r3, 0x28(r25)
    addi r0, r3, 0x1
    sth r0, 0x28(r25)
    lhz r3, 0x38(r25)
    addi r0, r3, 0x1
    sth r0, 0x38(r25)
    lhz r3, 0x48(r25)
    addi r0, r3, 0x1
    sth r0, 0x48(r25)
    lhz r3, 0x58(r25)
    addi r0, r3, 0x1
    sth r0, 0x58(r25)
    lhz r3, 0x68(r25)
    addi r0, r3, 0x1
    sth r0, 0x68(r25)
    lhz r3, 0x78(r25)
    addi r0, r3, 0x1
    sth r0, 0x78(r25)
    lhz r3, 0x88(r25)
    addi r0, r3, 0x1
    sth r0, 0x88(r25)
    lhz r3, 0x98(r25)
    addi r0, r3, 0x1
    sth r0, 0x98(r25)
    lhz r3, 0xa8(r25)
    addi r0, r3, 0x1
    sth r0, 0xa8(r25)
    lhz r3, 0xb8(r25)
    addi r0, r3, 0x1
    sth r0, 0xb8(r25)
    lhz r3, 0xc8(r25)
    addi r0, r3, 0x1
    sth r0, 0xc8(r25)
    lhz r3, 0xd8(r25)
    addi r0, r3, 0x1
    sth r0, 0xd8(r25)
    lhz r3, 0xe8(r25)
    addi r0, r3, 0x1
    sth r0, 0xe8(r25)
    lhz r3, 0xf8(r25)
    addi r0, r3, 0x1
    sth r0, 0xf8(r25)
    addi r25, r25, 0x100
    bdnz lbl_fn_804439FC_00000478
    li r0, 0x0
    sth r0, 0x8(r4)
    b lbl_fn_804439FC_000005D0
lbl_fn_804439FC_0000054C:
    li r24, 0x0
    b lbl_fn_804439FC_000005B0
lbl_fn_804439FC_00000554:
    lwz r23, 0x8(r1)
    mr r3, r23
    bl fn_80211480
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_000005AC
    lha r0, 0xbc(r3)
    cmpwi r0, 0x2
    bne lbl_fn_804439FC_000005AC
    addis r3, r25, 0x1
    lwz r0, -0x24d4(r3)
    cmplwi r0, 0x100
    bge lbl_fn_804439FC_000005AC
    lwz r0, -0x24d4(r3)
    slwi r0, r0, 2
    add r0, r3, r0
    subic. r3, r0, 0x24d0
    beq lbl_fn_804439FC_0000059C
    stw r23, 0x0(r3)
lbl_fn_804439FC_0000059C:
    addis r4, r25, 0x1
    lwz r3, -0x24d4(r4)
    addi r0, r3, 0x1
    stw r0, -0x24d4(r4)
lbl_fn_804439FC_000005AC:
    addi r24, r24, 0x1
lbl_fn_804439FC_000005B0:
    lwz r0, 0xc(r1)
    cmpw r24, r0
    blt lbl_fn_804439FC_00000554
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_000005D0
    li r4, 0xa1
    bl fn_803750E4
lbl_fn_804439FC_000005D0:
    cmpwi r26, 0x0
    beq lbl_fn_804439FC_000005DC
    stw r29, 0x0(r26)
lbl_fn_804439FC_000005DC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_0000079C
    lwz r0, 0x8(r1)
    cmpwi r0, 0x74
    bne lbl_fn_804439FC_000005FC
    li r4, 0x91
    bl fn_803750E4
lbl_fn_804439FC_000005FC:
    lwz r0, 0x8(r1)
    cmpwi r0, 0x143
    bne lbl_fn_804439FC_00000614
    lwz r3, lbl_8087F430
    li r4, 0x1b8
    bl fn_803750E4
lbl_fn_804439FC_00000614:
    lwz r3, 0x8(r1)
    bl fn_80206B9C
    cmpwi r3, 0x0
    bne lbl_fn_804439FC_00000634
    lwz r3, 0x8(r1)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_00000654
lbl_fn_804439FC_00000634:
    lwz r3, lbl_8087F430
    lis r4, 0x2
    subi r0, r4, 0x5a20
    lwz r4, 0x10d0(r3)
    cmpw r4, r0
    blt lbl_fn_804439FC_00000654
    li r4, 0x148
    bl fn_803750E4
lbl_fn_804439FC_00000654:
    lha r0, 0xbc(r30)
    cmpwi r0, 0x6
    bne lbl_fn_804439FC_00000678
    lwz r0, 0xb4(r30)
    cmpwi r0, 0x5
    bne lbl_fn_804439FC_00000678
    lwz r3, lbl_8087F430
    li r4, 0x146
    bl fn_803750E4
lbl_fn_804439FC_00000678:
    lwz r3, 0x8(r1)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_000006BC
    lwz r3, 0x8(r1)
    bl fn_80206C50
    lwz r0, 0xf0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_804439FC_000006BC
    lwz r3, lbl_8087F430
    lis r4, 0x2
    subi r0, r4, 0x5a20
    lwz r4, 0x10d0(r3)
    cmpw r4, r0
    blt lbl_fn_804439FC_000006BC
    li r4, 0x151
    bl fn_803750E4
lbl_fn_804439FC_000006BC:
    lwz r3, 0x8(r1)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_00000728
    lwz r3, 0x8(r1)
    bl fn_8020EFEC
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804439FC_000006F4
    lwz r3, 0x8(r1)
    bl fn_8020EFEC
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x6
    bge lbl_fn_804439FC_0000071C
lbl_fn_804439FC_000006F4:
    lwz r3, 0x8(r1)
    bl fn_8020EFEC
    lwz r0, 0x78(r3)
    cmpwi r0, 0x1
    bne lbl_fn_804439FC_00000728
    lwz r3, 0x8(r1)
    bl fn_8020EFEC
    lwz r0, 0xe0(r3)
    cmpwi r0, 0x7
    blt lbl_fn_804439FC_00000728
lbl_fn_804439FC_0000071C:
    lwz r3, lbl_8087F430
    li r4, 0x1af
    bl fn_803750E4
lbl_fn_804439FC_00000728:
    lwz r3, 0x8(r1)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_804439FC_0000079C
    lwz r3, 0x8(r1)
    bl fn_80206C50
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x3f
    bne lbl_fn_804439FC_00000758
    lwz r0, 0xc8(r3)
    cmpwi r0, 0x7
    beq lbl_fn_804439FC_00000790
lbl_fn_804439FC_00000758:
    lwz r0, 0xd8(r3)
    cmpwi r0, 0x3f
    bne lbl_fn_804439FC_00000770
    lwz r0, 0xdc(r3)
    cmpwi r0, 0x7
    beq lbl_fn_804439FC_00000790
lbl_fn_804439FC_00000770:
    lwz r0, 0x78(r3)
    cmpwi r0, 0x0
    bne lbl_fn_804439FC_0000079C
    lwz r0, 0x80(r3)
    cmpwi r0, 0x18f
    blt lbl_fn_804439FC_0000079C
    cmpwi r0, 0x195
    bgt lbl_fn_804439FC_0000079C
lbl_fn_804439FC_00000790:
    lwz r3, lbl_8087F430
    li r4, 0x1b4
    bl fn_803750E4
lbl_fn_804439FC_0000079C:
    lwz r3, 0xc(r1)
lbl_fn_804439FC_000007A0:
    lmw r23, 0x1c(r1)
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80444020(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    stmw r18, 0x48(r1)
    mr r24, r3
    lwz r30, 0x88(r1)
    mr r3, r4
    mr r25, r5
    mr r18, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    mr r29, r10
    bl fn_8021E444
    cmpwi r3, 0x0
    mr r19, r3
    bne lbl_fn_80444020_00000800
    li r3, 0x0
    b lbl_fn_80444020_00000B9C
lbl_fn_80444020_00000800:
    cmpwi r18, 0x0
    bge lbl_fn_80444020_00000864
    lwz r5, lbl_8087F4F0
    cmpwi r5, 0x0
    beq lbl_fn_80444020_00000854
    lwz r3, lbl_8087F430
    li r4, 0x0
    cmpwi r3, 0x0
    beq lbl_fn_80444020_00000830
    lwz r0, 0x5694(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80444020_0000084C
lbl_fn_80444020_00000830:
    addis r3, r5, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80444020_00000858
    lwz r0, -0x24dc(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80444020_00000858
lbl_fn_80444020_0000084C:
    ori r4, r4, 0x6
    b lbl_fn_80444020_00000858
lbl_fn_80444020_00000854:
    li r4, 0x0
lbl_fn_80444020_00000858:
    mr r3, r19
    bl fn_8021E5A4
    b lbl_fn_80444020_00000868
lbl_fn_80444020_00000864:
    mr r3, r18
lbl_fn_80444020_00000868:
    cmpwi r3, 0x0
    blt lbl_fn_80444020_00000B98
    mulli r0, r3, 0xc
    lwz r3, 0x4(r19)
    li r19, 0x0
    li r20, -0x1
    add r18, r3, r0
    lwzx r3, r3, r0
    lis r21, lbl_807C6B90@ha
    li r22, 0x1
    lis r23, 0xf
    bl fn_80211480
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_80444020_000008CC
    mr r3, r24
    li r4, 0x1
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    b lbl_fn_80444020_00000B90
lbl_fn_80444020_000008CC:
    lwz r0, 0x0(r18)
    stw r0, 0x10(r1)
    lwz r0, 0x4(r18)
    stw r0, 0xc(r1)
    lbz r0, 0xc0(r3)
    cmpwi r0, 0x3
    beq lbl_fn_80444020_000008F8
    lwz r0, 0xac(r3)
    rlwinm r0, r0, 0, 23, 23
    cmpwi r0, 0x100
    bne lbl_fn_80444020_00000A20
lbl_fn_80444020_000008F8:
    lwz r3, 0xc4(r3)
    lwz r4, lbl_8087F8A0
    cmpwi r3, 0x0
    lwz r24, 0x48(r4)
    ble lbl_fn_80444020_00000918
    bl fn_80219E6C
    mr r23, r3
    b lbl_fn_80444020_0000091C
lbl_fn_80444020_00000918:
    li r23, 0x0
lbl_fn_80444020_0000091C:
    cmpwi r24, 0x0
    beq lbl_fn_80444020_000009F0
    cmpwi r23, 0x0
    beq lbl_fn_80444020_000009F0
    lwz r0, 0x3c(r1)
    mr r4, r23
    stw r19, 0x20(r1)
    mr r5, r24
    clrlwi r0, r0, 4
    mr r6, r24
    stw r19, 0x24(r1)
    addi r3, r1, 0x20
    addi r8, r21, lbl_807C6B90@l
    li r7, 0x0
    stw r19, 0x28(r1)
    li r9, 0x0
    li r10, 0x0
    stw r19, 0x2c(r1)
    stw r19, 0x30(r1)
    stw r20, 0x34(r1)
    stw r0, 0x3c(r1)
    stw r20, 0x38(r1)
    bl fn_8003EA3C
    lwz r19, lbl_8087F048
    cmpwi r19, 0x0
    beq lbl_fn_80444020_000009F0
    lwz r0, 0xac(r23)
    rlwinm r3, r0, 0, 12, 12
    subis r0, r3, 0x8
    cmplwi r0, 0x0
    beq lbl_fn_80444020_000009F0
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_80444020_000009B8
    lwz r0, 0x4(r23)
    cmpwi r0, 0x1774
    beq lbl_fn_80444020_000009F0
    cmpwi r0, 0x4fcc
    beq lbl_fn_80444020_000009F0
lbl_fn_80444020_000009B8:
    lwz r12, 0x0(r24)
    mr r4, r24
    addi r3, r1, 0x14
    lwz r12, 0xac(r12)
    mtctr r12
    bctrl
    mr r3, r19
    mr r6, r24
    mr r7, r24
    addi r4, r1, 0x20
    addi r5, r1, 0x14
    li r8, 0x0
    li r9, 0x0
    bl fn_80108C10
lbl_fn_80444020_000009F0:
    cmpwi r28, 0x0
    beq lbl_fn_80444020_00000A00
    lwz r0, 0x10(r1)
    stw r0, 0x0(r28)
lbl_fn_80444020_00000A00:
    cmpwi r29, 0x0
    beq lbl_fn_80444020_00000A10
    lwz r0, 0xc(r1)
    stw r0, 0x0(r29)
lbl_fn_80444020_00000A10:
    cmpwi r30, 0x0
    beq lbl_fn_80444020_00000B90
    stw r22, 0x0(r30)
    b lbl_fn_80444020_00000B90
lbl_fn_80444020_00000A20:
    mr r3, r24
    addi r4, r1, 0x10
    addi r5, r1, 0xc
    li r6, 0x0
    bl fn_80445130
    lwz r4, 0x10(r1)
    cmpwi r4, 0x2714
    beq lbl_fn_80444020_00000B04
    cmpwi r4, 0x2719
    beq lbl_fn_80444020_00000B04
    stw r22, 0x8(r1)
    mr r6, r27
    lwz r3, lbl_8087F4F0
    addi r8, r1, 0x8
    lwz r5, 0xc(r1)
    li r7, 0x1
    li r9, 0x1
    li r10, 0x1
    bl fn_804439FC
    cmpwi r25, 0x0
    beq lbl_fn_80444020_00000AD0
    lwz r3, 0x10(r1)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80444020_00000AAC
    lwz r0, 0x8(r1)
    cmpwi r0, 0x0
    bne lbl_fn_80444020_00000AAC
    lwz r3, lbl_8087F048
    li r4, 0x2
    lwz r6, 0x10(r1)
    li r5, 0x0
    lwz r7, 0xc(r1)
    bl fn_801092C8
    b lbl_fn_80444020_00000AD0
lbl_fn_80444020_00000AAC:
    lha r0, 0xbc(r31)
    cmpwi r0, 0x6
    beq lbl_fn_80444020_00000AD0
    lwz r3, lbl_8087F048
    li r4, 0x1
    lwz r6, 0x10(r1)
    li r5, 0x0
    lwz r7, 0xc(r1)
    bl fn_801092C8
lbl_fn_80444020_00000AD0:
    cmpwi r28, 0x0
    beq lbl_fn_80444020_00000AE0
    lwz r0, 0x10(r1)
    stw r0, 0x0(r28)
lbl_fn_80444020_00000AE0:
    cmpwi r29, 0x0
    beq lbl_fn_80444020_00000AF0
    lwz r0, 0xc(r1)
    stw r0, 0x0(r29)
lbl_fn_80444020_00000AF0:
    cmpwi r30, 0x0
    beq lbl_fn_80444020_00000B90
    lwz r0, 0x8(r1)
    stw r0, 0x0(r30)
    b lbl_fn_80444020_00000B90
lbl_fn_80444020_00000B04:
    cmpwi r4, 0x2714
    lwz r18, 0xc(r1)
    bne lbl_fn_80444020_00000B1C
    mr r3, r26
    bl fn_80444EFC
    mr r18, r3
lbl_fn_80444020_00000B1C:
    lwz r4, lbl_8087F4F0
    lwz r0, 0x6000(r4)
    add. r3, r0, r18
    stw r3, 0x6000(r4)
    bge lbl_fn_80444020_00000B38
    stw r19, 0x6000(r4)
    b lbl_fn_80444020_00000B48
lbl_fn_80444020_00000B38:
    addi r0, r23, 0x423f
    cmpw r3, r0
    ble lbl_fn_80444020_00000B48
    stw r0, 0x6000(r4)
lbl_fn_80444020_00000B48:
    cmpwi r25, 0x0
    beq lbl_fn_80444020_00000B68
    lwz r3, lbl_8087F048
    mr r6, r18
    li r4, 0x3
    li r5, 0x0
    li r7, 0x0
    bl fn_801092C8
lbl_fn_80444020_00000B68:
    cmpwi r28, 0x0
    beq lbl_fn_80444020_00000B78
    lwz r0, 0x10(r1)
    stw r0, 0x0(r28)
lbl_fn_80444020_00000B78:
    cmpwi r29, 0x0
    beq lbl_fn_80444020_00000B84
    stw r18, 0x0(r29)
lbl_fn_80444020_00000B84:
    cmpwi r30, 0x0
    beq lbl_fn_80444020_00000B90
    stw r22, 0x0(r30)
lbl_fn_80444020_00000B90:
    li r3, 0x1
    b lbl_fn_80444020_00000B9C
lbl_fn_80444020_00000B98:
    li r3, 0x0
lbl_fn_80444020_00000B9C:
    lmw r18, 0x48(r1)
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_8044441C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    mr r3, r28
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_8044441C_00000BF0
    cmpwi r3, 0x600
    blt lbl_fn_8044441C_00000BF8
lbl_fn_8044441C_00000BF0:
    li r3, 0x0
    b lbl_fn_8044441C_00000C5C
lbl_fn_8044441C_00000BF8:
    slwi r0, r3, 4
    add r31, r30, r0
    lwz r30, 0x4(r31)
    cmpw r30, r29
    bge lbl_fn_8044441C_00000C18
    li r0, 0x0
    stw r0, 0x4(r31)
    b lbl_fn_8044441C_00000C24
lbl_fn_8044441C_00000C18:
    subf r0, r29, r30
    stw r0, 0x4(r31)
    mr r30, r29
lbl_fn_8044441C_00000C24:
    lwz r3, lbl_8087F578
    cmpwi r3, 0x0
    beq lbl_fn_8044441C_00000C58
    mr r4, r28
    bl fn_804A24C4
    cmpwi r3, 0x0
    beq lbl_fn_8044441C_00000C58
    lwz r0, 0x4(r31)
    cmpwi r0, 0x0
    bgt lbl_fn_8044441C_00000C58
    lwz r3, lbl_8087F578
    mr r4, r28
    bl fn_804A28F8
lbl_fn_8044441C_00000C58:
    mr r3, r30
lbl_fn_8044441C_00000C5C:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804444E8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    mr r3, r4
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_804444E8_00000CA8
    cmpwi r3, 0x600
    blt lbl_fn_804444E8_00000CB0
lbl_fn_804444E8_00000CA8:
    li r3, -0x1
    b lbl_fn_804444E8_00000CBC
lbl_fn_804444E8_00000CB0:
    slwi r0, r3, 4
    add r3, r31, r0
    lwz r3, 0x4(r3)
lbl_fn_804444E8_00000CBC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8044453C(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_8044453C_00000CE0
    cmpwi r4, 0x600
    blt lbl_fn_8044453C_00000CE8
lbl_fn_8044453C_00000CE0:
    li r3, -0x1
    blr
lbl_fn_8044453C_00000CE8:
    slwi r0, r4, 4
    add r3, r3, r0
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80444564(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r26, 0x8(r1)
    mr r31, r4
    mr r26, r3
    mr r3, r31
    bl fn_8021150C
    cmpwi r3, 0x0
    blt lbl_fn_80444564_00000D28
    cmpwi r3, 0x600
    blt lbl_fn_80444564_00000D30
lbl_fn_80444564_00000D28:
    li r28, -0x1
    b lbl_fn_80444564_00000D3C
lbl_fn_80444564_00000D30:
    slwi r0, r3, 4
    add r3, r26, r0
    lwz r28, 0x4(r3)
lbl_fn_80444564_00000D3C:
    mr r3, r31
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80444564_00000DC8
    li r27, 0x0
    li r30, 0x0
lbl_fn_80444564_00000D54:
    lwz r3, lbl_8087F4F0
    li r26, 0x0
    addis r0, r3, 0x1
    add r3, r0, r30
    subi r29, r3, 0x7d70
lbl_fn_80444564_00000D68:
    lwz r4, 0x20(r29)
    li r3, 0x0
    bl fn_80206B14
    cmpwi r27, 0x0
    bne lbl_fn_80444564_00000D90
    cmpwi r26, 0x1
    bne lbl_fn_80444564_00000D90
    lwz r4, 0x20(r29)
    li r3, 0x1
    bl fn_80206B14
lbl_fn_80444564_00000D90:
    cmpwi r3, 0x0
    beq lbl_fn_80444564_00000DA8
    bl fn_80206BE4
    cmpw r31, r3
    bne lbl_fn_80444564_00000DA8
    addi r28, r28, 0x1
lbl_fn_80444564_00000DA8:
    addi r26, r26, 0x1
    addi r29, r29, 0x8
    cmpwi r26, 0x2
    blt lbl_fn_80444564_00000D68
    addi r27, r27, 0x1
    addi r30, r30, 0x40
    cmplwi r27, 0x7
    blt lbl_fn_80444564_00000D54
lbl_fn_80444564_00000DC8:
    mr r3, r31
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80444564_00000E38
    li r26, 0x0
    li r30, 0x0
lbl_fn_80444564_00000DE0:
    lwz r3, lbl_8087F4F0
    li r27, 0x0
    addis r0, r3, 0x1
    add r3, r0, r30
    subi r29, r3, 0x7d70
lbl_fn_80444564_00000DF4:
    lwz r4, 0x0(r29)
    mr r3, r27
    bl fn_8020ED84
    cmpwi r3, 0x0
    beq lbl_fn_80444564_00000E18
    bl fn_8020EF80
    cmpw r31, r3
    bne lbl_fn_80444564_00000E18
    addi r28, r28, 0x1
lbl_fn_80444564_00000E18:
    addi r27, r27, 0x1
    addi r29, r29, 0x8
    cmpwi r27, 0x2
    blt lbl_fn_80444564_00000DF4
    addi r26, r26, 0x1
    addi r30, r30, 0x40
    cmplwi r26, 0x7
    blt lbl_fn_80444564_00000DE0
lbl_fn_80444564_00000E38:
    mr r3, r28
    lmw r26, 0x8(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_804446BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    b lbl_fn_804446BC_00000EAC
lbl_fn_804446BC_00000E78:
    mr r3, r31
    bl fn_802114E0
    cmpwi r3, 0x0
    beq lbl_fn_804446BC_00000EA8
    lha r0, 0xbc(r3)
    cmpw r0, r29
    bne lbl_fn_804446BC_00000EA8
    lwz r0, 0xc4(r3)
    cmpw r0, r30
    bne lbl_fn_804446BC_00000EA8
    lwz r3, 0x4(r3)
    b lbl_fn_804446BC_00000EBC
lbl_fn_804446BC_00000EA8:
    addi r31, r31, 0x1
lbl_fn_804446BC_00000EAC:
    bl fn_802114D8
    cmpw r31, r3
    blt lbl_fn_804446BC_00000E78
    li r3, 0x0
lbl_fn_804446BC_00000EBC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80444744(void)
{
    nofralloc
    li r0, 0xc0
    li r5, 0x0
    mtctr r0
lbl_fn_80444744_00000EE4:
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    lwzu r0, 0x10(r3)
    cmpwi r0, 0x0
    blt lbl_fn_80444744_00000F90
    cmpw r0, r4
    beqlr
    addi r3, r3, 0x10
    addi r5, r5, 0x7
    bdnz lbl_fn_80444744_00000EE4
lbl_fn_80444744_00000F90:
    li r3, 0x0
    blr
}

asm void fn_80444804(void)
{
    nofralloc
    cmpwi r4, 0x0
    blt lbl_fn_80444804_00000FB4
    cmpwi r4, 0x600
    bge lbl_fn_80444804_00000FB4
    slwi r0, r4, 4
    add r3, r3, r0
    blr
lbl_fn_80444804_00000FB4:
    li r3, 0x0
    blr
}

asm void fn_80444828(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_8020BD3C
    addi r31, r1, 0x8
    mr r30, r3
    cmplw r3, r31
    beq lbl_fn_80444828_00001004
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80444828_00001004:
    addi r29, r1, 0x8
    li r30, 0x0
    b lbl_fn_80444828_000010A4
lbl_fn_80444828_00001010:
    mr r3, r30
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80444828_000010A0
    addi r3, r3, 0x114
    bl strlen
    lbzx r0, r29, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80444828_00001090
    add r3, r31, r3
    addi r5, r31, 0x114
    addi r3, r3, 0x114
    mr r4, r29
    subf r0, r5, r3
    mtctr r0
    cmplw r5, r3
    beq lbl_fn_80444828_0000108C
lbl_fn_80444828_00001060:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80444828_00001080
    li r0, 0x0
    b lbl_fn_80444828_00001090
lbl_fn_80444828_00001080:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_80444828_00001060
lbl_fn_80444828_0000108C:
    li r0, 0x1
lbl_fn_80444828_00001090:
    cmpwi r0, 0x0
    beq lbl_fn_80444828_000010A0
    lwz r3, 0x4(r31)
    b lbl_fn_80444828_000010B4
lbl_fn_80444828_000010A0:
    addi r30, r30, 0x1
lbl_fn_80444828_000010A4:
    bl fn_802114D8
    cmpw r30, r3
    blt lbl_fn_80444828_00001010
    li r3, 0x0
lbl_fn_80444828_000010B4:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8044493C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_8020BD78
    addi r31, r1, 0x8
    mr r30, r3
    cmplw r3, r31
    beq lbl_fn_8044493C_00001118
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_8044493C_00001118:
    addi r29, r1, 0x8
    li r30, 0x0
    b lbl_fn_8044493C_000011B8
lbl_fn_8044493C_00001124:
    mr r3, r30
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_8044493C_000011B4
    addi r3, r3, 0x114
    bl strlen
    lbzx r0, r29, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_8044493C_000011A4
    add r3, r31, r3
    addi r5, r31, 0x114
    addi r3, r3, 0x114
    mr r4, r29
    subf r0, r5, r3
    mtctr r0
    cmplw r5, r3
    beq lbl_fn_8044493C_000011A0
lbl_fn_8044493C_00001174:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_8044493C_00001194
    li r0, 0x0
    b lbl_fn_8044493C_000011A4
lbl_fn_8044493C_00001194:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_8044493C_00001174
lbl_fn_8044493C_000011A0:
    li r0, 0x1
lbl_fn_8044493C_000011A4:
    cmpwi r0, 0x0
    beq lbl_fn_8044493C_000011B4
    lwz r3, 0x4(r31)
    b lbl_fn_8044493C_000011C8
lbl_fn_8044493C_000011B4:
    addi r30, r30, 0x1
lbl_fn_8044493C_000011B8:
    bl fn_802114D8
    cmpw r30, r3
    blt lbl_fn_8044493C_00001124
    li r3, 0x0
lbl_fn_8044493C_000011C8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80444A50(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    bl fn_8020BDAC
    addi r31, r1, 0x8
    mr r30, r3
    cmplw r3, r31
    beq lbl_fn_80444A50_0000122C
    bl strlen
    mr r5, r3
    mr r3, r31
    mr r4, r30
    addi r5, r5, 0x1
    bl memcpy
lbl_fn_80444A50_0000122C:
    addi r29, r1, 0x8
    li r30, 0x0
    b lbl_fn_80444A50_000012CC
lbl_fn_80444A50_00001238:
    mr r3, r30
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80444A50_000012C8
    addi r3, r3, 0x114
    bl strlen
    lbzx r0, r29, r3
    extsb r0, r0
    cntlzw r0, r0
    srwi. r0, r0, 5
    beq lbl_fn_80444A50_000012B8
    add r3, r31, r3
    addi r5, r31, 0x114
    addi r3, r3, 0x114
    mr r4, r29
    subf r0, r5, r3
    mtctr r0
    cmplw r5, r3
    beq lbl_fn_80444A50_000012B4
lbl_fn_80444A50_00001288:
    lbz r3, 0x0(r5)
    lbz r0, 0x0(r4)
    extsb r3, r3
    extsb r0, r0
    cmpw r3, r0
    beq lbl_fn_80444A50_000012A8
    li r0, 0x0
    b lbl_fn_80444A50_000012B8
lbl_fn_80444A50_000012A8:
    addi r5, r5, 0x1
    addi r4, r4, 0x1
    bdnz lbl_fn_80444A50_00001288
lbl_fn_80444A50_000012B4:
    li r0, 0x1
lbl_fn_80444A50_000012B8:
    cmpwi r0, 0x0
    beq lbl_fn_80444A50_000012C8
    lwz r3, 0x4(r31)
    b lbl_fn_80444A50_000012DC
lbl_fn_80444A50_000012C8:
    addi r30, r30, 0x1
lbl_fn_80444A50_000012CC:
    bl fn_802114D8
    cmpw r30, r3
    blt lbl_fn_80444A50_00001238
    li r3, 0x0
lbl_fn_80444A50_000012DC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80444B64(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    mr r3, r4
    stw r0, 0x14(r1)
    bl fn_80211480
    cmpwi r3, 0x0
    li r0, 0x0
    bne lbl_fn_80444B64_00001320
    li r0, 0x0
    b lbl_fn_80444B64_00001368
lbl_fn_80444B64_00001320:
    lha r5, 0xbe(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80444B64_00001368
    lis r3, 0x51ec
    subi r0, r3, 0x7ae1
    mulhw r0, r0, r5
    srawi r3, r0, 5
    srwi r4, r3, 31
    srawi r0, r0, 5
    add r3, r3, r4
    mulli r4, r3, 0x64
    srwi r3, r0, 31
    add r3, r0, r3
    subi r0, r3, 0x1
    subf r3, r4, r5
    slwi r0, r0, 4
    add r3, r3, r0
    subi r0, r3, 0x1
lbl_fn_80444B64_00001368:
    mr r3, r0
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80444BE8(void)
{
    nofralloc
    cmpwi r4, 0x0
    li r3, 0x0
    bne lbl_fn_80444BE8_00001390
    li r3, 0x0
    blr
lbl_fn_80444BE8_00001390:
    lha r5, 0xbe(r4)
    cmpwi r5, 0x0
    blelr
    lis r3, 0x51ec
    subi r0, r3, 0x7ae1
    mulhw r0, r0, r5
    srawi r3, r0, 5
    srwi r4, r3, 31
    srawi r0, r0, 5
    add r3, r3, r4
    mulli r4, r3, 0x64
    srwi r3, r0, 31
    add r3, r0, r3
    subi r0, r3, 0x1
    subf r3, r4, r5
    slwi r0, r0, 4
    add r3, r3, r0
    subi r3, r3, 0x1
    blr
}

asm void fn_80444C48(void)
{
    nofralloc
    li r3, 0x58
    blr
}

asm void fn_80444C50(void)
{
    nofralloc
    slwi r0, r5, 28
    srwi r6, r5, 31
    subf r0, r6, r0
    stwu r1, -0x20(r1)
    rotlwi r4, r0, 4
    lis r7, 0x4330
    srawi r0, r5, 4
    stw r7, 0x8(r1)
    add r4, r4, r6
    lis r6, lbl_80754750@ha
    addze r8, r0
    stw r7, 0x10(r1)
    xoris r0, r4, 0x8000
    lfd f4, lbl_80754750@l(r6)
    stw r0, 0xc(r1)
    xoris r5, r8, 0x8000
    addi r4, r4, 0x1
    addi r0, r8, 0x1
    lfd f0, 0x8(r1)
    xoris r4, r4, 0x8000
    stw r5, 0x14(r1)
    xoris r0, r0, 0x8000
    fsubs f1, f0, f4
    lfs f5, lbl_80886AEC
    lfd f0, 0x10(r1)
    stw r4, 0xc(r1)
    fmuls f3, f1, f5
    fsubs f2, f0, f4
    stw r0, 0x14(r1)
    lfd f1, 0x8(r1)
    lfd f0, 0x10(r1)
    fsubs f1, f1, f4
    stfs f3, 0x0(r3)
    fsubs f0, f0, f4
    fmuls f2, f2, f5
    fmuls f1, f1, f5
    fmuls f0, f0, f5
    stfs f2, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f0, 0xc(r3)
    addi r1, r1, 0x20
    blr
}

asm void fn_80444CF8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r6
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r3
    mr r3, r4
    bl fn_80211480
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80444CF8_000014E8
    cmpwi r28, 0x0
    beq lbl_fn_80444CF8_000014E8
    lwz r0, lbl_8087F1E4
    cmpwi r0, 0x0
    beq lbl_fn_80444CF8_000014E8
    lwz r0, 0x8(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80444CF8_000014F0
lbl_fn_80444CF8_000014E8:
    li r3, 0x0
    b lbl_fn_80444CF8_00001670
lbl_fn_80444CF8_000014F0:
    lwz r3, 0x4(r3)
    bl fn_80206B9C
    cmpwi r3, 0x0
    beq lbl_fn_80444CF8_00001590
    cmpwi r30, 0x0
    beq lbl_fn_80444CF8_00001534
    lwz r4, lbl_8087F1E4
    mr r3, r28
    lwz r4, 0xa0c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80444CF8_00001520
    b lbl_fn_80444CF8_00001524
lbl_fn_80444CF8_00001520:
    la r4, lbl_808813D0
lbl_fn_80444CF8_00001524:
    lwz r5, 0x8(r31)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80444CF8_0000166C
lbl_fn_80444CF8_00001534:
    lwz r3, 0x4(r31)
    bl fn_80206C50
    cmpwi r3, 0x0
    beq lbl_fn_80444CF8_0000166C
    lwz r3, 0xb8(r3)
    lwz r4, lbl_8087F1E4
    addi r0, r3, 0xeb
    slwi r0, r0, 3
    add r3, r4, r0
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    beq lbl_fn_80444CF8_00001568
    b lbl_fn_80444CF8_0000156C
lbl_fn_80444CF8_00001568:
    la r5, lbl_808813D0
lbl_fn_80444CF8_0000156C:
    lwz r4, 0x754(r4)
    mr r3, r28
    cmpwi r4, 0x0
    beq lbl_fn_80444CF8_00001580
    b lbl_fn_80444CF8_00001584
lbl_fn_80444CF8_00001580:
    la r4, lbl_808813D0
lbl_fn_80444CF8_00001584:
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80444CF8_0000166C
lbl_fn_80444CF8_00001590:
    lwz r3, 0x4(r31)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_80444CF8_000015CC
    lwz r4, lbl_8087F1E4
    mr r3, r28
    lwz r4, 0xa0c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80444CF8_000015B8
    b lbl_fn_80444CF8_000015BC
lbl_fn_80444CF8_000015B8:
    la r4, lbl_808813D0
lbl_fn_80444CF8_000015BC:
    lwz r5, 0x8(r31)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80444CF8_0000166C
lbl_fn_80444CF8_000015CC:
    lwz r0, 0x4(r31)
    cmpwi r0, 0x2714
    beq lbl_fn_80444CF8_000015E0
    cmpwi r0, 0x2719
    bne lbl_fn_80444CF8_0000160C
lbl_fn_80444CF8_000015E0:
    lwz r4, lbl_8087F1E4
    mr r3, r28
    lwz r4, 0xa1c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80444CF8_000015F8
    b lbl_fn_80444CF8_000015FC
lbl_fn_80444CF8_000015F8:
    la r4, lbl_808813D0
lbl_fn_80444CF8_000015FC:
    mr r5, r29
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80444CF8_0000166C
lbl_fn_80444CF8_0000160C:
    cmpwi r29, 0x1
    bne lbl_fn_80444CF8_00001640
    lwz r4, lbl_8087F1E4
    mr r3, r28
    lwz r4, 0xa0c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80444CF8_0000162C
    b lbl_fn_80444CF8_00001630
lbl_fn_80444CF8_0000162C:
    la r4, lbl_808813D0
lbl_fn_80444CF8_00001630:
    lwz r5, 0x8(r31)
    crclr 6
    bl fn_800DD3FC
    b lbl_fn_80444CF8_0000166C
lbl_fn_80444CF8_00001640:
    lwz r4, lbl_8087F1E4
    mr r3, r28
    lwz r4, 0xa14(r4)
    cmpwi r4, 0x0
    beq lbl_fn_80444CF8_00001658
    b lbl_fn_80444CF8_0000165C
lbl_fn_80444CF8_00001658:
    la r4, lbl_808813D0
lbl_fn_80444CF8_0000165C:
    lwz r5, 0x8(r31)
    mr r6, r29
    crclr 6
    bl fn_800DD3FC
lbl_fn_80444CF8_0000166C:
    li r3, 0x1
lbl_fn_80444CF8_00001670:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80444EFC(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x44(r1)
    stfd f31, 0x30(r1)
    psq_st f31, 0x38(r1), 0, 0
    stw r31, 0x2c(r1)
    li r31, 0x0
    stw r30, 0x28(r1)
    li r30, 0x0
    bne lbl_fn_80444EFC_000016D4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_000016D0
    lwz r3, 0x48(r3)
    b lbl_fn_80444EFC_000016D4
lbl_fn_80444EFC_000016D0:
    li r3, 0x0
lbl_fn_80444EFC_000016D4:
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_000016E4
    lwz r31, 0x874(r3)
    b lbl_fn_80444EFC_0000174C
lbl_fn_80444EFC_000016E4:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_00001704
    lwz r3, 0x10d4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_00001704
    lwz r31, 0x58(r3)
    b lbl_fn_80444EFC_0000174C
lbl_fn_80444EFC_00001704:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_0000174C
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80444EFC_0000174C
    lwz r0, -0x24e8(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80444EFC_0000174C
    lwz r4, -0x24e4(r3)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_00001748
    lwz r31, 0x58(r3)
    b lbl_fn_80444EFC_0000174C
lbl_fn_80444EFC_00001748:
    li r31, 0x0
lbl_fn_80444EFC_0000174C:
    lwz r3, lbl_8087F430
    lfs f31, lbl_80886AE8
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_0000178C
    lwz r4, 0x10d0(r3)
    lis r3, 0x9
    addi r30, r3, 0x27c0
    neg r0, r4
    andc r3, r0, r4
    srawi r0, r3, 31
    and r0, r4, r0
    cmpw r0, r30
    bge lbl_fn_80444EFC_000017EC
    srawi r0, r3, 31
    and r30, r4, r0
    b lbl_fn_80444EFC_000017EC
lbl_fn_80444EFC_0000178C:
    lwz r3, lbl_8087F4F0
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80444EFC_000017EC
    lwz r0, -0x24e8(r3)
    cmpwi r0, 0x2
    bne lbl_fn_80444EFC_000017EC
    lwz r4, -0x24e4(r3)
    li r3, 0x2
    bl fn_802085E0
    cmpwi r3, 0x0
    beq lbl_fn_80444EFC_000017EC
    lwz r4, 0x4(r3)
    lis r3, 0x9
    addi r30, r3, 0x27c0
    neg r0, r4
    andc r3, r0, r4
    srawi r0, r3, 31
    and r0, r4, r0
    cmpw r0, r30
    bge lbl_fn_80444EFC_000017EC
    srawi r0, r3, 31
    and r30, r4, r0
lbl_fn_80444EFC_000017EC:
    cmpwi r30, 0x0
    ble lbl_fn_80444EFC_00001820
    lis r4, 0x14f9
    lis r3, lbl_80754730@ha
    subi r0, r4, 0x4a77
    mulhw r0, r0, r30
    addi r3, r3, lbl_80754730@l
    srawi r0, r0, 13
    srwi r4, r0, 31
    add r0, r0, r4
    slwi r0, r0, 2
    lfsx f0, r3, r0
    fmuls f31, f31, f0
lbl_fn_80444EFC_00001820:
    bl fn_80680CF8
    lis r5, 0x4178
    lis r4, 0x4330
    addi r0, r5, 0x749f
    stw r4, 0x8(r1)
    mulhw r6, r0, r3
    lis r5, lbl_80754750@ha
    slwi r0, r31, 2
    lfd f4, lbl_80754750@l(r5)
    lfs f2, lbl_80886AF4
    subf r0, r31, r0
    srawi r5, r6, 8
    xoris r0, r0, 0x8000
    srwi r6, r5, 31
    stw r0, 0x14(r1)
    add r0, r5, r6
    lfs f1, lbl_80886AF0
    mulli r0, r0, 0x3e9
    stw r4, 0x10(r1)
    lfd f0, 0x10(r1)
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0xc(r1)
    fsubs f0, f0, f4
    lfd f3, 0x8(r1)
    fsubs f3, f3, f4
    fdivs f2, f3, f2
    fmadds f1, f1, f2, f1
    fmuls f0, f0, f1
    fmuls f0, f31, f0
    psq_l f31, 0x38(r1), 0, 0
    lfd f31, 0x30(r1)
    lwz r31, 0x2c(r1)
    fctiwz f0, f0
    lwz r30, 0x28(r1)
    lwz r0, 0x44(r1)
    stfd f0, 0x18(r1)
    lwz r3, 0x1c(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80445130(void)
{
    nofralloc
    stwu r1, -0x12b0(r1)
    mflr r0
    stw r0, 0x12b4(r1)
    li r0, 0x12a8
    addi r11, r1, 0x12a0
    stfd f31, 0x12a0(r1)
    psq_stx f31, r1, r0, 0, 0
    bl _savegpr_18
    addi r9, r1, 0x68
    addi r0, r1, 0x125c
    cmplw r9, r0
    li r8, 0x0
    li r7, 0x1
    li r0, 0xa
    stw r8, 0x58(r1)
    mr r29, r3
    mr r30, r4
    mr r31, r5
    stw r8, 0x5c(r1)
    mr r23, r6
    sth r7, 0x60(r1)
    sth r0, 0x62(r1)
    stw r8, 0x64(r1)
    bge lbl_fn_80445130_00001A40
    addi r6, r1, 0x11fc
    li r0, 0x0
    li r3, 0x0
    bgt lbl_fn_80445130_00001938
    li r3, 0x1
lbl_fn_80445130_00001938:
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001944
    li r0, 0x1
lbl_fn_80445130_00001944:
    cmpwi r0, 0x0
    beq lbl_fn_80445130_000019FC
    addi r3, r6, 0x5f
    li r0, 0x60
    subf r3, r9, r3
    li r5, 0x0
    divwu r3, r3, r0
    li r4, 0x1
    li r0, 0xa
    mtctr r3
    cmplw r9, r6
    bge lbl_fn_80445130_000019FC
lbl_fn_80445130_00001974:
    stw r5, 0x0(r9)
    sth r4, 0x4(r9)
    sth r0, 0x6(r9)
    stw r5, 0x8(r9)
    stw r5, 0xc(r9)
    sth r4, 0x10(r9)
    sth r0, 0x12(r9)
    stw r5, 0x14(r9)
    stw r5, 0x18(r9)
    sth r4, 0x1c(r9)
    sth r0, 0x1e(r9)
    stw r5, 0x20(r9)
    stw r5, 0x24(r9)
    sth r4, 0x28(r9)
    sth r0, 0x2a(r9)
    stw r5, 0x2c(r9)
    stw r5, 0x30(r9)
    sth r4, 0x34(r9)
    sth r0, 0x36(r9)
    stw r5, 0x38(r9)
    stw r5, 0x3c(r9)
    sth r4, 0x40(r9)
    sth r0, 0x42(r9)
    stw r5, 0x44(r9)
    stw r5, 0x48(r9)
    sth r4, 0x4c(r9)
    sth r0, 0x4e(r9)
    stw r5, 0x50(r9)
    stw r5, 0x54(r9)
    sth r4, 0x58(r9)
    sth r0, 0x5a(r9)
    stw r5, 0x5c(r9)
    addi r9, r9, 0x60
    bdnz lbl_fn_80445130_00001974
lbl_fn_80445130_000019FC:
    addi r4, r1, 0x125c
    li r0, 0xc
    addi r3, r4, 0xb
    li r6, 0x0
    subf r3, r9, r3
    li r5, 0x1
    divwu r3, r3, r0
    li r0, 0xa
    mtctr r3
    cmplw r9, r4
    bge lbl_fn_80445130_00001A40
lbl_fn_80445130_00001A28:
    stw r6, 0x0(r9)
    sth r5, 0x4(r9)
    sth r0, 0x6(r9)
    stw r6, 0x8(r9)
    addi r9, r9, 0xc
    bdnz lbl_fn_80445130_00001A28
lbl_fn_80445130_00001A40:
    li r26, 0x0
    bl fn_80210AC4
    lwz r5, 0x0(r30)
    mr r25, r3
    li r27, 0x0
    li r28, 0x0
    subi r0, r5, 0x2711
    li r24, 0x1
    cmplwi r0, 0x9
    bgt lbl_fn_80445130_000025D4
    lis r3, jumptable_8078F2F8@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_8078F2F8@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r6, 0x0(r31)
    mr r3, r29
    mr r7, r23
    addi r4, r1, 0x58
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    addi r18, r1, 0x58
    li r23, 0x0
    b lbl_fn_80445130_00001B38
lbl_fn_80445130_00001AA8:
    lwz r3, lbl_8087F430
    li r19, -0x1
    lwz r22, 0x4(r18)
    li r20, -0x1
    cmpwi r3, 0x0
    li r21, -0x1
    beq lbl_fn_80445130_00001AE8
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001B10
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r19, 0x48(r3)
    lwz r20, 0x4c(r3)
    lwz r21, 0x50(r3)
    b lbl_fn_80445130_00001B10
lbl_fn_80445130_00001AE8:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001B10
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_00001B10
    lwz r19, -0x24e8(r3)
    lwz r20, -0x24e4(r3)
    lwz r21, -0x24e0(r3)
lbl_fn_80445130_00001B10:
    mr r3, r22
    mr r4, r19
    mr r5, r20
    mr r6, r21
    bl fn_80213B78
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001B30
    addi r28, r28, 0x1
lbl_fn_80445130_00001B30:
    addi r18, r18, 0xc
    addi r23, r23, 0x1
lbl_fn_80445130_00001B38:
    lwz r0, 0x58(r1)
    cmplw r23, r0
    blt lbl_fn_80445130_00001AA8
    lwz r0, 0x0(r30)
    lfs f31, 0x128(r25)
    cmpwi r0, 0x271a
    bne lbl_fn_80445130_00001B5C
    lfs f0, lbl_80886AF8
    fmuls f31, f31, f0
lbl_fn_80445130_00001B5C:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x1260(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80754750@ha
    lfd f3, lbl_80754750@l(r4)
    lfs f1, lbl_80886AF4
    lfs f0, lbl_80886AFC
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1264(r1)
    lfd f2, 0x1260(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_80445130_00001BBC
    li r27, 0x1
lbl_fn_80445130_00001BBC:
    cmpwi r27, 0x0
    beq lbl_fn_80445130_00001CE4
    cmpwi r28, 0x0
    ble lbl_fn_80445130_00001DF8
    addi r23, r1, 0x5c
    lis r27, 0x2aab
    mr r28, r23
    mr r22, r23
    b lbl_fn_80445130_00001CCC
lbl_fn_80445130_00001BE0:
    lwz r3, lbl_8087F430
    li r25, -0x1
    lwz r19, 0x0(r23)
    li r21, -0x1
    cmpwi r3, 0x0
    li r20, -0x1
    beq lbl_fn_80445130_00001C20
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001C48
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r25, 0x48(r3)
    lwz r21, 0x4c(r3)
    lwz r20, 0x50(r3)
    b lbl_fn_80445130_00001C48
lbl_fn_80445130_00001C20:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001C48
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_00001C48
    lwz r25, -0x24e8(r3)
    lwz r21, -0x24e4(r3)
    lwz r20, -0x24e0(r3)
lbl_fn_80445130_00001C48:
    mr r3, r19
    mr r4, r25
    mr r5, r21
    mr r6, r20
    bl fn_80213B78
    cmpwi r3, 0x0
    bne lbl_fn_80445130_00001CC8
    subf r3, r28, r23
    subi r0, r27, 0x5555
    mulhw r0, r0, r3
    addi r4, r1, 0x58
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0xc
    add r4, r4, r0
    b lbl_fn_80445130_00001CB0
lbl_fn_80445130_00001C8C:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    stw r0, 0x4(r4)
    lha r0, 0x14(r4)
    sth r0, 0x8(r4)
    lha r0, 0x16(r4)
    sth r0, 0xa(r4)
    lwz r0, 0x18(r4)
    stwu r0, 0xc(r4)
lbl_fn_80445130_00001CB0:
    lwz r3, 0x58(r1)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80445130_00001C8C
    stw r0, 0x58(r1)
    b lbl_fn_80445130_00001CCC
lbl_fn_80445130_00001CC8:
    addi r23, r23, 0xc
lbl_fn_80445130_00001CCC:
    lwz r0, 0x58(r1)
    mulli r0, r0, 0xc
    add r0, r22, r0
    cmplw r23, r0
    bne lbl_fn_80445130_00001BE0
    b lbl_fn_80445130_00001DF8
lbl_fn_80445130_00001CE4:
    addi r23, r1, 0x5c
    lis r27, 0x2aab
    mr r28, r23
    mr r22, r23
    b lbl_fn_80445130_00001DE4
lbl_fn_80445130_00001CF8:
    lwz r3, lbl_8087F430
    li r25, -0x1
    lwz r19, 0x0(r23)
    li r21, -0x1
    cmpwi r3, 0x0
    li r20, -0x1
    beq lbl_fn_80445130_00001D38
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001D60
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r25, 0x48(r3)
    lwz r21, 0x4c(r3)
    lwz r20, 0x50(r3)
    b lbl_fn_80445130_00001D60
lbl_fn_80445130_00001D38:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001D60
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_00001D60
    lwz r25, -0x24e8(r3)
    lwz r21, -0x24e4(r3)
    lwz r20, -0x24e0(r3)
lbl_fn_80445130_00001D60:
    mr r3, r19
    mr r4, r25
    mr r5, r21
    mr r6, r20
    bl fn_80213B78
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00001DE0
    subf r3, r28, r23
    subi r0, r27, 0x5555
    mulhw r0, r0, r3
    addi r4, r1, 0x58
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0xc
    add r4, r4, r0
    b lbl_fn_80445130_00001DC8
lbl_fn_80445130_00001DA4:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    stw r0, 0x4(r4)
    lha r0, 0x14(r4)
    sth r0, 0x8(r4)
    lha r0, 0x16(r4)
    sth r0, 0xa(r4)
    lwz r0, 0x18(r4)
    stwu r0, 0xc(r4)
lbl_fn_80445130_00001DC8:
    lwz r3, 0x58(r1)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80445130_00001DA4
    stw r0, 0x58(r1)
    b lbl_fn_80445130_00001DE4
lbl_fn_80445130_00001DE0:
    addi r23, r23, 0xc
lbl_fn_80445130_00001DE4:
    lwz r0, 0x58(r1)
    mulli r0, r0, 0xc
    add r0, r22, r0
    cmplw r23, r0
    bne lbl_fn_80445130_00001CF8
lbl_fn_80445130_00001DF8:
    lwz r3, 0x58(r1)
    li r6, 0x0
    lwz r5, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    cmplwi r3, 0x8
    subi r3, r3, 0x8
    ble lbl_fn_80445130_00001E7C
    addi r0, r3, 0x7
    addi r4, r1, 0x58
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_80445130_00001E7C
lbl_fn_80445130_00001E30:
    lha r3, 0xa(r4)
    addi r6, r6, 0x8
    lha r0, 0x16(r4)
    add r26, r26, r3
    lha r3, 0x22(r4)
    add r26, r26, r0
    lha r0, 0x2e(r4)
    add r26, r26, r3
    lha r3, 0x3a(r4)
    add r26, r26, r0
    lha r0, 0x46(r4)
    add r26, r26, r3
    lha r3, 0x52(r4)
    add r26, r26, r0
    lha r0, 0x5e(r4)
    add r26, r26, r3
    addi r4, r4, 0x60
    add r26, r26, r0
    bdnz lbl_fn_80445130_00001E30
lbl_fn_80445130_00001E7C:
    mulli r3, r6, 0xc
    addi r4, r1, 0x58
    subf r0, r6, r5
    add r4, r4, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80445130_000025D8
lbl_fn_80445130_00001E98:
    lha r0, 0xa(r4)
    addi r4, r4, 0xc
    add r26, r26, r0
    bdnz lbl_fn_80445130_00001E98
    b lbl_fn_80445130_000025D8
    lwz r6, 0x0(r31)
    mr r3, r29
    mr r7, r23
    addi r4, r1, 0x58
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    lwz r3, 0x58(r1)
    li r6, 0x0
    lwz r5, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    cmplwi r3, 0x8
    subi r3, r3, 0x8
    ble lbl_fn_80445130_00001F4C
    addi r0, r3, 0x7
    addi r4, r1, 0x58
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_80445130_00001F4C
lbl_fn_80445130_00001F00:
    lha r3, 0xa(r4)
    addi r6, r6, 0x8
    lha r0, 0x16(r4)
    add r26, r26, r3
    lha r3, 0x22(r4)
    add r26, r26, r0
    lha r0, 0x2e(r4)
    add r26, r26, r3
    lha r3, 0x3a(r4)
    add r26, r26, r0
    lha r0, 0x46(r4)
    add r26, r26, r3
    lha r3, 0x52(r4)
    add r26, r26, r0
    lha r0, 0x5e(r4)
    add r26, r26, r3
    addi r4, r4, 0x60
    add r26, r26, r0
    bdnz lbl_fn_80445130_00001F00
lbl_fn_80445130_00001F4C:
    mulli r3, r6, 0xc
    addi r4, r1, 0x58
    subf r0, r6, r5
    add r4, r4, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80445130_000025D8
lbl_fn_80445130_00001F68:
    lha r0, 0xa(r4)
    addi r4, r4, 0xc
    add r26, r26, r0
    bdnz lbl_fn_80445130_00001F68
    b lbl_fn_80445130_000025D8
    lwz r6, 0x0(r31)
    mr r3, r29
    mr r7, r23
    addi r4, r1, 0x58
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    addi r18, r1, 0x58
    li r23, 0x0
    b lbl_fn_80445130_00002034
lbl_fn_80445130_00001FA4:
    lwz r3, lbl_8087F430
    li r22, -0x1
    lwz r19, 0x4(r18)
    li r21, -0x1
    cmpwi r3, 0x0
    li r20, -0x1
    beq lbl_fn_80445130_00001FE4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_0000200C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r22, 0x48(r3)
    lwz r21, 0x4c(r3)
    lwz r20, 0x50(r3)
    b lbl_fn_80445130_0000200C
lbl_fn_80445130_00001FE4:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_0000200C
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_0000200C
    lwz r22, -0x24e8(r3)
    lwz r21, -0x24e4(r3)
    lwz r20, -0x24e0(r3)
lbl_fn_80445130_0000200C:
    mr r3, r19
    mr r4, r22
    mr r5, r21
    mr r6, r20
    bl fn_80213B78
    cmpwi r3, 0x0
    beq lbl_fn_80445130_0000202C
    addi r28, r28, 0x1
lbl_fn_80445130_0000202C:
    addi r18, r18, 0xc
    addi r23, r23, 0x1
lbl_fn_80445130_00002034:
    lwz r0, 0x58(r1)
    cmplw r23, r0
    blt lbl_fn_80445130_00001FA4
    lwz r0, 0x0(r30)
    lfs f31, 0x12c(r25)
    cmpwi r0, 0x2717
    bne lbl_fn_80445130_00002054
    lfs f31, 0x130(r25)
lbl_fn_80445130_00002054:
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    stw r0, 0x1260(r1)
    mulhw r5, r5, r3
    lis r4, lbl_80754750@ha
    lfd f3, lbl_80754750@l(r4)
    lfs f1, lbl_80886AF4
    lfs f0, lbl_80886AFC
    srawi r0, r5, 8
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e9
    subf r0, r0, r3
    xoris r0, r0, 0x8000
    stw r0, 0x1264(r1)
    lfd f2, 0x1260(r1)
    fsubs f2, f2, f3
    fdivs f1, f2, f1
    fmuls f0, f0, f1
    fcmpo cr0, f31, f0
    ble lbl_fn_80445130_000020B4
    li r27, 0x1
lbl_fn_80445130_000020B4:
    cmpwi r27, 0x0
    beq lbl_fn_80445130_000021DC
    cmpwi r28, 0x0
    ble lbl_fn_80445130_000022F0
    addi r23, r1, 0x5c
    lis r27, 0x2aab
    mr r28, r23
    mr r22, r23
    b lbl_fn_80445130_000021C4
lbl_fn_80445130_000020D8:
    lwz r3, lbl_8087F430
    li r18, -0x1
    lwz r19, 0x0(r23)
    li r21, -0x1
    cmpwi r3, 0x0
    li r20, -0x1
    beq lbl_fn_80445130_00002118
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00002140
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r18, 0x48(r3)
    lwz r21, 0x4c(r3)
    lwz r20, 0x50(r3)
    b lbl_fn_80445130_00002140
lbl_fn_80445130_00002118:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00002140
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_00002140
    lwz r18, -0x24e8(r3)
    lwz r21, -0x24e4(r3)
    lwz r20, -0x24e0(r3)
lbl_fn_80445130_00002140:
    mr r3, r19
    mr r4, r18
    mr r5, r21
    mr r6, r20
    bl fn_80213B78
    cmpwi r3, 0x0
    bne lbl_fn_80445130_000021C0
    subf r3, r28, r23
    subi r0, r27, 0x5555
    mulhw r0, r0, r3
    addi r4, r1, 0x58
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0xc
    add r4, r4, r0
    b lbl_fn_80445130_000021A8
lbl_fn_80445130_00002184:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    stw r0, 0x4(r4)
    lha r0, 0x14(r4)
    sth r0, 0x8(r4)
    lha r0, 0x16(r4)
    sth r0, 0xa(r4)
    lwz r0, 0x18(r4)
    stwu r0, 0xc(r4)
lbl_fn_80445130_000021A8:
    lwz r3, 0x58(r1)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80445130_00002184
    stw r0, 0x58(r1)
    b lbl_fn_80445130_000021C4
lbl_fn_80445130_000021C0:
    addi r23, r23, 0xc
lbl_fn_80445130_000021C4:
    lwz r0, 0x58(r1)
    mulli r0, r0, 0xc
    add r0, r22, r0
    cmplw r23, r0
    bne lbl_fn_80445130_000020D8
    b lbl_fn_80445130_000022F0
lbl_fn_80445130_000021DC:
    addi r23, r1, 0x5c
    lis r28, 0x2aab
    mr r27, r23
    mr r22, r23
    b lbl_fn_80445130_000022DC
lbl_fn_80445130_000021F0:
    lwz r3, lbl_8087F430
    li r21, -0x1
    lwz r18, 0x0(r23)
    li r20, -0x1
    cmpwi r3, 0x0
    li r19, -0x1
    beq lbl_fn_80445130_00002230
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00002258
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r21, 0x48(r3)
    lwz r20, 0x4c(r3)
    lwz r19, 0x50(r3)
    b lbl_fn_80445130_00002258
lbl_fn_80445130_00002230:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_00002258
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_00002258
    lwz r21, -0x24e8(r3)
    lwz r20, -0x24e4(r3)
    lwz r19, -0x24e0(r3)
lbl_fn_80445130_00002258:
    mr r3, r18
    mr r4, r21
    mr r5, r20
    mr r6, r19
    bl fn_80213B78
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000022D8
    subf r3, r27, r23
    subi r0, r28, 0x5555
    mulhw r0, r0, r3
    addi r4, r1, 0x58
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r5, r0, r3
    mulli r0, r5, 0xc
    add r4, r4, r0
    b lbl_fn_80445130_000022C0
lbl_fn_80445130_0000229C:
    lwz r0, 0x10(r4)
    addi r5, r5, 0x1
    stw r0, 0x4(r4)
    lha r0, 0x14(r4)
    sth r0, 0x8(r4)
    lha r0, 0x16(r4)
    sth r0, 0xa(r4)
    lwz r0, 0x18(r4)
    stwu r0, 0xc(r4)
lbl_fn_80445130_000022C0:
    lwz r3, 0x58(r1)
    subi r0, r3, 0x1
    cmplw r5, r0
    blt lbl_fn_80445130_0000229C
    stw r0, 0x58(r1)
    b lbl_fn_80445130_000022DC
lbl_fn_80445130_000022D8:
    addi r23, r23, 0xc
lbl_fn_80445130_000022DC:
    lwz r0, 0x58(r1)
    mulli r0, r0, 0xc
    add r0, r22, r0
    cmplw r23, r0
    bne lbl_fn_80445130_000021F0
lbl_fn_80445130_000022F0:
    addi r3, r1, 0x30
    li r4, 0x0
    li r5, 0x28
    bl memset
    addi r27, r1, 0x58
    addi r28, r1, 0x30
    li r23, 0x0
    b lbl_fn_80445130_000023B0
lbl_fn_80445130_00002310:
    lwz r3, lbl_8087F430
    li r21, -0x1
    lwz r22, 0xc(r27)
    li r20, -0x1
    cmpwi r3, 0x0
    li r19, -0x1
    lwz r18, 0x4(r22)
    beq lbl_fn_80445130_00002354
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_80445130_0000237C
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r21, 0x48(r3)
    lwz r20, 0x4c(r3)
    lwz r19, 0x50(r3)
    b lbl_fn_80445130_0000237C
lbl_fn_80445130_00002354:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_80445130_0000237C
    addis r3, r3, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_0000237C
    lwz r21, -0x24e8(r3)
    lwz r20, -0x24e4(r3)
    lwz r19, -0x24e0(r3)
lbl_fn_80445130_0000237C:
    mr r3, r18
    mr r4, r21
    mr r5, r20
    mr r6, r19
    bl fn_80213B78
    cmpwi r3, 0x0
    lha r0, 0xbc(r22)
    addi r27, r27, 0xc
    addi r23, r23, 0x1
    slwi r4, r0, 2
    lwzx r3, r28, r4
    addi r0, r3, 0x1
    stwx r0, r28, r4
lbl_fn_80445130_000023B0:
    lwz r0, 0x58(r1)
    cmplw r23, r0
    blt lbl_fn_80445130_00002310
    lwz r0, 0x0(r30)
    cmpwi r0, 0x2713
    bne lbl_fn_80445130_00002490
    addi r3, r1, 0x8
    li r4, 0x0
    li r5, 0x28
    bl memset
    li r0, 0x2
    addi r3, r1, 0x30
    addi r4, r1, 0x8
    li r6, 0x0
    mtctr r0
lbl_fn_80445130_000023EC:
    lwz r5, 0x0(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80445130_00002408
    lwz r0, 0x100(r25)
    mulli r0, r0, 0x64
    divw r0, r0, r5
    stw r0, 0x0(r4)
lbl_fn_80445130_00002408:
    lwz r5, 0x4(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80445130_00002424
    lwz r0, 0x104(r25)
    mulli r0, r0, 0x64
    divw r0, r0, r5
    stw r0, 0x4(r4)
lbl_fn_80445130_00002424:
    lwz r5, 0x8(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80445130_00002440
    lwz r0, 0x108(r25)
    mulli r0, r0, 0x64
    divw r0, r0, r5
    stw r0, 0x8(r4)
lbl_fn_80445130_00002440:
    lwz r5, 0xc(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80445130_0000245C
    lwz r0, 0x10c(r25)
    mulli r0, r0, 0x64
    divw r0, r0, r5
    stw r0, 0xc(r4)
lbl_fn_80445130_0000245C:
    lwz r5, 0x10(r3)
    cmpwi r5, 0x0
    ble lbl_fn_80445130_00002478
    lwz r0, 0x110(r25)
    mulli r0, r0, 0x64
    divw r0, r0, r5
    stw r0, 0x10(r4)
lbl_fn_80445130_00002478:
    addi r3, r3, 0x14
    addi r25, r25, 0x14
    addi r4, r4, 0x14
    addi r6, r6, 0x4
    bdnz lbl_fn_80445130_000023EC
    b lbl_fn_80445130_000024BC
lbl_fn_80445130_00002490:
    li r0, 0xa
    stw r0, 0x8(r1)
    stw r0, 0xc(r1)
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    stw r0, 0x18(r1)
    stw r0, 0x1c(r1)
    stw r0, 0x20(r1)
    stw r0, 0x24(r1)
    stw r0, 0x28(r1)
    stw r0, 0x2c(r1)
lbl_fn_80445130_000024BC:
    addi r18, r1, 0x5c
    addi r23, r1, 0x8
    li r19, 0x0
    b lbl_fn_80445130_000024F4
lbl_fn_80445130_000024CC:
    lwz r3, 0x0(r18)
    bl fn_80211480
    lha r0, 0xbc(r3)
    addi r19, r19, 0x1
    slwi r0, r0, 2
    lwzx r0, r23, r0
    sth r0, 0x6(r18)
    addi r18, r18, 0xc
    extsh r0, r0
    add r26, r26, r0
lbl_fn_80445130_000024F4:
    lwz r0, 0x58(r1)
    cmplw r19, r0
    blt lbl_fn_80445130_000024CC
    b lbl_fn_80445130_000025D8
    lwz r6, 0x0(r31)
    mr r3, r29
    mr r7, r23
    addi r4, r1, 0x58
    bl fn_80445F44
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    lwz r3, 0x58(r1)
    li r6, 0x0
    lwz r5, 0x58(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80445130_000025D8
    cmplwi r3, 0x8
    subi r3, r3, 0x8
    ble lbl_fn_80445130_000025A4
    addi r0, r3, 0x7
    addi r4, r1, 0x58
    srwi r0, r0, 3
    mtctr r0
    cmplwi r3, 0x0
    ble lbl_fn_80445130_000025A4
lbl_fn_80445130_00002558:
    lha r3, 0xa(r4)
    addi r6, r6, 0x8
    lha r0, 0x16(r4)
    add r26, r26, r3
    lha r3, 0x22(r4)
    add r26, r26, r0
    lha r0, 0x2e(r4)
    add r26, r26, r3
    lha r3, 0x3a(r4)
    add r26, r26, r0
    lha r0, 0x46(r4)
    add r26, r26, r3
    lha r3, 0x52(r4)
    add r26, r26, r0
    lha r0, 0x5e(r4)
    add r26, r26, r3
    addi r4, r4, 0x60
    add r26, r26, r0
    bdnz lbl_fn_80445130_00002558
lbl_fn_80445130_000025A4:
    mulli r3, r6, 0xc
    addi r4, r1, 0x58
    subf r0, r6, r5
    add r4, r4, r3
    mtctr r0
    cmplw r6, r5
    bge lbl_fn_80445130_000025D8
lbl_fn_80445130_000025C0:
    lha r0, 0xa(r4)
    addi r4, r4, 0xc
    add r26, r26, r0
    bdnz lbl_fn_80445130_000025C0
    b lbl_fn_80445130_000025D8
lbl_fn_80445130_000025D4:
    li r24, 0x0
lbl_fn_80445130_000025D8:
    cmpwi r24, 0x0
    beq lbl_fn_80445130_00002650
    cmpwi r26, 0x0
    ble lbl_fn_80445130_0000263C
    bl fn_80680CF8
    divw r0, r3, r26
    lwz r5, 0x58(r1)
    addi r4, r1, 0x5c
    mullw r0, r0, r26
    subf r3, r0, r3
    mtctr r5
    cmplwi r5, 0x0
    ble lbl_fn_80445130_00002650
lbl_fn_80445130_0000260C:
    lha r0, 0x6(r4)
    cmpw r3, r0
    bge lbl_fn_80445130_0000262C
    lwz r0, 0x0(r4)
    stw r0, 0x0(r30)
    lha r0, 0x4(r4)
    stw r0, 0x0(r31)
    b lbl_fn_80445130_00002650
lbl_fn_80445130_0000262C:
    subf r3, r0, r3
    addi r4, r4, 0xc
    bdnz lbl_fn_80445130_0000260C
    b lbl_fn_80445130_00002650
lbl_fn_80445130_0000263C:
    li r0, 0x2714
    stw r0, 0x0(r30)
    li r3, 0x0
    bl fn_80444EFC
    stw r3, 0x0(r31)
lbl_fn_80445130_00002650:
    addis r3, r29, 0x1
    lwz r0, -0x24f4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_000026B0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80445130_0000267C
    li r4, 0x11b
    bl fn_80370174
    cmpwi r3, 0x0
    bgt lbl_fn_80445130_00002698
lbl_fn_80445130_0000267C:
    addis r3, r29, 0x1
    lwz r0, -0x24ec(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80445130_000026B0
    lwz r0, -0x24d8(r3)
    cmpwi r0, 0x0
    ble lbl_fn_80445130_000026B0
lbl_fn_80445130_00002698:
    lwz r3, 0x0(r30)
    subi r0, r3, 0x137
    cmplwi r0, 0x1
    bgt lbl_fn_80445130_000026B0
    li r0, 0x139
    stw r0, 0x0(r30)
lbl_fn_80445130_000026B0:
    li r0, 0x12a8
    mr r3, r24
    psq_lx f31, r1, r0, 0, 0
    lfd f31, 0x12a0(r1)
    addi r11, r1, 0x12a0
    bl _restgpr_18
    lwz r0, 0x12b4(r1)
    mtlr r0
    addi r1, r1, 0x12b0
    blr
}
