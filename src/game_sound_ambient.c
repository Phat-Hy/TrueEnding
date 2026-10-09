#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_22(void);
extern void _savegpr_22(void);
extern void dtor_80084684(void);
extern void fn_800844D8(void);
extern void fn_800A555C(void);
extern void fn_800CB3A0(void);
extern void fn_800DD3FC(void);
extern void fn_80116FC0(void);
extern void fn_80117228(void);
extern void fn_801CF334(void);
extern void fn_801CF3C0(void);
extern void fn_801CFA5C(void);
extern void fn_801CFAA8(void);
extern void fn_801D5420(void);
extern void fn_801DAEE4(void);
extern void fn_801DBB94(void);
extern void fn_801DC42C(void);
extern void fn_801DCE88(void);
extern void fn_801DCF60(void);
extern void fn_801DD26C(void);
extern void fn_801E07A4(void);
extern void fn_801E6B10(void);
extern void fn_801E6FC8(void);
extern void fn_801E7098(void);
extern void fn_801E7D78(void);
extern void fn_80206BE4(void);
extern void fn_80206C50(void);
extern void fn_8020924C(void);
extern void fn_8020ED84(void);
extern void fn_8020EF04(void);
extern void fn_8020EF4C(void);
extern void fn_8020EF80(void);
extern void fn_8020EFEC(void);
extern void fn_80211480(void);
extern void fn_802114D8(void);
extern void fn_802114E0(void);
extern void fn_80219558(void);
extern void fn_804439FC(void);
extern void fn_804444E8(void);
extern void fn_804A3C24(void);
extern void fn_804A4294(void);
extern void fn_804A4300(void);
extern void fn_804A4494(void);
extern void fn_80510D68(void);
extern void fn_80530388(void);
extern void fn_80680770(void);
extern void fn_80686AF0(void);
extern void fn_80686EA4(void);

/* External data declarations */
extern u8 lbl_8073CAA8[];
extern u8 lbl_80782860[];

/* Small data declarations */
extern u32 lbl_8087DA70;
extern u32 lbl_8087EF70;
extern u32 lbl_8087F1E4;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F580;
extern u32 lbl_808813D0;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801D8CC4(void);
void fn_801D9234(void);
void fn_801D923C(void);
void fn_801D924C(void);
void fn_801D9388(void);
void fn_801D94D0(void);
void fn_801DA2F0(void);
void fn_801DA2F8(void);
void fn_801DA308(void);

