#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_800A5584(void);
extern void fn_800A55D4(void);
extern void fn_800A56A8(void);
extern void fn_800A5870(void);
extern void fn_800A58D0(void);
extern void fn_80122C70(void);
extern void fn_8017C974(void);
extern void fn_805F8E70(void);
extern void fn_805F9750(void);
extern void fn_805F9940(void);
extern void fn_8068AEA4(void);

/* External data declarations */
extern u8 jumptable_8077A5A8[];
extern u8 lbl_8077A3B0[];

/* Small data declarations */
extern u32 lbl_8087EF70;
extern u32 lbl_8087EFB4;
extern u32 lbl_8087F430;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087F9C0;
extern u32 lbl_8087F9F8;
extern u32 lbl_80881818;
extern u32 lbl_80881830;
extern u32 lbl_80881838;
extern u32 lbl_8088183C;
extern u32 lbl_80881840;
extern u32 lbl_80881844;
extern u32 lbl_80881848;
extern u32 lbl_8088184C;
extern u32 lbl_80881850;

/* Function declarations */
void fn_80123C7C(void);
void fn_801240B4(void);
void fn_8012476C(void);
void fn_801248DC(void);
void fn_80124B60(void);
void fn_80124BE4(void);
void fn_80124BFC(void);
void fn_80124C6C(void);
void fn_80124FFC(void);

asm void fn_80123C7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x27
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    ble lbl_fn_80123C7C_000002B8
    cmpwi r4, 0x4
    beq lbl_fn_80123C7C_00000038
    cmpwi r4, 0x12
    beq lbl_fn_80123C7C_000000E0
    cmpwi r4, 0x23
    beq lbl_fn_80123C7C_00000220
    b lbl_fn_80123C7C_00000380
lbl_fn_80123C7C_00000038:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_80123C7C_000000B8
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000000AC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_000000AC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000000AC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_000000AC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_0000008C
    lwz r3, 0x48(r3)
    b lbl_fn_80123C7C_00000090
lbl_fn_80123C7C_0000008C:
    li r3, 0x0
lbl_fn_80123C7C_00000090:
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000000AC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80123C7C_000000B0
lbl_fn_80123C7C_000000AC:
    li r0, 0x0
lbl_fn_80123C7C_000000B0:
    cmpwi r0, 0x0
    beq lbl_fn_80123C7C_000000C0
lbl_fn_80123C7C_000000B8:
    li r3, 0x0
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_000000C0:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_000000E0:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_00000188
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000154
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_00000154
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000154
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_00000154
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000134
    lwz r3, 0x48(r3)
    b lbl_fn_80123C7C_00000138
lbl_fn_80123C7C_00000134:
    li r3, 0x0
lbl_fn_80123C7C_00000138:
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000154
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80123C7C_00000158
lbl_fn_80123C7C_00000154:
    li r0, 0x0
lbl_fn_80123C7C_00000158:
    cmpwi r0, 0x0
    beq lbl_fn_80123C7C_00000168
    li r3, 0x0
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000168:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x9
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000188:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000001EC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_000001EC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000001EC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_000001EC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000001CC
    lwz r3, 0x48(r3)
    b lbl_fn_80123C7C_000001D0
lbl_fn_80123C7C_000001CC:
    li r3, 0x0
lbl_fn_80123C7C_000001D0:
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000001EC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80123C7C_000001F0
lbl_fn_80123C7C_000001EC:
    li r0, 0x0
lbl_fn_80123C7C_000001F0:
    cmpwi r0, 0x0
    beq lbl_fn_80123C7C_00000200
    li r3, 0x0
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000200:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x6
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000220:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000284
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_00000284
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000284
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_00000284
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000264
    lwz r3, 0x48(r3)
    b lbl_fn_80123C7C_00000268
lbl_fn_80123C7C_00000264:
    li r3, 0x0
lbl_fn_80123C7C_00000268:
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_00000284
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80123C7C_00000288
lbl_fn_80123C7C_00000284:
    li r0, 0x0
lbl_fn_80123C7C_00000288:
    cmpwi r0, 0x0
    beq lbl_fn_80123C7C_00000298
    li r3, 0x0
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000298:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_000002B8:
    lwz r5, lbl_8087F9C0
    lwz r5, 0x80(r5)
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_80123C7C_000002D8
    cntlzw r0, r5
    srwi r3, r0, 5
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_000002D8:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_80123C7C_00000358
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_0000034C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_0000034C
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_0000034C
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_0000034C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_0000032C
    lwz r3, 0x48(r3)
    b lbl_fn_80123C7C_00000330
lbl_fn_80123C7C_0000032C:
    li r3, 0x0
lbl_fn_80123C7C_00000330:
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_0000034C
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80123C7C_00000350
lbl_fn_80123C7C_0000034C:
    li r0, 0x0
lbl_fn_80123C7C_00000350:
    cmpwi r0, 0x0
    beq lbl_fn_80123C7C_00000360
lbl_fn_80123C7C_00000358:
    li r3, 0x0
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000360:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000380:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_80123C7C_00000400
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000003F4
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_000003F4
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000003F4
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80123C7C_000003F4
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000003D4
    lwz r3, 0x48(r3)
    b lbl_fn_80123C7C_000003D8
lbl_fn_80123C7C_000003D4:
    li r3, 0x0
lbl_fn_80123C7C_000003D8:
    cmpwi r3, 0x0
    beq lbl_fn_80123C7C_000003F4
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_80123C7C_000003F8
lbl_fn_80123C7C_000003F4:
    li r0, 0x0
lbl_fn_80123C7C_000003F8:
    cmpwi r0, 0x0
    beq lbl_fn_80123C7C_00000408
lbl_fn_80123C7C_00000400:
    li r3, 0x0
    b lbl_fn_80123C7C_00000424
lbl_fn_80123C7C_00000408:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A5584
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_80123C7C_00000424:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801240B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    subi r0, r4, 0x27
    cmplwi r0, 0x1
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    mr r30, r4
    ble lbl_fn_801240B4_00000970
    cmpwi r4, 0x4
    beq lbl_fn_801240B4_0000048C
    cmpwi r4, 0x7
    beq lbl_fn_801240B4_00000534
    cmpwi r4, 0x24
    beq lbl_fn_801240B4_00000534
    cmpwi r4, 0x12
    beq lbl_fn_801240B4_00000744
    cmpwi r4, 0x23
    beq lbl_fn_801240B4_000008BC
    b lbl_fn_801240B4_00000A34
lbl_fn_801240B4_0000048C:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801240B4_0000050C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000500
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000500
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000500
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000500
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000004E0
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_000004E4
lbl_fn_801240B4_000004E0:
    li r3, 0x0
lbl_fn_801240B4_000004E4:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000500
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000504
lbl_fn_801240B4_00000500:
    li r0, 0x0
lbl_fn_801240B4_00000504:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000514
lbl_fn_801240B4_0000050C:
    li r3, 0x0
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000514:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000534:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000694
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000005AC
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_000005AC
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000005AC
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_000005AC
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_0000058C
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_00000590
lbl_fn_801240B4_0000058C:
    li r3, 0x0
lbl_fn_801240B4_00000590:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000005AC
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_000005B0
lbl_fn_801240B4_000005AC:
    li r0, 0x0
lbl_fn_801240B4_000005B0:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_000005C0
    li r3, 0x0
    b lbl_fn_801240B4_000005DC
lbl_fn_801240B4_000005C0:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0xb
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_801240B4_000005DC:
    cmpwi r3, 0x0
    bne lbl_fn_801240B4_00000AD8
    mr r3, r31
    mr r4, r30
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801240B4_0000066C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000660
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000660
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000660
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000660
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000640
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_00000644
lbl_fn_801240B4_00000640:
    li r3, 0x0
lbl_fn_801240B4_00000644:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000660
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000664
lbl_fn_801240B4_00000660:
    li r0, 0x0
lbl_fn_801240B4_00000664:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000674
lbl_fn_801240B4_0000066C:
    li r3, 0x0
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000674:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000694:
    mr r3, r31
    mr r4, r30
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801240B4_0000071C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000710
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000710
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000710
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000710
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000006F0
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_000006F4
lbl_fn_801240B4_000006F0:
    li r3, 0x0
lbl_fn_801240B4_000006F4:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000710
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000714
lbl_fn_801240B4_00000710:
    li r0, 0x0