asm void fn_801D8CC4(void)
{
    nofralloc
    stwu r1, -0x290(r1)
    mflr r0
    stw r0, 0x294(r1)
    stmw r25, 0x274(r1)
    mr r31, r3
    lwz r0, 0xb50(r3)
    cmpwi r0, 0x0
    beq lbl_fn_801D8CC4_00000080
    lwz r4, 0x80(r3)
    cmpw r4, r0
    bge lbl_fn_801D8CC4_00000080
    mulli r0, r4, 0x18
    lwz r3, 0xb4c(r3)
    add r30, r3, r0
    lwz r3, 0x4(r30)
    bl fn_80206C50
    lwz r0, 0x8(r30)
    mr r28, r3
    lwz r3, 0xacc(r31)
    mr r4, r28
    srwi r5, r0, 31
    bl fn_801E7D78
    mr r3, r28
    bl fn_80206BE4
    bl fn_80211480
    cmpwi r3, 0x0
    mr r4, r3
    beq lbl_fn_801D8CC4_00000080
    lwz r3, lbl_8087F580
    li r5, 0x0
    lwz r4, 0xc(r4)
    bl fn_804A3C24
lbl_fn_801D8CC4_00000080:
    lwz r28, lbl_8087EF70
    li r4, 0x0
    li r5, 0x4
    mr r3, r28
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8CC4_00000334
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    bl fn_801D5420
    cmpwi r3, 0x0
    bne lbl_fn_801D8CC4_000000F4
    addi r3, r1, 0x24
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x24
    li r4, -0x1
    bl fn_800CB3A0
    lwz r30, lbl_8087F580
    li r3, 0x1
    li r4, 0x111
    bl fn_80116FC0
    mr r4, r3
    mr r3, r30
    bl fn_804A4294
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_000000F4:
    lwz r3, 0xb50(r31)
    cmpwi r3, 0x0
    beq lbl_fn_801D8CC4_00000318
    lwz r0, 0x80(r31)
    cmpw r0, r3
    bge lbl_fn_801D8CC4_00000318
    mr r3, r31
    bl fn_801CF334
    lwz r30, 0x48(r3)
    mr r3, r31
    bl fn_801CF334
    lwz r0, 0x80(r31)
    lwz r4, 0xb4c(r31)
    mulli r0, r0, 0x18
    lwz r29, 0x4c(r3)
    add r28, r4, r0
    lwz r0, 0xc(r28)
    cmpwi r0, 0x0
    blt lbl_fn_801D8CC4_000002A0
    lwz r5, 0x1e4(r31)
    mr r3, r31
    mr r4, r29
    bl fn_801CFA5C
    lwz r0, 0x10(r28)
    mr r27, r3
    cmpwi r0, 0x0
    bne lbl_fn_801D8CC4_00000214
    addi r3, r1, 0x20
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x20
    li r4, -0x1
    bl fn_800CB3A0
    lwz r3, 0xc(r28)
    bl fn_80219558
    lwz r5, 0x14(r28)
    mr r4, r3
    mr r3, r31
    bl fn_801D5420
    cmpwi r3, 0x0
    bne lbl_fn_801D8CC4_000001BC
    lwz r4, lbl_8087F1E4
    lwz r3, lbl_8087F580
    lwz r4, 0x88c(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D8CC4_000001B0
    b lbl_fn_801D8CC4_000001B4
lbl_fn_801D8CC4_000001B0:
    la r4, lbl_808813D0
lbl_fn_801D8CC4_000001B4:
    bl fn_804A4294
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_000001BC:
    lwz r3, 0xc(r28)
    bl fn_8020924C
    lwz r4, lbl_8087F1E4
    mr r31, r3
    lwz r28, 0x894(r4)
    cmpwi r28, 0x0
    beq lbl_fn_801D8CC4_000001DC
    b lbl_fn_801D8CC4_000001E0
lbl_fn_801D8CC4_000001DC:
    la r28, lbl_808813D0
lbl_fn_801D8CC4_000001E0:
    mr r3, r27
    bl fn_80206BE4
    bl fn_80211480
    lwz r6, 0x8(r3)
    mr r4, r28
    lwz r5, 0x4(r31)
    addi r3, r1, 0x70
    crclr 6
    bl fn_800DD3FC
    lwz r3, lbl_8087F580
    addi r4, r1, 0x70
    bl fn_804A4300
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_00000214:
    lwz r3, 0xc(r28)
    bl fn_80219558
    mr r26, r3
    lwz r3, 0x48(r31)
    mr r4, r26
    bl fn_80530388
    lwz r25, 0x4(r3)
    mr r3, r27
    stw r27, 0x58(r1)
    bl fn_80206BE4
    li r7, -0x1
    stw r3, 0x5c(r1)
    li r0, 0x1
    mr r3, r31
    stw r7, 0x60(r1)
    mr r4, r26
    mr r5, r25
    addi r6, r1, 0x58
    stw r7, 0x64(r1)
    li r8, 0x0
    li r9, 0x0
    stw r0, 0x68(r1)
    lwz r0, 0x14(r28)
    stw r0, 0x6c(r1)
    lwz r7, 0x14(r28)
    bl fn_801CF3C0
    lwz r7, 0x1e4(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    mr r6, r28
    li r8, 0x0
    li r9, 0x0
    bl fn_801CF3C0
    b lbl_fn_801D8CC4_000002C0
lbl_fn_801D8CC4_000002A0:
    lwz r7, 0x1e4(r31)
    mr r3, r31
    mr r4, r29
    mr r5, r30
    mr r6, r28
    li r8, 0x1
    li r9, 0x1
    bl fn_801CF3C0
lbl_fn_801D8CC4_000002C0:
    cmpwi r3, 0x0
    beq lbl_fn_801D8CC4_000002FC
    lwz r5, 0x1e4(r31)
    mr r3, r31
    mr r4, r29
    bl fn_801E07A4
    lwz r5, 0x1e4(r31)
    mr r3, r31
    mr r4, r29
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    li r8, 0x0
    bl fn_801E6FC8
    mr r3, r31
    bl fn_801E6B10
lbl_fn_801D8CC4_000002FC:
    addi r3, r1, 0x1c
    li r4, 0xd
    bl fn_80117228
    addi r3, r1, 0x1c
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_00000318:
    addi r3, r1, 0x18
    li r4, 0xb
    bl fn_80117228
    addi r3, r1, 0x18
    li r4, -0x1
    bl fn_800CB3A0
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_00000334:
    mr r3, r28
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8CC4_00000398
    addi r3, r1, 0x14
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x14
    li r4, -0x1
    bl fn_800CB3A0
    addi r3, r1, 0x10
    li r4, 0xa
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r31)
    mr r3, r31
    li r4, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_00000398:
    mr r3, r28
    li r4, 0x0
    li r5, 0xd
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8CC4_00000460
    lwz r0, 0xb50(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801D8CC4_00000460
    addi r3, r1, 0xc
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xb50(r31)
    li r3, 0x1
    stw r3, 0xb80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801D8CC4_00000424
    lwz r0, 0x80(r31)
    lwz r3, 0xb4c(r31)
    mulli r0, r0, 0x18
    lwzux r0, r3, r0
    stw r0, 0x40(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x44(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x48(r1)
    lwz r0, 0xc(r3)
    stw r0, 0x4c(r1)
    lwz r0, 0x10(r3)
    stw r0, 0x50(r1)
    lwz r0, 0x14(r3)
    stw r0, 0x54(r1)
lbl_fn_801D8CC4_00000424:
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    bl fn_801E07A4
    lwz r5, 0x1e4(r31)
    mr r3, r31
    addi r4, r1, 0x40
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    bl fn_801E7098
    mr r3, r31
    bl fn_801E6B10
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_00000460:
    mr r3, r28
    li r4, 0x0
    li r5, 0xc
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D8CC4_00000528
    lwz r0, 0xb50(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801D8CC4_00000528
    addi r3, r1, 0x8
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r0, 0xb50(r31)
    li r3, 0x0
    stw r3, 0xb80(r31)
    cmpwi r0, 0x0
    beq lbl_fn_801D8CC4_000004EC
    lwz r0, 0x80(r31)
    lwz r3, 0xb4c(r31)
    mulli r0, r0, 0x18
    lwzux r0, r3, r0
    stw r0, 0x28(r1)
    lwz r0, 0x4(r3)
    stw r0, 0x2c(r1)
    lwz r0, 0x8(r3)
    stw r0, 0x30(r1)
    lwz r0, 0xc(r3)
    stw r0, 0x34(r1)
    lwz r0, 0x10(r3)
    stw r0, 0x38(r1)
    lwz r0, 0x14(r3)
    stw r0, 0x3c(r1)
lbl_fn_801D8CC4_000004EC:
    mr r3, r31
    bl fn_801CF334
    lwz r4, 0x4c(r3)
    mr r3, r31
    lwz r5, 0x1e4(r31)
    bl fn_801E07A4
    lwz r5, 0x1e4(r31)
    mr r3, r31
    addi r4, r1, 0x28
    addi r6, r31, 0x80
    addi r7, r31, 0x88
    bl fn_801E7098
    mr r3, r31
    bl fn_801E6B10
    b lbl_fn_801D8CC4_0000055C
lbl_fn_801D8CC4_00000528:
    lwz r25, 0x80(r31)
    addi r3, r31, 0x80
    lwz r5, 0x84(r31)
    addi r4, r31, 0x88
    lwz r6, 0x8c(r31)
    li r7, 0x1
    li r8, 0x3
    bl fn_804A4494
    lwz r0, 0x80(r31)
    cmpw r25, r0
    beq lbl_fn_801D8CC4_0000055C
    mr r3, r31
    bl fn_801E6B10
lbl_fn_801D8CC4_0000055C:
    lmw r25, 0x274(r1)
    lwz r0, 0x294(r1)
    mtlr r0
    addi r1, r1, 0x290
    blr
}

asm void fn_801D9234(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_801D923C(void)
{
    nofralloc
    mulli r0, r4, 0x18
    lwz r3, 0x0(r3)
    add r3, r3, r0
    blr
}

asm void fn_801D924C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    li r4, 0x0
    li r5, 0x4
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r31, lbl_8087EF70
    mr r3, r31
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D924C_0000063C
    lwz r0, 0x1bbc(r30)
    cmpwi r0, 0x1
    beq lbl_fn_801D924C_000005D4
    cmpwi r0, 0x0
    beq lbl_fn_801D924C_00000608
    b lbl_fn_801D924C_000006AC
lbl_fn_801D924C_000005D4:
    addi r3, r1, 0x10
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0x10
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0xc
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D924C_000006AC
lbl_fn_801D924C_00000608:
    addi r3, r1, 0xc
    li r4, 0x12
    bl fn_80117228
    addi r3, r1, 0xc
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0xd
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D924C_000006AC
lbl_fn_801D924C_0000063C:
    mr r3, r31
    li r4, 0x0
    li r5, 0x5
    bl fn_800A555C
    cmpwi r3, 0x0
    beq lbl_fn_801D924C_00000688
    addi r3, r1, 0x8
    li r4, 0x2
    bl fn_80117228
    addi r3, r1, 0x8
    li r4, -0x1
    bl fn_800CB3A0
    lwz r12, 0x0(r30)
    mr r3, r30
    li r4, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D924C_000006AC
lbl_fn_801D924C_00000688:
    lwz r31, 0x80(r30)
    mr r3, r30
    li r4, 0x1
    li r5, 0x3
    bl fn_80510D68
    lwz r0, 0x80(r30)
    cmpw r31, r0
    beq lbl_fn_801D924C_000006AC
    stw r0, 0x1bbc(r30)
lbl_fn_801D924C_000006AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D9388(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r3
    bl fn_801CF334
    lwz r31, 0x4c(r3)
    mr r3, r29
    bl fn_801CF334
    lwz r30, 0x48(r3)
    mr r3, r29
    mr r4, r31
    bl fn_801DD26C
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    bl fn_801D5420
    cmpwi r3, 0x0
    beq lbl_fn_801D9388_00000730
    mr r3, r29
    mr r4, r31
    mr r5, r30
    li r6, 0x0
    li r7, 0x1
    bl fn_801DCF60
lbl_fn_801D9388_00000730:
    cmpwi r31, 0x3
    bne lbl_fn_801D9388_00000750
    mr r3, r29
    mr r4, r31
    mr r5, r30
    li r6, 0x1
    li r7, 0x1
    bl fn_801DCF60
lbl_fn_801D9388_00000750:
    mr r3, r29
    mr r4, r31
    li r5, 0x0
    li r6, 0x1
    bl fn_801DCE88
    mr r6, r3
    mr r3, r29
    mr r4, r31
    mr r5, r30
    li r7, 0x1
    li r8, 0x1
    bl fn_801DC42C
    lwz r4, lbl_8087F4F0
    slwi r0, r31, 6
    li r3, 0x0
    addis r4, r4, 0x1
    add r4, r4, r0
    lwz r4, -0x7d70(r4)
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    bne lbl_fn_801D9388_000007D8
    mr r3, r29
    mr r4, r31
    li r5, 0x1
    li r6, 0x1
    bl fn_801DCE88
    mr r6, r3
    mr r3, r29
    mr r4, r31
    mr r5, r30
    li r7, 0x1
    li r8, 0x1
    bl fn_801DC42C
lbl_fn_801D9388_000007D8:
    lwz r12, 0x0(r29)
    mr r3, r29
    li r4, 0x0
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_801D94D0(void)
{
    nofralloc
    stwu r1, -0x90(r1)
    mflr r0
    stw r0, 0x94(r1)
    stmw r14, 0x48(r1)
    mr r15, r3
    lwz r0, 0x1bc8(r3)
    cmpwi r0, 0x0
    bge lbl_fn_801D94D0_00000AA8
    li r18, 0x0
    stw r18, 0x1c0c(r3)
    lwz r4, 0x48(r3)
    li r21, 0x0
    stw r18, 0x1c30(r3)
    li r16, -0x1
    stw r18, 0x1c54(r3)
    lwz r14, 0x1224(r4)
    b lbl_fn_801D94D0_00000978
lbl_fn_801D94D0_00000850:
    lwz r0, 0x48(r15)
    li r22, 0x0
    lwz r3, lbl_8087F4F0
    add r17, r0, r18
    lwz r0, 0x1228(r17)
    addis r3, r3, 0x1
    slwi r0, r0, 6
    add r3, r3, r0
    subi r19, r3, 0x7d70
    mr r20, r19
lbl_fn_801D94D0_00000878:
    cmpwi r22, 0x1
    bne lbl_fn_801D94D0_0000088C
    lwz r0, 0x1228(r17)
    cmpwi r0, 0x3
    bne lbl_fn_801D94D0_000008E8
lbl_fn_801D94D0_0000088C:
    lwz r4, 0x1228(r17)
    mr r3, r15
    mr r5, r22
    bl fn_801D5420
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_000008E8
    lwz r4, 0x1228(r17)
    mr r3, r15
    mr r5, r22
    bl fn_801CFA5C
    bl fn_80206BE4
    cmpwi r3, 0x0
    mr r4, r3
    ble lbl_fn_801D94D0_000008E8
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_804439FC
    stw r16, 0x20(r20)
lbl_fn_801D94D0_000008E8:
    addi r22, r22, 0x1
    addi r20, r20, 0x8
    cmpwi r22, 0x2
    blt lbl_fn_801D94D0_00000878
    mr r20, r19
    li r22, 0x0
lbl_fn_801D94D0_00000900:
    lwz r4, 0x1228(r17)
    mr r3, r15
    mr r5, r22
    bl fn_801CFAA8
    bl fn_8020EF80
    cmpwi r3, 0x0
    mr r4, r3
    ble lbl_fn_801D94D0_00000960
    lwz r3, lbl_8087F4F0
    li r5, 0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    li r9, 0x0
    li r10, 0x0
    bl fn_804439FC
    cmpwi r22, 0x0
    stw r16, 0x0(r20)
    bne lbl_fn_801D94D0_00000954
    stw r16, 0x10(r19)
    b lbl_fn_801D94D0_00000960
lbl_fn_801D94D0_00000954:
    cmpwi r22, 0x1
    bne lbl_fn_801D94D0_00000960
    stw r16, 0x18(r19)
lbl_fn_801D94D0_00000960:
    addi r22, r22, 0x1
    addi r20, r20, 0x8
    cmpwi r22, 0x2
    blt lbl_fn_801D94D0_00000900
    addi r21, r21, 0x1
    addi r18, r18, 0x8
lbl_fn_801D94D0_00000978:
    cmpw r21, r14
    blt lbl_fn_801D94D0_00000850
    mr r3, r15
    bl fn_801CF334
    lwz r0, 0x4c(r3)
    li r3, 0x0
    stw r0, 0x1bc8(r15)
    li r4, 0x0
    b lbl_fn_801D94D0_00000A9C
lbl_fn_801D94D0_0000099C:
    lwz r0, 0x48(r15)
    add r0, r0, r4
    addic. r6, r0, 0x1228
    beq lbl_fn_801D94D0_00000A94
    lwz r5, 0x0(r6)
    lwz r0, 0x1bc8(r15)
    cmpw r5, r0
    bne lbl_fn_801D94D0_00000A70
    lwz r7, 0x1c0c(r15)
    cmpwi r7, 0x0
    beq lbl_fn_801D94D0_00000A5C
    cmplwi r7, 0x8
    ble lbl_fn_801D94D0_00000A34
    subi r0, r7, 0x1
    slwi r5, r7, 2
    srwi r0, r0, 3
    add r5, r15, r5
    mtctr r0
    ble lbl_fn_801D94D0_00000A34
lbl_fn_801D94D0_000009E8:
    lwz r0, 0x1c0c(r5)
    subi r7, r7, 0x8
    stw r0, 0x1c10(r5)
    lwz r0, 0x1c08(r5)
    stw r0, 0x1c0c(r5)
    lwz r0, 0x1c04(r5)
    stw r0, 0x1c08(r5)
    lwz r0, 0x1c00(r5)
    stw r0, 0x1c04(r5)
    lwz r0, 0x1bfc(r5)
    stw r0, 0x1c00(r5)
    lwz r0, 0x1bf8(r5)
    stw r0, 0x1bfc(r5)
    lwz r0, 0x1bf4(r5)
    stw r0, 0x1bf8(r5)
    lwz r0, 0x1bf0(r5)
    stw r0, 0x1bf4(r5)
    subi r5, r5, 0x20
    bdnz lbl_fn_801D94D0_000009E8
lbl_fn_801D94D0_00000A34:
    slwi r0, r7, 2
    add r5, r15, r0
    mtctr r7
    cmpwi r7, 0x0
    beq lbl_fn_801D94D0_00000A5C
lbl_fn_801D94D0_00000A48:
    lwz r0, 0x1c0c(r5)
    subi r7, r7, 0x1
    stw r0, 0x1c10(r5)
    subi r5, r5, 0x4
    bdnz lbl_fn_801D94D0_00000A48
lbl_fn_801D94D0_00000A5C:
    lwz r5, 0x1c0c(r15)
    stw r6, 0x1c10(r15)
    addi r0, r5, 0x1
    stw r0, 0x1c0c(r15)
    b lbl_fn_801D94D0_00000A94
lbl_fn_801D94D0_00000A70:
    lwz r0, 0x1c0c(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r5, r0, 0x1c10
    beq lbl_fn_801D94D0_00000A88
    stw r6, 0x0(r5)
lbl_fn_801D94D0_00000A88:
    lwz r5, 0x1c0c(r15)
    addi r0, r5, 0x1
    stw r0, 0x1c0c(r15)
lbl_fn_801D94D0_00000A94:
    addi r3, r3, 0x1
    addi r4, r4, 0x8
lbl_fn_801D94D0_00000A9C:
    cmpw r3, r14
    blt lbl_fn_801D94D0_0000099C
    b lbl_fn_801D94D0_00001618
lbl_fn_801D94D0_00000AA8:
    lwz r0, 0x1c0c(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801D94D0_00000C40
    mr r14, r15
    li r16, 0x0
    b lbl_fn_801D94D0_00000C0C
lbl_fn_801D94D0_00000AC0:
    lwz r17, 0x1c34(r14)
    mr r3, r15
    li r5, 0x0
    lwz r18, 0x0(r17)
    lwz r19, 0x4(r17)
    mr r4, r18
    bl fn_801D5420
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_00000AFC
    mr r3, r15
    mr r4, r18
    mr r5, r19
    li r6, 0x0
    li r7, 0x0
    bl fn_801DCF60
lbl_fn_801D94D0_00000AFC:
    cmpwi r18, 0x3
    bne lbl_fn_801D94D0_00000B1C
    mr r3, r15
    mr r4, r18
    mr r5, r19
    li r6, 0x1
    li r7, 0x0
    bl fn_801DCF60
lbl_fn_801D94D0_00000B1C:
    lwz r3, 0x0(r17)
    lwz r0, 0x1bc8(r15)
    cmpw r3, r0
    bne lbl_fn_801D94D0_00000BE0
    lwz r4, 0x1c54(r15)
    cmpwi r4, 0x0
    beq lbl_fn_801D94D0_00000BCC
    cmplwi r4, 0x8
    ble lbl_fn_801D94D0_00000BA4
    subi r0, r4, 0x1
    slwi r3, r4, 2
    srwi r0, r0, 3
    add r3, r15, r3
    mtctr r0
    ble lbl_fn_801D94D0_00000BA4
lbl_fn_801D94D0_00000B58:
    lwz r0, 0x1c54(r3)
    subi r4, r4, 0x8
    stw r0, 0x1c58(r3)
    lwz r0, 0x1c50(r3)
    stw r0, 0x1c54(r3)
    lwz r0, 0x1c4c(r3)
    stw r0, 0x1c50(r3)
    lwz r0, 0x1c48(r3)
    stw r0, 0x1c4c(r3)
    lwz r0, 0x1c44(r3)
    stw r0, 0x1c48(r3)
    lwz r0, 0x1c40(r3)
    stw r0, 0x1c44(r3)
    lwz r0, 0x1c3c(r3)
    stw r0, 0x1c40(r3)
    lwz r0, 0x1c38(r3)
    stw r0, 0x1c3c(r3)
    subi r3, r3, 0x20
    bdnz lbl_fn_801D94D0_00000B58
lbl_fn_801D94D0_00000BA4:
    slwi r0, r4, 2
    add r3, r15, r0
    mtctr r4
    cmpwi r4, 0x0
    beq lbl_fn_801D94D0_00000BCC
lbl_fn_801D94D0_00000BB8:
    lwz r0, 0x1c54(r3)
    subi r4, r4, 0x1
    stw r0, 0x1c58(r3)
    subi r3, r3, 0x4
    bdnz lbl_fn_801D94D0_00000BB8
lbl_fn_801D94D0_00000BCC:
    lwz r3, 0x1c54(r15)
    stw r17, 0x1c58(r15)
    addi r0, r3, 0x1
    stw r0, 0x1c54(r15)
    b lbl_fn_801D94D0_00000C04
lbl_fn_801D94D0_00000BE0:
    lwz r0, 0x1c54(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r3, r0, 0x1c58
    beq lbl_fn_801D94D0_00000BF8
    stw r17, 0x0(r3)
lbl_fn_801D94D0_00000BF8:
    lwz r3, 0x1c54(r15)
    addi r0, r3, 0x1
    stw r0, 0x1c54(r15)
lbl_fn_801D94D0_00000C04:
    addi r14, r14, 0x4
    addi r16, r16, 0x1
lbl_fn_801D94D0_00000C0C:
    lwz r0, 0x1c30(r15)
    cmplw r16, r0
    blt lbl_fn_801D94D0_00000AC0
    li r0, 0x0
    stw r0, 0x1c54(r15)
    mr r3, r15
    li r4, 0x0
    stw r0, 0x1c30(r15)
    lwz r12, 0x0(r15)
    lwz r12, 0x34(r12)
    mtctr r12
    bctrl
    b lbl_fn_801D94D0_00001618
lbl_fn_801D94D0_00000C40:
    lwz r0, 0x1bcc(r3)
    cmpwi r0, 0x0
    bne lbl_fn_801D94D0_000014D4
    lwz r0, 0x1c7c(r3)
    addi r22, r1, 0x2c
    lwz r5, 0x1c88(r3)
    lis r14, 0xcccd
    subf r4, r0, r0
    lwz r6, 0x1c94(r3)
    subf r5, r5, r5
    lwz r7, 0x1ca0(r3)
    subf r0, r6, r6
    stw r4, 0x1c7c(r3)
    subf r4, r7, r7
    lis r27, 0xaab
    stw r0, 0x1c94(r3)
    li r0, 0x0
    li r28, 0x0
    lis r29, 0x38e
    stw r5, 0x1c88(r3)
    li r30, -0x1
    li r31, 0x1
    stw r0, 0x40(r1)
    stw r4, 0x1ca0(r3)
    b lbl_fn_801D94D0_0000103C
lbl_fn_801D94D0_00000CA4:
    lwz r3, 0x40(r1)
    bl fn_802114E0
    cmpwi r3, 0x0
    mr r25, r3
    beq lbl_fn_801D94D0_00001030
    lwz r3, 0x4(r3)
    bl fn_8020EF04
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_00001030
    lwz r3, 0x4(r25)
    bl fn_8020EFEC
    cmpwi r3, 0x0
    mr r18, r3
    beq lbl_fn_801D94D0_00001030
    lwz r3, lbl_8087F4F0
    lwz r4, 0x4(r25)
    bl fn_804444E8
    cmpwi r3, 0x0
    mr r26, r3
    ble lbl_fn_801D94D0_00001030
    lwz r0, 0x78(r18)
    li r17, 0x0
    cmpwi r0, 0x0
    bne lbl_fn_801D94D0_00000D38
    mr r3, r18
    bl fn_8020EF4C
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_00000D30
    lwz r0, 0xa8(r18)
    cmpwi r0, 0x8
    bne lbl_fn_801D94D0_00000D28
    addi r17, r15, 0x1c9c
    b lbl_fn_801D94D0_00000D44
lbl_fn_801D94D0_00000D28:
    addi r17, r15, 0x1c90
    b lbl_fn_801D94D0_00000D44
lbl_fn_801D94D0_00000D30:
    addi r17, r15, 0x1c78
    b lbl_fn_801D94D0_00000D44
lbl_fn_801D94D0_00000D38:
    cmpwi r0, 0x1
    bne lbl_fn_801D94D0_00000D44
    addi r17, r15, 0x1c84
lbl_fn_801D94D0_00000D44:
    cmpwi r17, 0x0
    beq lbl_fn_801D94D0_00001030
    li r16, 0x0
    b lbl_fn_801D94D0_00001028
lbl_fn_801D94D0_00000D54:
    lwz r4, 0x4(r17)
    lwz r3, 0x8(r17)
    lwz r20, 0x78(r18)
    cmplw r4, r3
    lwz r21, 0x7c(r18)
    lwz r19, 0x4(r25)
    bge lbl_fn_801D94D0_00000DA0
    addi r3, r4, 0x1
    stw r3, 0x4(r17)
    subi r0, r3, 0x1
    mulli r0, r0, 0x18
    lwz r3, 0x0(r17)
    stwux r18, r3, r0
    stw r20, 0x4(r3)
    stw r21, 0x8(r3)
    stw r30, 0xc(r3)
    stw r31, 0x10(r3)
    stw r19, 0x14(r3)
    b lbl_fn_801D94D0_00001024
lbl_fn_801D94D0_00000DA0:
    subi r0, r27, 0x5556
    subf r0, r3, r0
    cmplwi r0, 0x1
    bge lbl_fn_801D94D0_00000DD0
    lis r3, lbl_8073CAA8@ha
    addi r4, r3, lbl_8073CAA8@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801D94D0_00000DD0:
    lwz r3, 0x4(r17)
    addi r5, r17, 0x8
    lwz r4, 0x8(r17)
    subi r0, r27, 0x5556
    addi r3, r3, 0x1
    stw r28, 0x2c(r1)
    subf r3, r4, r3
    stw r3, 0x18(r1)
    lwz r23, 0x8(r17)
    stw r28, 0x30(r1)
    subf r0, r23, r0
    cmplw r3, r0
    stw r28, 0x34(r1)
    stw r5, 0x38(r1)
    stw r28, 0x3c(r1)
    ble lbl_fn_801D94D0_00000E30
    lis r3, lbl_8073CAA8@ha
    addi r4, r3, lbl_8073CAA8@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801D94D0_00000E30:
    addi r0, r29, 0x38e3
    cmplw r23, r0
    bge lbl_fn_801D94D0_00000E78
    addi r4, r23, 0x1
    subi r5, r14, 0x3333
    slwi r3, r4, 2
    lwz r0, 0x18(r1)
    subf r4, r4, r3
    mulhwu r4, r5, r4
    addi r3, r1, 0x10
    srwi r4, r4, 2
    stw r4, 0x10(r1)
    cmplw r4, r0
    bge lbl_fn_801D94D0_00000E6C
    addi r3, r1, 0x18
lbl_fn_801D94D0_00000E6C:
    lwz r0, 0x0(r3)
    add r24, r23, r0
    b lbl_fn_801D94D0_00000EB8
lbl_fn_801D94D0_00000E78:
    lis r3, 0x71c
    addi r0, r3, 0x71c6
    cmplw r23, r0
    bge lbl_fn_801D94D0_00000EB4
    addi r3, r23, 0x1
    lwz r0, 0x18(r1)
    srwi r3, r3, 1
    stw r3, 0x14(r1)
    cmplw r3, r0
    addi r3, r1, 0x14
    bge lbl_fn_801D94D0_00000EA8
    addi r3, r1, 0x18
lbl_fn_801D94D0_00000EA8:
    lwz r0, 0x0(r3)
    add r24, r23, r0
    b lbl_fn_801D94D0_00000EB8
lbl_fn_801D94D0_00000EB4:
    subi r24, r27, 0x5556
lbl_fn_801D94D0_00000EB8:
    subi r0, r27, 0x5556
    cmplw r24, r0
    ble lbl_fn_801D94D0_00000EE4
    lis r3, lbl_8073CAA8@ha
    addi r4, r3, lbl_8073CAA8@l
    lis r3, __files@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801D94D0_00000EE4:
    mulli r3, r24, 0x18
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r23, r3
    bne lbl_fn_801D94D0_00000F18
    lis r3, __files@ha
    lis r4, lbl_80782860@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80782860@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_801D94D0_00000F18:
    lwz r5, 0x4(r17)
    lwz r4, 0x30(r1)
    mulli r3, r5, 0x18
    stw r5, 0x3c(r1)
    addi r0, r4, 0x1
    stw r0, 0x30(r1)
    add r3, r23, r3
    mulli r4, r4, 0x18
    stwux r18, r4, r3
    stw r23, 0x2c(r1)
    stw r20, 0x4(r4)
    stw r21, 0x8(r4)
    stw r30, 0xc(r4)
    stw r31, 0x10(r4)
    stw r19, 0x14(r4)
    lwz r0, 0x4(r17)
    lwz r5, 0x0(r17)
    mulli r0, r0, 0x18
    stw r24, 0x34(r1)
    add r6, r5, r0
    addi r4, r6, 0x17
    li r0, 0x18
    subf r4, r5, r4
    divwu r4, r4, r0
    mtctr r4
    cmplw r6, r5
    ble lbl_fn_801D94D0_00000FDC
lbl_fn_801D94D0_00000F84:
    subic. r3, r3, 0x18
    subi r6, r6, 0x18
    beq lbl_fn_801D94D0_00000FC0
    lwz r0, 0x0(r6)
    stw r0, 0x0(r3)
    lwz r0, 0x4(r6)
    stw r0, 0x4(r3)
    lwz r0, 0x8(r6)
    stw r0, 0x8(r3)
    lwz r0, 0xc(r6)
    stw r0, 0xc(r3)
    lwz r0, 0x10(r6)
    stw r0, 0x10(r3)
    lwz r0, 0x14(r6)
    stw r0, 0x14(r3)
lbl_fn_801D94D0_00000FC0:
    lwz r5, 0x3c(r1)
    lwz r4, 0x30(r1)
    subi r0, r5, 0x1
    stw r0, 0x3c(r1)
    addi r0, r4, 0x1
    stw r0, 0x30(r1)
    bdnz lbl_fn_801D94D0_00000F84
lbl_fn_801D94D0_00000FDC:
    stw r28, 0x4(r17)
    cmpwi r22, 0x0
    lwz r0, 0x30(r1)
    lwz r5, 0x8(r17)
    lwz r3, 0x34(r1)
    stw r3, 0x8(r17)
    lwz r4, 0x2c(r1)
    lwz r3, 0x0(r17)
    stw r5, 0x34(r1)
    stw r4, 0x0(r17)
    stw r3, 0x2c(r1)
    stw r0, 0x4(r17)
    stw r28, 0x30(r1)
    beq lbl_fn_801D94D0_00001024
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_00001024
    stw r28, 0x30(r1)
    bl dtor_80084684
lbl_fn_801D94D0_00001024:
    addi r16, r16, 0x1
lbl_fn_801D94D0_00001028:
    cmpw r16, r26
    blt lbl_fn_801D94D0_00000D54
lbl_fn_801D94D0_00001030:
    lwz r3, 0x40(r1)
    addi r3, r3, 0x1
    stw r3, 0x40(r1)
lbl_fn_801D94D0_0000103C:
    bl fn_802114D8
    lwz r0, 0x40(r1)
    cmpw r0, r3
    blt lbl_fn_801D94D0_00000CA4
    lwz r6, 0x1c0c(r15)
    lwz r0, 0x1c7c(r15)
    cmplw r0, r6
    blt lbl_fn_801D94D0_00001074
    lwz r0, 0x1c88(r15)
    cmplw r0, r6
    blt lbl_fn_801D94D0_00001074
    li r0, 0x1
    stw r0, 0x1bcc(r15)
    b lbl_fn_801D94D0_000014D4
lbl_fn_801D94D0_00001074:
    subic. r4, r6, 0x1
    li r14, 0x0
    li r16, 0x0
    addi r0, r4, 0x1
    slwi r3, r4, 2
    mtctr r0
    blt lbl_fn_801D94D0_000010C8
lbl_fn_801D94D0_00001090:
    add r4, r15, r3
    lwz r4, 0x1c10(r4)
    lwz r0, 0x0(r4)
    cmpwi r0, 0x1
    beq lbl_fn_801D94D0_000010B4
    cmpwi r0, 0x3
    beq lbl_fn_801D94D0_000010B4
    cmpwi r0, 0x5
    bne lbl_fn_801D94D0_000010BC
lbl_fn_801D94D0_000010B4:
    addi r16, r16, 0x1
    b lbl_fn_801D94D0_000010C0
lbl_fn_801D94D0_000010BC:
    addi r14, r14, 0x1
lbl_fn_801D94D0_000010C0:
    subi r3, r3, 0x4
    bdnz lbl_fn_801D94D0_00001090
lbl_fn_801D94D0_000010C8:
    mr r5, r15
    li r17, 0x0
    li r18, -0x1
    li r19, -0x1
    li r7, 0x0
    mtctr r6
    cmplwi r6, 0x0
    ble lbl_fn_801D94D0_00001110
lbl_fn_801D94D0_000010E8:
    lwz r3, 0x1c10(r5)
    lwz r4, 0x1bc8(r15)
    lwz r0, 0x0(r3)
    cmpw r4, r0
    bne lbl_fn_801D94D0_00001104
    mr r19, r7
    b lbl_fn_801D94D0_00001110
lbl_fn_801D94D0_00001104:
    addi r5, r5, 0x4
    addi r7, r7, 0x1
    bdnz lbl_fn_801D94D0_000010E8
lbl_fn_801D94D0_00001110:
    lwz r0, 0x1c94(r15)
    li r20, 0x0
    cmpwi r0, 0x0
    beq lbl_fn_801D94D0_0000127C
    li r0, 0x0
    stb r0, 0xc(r1)
    addi r3, r1, 0x28
    addi r4, r1, 0x24
    lwz r0, 0x1c94(r15)
    addi r5, r1, 0xc
    lwz r6, 0x1c90(r15)
    mulli r0, r0, 0x18
    stw r6, 0x28(r1)
    add r0, r6, r0
    stw r0, 0x24(r1)
    bl fn_801DA308
    lwz r3, 0x1c0c(r15)
    lwz r20, 0x1c90(r15)
    subic. r5, r3, 0x1
    addi r0, r5, 0x1
    slwi r3, r5, 2
    mtctr r0
    blt lbl_fn_801D94D0_000011B8
lbl_fn_801D94D0_0000116C:
    add r4, r15, r3
    lwz r4, 0x1c10(r4)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x1
    beq lbl_fn_801D94D0_00001190
    cmpwi r4, 0x3
    beq lbl_fn_801D94D0_00001190
    cmpwi r4, 0x5
    bne lbl_fn_801D94D0_000011AC
lbl_fn_801D94D0_00001190:
    lwz r0, 0x1bc8(r15)
    cmpw r0, r4
    bne lbl_fn_801D94D0_000011A4
    cmpwi r16, 0x2
    bge lbl_fn_801D94D0_000011AC
lbl_fn_801D94D0_000011A4:
    mr r18, r5
    b lbl_fn_801D94D0_000011B8
lbl_fn_801D94D0_000011AC:
    subi r5, r5, 0x1
    subi r3, r3, 0x4
    bdnz lbl_fn_801D94D0_0000116C
lbl_fn_801D94D0_000011B8:
    cmpwi r18, 0x0
    blt lbl_fn_801D94D0_00001224
    cmpwi r19, 0x0
    blt lbl_fn_801D94D0_00001224
    cmpw r18, r19
    beq lbl_fn_801D94D0_00001224
    lwz r4, 0x1bc8(r15)
    cmpwi r4, 0x1
    beq lbl_fn_801D94D0_000011EC
    cmpwi r4, 0x3
    beq lbl_fn_801D94D0_000011EC
    cmpwi r4, 0x5
    bne lbl_fn_801D94D0_00001224
lbl_fn_801D94D0_000011EC:
    mr r3, r15
    bl fn_801DD26C
    lwz r4, 0x1bc8(r15)
    mr r3, r15
    li r5, 0x0
    li r6, 0x0
    bl fn_801DCE88
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_00001224
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r20)
    cmpw r3, r0
    bne lbl_fn_801D94D0_00001224
    mr r18, r19
lbl_fn_801D94D0_00001224:
    cmpwi r18, 0x0
    blt lbl_fn_801D94D0_0000127C
    lwz r0, 0x1c0c(r15)
    cmpw r18, r0
    bge lbl_fn_801D94D0_0000127C
    slwi r3, r18, 2
    srawi r0, r3, 2
    add r3, r15, r3
    addze r4, r0
    lwz r17, 0x1c10(r3)
    slwi r0, r4, 2
    add r5, r15, r0
    b lbl_fn_801D94D0_00001268
lbl_fn_801D94D0_00001258:
    lwz r0, 0x1c14(r5)
    addi r4, r4, 0x1
    stw r0, 0x1c10(r5)
    addi r5, r5, 0x4
lbl_fn_801D94D0_00001268:
    lwz r3, 0x1c0c(r15)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_801D94D0_00001258
    stw r0, 0x1c0c(r15)
lbl_fn_801D94D0_0000127C:
    cmpwi r17, 0x0
    bne lbl_fn_801D94D0_000013FC
    lwz r0, 0x1ca0(r15)
    cmpwi r0, 0x0
    beq lbl_fn_801D94D0_000013FC
    li r0, 0x0
    stb r0, 0x8(r1)
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    lwz r0, 0x1ca0(r15)
    addi r5, r1, 0x8
    lwz r6, 0x1c9c(r15)
    mulli r0, r0, 0x18
    stw r6, 0x20(r1)
    add r0, r6, r0
    stw r0, 0x1c(r1)
    bl fn_801DA308
    lwz r3, 0x1c0c(r15)
    lwz r20, 0x1c9c(r15)
    subic. r5, r3, 0x1
    addi r0, r5, 0x1
    slwi r3, r5, 2
    mtctr r0
    blt lbl_fn_801D94D0_00001330
lbl_fn_801D94D0_000012DC:
    add r4, r15, r3
    lwz r4, 0x1c10(r4)
    lwz r4, 0x0(r4)
    cmpwi r4, 0x0
    beq lbl_fn_801D94D0_00001308
    cmpwi r4, 0x2
    beq lbl_fn_801D94D0_00001308
    cmpwi r4, 0x4
    beq lbl_fn_801D94D0_00001308
    cmpwi r4, 0x6
    bne lbl_fn_801D94D0_00001324
lbl_fn_801D94D0_00001308:
    lwz r0, 0x1bc8(r15)
    cmpw r0, r4
    bne lbl_fn_801D94D0_0000131C
    cmpwi r14, 0x2
    bge lbl_fn_801D94D0_00001324
lbl_fn_801D94D0_0000131C:
    mr r18, r5
    b lbl_fn_801D94D0_00001330
lbl_fn_801D94D0_00001324:
    subi r5, r5, 0x1
    subi r3, r3, 0x4
    bdnz lbl_fn_801D94D0_000012DC
lbl_fn_801D94D0_00001330:
    cmpwi r18, 0x0
    blt lbl_fn_801D94D0_000013A4
    cmpwi r19, 0x0
    blt lbl_fn_801D94D0_000013A4
    cmpw r18, r19
    beq lbl_fn_801D94D0_000013A4
    lwz r4, 0x1bc8(r15)
    cmpwi r4, 0x0
    beq lbl_fn_801D94D0_0000136C
    cmpwi r4, 0x2
    beq lbl_fn_801D94D0_0000136C
    cmpwi r4, 0x4
    beq lbl_fn_801D94D0_0000136C
    cmpwi r4, 0x6
    bne lbl_fn_801D94D0_000013A4
lbl_fn_801D94D0_0000136C:
    mr r3, r15
    bl fn_801DD26C
    lwz r4, 0x1bc8(r15)
    mr r3, r15
    li r5, 0x0
    li r6, 0x0
    bl fn_801DCE88
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_000013A4
    lwz r3, 0x8(r3)
    lwz r0, 0x8(r20)
    cmpw r3, r0
    bne lbl_fn_801D94D0_000013A4
    mr r18, r19
lbl_fn_801D94D0_000013A4:
    cmpwi r18, 0x0
    blt lbl_fn_801D94D0_000013FC
    lwz r0, 0x1c0c(r15)
    cmpw r18, r0
    bge lbl_fn_801D94D0_000013FC
    slwi r3, r18, 2
    srawi r0, r3, 2
    add r3, r15, r3
    addze r4, r0
    lwz r17, 0x1c10(r3)
    slwi r0, r4, 2
    add r5, r15, r0
    b lbl_fn_801D94D0_000013E8
lbl_fn_801D94D0_000013D8:
    lwz r0, 0x1c14(r5)
    addi r4, r4, 0x1
    stw r0, 0x1c10(r5)
    addi r5, r5, 0x4
lbl_fn_801D94D0_000013E8:
    lwz r3, 0x1c0c(r15)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_801D94D0_000013D8
    stw r0, 0x1c0c(r15)
lbl_fn_801D94D0_000013FC:
    cmpwi r17, 0x0
    beq lbl_fn_801D94D0_00001618
    lwz r16, 0x0(r17)
    lwz r0, 0x1bc8(r15)
    cmpw r16, r0
    bne lbl_fn_801D94D0_00001490
    lwz r14, 0x4(r17)
    mr r3, r15
    mr r4, r16
    li r5, 0x0
    bl fn_801D5420
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_00001448
    mr r3, r15
    mr r4, r16
    mr r5, r14
    li r6, 0x0
    li r7, 0x0
    bl fn_801DCF60
lbl_fn_801D94D0_00001448:
    cmpwi r16, 0x3
    bne lbl_fn_801D94D0_00001468
    mr r3, r15
    mr r4, r16
    mr r5, r14
    li r6, 0x1
    li r7, 0x0
    bl fn_801DCF60
lbl_fn_801D94D0_00001468:
    lwz r0, 0x1c54(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r3, r0, 0x1c58
    beq lbl_fn_801D94D0_00001480
    stw r17, 0x0(r3)
lbl_fn_801D94D0_00001480:
    lwz r3, 0x1c54(r15)
    addi r0, r3, 0x1
    stw r0, 0x1c54(r15)
    b lbl_fn_801D94D0_000014B4
lbl_fn_801D94D0_00001490:
    lwz r0, 0x1c30(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r3, r0, 0x1c34
    beq lbl_fn_801D94D0_000014A8
    stw r17, 0x0(r3)
lbl_fn_801D94D0_000014A8:
    lwz r3, 0x1c30(r15)
    addi r0, r3, 0x1
    stw r0, 0x1c30(r15)
lbl_fn_801D94D0_000014B4:
    lwz r4, 0x0(r17)
    mr r3, r15
    lwz r5, 0x4(r17)
    mr r6, r20
    li r7, 0x0
    li r8, 0x1
    bl fn_801DC42C
    b lbl_fn_801D94D0_00001618
lbl_fn_801D94D0_000014D4:
    lwz r17, 0x1c10(r15)
    mr r3, r15
    lwz r4, 0x0(r17)
    bl fn_801DD26C
    lwz r14, 0x0(r17)
    mr r3, r15
    lwz r16, 0x4(r17)
    li r5, 0x0
    mr r4, r14
    bl fn_801D5420
    cmpwi r3, 0x0
    beq lbl_fn_801D94D0_0000151C
    mr r3, r15
    mr r4, r14
    mr r5, r16
    li r6, 0x0
    li r7, 0x0
    bl fn_801DCF60
lbl_fn_801D94D0_0000151C:
    cmpwi r14, 0x3
    bne lbl_fn_801D94D0_0000153C
    mr r3, r15
    mr r4, r14
    mr r5, r16
    li r6, 0x1
    li r7, 0x0
    bl fn_801DCF60
lbl_fn_801D94D0_0000153C:
    mr r3, r15
    mr r4, r14
    li r5, 0x0
    li r6, 0x0
    bl fn_801DCE88
    mr r6, r3
    mr r3, r15
    mr r4, r14
    mr r5, r16
    li r7, 0x0
    li r8, 0x1
    bl fn_801DC42C
    lwz r4, lbl_8087F4F0
    slwi r0, r14, 6
    li r3, 0x0
    addis r4, r4, 0x1
    add r4, r4, r0
    lwz r4, -0x7d70(r4)
    bl fn_8020ED84
    bl fn_8020EF4C
    cmpwi r3, 0x0
    bne lbl_fn_801D94D0_000015C4
    mr r3, r15
    mr r4, r14
    li r5, 0x1
    li r6, 0x0
    bl fn_801DCE88
    mr r6, r3
    mr r3, r15
    mr r4, r14
    mr r5, r16
    li r7, 0x0
    li r8, 0x1
    bl fn_801DC42C
lbl_fn_801D94D0_000015C4:
    lwz r0, 0x1c54(r15)
    slwi r0, r0, 2
    add r0, r15, r0
    addic. r3, r0, 0x1c58
    beq lbl_fn_801D94D0_000015DC
    stw r17, 0x0(r3)
lbl_fn_801D94D0_000015DC:
    lwz r3, 0x1c54(r15)
    mr r5, r15
    li r4, 0x0
    addi r0, r3, 0x1
    stw r0, 0x1c54(r15)
    b lbl_fn_801D94D0_00001604
lbl_fn_801D94D0_000015F4:
    lwz r0, 0x1c14(r5)
    addi r4, r4, 0x1
    stw r0, 0x1c10(r5)
    addi r5, r5, 0x4
lbl_fn_801D94D0_00001604:
    lwz r3, 0x1c0c(r15)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_801D94D0_000015F4
    stw r0, 0x1c0c(r15)
lbl_fn_801D94D0_00001618:
    lmw r14, 0x48(r1)
    lwz r0, 0x94(r1)
    mtlr r0
    addi r1, r1, 0x90
    blr
}

asm void fn_801DA2F0(void)
{
    nofralloc
    lwz r3, 0x1224(r3)
    blr
}

asm void fn_801DA2F8(void)
{
    nofralloc
    slwi r0, r4, 3
    add r3, r3, r0
    addi r3, r3, 0x1228
    blr
}

asm void fn_801DA308(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    addi r11, r1, 0x50
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    bl _savegpr_22
    lis r31, 0x2aab
    lis r6, 0x6666
    lfs f31, lbl_80882AF0
    mr r24, r3
    mr r25, r4
    mr r26, r5
    addi r28, r6, 0x6667
    subi r27, r31, 0x5555
lbl_fn_801DA308_00001680:
    lwz r30, 0x0(r24)
    lwz r29, 0x0(r25)
    subf r0, r30, r29
    mulhw r0, r27, r0
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r7, r0, r3
    cmpwi r7, 0x1
    ble lbl_fn_801DA308_00002200
    cmpwi r7, 0x14
    bgt lbl_fn_801DA308_00001824
    cmplw r30, r29
    beq lbl_fn_801DA308_00002200
    subi r28, r29, 0x18
    cmplw r30, r28
    beq lbl_fn_801DA308_00002200
    lfs f31, lbl_80882AF0
    b lbl_fn_801DA308_00001818
lbl_fn_801DA308_000016C8:
    cmplw r30, r29
    mr r25, r30
    beq lbl_fn_801DA308_000017AC
    addi r24, r30, 0x18
    b lbl_fn_801DA308_000017A4
lbl_fn_801DA308_000016DC:
    lwz r3, 0x8(r24)
    lwz r0, 0x8(r25)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001734
    lwz r0, 0xc(r24)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_0000171C
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_0000171C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00001794
lbl_fn_801DA308_0000171C:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_0000172C
    li r0, 0x1
    b lbl_fn_801DA308_00001794
lbl_fn_801DA308_0000172C:
    li r0, 0x0
    b lbl_fn_801DA308_00001794
lbl_fn_801DA308_00001734:
    lwz r4, 0x0(r25)
    lwz r3, 0x0(r24)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001788
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r25)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00001794
lbl_fn_801DA308_00001788:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00001794:
    cmpwi r0, 0x0
    beq lbl_fn_801DA308_000017A0
    mr r25, r24
lbl_fn_801DA308_000017A0:
    addi r24, r24, 0x18
lbl_fn_801DA308_000017A4:
    cmplw r24, r29
    bne lbl_fn_801DA308_000016DC
lbl_fn_801DA308_000017AC:
    cmplw r25, r30
    beq lbl_fn_801DA308_00001814
    lwz r3, 0x0(r25)
    lwz r4, 0x4(r25)
    lwz r5, 0x8(r25)
    lwz r6, 0xc(r25)
    lwz r7, 0x10(r25)
    lwz r8, 0x14(r25)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r25)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r25)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r25)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r25)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r25)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r25)
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
lbl_fn_801DA308_00001814:
    addi r30, r30, 0x18
lbl_fn_801DA308_00001818:
    cmplw r30, r28
    bne lbl_fn_801DA308_000016C8
    b lbl_fn_801DA308_00002200
lbl_fn_801DA308_00001824:
    lwz r4, lbl_8087DA70
    srawi r0, r7, 2
    addze r5, r0
    mulhw r0, r28, r4
    addi r8, r4, 0x1
    cmpwi r8, 0x5
    srawi r0, r0, 1
    srwi r3, r0, 31
    add r0, r0, r3
    mulli r0, r0, 0x5
    subf r0, r0, r4
    add r0, r5, r0
    mulli r0, r0, 0x18
    add r0, r30, r0
    blt lbl_fn_801DA308_00001864
    li r8, -0x4
lbl_fn_801DA308_00001864:
    mulhw r4, r28, r8
    addi r3, r8, 0x1
    slwi r5, r7, 2
    stw r3, lbl_8087DA70
    cmpwi r3, 0x5
    lwz r6, 0x0(r24)
    subf r3, r7, r5
    srawi r3, r3, 2
    addze r5, r3
    srawi r3, r4, 1
    srwi r4, r3, 31
    add r3, r3, r4
    mulli r3, r3, 0x5
    subf r3, r3, r8
    add r3, r5, r3
    mulli r3, r3, 0x18
    add r7, r6, r3
    blt lbl_fn_801DA308_000018B4
    li r8, -0x4
    stw r8, lbl_8087DA70
lbl_fn_801DA308_000018B4:
    lwz r5, 0x0(r25)
    mr r6, r26
    addi r3, r1, 0x20
    addi r4, r1, 0x1c
    subi r29, r5, 0x18
    stw r29, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801DBB94
    lwz r23, 0x0(r24)
    mr r30, r29
    b lbl_fn_801DA308_000018EC
lbl_fn_801DA308_000018E8:
    addi r23, r23, 0x18
lbl_fn_801DA308_000018EC:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001944
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_0000192C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_0000192C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_000019A4
lbl_fn_801DA308_0000192C:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_0000193C
    li r0, 0x1
    b lbl_fn_801DA308_000019A4
lbl_fn_801DA308_0000193C:
    li r0, 0x0
    b lbl_fn_801DA308_000019A4
lbl_fn_801DA308_00001944:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001998
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_000019A4
lbl_fn_801DA308_00001998:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_000019A4:
    cmpwi r0, 0x0
    bne lbl_fn_801DA308_000018E8
lbl_fn_801DA308_000019AC:
    subi r30, r30, 0x18
    cmplw r23, r30
    beq lbl_fn_801DA308_00001A78
    lwz r3, 0x8(r30)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001A10
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_000019F8
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_000019F8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00001A70
lbl_fn_801DA308_000019F8:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001A08
    li r0, 0x1
    b lbl_fn_801DA308_00001A70
lbl_fn_801DA308_00001A08:
    li r0, 0x0
    b lbl_fn_801DA308_00001A70
lbl_fn_801DA308_00001A10:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001A64
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00001A70
lbl_fn_801DA308_00001A64:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00001A70:
    cmpwi r0, 0x0
    beq lbl_fn_801DA308_000019AC
lbl_fn_801DA308_00001A78:
    cmplw r23, r30
    bge lbl_fn_801DA308_00001CEC
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DA308_00001AEC
lbl_fn_801DA308_00001AE8:
    addi r23, r23, 0x18
lbl_fn_801DA308_00001AEC:
    lwz r3, 0x8(r23)
    lwz r0, 0x8(r29)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001B44
    lwz r0, 0xc(r23)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001B2C
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_00001B2C
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00001BA4
lbl_fn_801DA308_00001B2C:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001B3C
    li r0, 0x1
    b lbl_fn_801DA308_00001BA4
lbl_fn_801DA308_00001B3C:
    li r0, 0x0
    b lbl_fn_801DA308_00001BA4
lbl_fn_801DA308_00001B44:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r23)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001B98
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00001BA4
lbl_fn_801DA308_00001B98:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00001BA4:
    cmpwi r0, 0x0
    bne lbl_fn_801DA308_00001AE8
lbl_fn_801DA308_00001BAC:
    subi r30, r30, 0x18
    lwz r0, 0x8(r29)
    lwz r3, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001C08
    lwz r0, 0xc(r30)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001BF0
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_00001BF0
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00001C68
lbl_fn_801DA308_00001BF0:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001C00
    li r0, 0x1
    b lbl_fn_801DA308_00001C68
lbl_fn_801DA308_00001C00:
    li r0, 0x0
    b lbl_fn_801DA308_00001C68
lbl_fn_801DA308_00001C08:
    lwz r4, 0x0(r29)
    lwz r3, 0x0(r30)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001C5C
    bl fn_8020EF80
    bl fn_80211480
    mr r22, r3
    lwz r3, 0x0(r29)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r22)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00001C68
lbl_fn_801DA308_00001C5C:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00001C68:
    cmpwi r0, 0x0
    beq lbl_fn_801DA308_00001BAC
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DA308_00001CEC
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DA308_00001AEC
lbl_fn_801DA308_00001CEC:
    lwz r6, 0x0(r24)
    cmplw r23, r6
    bne lbl_fn_801DA308_00002188
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r29)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r29)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r29)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r29)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r29)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r29)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r29)
    stw r4, 0x4(r29)
    stw r5, 0x8(r29)
    stw r6, 0xc(r29)
    stw r7, 0x10(r29)
    stw r8, 0x14(r29)
    lwz r3, 0x0(r25)
    lwz r5, 0x0(r24)
    subi r30, r3, 0x18
    lwz r3, 0x8(r5)
    lwz r0, 0x8(r30)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001DC0
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001DA8
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_00001DA8
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00001E20
lbl_fn_801DA308_00001DA8:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001DB8
    li r0, 0x1
    b lbl_fn_801DA308_00001E20