lbl_fn_801240B4_00000714:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000724
lbl_fn_801240B4_0000071C:
    li r3, 0x0
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000724:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000744:
    lwz r3, lbl_8087F9C0
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000808
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000007B8
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_000007B8
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000007B8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_000007B8
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000798
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_0000079C
lbl_fn_801240B4_00000798:
    li r3, 0x0
lbl_fn_801240B4_0000079C:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000007B8
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_000007BC
lbl_fn_801240B4_000007B8:
    li r0, 0x0
lbl_fn_801240B4_000007BC:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_000007CC
    li r0, 0x0
    b lbl_fn_801240B4_000007E8
lbl_fn_801240B4_000007CC:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x9
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801240B4_000007E8:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_801240B4_00000AD8
    lwz r0, 0x0(r31)
    cmpwi r0, 0xa
    blt lbl_fn_801240B4_00000AD8
    li r3, 0x1
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000808:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_0000086C
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_0000086C
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_0000086C
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_0000086C
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_0000084C
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_00000850
lbl_fn_801240B4_0000084C:
    li r3, 0x0
lbl_fn_801240B4_00000850:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_0000086C
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000870
lbl_fn_801240B4_0000086C:
    li r0, 0x0
lbl_fn_801240B4_00000870:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000880
    li r0, 0x0
    b lbl_fn_801240B4_0000089C
lbl_fn_801240B4_00000880:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x6
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801240B4_0000089C:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_801240B4_00000AD8
    lwz r0, 0x0(r31)
    cmpwi r0, 0xa
    blt lbl_fn_801240B4_00000AD8
    li r3, 0x1
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_000008BC:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000920
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000920
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000920
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000920
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000900
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_00000904
lbl_fn_801240B4_00000900:
    li r3, 0x0
lbl_fn_801240B4_00000904:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000920
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000924
lbl_fn_801240B4_00000920:
    li r0, 0x0
lbl_fn_801240B4_00000924:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000934
    li r0, 0x0
    b lbl_fn_801240B4_00000950
lbl_fn_801240B4_00000934:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r0, r0, 31
lbl_fn_801240B4_00000950:
    cmpwi r0, 0x0
    li r3, 0x0
    beq lbl_fn_801240B4_00000AD8
    lwz r0, 0x8(r31)
    cmpwi r0, 0x8
    blt lbl_fn_801240B4_00000AD8
    li r3, 0x1
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000970:
    lwz r5, lbl_8087F9C0
    lwz r5, 0x80(r5)
    subi r0, r5, 0x1
    cmplwi r0, 0x1
    ble lbl_fn_801240B4_0000098C
    li r3, 0x0
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_0000098C:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801240B4_00000A0C
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000A00
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000A00
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000A00
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000A00
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_000009E0
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_000009E4
lbl_fn_801240B4_000009E0:
    li r3, 0x0
lbl_fn_801240B4_000009E4:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000A00
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000A04
lbl_fn_801240B4_00000A00:
    li r0, 0x0
lbl_fn_801240B4_00000A04:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000A14
lbl_fn_801240B4_00000A0C:
    li r3, 0x0
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000A14:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000A34:
    bl fn_80122C70
    cmpwi r3, 0x21
    mr r31, r3
    beq lbl_fn_801240B4_00000AB4
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000AA8
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000AA8
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000AA8
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801240B4_00000AA8
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000A88
    lwz r3, 0x48(r3)
    b lbl_fn_801240B4_00000A8C
lbl_fn_801240B4_00000A88:
    li r3, 0x0
lbl_fn_801240B4_00000A8C:
    cmpwi r3, 0x0
    beq lbl_fn_801240B4_00000AA8
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_801240B4_00000AAC
lbl_fn_801240B4_00000AA8:
    li r0, 0x0
lbl_fn_801240B4_00000AAC:
    cmpwi r0, 0x0
    beq lbl_fn_801240B4_00000ABC
lbl_fn_801240B4_00000AB4:
    li r3, 0x0
    b lbl_fn_801240B4_00000AD8
lbl_fn_801240B4_00000ABC:
    lwz r3, lbl_8087EF70
    mr r5, r31
    li r4, 0x0
    bl fn_800A55D4
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_801240B4_00000AD8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8012476C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r4, 0x22
    stw r0, 0x14(r1)
    bne lbl_fn_8012476C_00000C4C
    lwz r3, lbl_8087F9C0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012476C_00000BB0
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000B78
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012476C_00000B78
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000B78
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012476C_00000B78
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000B58
    lwz r3, 0x48(r3)
    b lbl_fn_8012476C_00000B5C
lbl_fn_8012476C_00000B58:
    li r3, 0x0
lbl_fn_8012476C_00000B5C:
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000B78
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012476C_00000B7C
lbl_fn_8012476C_00000B78:
    li r0, 0x0
lbl_fn_8012476C_00000B7C:
    cmpwi r0, 0x0
    beq lbl_fn_8012476C_00000B8C
    li r3, 0x0
    b lbl_fn_8012476C_00000C50
lbl_fn_8012476C_00000B8C:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    lfs f1, lbl_80881830
    li r5, 0x4
    bl fn_800A5870
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8012476C_00000C50
lbl_fn_8012476C_00000BB0:
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000C14
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012476C_00000C14
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000C14
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8012476C_00000C14
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000BF4
    lwz r3, 0x48(r3)
    b lbl_fn_8012476C_00000BF8
lbl_fn_8012476C_00000BF4:
    li r3, 0x0
lbl_fn_8012476C_00000BF8:
    cmpwi r3, 0x0
    beq lbl_fn_8012476C_00000C14
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r0, r0, 5
    b lbl_fn_8012476C_00000C18
lbl_fn_8012476C_00000C14:
    li r0, 0x0
lbl_fn_8012476C_00000C18:
    cmpwi r0, 0x0
    beq lbl_fn_8012476C_00000C28
    li r3, 0x0
    b lbl_fn_8012476C_00000C50
lbl_fn_8012476C_00000C28:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    lfs f1, lbl_80881830
    li r5, 0x0
    bl fn_800A5870
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_8012476C_00000C50
lbl_fn_8012476C_00000C4C:
    li r3, 0x0