lbl_fn_801DA308_00001DB8:
    li r0, 0x0
    b lbl_fn_801DA308_00001E20
lbl_fn_801DA308_00001DC0:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001E14
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00001E20
lbl_fn_801DA308_00001E14:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00001E20:
    cmpwi r0, 0x0
    bne lbl_fn_801DA308_00001F68
    b lbl_fn_801DA308_00001E30
lbl_fn_801DA308_00001E2C:
    addi r23, r23, 0x18
lbl_fn_801DA308_00001E30:
    lwz r0, 0x0(r25)
    cmplw r23, r0
    beq lbl_fn_801DA308_00001F00
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001E98
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001E80
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_00001E80
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00001EF8
lbl_fn_801DA308_00001E80:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001E90
    li r0, 0x1
    b lbl_fn_801DA308_00001EF8
lbl_fn_801DA308_00001E90:
    li r0, 0x0
    b lbl_fn_801DA308_00001EF8
lbl_fn_801DA308_00001E98:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00001EEC
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00001EF8
lbl_fn_801DA308_00001EEC:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00001EF8:
    cmpwi r0, 0x0
    beq lbl_fn_801DA308_00001E2C
lbl_fn_801DA308_00001F00:
    cmplw r23, r30
    bge lbl_fn_801DA308_00001F68
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
lbl_fn_801DA308_00001F68:
    cmplw r23, r30
    bge lbl_fn_801DA308_00002180
    b lbl_fn_801DA308_00001F78