lbl_fn_8012476C_00000C50:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_801248DC(void)
{
    nofralloc
    stwu r1, -0x110(r1)
    mflr r0
    li r5, 0x0
    li r6, 0x0
    stw r0, 0x114(r1)
    stfd f31, 0x100(r1)
    psq_st f31, 0x108(r1), 0, 0
    stfd f30, 0xf0(r1)
    psq_st f30, 0xf8(r1), 0, 0
    stfd f29, 0xe0(r1)
    psq_st f29, 0xe8(r1), 0, 0
    stw r31, 0xdc(r1)
    stw r30, 0xd8(r1)
    mr r30, r4
    li r4, 0x0
    stw r29, 0xd4(r1)
    mr r29, r3
    lwz r3, lbl_8087EF70
    bl fn_800A56A8
    fneg f3, f1
    lfs f0, lbl_80881818
    stfs f0, 0x54(r1)
    li r4, 0x0
    lwz r3, lbl_8087EF70
    li r5, 0x1
    stfs f3, 0x50(r1)
    li r6, 0x0
    bl fn_800A56A8
    fneg f0, f1
    addi r3, r1, 0x50
    stfs f0, 0x58(r1)
    bl fn_805F9940
    cmpwi r30, 0x0
    fmr f31, f1
    beq lbl_fn_801248DC_00000EAC
    lfs f2, 0x58(r1)
    addi r31, r1, 0x50
    lfs f0, lbl_80881838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801248DC_00000D2C
    lfs f3, 0x50(r1)
    lfs f0, lbl_80881818
    fcmpo cr0, f3, f0
    ble lbl_fn_801248DC_00000D20
    lfs f0, lbl_8088183C
    b lbl_fn_801248DC_00000D24
lbl_fn_801248DC_00000D20:
    lfs f0, lbl_80881840
lbl_fn_801248DC_00000D24:
    stfs f0, 0xc(r1)
    b lbl_fn_801248DC_00000D3C
lbl_fn_801248DC_00000D2C:
    lfs f1, 0x50(r1)
    bl fn_8068AEA4
    frsp f0, f1
    stfs f0, 0xc(r1)
lbl_fn_801248DC_00000D3C:
    lfs f0, 0xc(r1)
    addi r3, r1, 0xa0
    li r4, 0x79
    fneg f1, f0
    bl fn_805F8E70
    lfs f3, lbl_80881818
    addi r4, r1, 0x14
    lfs f4, 0xa8(r1)
    mr r5, r4
    lfs f5, 0xa4(r1)
    addi r3, r1, 0x60
    lfs f6, 0xa0(r1)
    lfs f7, 0xb8(r1)
    lfs f8, 0xb4(r1)
    lfs f9, 0xb0(r1)
    lfs f10, 0xc8(r1)
    lfs f11, 0xc4(r1)
    lfs f12, 0xc0(r1)
    lfs f13, 0xcc(r1)
    lfs f30, 0xbc(r1)
    lfs f29, 0xac(r1)
    lfs f0, lbl_80881844
    psq_l f1, 0x0(r31), 0, 0
    lfs f2, 0x58(r1)
    stfs f3, 0x90(r1)
    stfs f3, 0x94(r1)
    stfs f3, 0x98(r1)
    stfs f0, 0x9c(r1)
    stfs f6, 0x44(r1)
    stfs f5, 0x48(r1)
    stfs f4, 0x4c(r1)
    stfs f6, 0x60(r1)
    stfs f5, 0x64(r1)
    stfs f4, 0x68(r1)
    stfs f9, 0x38(r1)
    stfs f8, 0x3c(r1)
    stfs f7, 0x40(r1)
    stfs f9, 0x70(r1)
    stfs f8, 0x74(r1)
    stfs f7, 0x78(r1)
    stfs f12, 0x2c(r1)
    stfs f11, 0x30(r1)
    stfs f10, 0x34(r1)
    stfs f12, 0x80(r1)
    stfs f11, 0x84(r1)
    stfs f10, 0x88(r1)
    stfs f29, 0x20(r1)
    stfs f30, 0x24(r1)
    stfs f13, 0x28(r1)
    stfs f29, 0x6c(r1)
    stfs f30, 0x7c(r1)
    stfs f13, 0x8c(r1)
    psq_st f1, 0x0(r4), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_805F9750
    lfs f2, 0x1c(r1)
    lfs f0, lbl_80881838
    fabs f3, f2
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801248DC_00000E58
    lfs f3, 0x18(r1)
    lfs f0, lbl_80881818
    fcmpo cr0, f3, f0
    ble lbl_fn_801248DC_00000E48
    lfs f0, lbl_8088183C
    b lbl_fn_801248DC_00000E4C
lbl_fn_801248DC_00000E48:
    lfs f0, lbl_80881840
lbl_fn_801248DC_00000E4C:
    fneg f0, f0
    stfs f0, 0x8(r1)
    b lbl_fn_801248DC_00000E6C
lbl_fn_801248DC_00000E58:
    lfs f1, 0x18(r1)
    bl fn_8068AEA4
    frsp f0, f1
    fneg f0, f0
    stfs f0, 0x8(r1)
lbl_fn_801248DC_00000E6C:
    addi r3, r1, 0x8
    lfs f4, lbl_80881818
    psq_l f1, 0x0(r3), 0, 0
    addi r3, r1, 0x50
    psq_st f1, 0x0(r31), 0, 0
    fmr f2, f4
    lfs f3, 0xc(r29)
    lfs f0, 0x54(r1)
    stfs f2, 0x58(r1)
    frsp f2, f2
    fsubs f0, f3, f0
    stfs f4, 0x10(r1)
    stfs f0, 0x54(r1)
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x8(r30)
lbl_fn_801248DC_00000EAC:
    fmr f1, f31
    psq_l f31, 0x108(r1), 0, 0
    lfd f31, 0x100(r1)
    psq_l f30, 0xf8(r1), 0, 0
    lfd f30, 0xf0(r1)
    psq_l f29, 0xe8(r1), 0, 0
    lfd f29, 0xe0(r1)
    lwz r31, 0xdc(r1)
    lwz r30, 0xd8(r1)
    lwz r29, 0xd4(r1)
    lwz r0, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x110
    blr
}

asm void fn_80124B60(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_80124B60_00000F54
    lwz r0, 0x54e4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80124B60_00000F54
    lwz r3, lbl_8087F9F8
    cmpwi r3, 0x0
    beq lbl_fn_80124B60_00000F54
    lwz r0, 0xa70(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80124B60_00000F54
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80124B60_00000F34
    lwz r3, 0x48(r3)
    b lbl_fn_80124B60_00000F38
lbl_fn_80124B60_00000F34:
    li r3, 0x0
lbl_fn_80124B60_00000F38:
    cmpwi r3, 0x0
    beq lbl_fn_80124B60_00000F54
    bl fn_8017C974
    subi r0, r3, 0x1
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_80124B60_00000F58
lbl_fn_80124B60_00000F54:
    li r3, 0x0
lbl_fn_80124B60_00000F58:
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80124BE4(void)
{
    nofralloc
    lwz r4, lbl_8087EFB4
    li r0, 0x0
    lfs f0, 0x134(r4)
    stfs f0, 0xc(r3)
    stw r0, 0x10(r3)
    blr
}

asm void fn_80124BFC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r25, r3
    mr r26, r4
    mr r27, r5
    li r29, 0x0
    li r31, 0x0
lbl_fn_80124BFC_00000FA4:
    add r30, r25, r29
    mr r3, r25
    lbz r28, 0x14(r30)
    mr r4, r29
    stb r31, 0x14(r30)
    bl fn_80122C70
    cmpw r26, r3
    bne lbl_fn_80124BFC_00000FCC
    stb r27, 0x14(r30)
    b lbl_fn_80124BFC_00000FD0
lbl_fn_80124BFC_00000FCC:
    stb r28, 0x14(r30)
lbl_fn_80124BFC_00000FD0:
    addi r29, r29, 0x1
    cmpwi r29, 0x36
    blt lbl_fn_80124BFC_00000FA4
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80124C6C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmplwi r5, 0x33
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bgt lbl_fn_80124C6C_00001354
    lis r4, jumptable_8077A5A8@ha
    slwi r0, r5, 2
    addi r4, r4, jumptable_8077A5A8@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x128
    bne lbl_fn_80124C6C_00001048
    addi r3, r4, 0x8
lbl_fn_80124C6C_00001048:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x140
    bne lbl_fn_80124C6C_00001080
    addi r3, r4, 0x20
lbl_fn_80124C6C_00001080:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x128
    bne lbl_fn_80124C6C_000010B8
    addi r3, r4, 0x8
lbl_fn_80124C6C_000010B8:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r4, lbl_8087F9C0
    lwz r0, 0x28(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80124C6C_000010F8
    lis r4, lbl_8077A3B0@ha
    addi r4, r4, lbl_8077A3B0@l
    psq_l f1, 0x1e8(r4), 0, 0
    psq_l f2, 0x1f0(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80124C6C_0000136C
lbl_fn_80124C6C_000010F8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x128
    bne lbl_fn_80124C6C_0000111C
    addi r3, r4, 0x8
lbl_fn_80124C6C_0000111C:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x158
    bne lbl_fn_80124C6C_00001154
    addi r3, r4, 0xb0
lbl_fn_80124C6C_00001154:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x1a0
    bne lbl_fn_80124C6C_0000118C
    addi r3, r4, 0x20
lbl_fn_80124C6C_0000118C:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087F9C0
    lwz r0, 0x34(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80124C6C_000011E8
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x188
    bne lbl_fn_80124C6C_000011D4
    addi r3, r4, 0x38
lbl_fn_80124C6C_000011D4:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
lbl_fn_80124C6C_000011E8:
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x1b8
    bne lbl_fn_80124C6C_0000120C
    addi r3, r4, 0x50
lbl_fn_80124C6C_0000120C:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x128
    bne lbl_fn_80124C6C_00001244
    addi r3, r4, 0x8
lbl_fn_80124C6C_00001244:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x170
    bne lbl_fn_80124C6C_0000127C
    addi r3, r4, 0x98
lbl_fn_80124C6C_0000127C:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lis r4, lbl_8077A3B0@ha
    addi r4, r4, lbl_8077A3B0@l
    psq_l f1, 0x98(r4), 0, 0
    psq_l f2, 0xa0(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x170
    bne lbl_fn_80124C6C_000012D0
    addi r3, r4, 0x98
lbl_fn_80124C6C_000012D0:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x188
    bne lbl_fn_80124C6C_00001308
    addi r3, r4, 0x38
lbl_fn_80124C6C_00001308:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
    lwz r3, lbl_8087EF70
    li r4, 0x0
    bl fn_800A58D0
    lis r4, lbl_8077A3B0@ha
    cmpwi r3, 0x0
    addi r4, r4, lbl_8077A3B0@l
    addi r3, r4, 0x1b8
    bne lbl_fn_80124C6C_00001340
    addi r3, r4, 0x50
lbl_fn_80124C6C_00001340:
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    b lbl_fn_80124C6C_0000136C
lbl_fn_80124C6C_00001354:
    lis r4, lbl_8077A3B0@ha
    addi r4, r4, lbl_8077A3B0@l
    psq_l f1, 0x1e8(r4), 0, 0
    psq_l f2, 0x1f0(r4), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f1, 0x0(r3), 0, 0
lbl_fn_80124C6C_0000136C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80124FFC(void)
{
    nofralloc
    stwu r1, -0x160(r1)
    stw r31, 0x15c(r1)
    lfs f6, lbl_80881818
    lis r3, lbl_8077A3B0@ha
    lfs f5, lbl_80881848
    addi r4, r1, 0x148
    lfs f4, lbl_8088184C
    addi r3, r3, lbl_8077A3B0@l
    lfs f3, lbl_80881850
    addi r5, r1, 0x138
    lfs f0, lbl_80881844
    addi r6, r1, 0x128
    stfs f6, 0x148(r1)
    addi r7, r1, 0x118
    addi r8, r1, 0x108
    addi r9, r1, 0xf8
    stfs f6, 0x14c(r1)
    addi r10, r1, 0xe8
    addi r11, r1, 0xd8
    addi r12, r1, 0xc8
    psq_l f1, 0x0(r4), 0, 0
    addi r31, r1, 0xb8
    stfs f5, 0x150(r1)
    stfs f5, 0x154(r1)
    psq_l f2, 0x8(r4), 0, 0
    stfs f5, 0x138(r1)
    stfs f6, 0x13c(r1)
    psq_st f1, 0x8(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f4, 0x140(r1)
    stfs f5, 0x144(r1)
    psq_st f2, 0x10(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f6, 0x128(r1)
    stfs f5, 0x12c(r1)
    psq_st f1, 0x20(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x130(r1)
    stfs f4, 0x134(r1)
    psq_st f2, 0x28(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f3, 0x118(r1)
    stfs f6, 0x11c(r1)
    psq_st f1, 0x38(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f0, 0x120(r1)
    stfs f5, 0x124(r1)
    psq_st f2, 0x40(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f6, 0x108(r1)
    stfs f6, 0x10c(r1)
    psq_st f1, 0x50(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f6, 0x110(r1)
    stfs f6, 0x114(r1)
    psq_st f2, 0x58(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f6, 0xf8(r1)
    stfs f6, 0xfc(r1)
    psq_st f1, 0x68(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f6, 0x100(r1)
    stfs f6, 0x104(r1)
    psq_st f2, 0x70(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f4, 0xe8(r1)
    stfs f5, 0xec(r1)
    psq_st f1, 0x80(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f3, 0xf0(r1)
    stfs f4, 0xf4(r1)
    psq_st f2, 0x88(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f4, 0xd8(r1)
    stfs f6, 0xdc(r1)
    psq_st f1, 0x98(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f3, 0xe0(r1)
    stfs f5, 0xe4(r1)
    psq_st f2, 0xa0(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f6, 0xc8(r1)
    stfs f6, 0xcc(r1)
    psq_st f1, 0xb0(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f6, 0xd0(r1)
    stfs f6, 0xd4(r1)
    psq_st f2, 0xb8(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f6, 0xb8(r1)
    stfs f6, 0xbc(r1)
    psq_st f1, 0xc8(r3), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f6, 0xc0(r1)
    stfs f6, 0xc4(r1)
    psq_st f2, 0xd0(r3), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_st f1, 0xe0(r3), 0, 0
    psq_st f2, 0xe8(r3), 0, 0
    stfs f6, 0xa8(r1)
    stfs f6, 0xac(r1)
    stfs f6, 0xb0(r1)
    addi r4, r1, 0xa8
    psq_l f1, 0x0(r4), 0, 0
    addi r5, r1, 0x98
    stfs f6, 0xb4(r1)
    addi r6, r1, 0x88
    addi r7, r1, 0x78
    addi r8, r1, 0x68
    psq_l f2, 0x8(r4), 0, 0
    addi r4, r1, 0x58
    stfs f6, 0x98(r1)
    addi r9, r1, 0x48
    addi r10, r1, 0x38
    addi r11, r1, 0x28
    stfs f6, 0x9c(r1)
    addi r12, r1, 0x18
    addi r31, r1, 0x8
    psq_st f1, 0xf8(r3), 0, 0
    psq_l f1, 0x0(r5), 0, 0
    stfs f6, 0xa0(r1)
    stfs f6, 0xa4(r1)
    psq_st f2, 0x100(r3), 0, 0
    psq_l f2, 0x8(r5), 0, 0
    stfs f6, 0x88(r1)
    stfs f4, 0x8c(r1)
    psq_st f1, 0x110(r3), 0, 0
    psq_l f1, 0x0(r6), 0, 0
    stfs f5, 0x90(r1)
    stfs f3, 0x94(r1)
    psq_st f2, 0x118(r3), 0, 0
    psq_l f2, 0x8(r6), 0, 0
    stfs f5, 0x78(r1)
    stfs f5, 0x7c(r1)
    psq_st f1, 0x128(r3), 0, 0
    psq_l f1, 0x0(r7), 0, 0
    stfs f4, 0x80(r1)
    stfs f4, 0x84(r1)
    psq_st f2, 0x130(r3), 0, 0
    psq_l f2, 0x8(r7), 0, 0
    stfs f4, 0x68(r1)
    stfs f3, 0x6c(r1)
    psq_st f1, 0x140(r3), 0, 0
    psq_l f1, 0x0(r8), 0, 0
    stfs f3, 0x70(r1)
    stfs f0, 0x74(r1)
    psq_st f2, 0x148(r3), 0, 0
    psq_l f2, 0x8(r8), 0, 0
    stfs f4, 0x58(r1)
    stfs f4, 0x5c(r1)
    psq_st f1, 0x158(r3), 0, 0
    psq_l f1, 0x0(r4), 0, 0
    stfs f3, 0x60(r1)
    stfs f3, 0x64(r1)
    psq_st f2, 0x160(r3), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    stfs f6, 0x48(r1)
    stfs f3, 0x4c(r1)
    psq_st f1, 0x170(r3), 0, 0
    psq_l f1, 0x0(r9), 0, 0
    stfs f5, 0x50(r1)
    stfs f0, 0x54(r1)
    psq_st f2, 0x178(r3), 0, 0
    psq_l f2, 0x8(r9), 0, 0
    stfs f5, 0x38(r1)
    stfs f3, 0x3c(r1)
    psq_st f1, 0x188(r3), 0, 0
    psq_l f1, 0x0(r10), 0, 0
    stfs f4, 0x40(r1)
    stfs f0, 0x44(r1)
    psq_st f2, 0x190(r3), 0, 0
    psq_l f2, 0x8(r10), 0, 0
    stfs f3, 0x28(r1)
    stfs f4, 0x2c(r1)
    psq_st f1, 0x1a0(r3), 0, 0
    psq_l f1, 0x0(r11), 0, 0
    stfs f0, 0x30(r1)
    stfs f3, 0x34(r1)
    psq_st f2, 0x1a8(r3), 0, 0
    psq_l f2, 0x8(r11), 0, 0
    stfs f5, 0x18(r1)
    stfs f4, 0x1c(r1)
    psq_st f1, 0x1b8(r3), 0, 0
    psq_l f1, 0x0(r12), 0, 0
    stfs f4, 0x20(r1)
    stfs f3, 0x24(r1)
    psq_st f2, 0x1c0(r3), 0, 0
    psq_l f2, 0x8(r12), 0, 0
    stfs f6, 0x8(r1)
    stfs f6, 0xc(r1)
    psq_st f1, 0x1d0(r3), 0, 0
    psq_l f1, 0x0(r31), 0, 0
    stfs f6, 0x10(r1)
    stfs f6, 0x14(r1)
    psq_st f2, 0x1d8(r3), 0, 0
    psq_l f2, 0x8(r31), 0, 0
    psq_st f1, 0x1e8(r3), 0, 0
    psq_st f2, 0x1f0(r3), 0, 0
    lwz r31, 0x15c(r1)
    addi r1, r1, 0x160
    blr
}