lbl_fn_801DA308_00001F74:
    addi r23, r23, 0x18
lbl_fn_801DA308_00001F78:
    lwz r5, 0x0(r24)
    lwz r0, 0x8(r23)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DA308_00001FD4
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001FBC
    lwz r4, 0xc(r23)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_00001FBC
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_00002034
lbl_fn_801DA308_00001FBC:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00001FCC
    li r0, 0x1
    b lbl_fn_801DA308_00002034
lbl_fn_801DA308_00001FCC:
    li r0, 0x0
    b lbl_fn_801DA308_00002034
lbl_fn_801DA308_00001FD4:
    lwz r4, 0x0(r23)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_00002028
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r23)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_00002034
lbl_fn_801DA308_00002028:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_00002034:
    cmpwi r0, 0x0
    beq lbl_fn_801DA308_00001F74
lbl_fn_801DA308_0000203C:
    lwz r5, 0x0(r24)
    subi r30, r30, 0x18
    lwz r0, 0x8(r30)
    lwz r3, 0x8(r5)
    cmpw r3, r0
    bne lbl_fn_801DA308_0000209C
    lwz r0, 0xc(r5)
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00002084
    lwz r4, 0xc(r30)
    cmpwi r4, 0x0
    blt lbl_fn_801DA308_00002084
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801DA308_000020FC
lbl_fn_801DA308_00002084:
    cmpwi r0, 0x0
    blt lbl_fn_801DA308_00002094
    li r0, 0x1
    b lbl_fn_801DA308_000020FC
lbl_fn_801DA308_00002094:
    li r0, 0x0
    b lbl_fn_801DA308_000020FC
lbl_fn_801DA308_0000209C:
    lwz r4, 0x0(r30)
    lwz r3, 0x0(r5)
    lfs f0, 0x8(r4)
    lfs f1, 0x8(r3)
    fsubs f2, f1, f0
    fabs f2, f2
    frsp f2, f2
    fcmpo cr0, f2, f31
    bge lbl_fn_801DA308_000020F0
    bl fn_8020EF80
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_8020EF80
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801DA308_000020FC
lbl_fn_801DA308_000020F0:
    fcmpo cr0, f1, f0
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801DA308_000020FC:
    cmpwi r0, 0x0
    bne lbl_fn_801DA308_0000203C
    xor r0, r30, r23
    cntlzw r0, r0
    slw r0, r30, r0
    srwi. r0, r0, 31
    beq lbl_fn_801DA308_00002180
    lwz r3, 0x0(r23)
    lwz r4, 0x4(r23)
    lwz r5, 0x8(r23)
    lwz r6, 0xc(r23)
    lwz r7, 0x10(r23)
    lwz r8, 0x14(r23)
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lwz r0, 0x4(r30)
    stw r0, 0x4(r23)
    lwz r0, 0x8(r30)
    stw r0, 0x8(r23)
    lwz r0, 0xc(r30)
    stw r0, 0xc(r23)
    lwz r0, 0x10(r30)
    stw r0, 0x10(r23)
    lwz r0, 0x14(r30)
    stw r0, 0x14(r23)
    addi r23, r23, 0x18
    stw r3, 0x0(r30)
    stw r4, 0x4(r30)
    stw r5, 0x8(r30)
    stw r6, 0xc(r30)
    stw r7, 0x10(r30)
    stw r8, 0x14(r30)
    b lbl_fn_801DA308_00001F78
lbl_fn_801DA308_00002180:
    stw r23, 0x0(r24)
    b lbl_fn_801DA308_00001680
lbl_fn_801DA308_00002188:
    lwz r3, 0x0(r25)
    subf r0, r6, r23
    subi r5, r31, 0x5555
    mulhw r4, r5, r0
    subf r0, r23, r3
    mulhw r0, r5, r0
    srawi r4, r4, 2
    srwi r5, r4, 31
    srawi r0, r0, 2
    add r5, r4, r5
    srwi r4, r0, 31
    add r0, r0, r4
    cmpw r5, r0
    bge lbl_fn_801DA308_000021E0
    stw r23, 0x10(r1)
    mr r5, r26
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    stw r6, 0x14(r1)
    bl fn_801DAEE4
    stw r23, 0x0(r24)
    b lbl_fn_801DA308_00001680
lbl_fn_801DA308_000021E0:
    stw r3, 0x8(r1)
    mr r5, r26
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    stw r23, 0xc(r1)
    bl fn_801DAEE4
    stw r23, 0x0(r25)
    b lbl_fn_801DA308_00001680
lbl_fn_801DA308_00002200:
    addi r11, r1, 0x50
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    bl _restgpr_22
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}
