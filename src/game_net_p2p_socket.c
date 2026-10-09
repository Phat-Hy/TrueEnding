#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSCreateThread(void);
extern void OSInitThreadQueue(void);
extern void OSIsThreadSuspended(void);
extern void OSIsThreadTerminated(void);
extern void OSResumeThread(void);
extern void OSSleepThread(void);
extern void OSSleepTicks(void);
extern void OSWakeupThread(void);
extern void __files(void);
extern void dtor_80084684(void);
extern void fn_800827E0(void);
extern void fn_800838B8(void);
extern void fn_800839EC(void);
extern void fn_80083AD4(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_80084E50(void);
extern void fn_80084EE8(void);
extern void fn_80508DA0(void);
extern void fn_80509A8C(void);
extern void fn_80509A94(void);
extern void fn_80509F4C(void);
extern void fn_8050AB5C(void);
extern void fn_8050B228(void);
extern void fn_8050B674(void);
extern void fn_8050B760(void);
extern void fn_8050B780(void);
extern void fn_8050E630(void);
extern void fn_8050F5AC(void);
extern void fn_8050F668(void);
extern void fn_8050F758(void);
extern void fn_80680770(void);
extern void fn_80686EA4(void);
extern void fn_806A295C(void);
extern void fn_806A2E8C(void);
extern void fn_806A7020(void);
extern void fn_806A70E0(void);
extern void fn_806AF910(void);
extern void fn_806AFAA0(void);
extern void fn_806B0260(void);
extern void fn_806B0410(void);
extern void fn_806B05B0(void);
extern void fn_806B0980(void);
extern void fn_806D45D0(void);
extern void fn_806D4950(void);
extern void fn_806D49C0(void);
extern void fn_806D4A90(void);
extern void fn_806D4AC0(void);
extern void fn_806D4BE0(void);
extern void fn_806D4E00(void);
extern void fn_806D4E70(void);
extern void fn_806D4FD0(void);
extern void fn_806D4FE0(void);
extern void fn_806D51D0(void);

/* External data declarations */
extern u8 jumptable_80792E80[];
extern u8 jumptable_80792ECC[];
extern u8 jumptable_80792F18[];
extern u8 jumptable_80792F64[];
extern u8 jumptable_80792FB0[];
extern u8 jumptable_80792FD4[];
extern u8 jumptable_80793020[];
extern u8 jumptable_8079306C[];
extern u8 jumptable_807930B8[];
extern u8 lbl_8075B098[];
extern u8 lbl_8075B180[];
extern u8 lbl_8075B1D4[];
extern u8 lbl_80793118[];
extern u8 lbl_80793140[];
extern u8 lbl_80793168[];
extern u8 lbl_80793180[];

/* Small data declarations */
extern u32 lbl_8087E470;
extern u32 lbl_8087E474;
extern u32 lbl_8087E478;
extern u32 lbl_8087E47C;
extern u32 lbl_8087F628;
extern u32 lbl_8087F878;

/* Function declarations */
void fn_8050C16C(void);
void fn_8050C1DC(void);
void fn_8050C2F8(void);
void fn_8050C7F4(void);
void fn_8050C844(void);
void fn_8050C89C(void);
void fn_8050C9D8(void);
void fn_8050CB28(void);
void fn_8050CCD4(void);
void fn_8050CDAC(void);
void fn_8050CDD4(void);
void fn_8050CEA0(void);
void fn_8050CF18(void);
void fn_8050CF20(void);
void fn_8050CF94(void);
void fn_8050CFCC(void);
void fn_8050D3C8(void);
void fn_8050D3EC(void);
void fn_8050D488(void);
void fn_8050D504(void);
void fn_8050D5BC(void);
void fn_8050D680(void);
void fn_8050D72C(void);
void fn_8050D7F0(void);

asm void fn_8050C16C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    addi r3, r1, 0xc
    addi r4, r1, 0x8
    bl fn_806A7020
    lwz r5, 0xc(r1)
    lwz r4, lbl_8087F628
    slwi r0, r5, 1
    addis r4, r4, 0x1
    subf r0, r0, r5
    stw r0, -0x413c(r4)
    lwz r4, lbl_8087F628
    addis r4, r4, 0x1
    stw r3, -0x4138(r4)
    lwz r3, lbl_8087F628
    lwz r0, 0x8(r1)
    addis r3, r3, 0x1
    stw r0, -0x4134(r3)
    lwz r3, 0x8(r1)
    xori r0, r3, 0x1
    cntlzw r0, r0
    slw r0, r3, r0
    srwi r3, r0, 31
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050C1DC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r5, lbl_8075B098@ha
    stw r0, 0x14(r1)
    li r0, 0x1
    addi r5, r5, lbl_8075B098@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r0, 0x0(r3)
    addi r3, r5, 0xa3
    bl fn_806D49C0
    cmplwi r3, 0x12
    bgt lbl_fn_8050C1DC_00000124
    lis r4, jumptable_80792E80@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80792E80@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
    li r0, 0x0
    b lbl_fn_8050C1DC_00000128
lbl_fn_8050C1DC_00000124:
    li r0, 0x1
lbl_fn_8050C1DC_00000128:
    cmpwi r0, 0x0
    bne lbl_fn_8050C1DC_00000164
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r31)
    cmpwi r0, -0x1
    beq lbl_fn_8050C1DC_00000154
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r31, r0
    stw r4, 0x4(r3)
lbl_fn_8050C1DC_00000154:
    li r0, 0x2
    stw r0, 0x0(r31)
    li r3, 0x0
    b lbl_fn_8050C1DC_00000178
lbl_fn_8050C1DC_00000164:
    li r3, 0x0
    li r0, -0x1
    stw r3, 0x14(r31)
    li r3, 0x1
    stw r0, 0x750(r31)
lbl_fn_8050C1DC_00000178:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050C2F8(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    stw r30, 0x38(r1)
    mr r30, r3
    stw r29, 0x34(r1)
    lwz r0, 0x0(r3)
    cmplwi r0, 0x8
    bgt lbl_fn_8050C2F8_00000668
    lis r3, jumptable_80792FB0@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80792FB0@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
    li r3, 0x1
    b lbl_fn_8050C2F8_0000066C
    bl fn_806D45D0
    cmpwi r3, 0x2
    beq lbl_fn_8050C2F8_00000204
    cmpwi r3, 0x0
    beq lbl_fn_8050C2F8_00000330
    cmpwi r3, 0x3
    beq lbl_fn_8050C2F8_00000330
    b lbl_fn_8050C2F8_00000364
lbl_fn_8050C2F8_00000204:
    lwz r0, 0x73c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8050C2F8_00000244
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_00000234
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_00000234:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_00000244:
    lwz r3, 0x740(r30)
    li r4, 0x2
    lwz r5, 0x744(r30)
    lwz r6, 0x748(r30)
    lwz r7, 0x74c(r30)
    bl fn_806D4AC0
    cmplwi r3, 0x12
    bgt lbl_fn_8050C2F8_000002E4
    lis r4, jumptable_80792F64@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80792F64@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
    li r0, 0x0
    b lbl_fn_8050C2F8_000002E8
lbl_fn_8050C2F8_000002E4:
    li r0, 0x1
lbl_fn_8050C2F8_000002E8:
    cmpwi r0, 0x0
    bne lbl_fn_8050C2F8_00000324
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_00000314
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_00000314:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_00000324:
    li r0, 0x4
    stw r0, 0x0(r30)
    b lbl_fn_8050C2F8_00000364
lbl_fn_8050C2F8_00000330:
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_00000354
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_00000354:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_00000364:
    li r3, 0x1
    b lbl_fn_8050C2F8_0000066C
    bl fn_806D4E70
    cmpwi r3, 0x0
    beq lbl_fn_8050C2F8_000003C0
    bl fn_806D4FD0
    cmpwi r3, 0x6
    bne lbl_fn_8050C2F8_000003B8
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_000003A8
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_000003A8:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_000003B8:
    li r0, 0x5
    stw r0, 0x0(r30)
lbl_fn_8050C2F8_000003C0:
    li r3, 0x1
    b lbl_fn_8050C2F8_0000066C
    bl fn_806D4E70
    cmpwi r3, 0x0
    beq lbl_fn_8050C2F8_00000658
    bl fn_806D4FD0
    cmpwi r3, 0x6
    bne lbl_fn_8050C2F8_00000414
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_00000404
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_00000404:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_00000414:
    addi r3, r1, 0x8
    bl fn_806D51D0
    cmplwi r3, 0x12
    bgt lbl_fn_8050C2F8_000004A4
    lis r4, jumptable_80792F18@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80792F18@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
    li r0, 0x0
    b lbl_fn_8050C2F8_000004A8
lbl_fn_8050C2F8_000004A4:
    li r0, 0x1
lbl_fn_8050C2F8_000004A8:
    cmpwi r0, 0x0
    bne lbl_fn_8050C2F8_000004E4
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_000004D4
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_000004D4:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_000004E4:
    li r31, 0x0
    lis r29, jumptable_80792ECC@ha
    b lbl_fn_8050C2F8_0000061C
lbl_fn_8050C2F8_000004F0:
    mr r4, r31
    addi r3, r1, 0xc
    bl fn_806D4FE0
    cmplwi r3, 0x12
    bgt lbl_fn_8050C2F8_00000580
    addi r4, r29, jumptable_80792ECC@l
    slwi r0, r3, 2
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
    li r0, 0x0
    b lbl_fn_8050C2F8_00000584
lbl_fn_8050C2F8_00000580:
    li r0, 0x1
lbl_fn_8050C2F8_00000584:
    cmpwi r0, 0x0
    bne lbl_fn_8050C2F8_000005C0
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C2F8_000005B0
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C2F8_000005B0:
    li r0, 0x2
    stw r0, 0x0(r30)
    li r3, 0x0
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_000005C0:
    lwz r0, 0x14(r30)
    mulli r0, r0, 0x1c
    add r0, r30, r0
    addic. r4, r0, 0x18
    beq lbl_fn_8050C2F8_0000060C
    lwz r0, 0x10(r1)
    lwz r3, 0xc(r1)
    stw r3, 0x0(r4)
    stw r0, 0x4(r4)
    lwz r0, 0x18(r1)
    lwz r3, 0x14(r1)
    stw r3, 0x8(r4)
    stw r0, 0xc(r4)
    lwz r0, 0x20(r1)
    lwz r3, 0x1c(r1)
    stw r3, 0x10(r4)
    stw r0, 0x14(r4)
    lwz r0, 0x24(r1)
    stw r0, 0x18(r4)
lbl_fn_8050C2F8_0000060C:
    lwz r3, 0x14(r30)
    addi r31, r31, 0x1
    addi r0, r3, 0x1
    stw r0, 0x14(r30)
lbl_fn_8050C2F8_0000061C:
    lwz r0, 0x8(r1)
    cmplw r31, r0
    blt lbl_fn_8050C2F8_000004F0
    lwz r12, 0x734(r30)
    cmpwi r12, 0x0
    beq lbl_fn_8050C2F8_00000650
    lwz r0, 0x14(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8050C2F8_00000650
    addi r4, r30, 0x18
    li r3, 0x0
    mtctr r12
    bctrl
lbl_fn_8050C2F8_00000650:
    li r0, 0x8
    stw r0, 0x0(r30)
lbl_fn_8050C2F8_00000658:
    li r3, 0x1
    b lbl_fn_8050C2F8_0000066C
    li r3, 0x1
    b lbl_fn_8050C2F8_0000066C
lbl_fn_8050C2F8_00000668:
    li r3, 0x1
lbl_fn_8050C2F8_0000066C:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8050C7F4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8050C7F4_000006B0
    li r3, 0x0
    b lbl_fn_8050C7F4_000006C4
lbl_fn_8050C7F4_000006B0:
    bl fn_806D4A90
    li r0, 0x0
    stw r0, 0x14(r31)
    li r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_8050C7F4_000006C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050C844(void)
{
    nofralloc
    lwz r5, lbl_8087F628
    cmpwi r5, 0x0
    beq lbl_fn_8050C844_000006EC
    cmplwi r4, 0x3
    ble lbl_fn_8050C844_000006F4
lbl_fn_8050C844_000006EC:
    li r3, 0x0
    blr
lbl_fn_8050C844_000006F4:
    slwi r0, r4, 2
    add r3, r3, r0
    lwz r6, 0x4(r3)
    cmpwi r6, -0x1
    bne lbl_fn_8050C844_00000710
    li r3, 0x1
    blr
lbl_fn_8050C844_00000710:
    lwz r4, 0xcc(r5)
    li r0, 0x1194
    li r3, 0x0
    subf r5, r6, r4
    srawi r4, r5, 31
    subfc r0, r0, r5
    adde r3, r4, r3
    blr
}

asm void fn_8050C89C(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    li r8, 0x1
    stw r0, 0x124(r1)
    li r0, 0xc
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    stw r8, 0x750(r3)
    stw r7, 0x734(r3)
    li r3, 0x1
    stw r5, 0x10(r1)
    li r5, 0x2
    stw r6, 0x14(r1)
    addi r6, r1, 0x8
    stw r0, 0x8(r1)
    stw r8, 0xc(r1)
    bl fn_806D4BE0
    cmplwi r3, 0x12
    bgt lbl_fn_8050C89C_00000800
    lis r4, jumptable_80792FD4@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80792FD4@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
    li r31, 0x0
    b lbl_fn_8050C89C_00000804
lbl_fn_8050C89C_00000800:
    li r31, 0x1
lbl_fn_8050C89C_00000804:
    cmpwi r31, 0x0
    beq lbl_fn_8050C89C_00000824
    li r0, 0x6
    stw r0, 0x0(r30)
    lwz r3, lbl_8087F628
    lwz r0, 0xcc(r3)
    stw r0, 0x8(r30)
    b lbl_fn_8050C89C_00000850
lbl_fn_8050C89C_00000824:
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C89C_00000848
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C89C_00000848:
    li r0, 0x2
    stw r0, 0x0(r30)
lbl_fn_8050C89C_00000850:
    mr r3, r31
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8050C9D8(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    cmpwi r5, 0x2
    stw r0, 0x124(r1)
    li r0, 0x0
    stw r31, 0x11c(r1)
    stw r30, 0x118(r1)
    mr r30, r3
    stw r0, 0x750(r3)
    li r0, 0xc
    stw r7, 0x734(r3)
    li r7, 0x1
    stw r0, 0x8(r1)
    li r0, 0x2
    stw r7, 0xc(r1)
    ble lbl_fn_8050C9D8_000008B0
    mr r0, r5
lbl_fn_8050C9D8_000008B0:
    stw r6, 0x14(r1)
    addi r6, r1, 0x8
    li r3, 0x2
    li r5, 0x2
    stw r0, 0x10(r1)
    bl fn_806D4BE0
    cmplwi r3, 0x12
    bgt lbl_fn_8050C9D8_00000950
    lis r4, jumptable_80793020@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_80793020@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
    li r31, 0x0
    b lbl_fn_8050C9D8_00000954
lbl_fn_8050C9D8_00000950:
    li r31, 0x1
lbl_fn_8050C9D8_00000954:
    cmpwi r31, 0x0
    beq lbl_fn_8050C9D8_00000974
    li r0, 0x6
    stw r0, 0x0(r30)
    lwz r3, lbl_8087F628
    lwz r0, 0xcc(r3)
    stw r0, 0x4(r30)
    b lbl_fn_8050C9D8_000009A0
lbl_fn_8050C9D8_00000974:
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r30)
    cmpwi r0, -0x1
    beq lbl_fn_8050C9D8_00000998
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r30, r0
    stw r4, 0x4(r3)
lbl_fn_8050C9D8_00000998:
    li r0, 0x2
    stw r0, 0x0(r30)
lbl_fn_8050C9D8_000009A0:
    mr r3, r31
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r0, 0x124(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_8050CB28(void)
{
    nofralloc
    stwu r1, -0x130(r1)
    mflr r0
    stw r0, 0x134(r1)
    stmw r27, 0x11c(r1)
    li r30, 0x2
    mr r27, r4
    mr r28, r5
    mr r31, r3
    mr r29, r6
    li r4, 0x0
    li r5, 0x110
    stw r30, 0x750(r3)
    stw r7, 0x734(r3)
    addi r3, r1, 0x8
    bl memset
    cmpwi r28, 0x2
    li r3, 0x10c
    li r0, 0x1
    stw r3, 0x8(r1)
    stw r0, 0xc(r1)
    ble lbl_fn_8050CB28_00000A14
    mr r30, r28
lbl_fn_8050CB28_00000A14:
    lwz r3, lbl_8087F628
    li r4, 0x1
    stw r30, 0x10(r1)
    addi r3, r3, 0x430
    stw r29, 0x14(r1)
    bl fn_8050F5AC
    addi r30, r1, 0x8
    b lbl_fn_8050CB28_00000A5C
lbl_fn_8050CB28_00000A34:
    lwz r5, lbl_8087F628
    mr r4, r3
    addi r3, r5, 0x430
    bl fn_8050F758
    lwz r5, lbl_8087F628
    li r4, 0x1
    stw r3, 0x10(r30)
    addi r3, r5, 0x430
    bl fn_8050F668
    addi r30, r30, 0x4
lbl_fn_8050CB28_00000A5C:
    cmpwi r3, -0x1
    bne lbl_fn_8050CB28_00000A34
    mr r4, r27
    addi r6, r1, 0x8
    li r3, 0x3
    li r5, 0x2
    bl fn_806D4BE0
    cmplwi r3, 0x12
    bgt lbl_fn_8050CB28_00000B00
    lis r4, jumptable_8079306C@ha
    slwi r0, r3, 2
    addi r4, r4, jumptable_8079306C@l
    lwzx r4, r4, r0
    mtctr r4
    bctr
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
    li r30, 0x0
    b lbl_fn_8050CB28_00000B04
lbl_fn_8050CB28_00000B00:
    li r30, 0x1
lbl_fn_8050CB28_00000B04:
    cmpwi r30, 0x0
    beq lbl_fn_8050CB28_00000B24
    li r0, 0x6
    stw r0, 0x0(r31)
    lwz r3, lbl_8087F628
    lwz r0, 0xcc(r3)
    stw r0, 0xc(r31)
    b lbl_fn_8050CB28_00000B50
lbl_fn_8050CB28_00000B24:
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r31)
    cmpwi r0, -0x1
    beq lbl_fn_8050CB28_00000B48
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r31, r0
    stw r4, 0x4(r3)
lbl_fn_8050CB28_00000B48:
    li r0, 0x2
    stw r0, 0x0(r31)
lbl_fn_8050CB28_00000B50:
    mr r3, r30
    lmw r27, 0x11c(r1)
    lwz r0, 0x134(r1)
    mtlr r0
    addi r1, r1, 0x130
    blr
}

asm void fn_8050CCD4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    li r0, 0x0
    stmw r27, 0x1c(r1)
    li r31, 0x3
    mr r28, r4
    mr r29, r5
    mr r27, r3
    mr r30, r7
    li r4, 0x0
    li r5, 0x4
    stw r31, 0x750(r3)
    stw r6, 0x8(r1)
    stw r0, 0x73c(r3)
    addi r3, r3, 0x738
    bl memset
    stw r28, 0x740(r27)
    addi r3, r1, 0x8
    addi r7, r27, 0x738
    addi r8, r27, 0x73c
    stw r29, 0x744(r27)
    li r4, 0x1
    li r5, 0x0
    li r6, 0x0
    lwz r0, 0x8(r1)
    stw r0, 0x748(r27)
    stw r30, 0x74c(r27)
    bl fn_806D4950
    cmpwi r3, 0x0
    mr r30, r3
    beq lbl_fn_8050CCD4_00000BFC
    stw r31, 0x0(r27)
    lwz r3, lbl_8087F628
    lwz r0, 0xcc(r3)
    stw r0, 0x10(r27)
    b lbl_fn_8050CCD4_00000C28
lbl_fn_8050CCD4_00000BFC:
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x750(r27)
    cmpwi r0, -0x1
    beq lbl_fn_8050CCD4_00000C20
    slwi r0, r0, 2
    li r4, -0x1
    add r3, r27, r0
    stw r4, 0x4(r3)
lbl_fn_8050CCD4_00000C20:
    li r0, 0x2
    stw r0, 0x0(r27)
lbl_fn_8050CCD4_00000C28:
    mr r3, r30
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8050CDAC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    bl fn_806D4E00
    bl fn_806D4A90
    lwz r0, 0x14(r1)
    li r3, 0x1
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050CDD4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    bl fn_800827E0
    lis r4, lbl_8075B098@ha
    lis r31, 0x1
    addi r4, r4, lbl_8075B098@l
    li r5, 0x4
    addi r7, r4, 0x2c
    li r6, 0x5
    subi r4, r31, 0x1
    li r9, 0x0
    mr r8, r7
    bl fn_800838B8
    cmpwi r3, 0x0
    stw r3, 0x0(r28)
    bne lbl_fn_8050CDD4_00000CD0
    li r3, 0x0
    b lbl_fn_8050CDD4_00000D14
lbl_fn_8050CDD4_00000CD0:
    li r0, 0x0
    stw r0, 0x328(r28)
    addi r3, r28, 0x334
    bl OSInitThreadQueue
    lwz r3, 0x0(r28)
    mr r4, r29
    mr r8, r30
    subi r7, r31, 0x1
    addis r6, r3, 0x1
    addi r3, r28, 0x8
    li r5, 0x0
    li r9, 0x1
    subi r6, r6, 0x1
    bl OSCreateThread
    neg r0, r3
    or r0, r0, r3
    srwi r3, r0, 31
lbl_fn_8050CDD4_00000D14:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050CEA0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    addi r3, r3, 0x8
    bl OSIsThreadTerminated
    cmpwi r3, 0x0
    bne lbl_fn_8050CEA0_00000D90
    addi r3, r30, 0x8
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_8050CEA0_00000D74
    addi r3, r30, 0x8
    bl OSResumeThread
lbl_fn_8050CEA0_00000D74:
    li r31, 0x0
    li r0, 0xc
    stw r31, 0x320(r30)
    addi r3, r30, 0x334
    stw r0, 0x328(r30)
    bl OSWakeupThread
    stw r31, 0x324(r30)
lbl_fn_8050CEA0_00000D90:
    lwz r31, 0xc(r1)
    li r3, 0x1
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050CF18(void)
{
    nofralloc
    addi r3, r3, 0x8
    b OSIsThreadTerminated
}

asm void fn_8050CF20(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    addi r3, r3, 0x8
    bl OSIsThreadSuspended
    cmpwi r3, 0x1
    bne lbl_fn_8050CF20_00000DF0
    addi r3, r29, 0x8
    bl OSResumeThread
lbl_fn_8050CF20_00000DF0:
    stw r31, 0x320(r29)
    addi r3, r29, 0x334
    stw r30, 0x328(r29)
    bl OSWakeupThread
    li r0, 0x0
    stw r0, 0x324(r29)
    li r3, 0x1
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050CF94(void)
{
    nofralloc
    lwz r4, 0x328(r3)
    li r0, 0x0
    stw r0, 0x330(r3)
    cmpwi r4, 0x8
    bne lbl_fn_8050CF94_00000E48
    li r0, 0xb
    stw r0, 0x328(r3)
    blr
lbl_fn_8050CF94_00000E48:
    subi r0, r4, 0x5
    cmplwi r0, 0x1
    bgtlr
    li r0, 0x1
    stw r0, 0x330(r3)
    blr
}

asm void fn_8050CFCC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r15, 0x1c(r1)
    lis r16, fn_8050B780@ha
    lis r26, 0x8000
    lis r27, 0x1062
    addi r17, r16, fn_8050B780@l
    li r28, 0x0
    li r29, 0x64
    lis r18, fn_8050B228@ha
    lis r19, fn_8050B674@ha
    lis r20, fn_8050B760@ha
    li r23, 0x1
    lis r24, 0x431c
    li r25, 0x411a
    li r22, 0xb
    lis r15, jumptable_807930B8@ha
    li r21, 0x8
lbl_fn_8050CFCC_00000EAC:
    lwz r31, lbl_8087F628
    li r30, 0x0
    addis r4, r31, 0x1
    lwz r0, -0x3e08(r4)
    cmplwi r0, 0xc
    bgt lbl_fn_8050CFCC_000011D8
    addi r3, r15, jumptable_807930B8@l
    slwi r0, r0, 2
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lwz r4, -0x3e10(r4)
    mr r3, r31
    bl fn_80508DA0
    lwz r4, lbl_8087F628
    li r30, 0x1
    addis r4, r4, 0x1
    stw r3, -0x3e04(r4)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r22, -0x3e08(r3)
    b lbl_fn_8050CFCC_00001208
    mr r3, r31
    bl fn_80509F4C
    lwz r4, lbl_8087F628
    li r30, 0x1
    addis r4, r4, 0x1
    stw r3, -0x3e04(r4)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r22, -0x3e08(r3)
    b lbl_fn_8050CFCC_00001208
    lwz r5, -0x3e10(r4)
    mr r3, r31
    lwz r4, 0x0(r5)
    lwz r5, 0x4(r5)
    bl fn_8050AB5C
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r22, -0x3e08(r3)
    b lbl_fn_8050CFCC_00001208
    lwz r0, 0x1f8(r31)
    extrwi r0, r0, 1, 6
    cmplwi r0, 0x1
    bne lbl_fn_8050CFCC_00000F7C
    lbz r0, -0x3deb(r4)
    cmpwi r0, 0x0
    bne lbl_fn_8050CFCC_00000F70
    bl fn_806B0980
lbl_fn_8050CFCC_00000F70:
    lwz r0, 0x1f8(r31)
    rlwinm r0, r0, 0, 7, 5
    stw r0, 0x1f8(r31)
lbl_fn_8050CFCC_00000F7C:
    lwz r3, 0x1f8(r31)
    extrwi r0, r3, 1, 2
    cmplwi r0, 0x1
    bne lbl_fn_8050CFCC_00000F94
    rlwinm r0, r3, 0, 3, 1
    stw r0, 0x1f8(r31)
lbl_fn_8050CFCC_00000F94:
    lwz r0, 0x1f8(r31)
    srwi r0, r0, 31
    cmplwi r0, 0x1
    bne lbl_fn_8050CFCC_00000FB4
    bl fn_806AF910
    lwz r0, 0x1f8(r31)
    clrlwi r0, r0, 1
    stw r0, 0x1f8(r31)
lbl_fn_8050CFCC_00000FB4:
    bl fn_806A70E0
    addis r3, r31, 0x1
    stw r28, -0x4138(r3)
    stw r28, -0x413c(r3)
    stw r28, -0x4134(r3)
    stw r28, -0x4180(r3)
    bl fn_806A2E8C
    bl fn_806A295C
    lwz r3, lbl_8087F628
    li r30, 0x1
    addis r3, r3, 0x1
    stw r22, -0x3e08(r3)
    b lbl_fn_8050CFCC_00001208
    stw r28, 0x8(r1)
    addi r5, r31, 0x10
    addi r6, r18, fn_8050B228@l
    addi r8, r19, fn_8050B674@l
    stw r17, 0xc(r1)
    addi r10, r20, fn_8050B760@l
    li r4, 0x6
    li r7, 0x0
    stw r28, 0x10(r1)
    li r9, 0x0
    stw r28, 0x14(r1)
    lwz r3, lbl_8087F628
    lwz r3, 0x260(r3)
    bl fn_806B0260
    lwz r4, lbl_8087F628
    li r30, 0x1
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x200
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwimi r0, r3, 16, 15, 15
    stw r0, 0x1f8(r4)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r21, -0x3e08(r3)
    b lbl_fn_8050CFCC_00001208
    lbz r0, 0x90(r31)
    cmplwi r0, 0x1
    bne lbl_fn_8050CFCC_000010AC
    stw r28, 0x8(r1)
    addi r5, r18, fn_8050B228@l
    addi r7, r19, fn_8050B674@l
    addi r9, r16, fn_8050B780@l
    lwz r3, 0x260(r31)
    li r4, 0x6
    li r6, 0x0
    li r8, 0x0
    li r10, 0x0
    bl fn_806B0410
    b lbl_fn_8050CFCC_000010D4
lbl_fn_8050CFCC_000010AC:
    stw r28, 0x8(r1)
    addi r5, r18, fn_8050B228@l
    addi r7, r19, fn_8050B674@l
    addi r10, r31, 0xc1
    lwz r3, 0x260(r31)
    li r6, 0x0
    lbz r4, -0x3dec(r4)
    li r8, 0x0
    li r9, 0x0
    bl fn_806B05B0
lbl_fn_8050CFCC_000010D4:
    lwz r4, lbl_8087F628
    li r30, 0x1
    lwz r0, 0x1f8(r4)
    oris r0, r0, 0x200
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 8, 6
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwinm r0, r0, 0, 13, 11
    stw r0, 0x1f8(r4)
    lwz r4, lbl_8087F628
    lwz r0, 0x1f8(r4)
    rlwimi r0, r3, 16, 15, 15
    stw r0, 0x1f8(r4)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r21, -0x3e08(r3)
    b lbl_fn_8050CFCC_00001208
    lwz r0, -0x3e00(r4)
    cmpwi r0, 0x1
    bne lbl_fn_8050CFCC_00001148
    stw r28, -0x3e00(r4)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r22, -0x3e08(r3)
    b lbl_fn_8050CFCC_000011D0
lbl_fn_8050CFCC_00001148:
    lwz r3, 0x1f8(r31)
    li r5, 0x0
    extrwi r0, r3, 1, 6
    cmplwi r0, 0x1
    bne lbl_fn_8050CFCC_0000116C
    extrwi r0, r3, 1, 7
    cmplwi r0, 0x1
    bne lbl_fn_8050CFCC_0000116C
    li r5, 0x1
lbl_fn_8050CFCC_0000116C:
    cmpwi r5, 0x1
    bne lbl_fn_8050CFCC_0000117C
    stw r22, -0x3e08(r4)
    b lbl_fn_8050CFCC_000011D0
lbl_fn_8050CFCC_0000117C:
    stb r23, 0xc0(r31)
    bl fn_806AFAA0
    lwz r5, lbl_8087F628
    subi r4, r24, 0x217d
    mullw r3, r28, r25
    stb r28, 0xc0(r5)
    lwz r0, 0xf8(r26)
    srwi r0, r0, 2
    mulhwu r0, r4, r0
    srwi r4, r0, 15
    mulhwu r0, r4, r25
    mulli r5, r4, 0x411a
    add r4, r0, r3
    mr r0, r4
    rlwimi r0, r5, 0, 29, 31
    rotrwi r3, r5, 3
    rlwimi r3, r4, 29, 0, 2
    srawi r0, r0, 3
    addze r4, r3
    addze r3, r0
    bl OSSleepTicks
lbl_fn_8050CFCC_000011D0:
    li r30, 0x1
    b lbl_fn_8050CFCC_00001208
lbl_fn_8050CFCC_000011D8:
    stw r28, -0x3e00(r4)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    stw r23, -0x3e0c(r3)
    lwz r3, lbl_8087F628
    addis r3, r3, 0x1
    subi r3, r3, 0x3dfc
    bl OSSleepThread
    lwz r3, lbl_8087F628
    li r30, 0x1
    addis r3, r3, 0x1
    stw r28, -0x3e0c(r3)
lbl_fn_8050CFCC_00001208:
    cmpwi r30, 0x0
    bne lbl_fn_8050CFCC_00000EAC
    lwz r0, 0xf8(r26)
    addi r4, r27, 0x4dd3
    mullw r3, r28, r29
    srwi r0, r0, 2
    mulhwu r0, r4, r0
    srwi r4, r0, 6
    mulhwu r0, r4, r29
    mulli r4, r4, 0x64
    add r3, r0, r3
    bl OSSleepTicks
    b lbl_fn_8050CFCC_00000EAC
    li r0, 0x1
    stw r0, -0x3e0c(r4)
    li r3, 0x0
    lmw r15, 0x1c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_8050D3C8(void)
{
    nofralloc
    lwz r0, 0x270(r3)
    cmplw r4, r0
    blt lbl_fn_8050D3C8_00001270
    li r3, 0x0
    blr
lbl_fn_8050D3C8_00001270:
    mulli r0, r4, 0x34
    add r3, r3, r0
    addi r3, r3, 0x274
    blr
}

asm void fn_8050D3EC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_800827E0
    lis r5, lbl_8075B180@ha
    li r0, 0x1
    addi r5, r5, lbl_8075B180@l
    stw r0, 0x1b0(r3)
    li r3, 0x18
    li r4, 0x5
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_8050D3EC_000012C4
    bl fn_80084E50
lbl_fn_8050D3EC_000012C4:
    stw r3, lbl_8087F878
    bl fn_800827E0
    lis r31, lbl_8075B180@ha
    lis r4, 0x10
    addi r7, r31, lbl_8075B180@l
    li r5, 0x20
    mr r8, r7
    li r6, 0x5
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    mr r4, r3
    addi r5, r31, lbl_8075B180@l
    addi r6, r5, 0x1
    lwz r3, lbl_8087F878
    lis r5, 0x10
    bl fn_80084EE8
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050D488(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    bl fn_800827E0
    li r0, 0x0
    stw r0, 0x1b0(r3)
    lwz r3, lbl_8087F878
    lwz r12, 0x0(r3)
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    mr r31, r3
    bl fn_800827E0
    mr r4, r31
    bl fn_80083AD4
    lwz r3, lbl_8087F878
    cmpwi r3, 0x0
    beq lbl_fn_8050D488_0000137C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8050D488_0000137C:
    li r0, 0x0
    stw r0, lbl_8087F878
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8050D504(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r5
    stw r28, 0x10(r1)
    mr r28, r4
    lwz r3, lbl_8087F628
    bl fn_80509A8C
    lwz r3, lbl_8087F878
    lis r31, lbl_8075B180@ha
    addi r31, r31, lbl_8075B180@l
    mr r4, r28
    lwz r12, 0x0(r3)
    mr r5, r29
    addi r7, r31, 0xe
    li r6, 0x5
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r30, r3
    lwz r3, lbl_8087F628
    bl fn_80509A94
    cmpwi r30, 0x0
    bne lbl_fn_8050D504_0000142C
    bl fn_800827E0
    mr r4, r28
    mr r5, r29
    mr r7, r31
    mr r8, r31
    li r6, 0x5
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    mr r30, r3
lbl_fn_8050D504_0000142C:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050D5BC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_8050D5BC_000014F8
    lwz r30, lbl_8087F878
    li r31, 0x0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_8050D5BC_000014B8
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_8050D5BC_000014B8
    li r31, 0x1
lbl_fn_8050D5BC_000014B8:
    cmpwi r31, 0x0
    beq lbl_fn_8050D5BC_000014EC
    lwz r3, lbl_8087F628
    bl fn_80509A8C
    lwz r3, lbl_8087F878
    mr r4, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F628
    bl fn_80509A94
    b lbl_fn_8050D5BC_000014F8
lbl_fn_8050D5BC_000014EC:
    bl fn_800827E0
    mr r4, r29
    bl fn_80083AD4
lbl_fn_8050D5BC_000014F8:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050D680(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    lwz r3, lbl_8087F628
    bl fn_80509A8C
    lwz r3, lbl_8087F878
    lis r31, lbl_8075B180@ha
    addi r31, r31, lbl_8075B180@l
    mr r4, r29
    lwz r12, 0x0(r3)
    addi r7, r31, 0xe
    li r5, 0x20
    li r6, 0x5
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    mr r30, r3
    lwz r3, lbl_8087F628
    bl fn_80509A94
    cmpwi r30, 0x0
    bne lbl_fn_8050D680_000015A0
    bl fn_800827E0
    mr r4, r29
    mr r7, r31
    mr r8, r31
    li r5, 0x20
    li r6, 0x5
    li r9, 0x0
    li r10, 0x0
    bl fn_800839EC
    mr r30, r3
lbl_fn_8050D680_000015A0:
    mr r3, r30
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050D72C(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_8050D72C_00001668
    lwz r30, lbl_8087F878
    li r31, 0x0
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x18(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    blt lbl_fn_8050D72C_00001628
    lwz r12, 0x0(r30)
    mr r3, r30
    lwz r12, 0x14(r12)
    mtctr r12
    bctrl
    cmplw r29, r3
    bgt lbl_fn_8050D72C_00001628
    li r31, 0x1
lbl_fn_8050D72C_00001628:
    cmpwi r31, 0x0
    beq lbl_fn_8050D72C_0000165C
    lwz r3, lbl_8087F628
    bl fn_80509A8C
    lwz r3, lbl_8087F878
    mr r4, r29
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    lwz r3, lbl_8087F628
    bl fn_80509A94
    b lbl_fn_8050D72C_00001668
lbl_fn_8050D72C_0000165C:
    bl fn_800827E0
    mr r4, r29
    bl fn_80083AD4
lbl_fn_8050D72C_00001668:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8050D7F0(void)
{
    nofralloc
    clrlwi r11, r1, 27
    mr r12, r1
    subfic r11, r11, -0x980
    stwux r1, r1, r11
    mflr r0
    stw r0, 0x4(r12)
    stw r31, -0x4(r12)
    stw r30, -0x8(r12)
    mr r30, r3
    stw r29, -0xc(r12)
    stw r28, -0x10(r12)
    mr r28, r4
    lwz r29, 0xc(r3)
    addi r3, r3, 0x8
    b lbl_fn_8050D7F0_00001768
lbl_fn_8050D7F0_000016C0:
    lwz r0, 0x24(r29)
    cmplw r4, r0
    bne lbl_fn_8050D7F0_00001764
    lbz r6, 0x20(r29)
    lis r5, lbl_8075B1D4@ha
    mr r3, r30
    subfic r4, r6, 0x1
    subi r0, r6, 0x1
    or r0, r4, r0
    addi r5, r5, lbl_8075B1D4@l
    srwi r4, r0, 31
    crclr 6
    bl fn_8050E630
    lwz r12, 0x4a0(r29)
    addi r3, r29, 0x40
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r12, 0x920(r29)
    addi r3, r29, 0x4c0
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
    lwz r3, 0x28(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8050D7F0_00001738
    lwz r0, 0x30(r29)
    li r4, 0x0
    slwi r5, r0, 1
    bl memset
lbl_fn_8050D7F0_00001738:
    lwz r3, 0x2c(r29)
    cmpwi r3, 0x0
    beq lbl_fn_8050D7F0_00001754
    lwz r0, 0x30(r29)
    li r4, 0x0
    slwi r5, r0, 1
    bl memset
lbl_fn_8050D7F0_00001754:
    li r0, 0x1
    stb r0, 0x20(r29)
    li r3, 0x1
    b lbl_fn_8050D7F0_000019E8
lbl_fn_8050D7F0_00001764:
    lwz r29, 0x4(r29)
lbl_fn_8050D7F0_00001768:
    cmplw r29, r3
    bne lbl_fn_8050D7F0_000016C0
    lis r31, lbl_80793168@ha
    li r0, 0x0
    addi r31, r31, lbl_80793168@l
    li r3, 0x1
    li r4, -0x1
    stb r3, 0x40(r1)
    addi r3, r1, 0x60
    stw r4, 0x44(r1)
    stw r0, 0x48(r1)
    stw r0, 0x4c(r1)
    stw r0, 0x50(r1)
    stw r31, 0x4c0(r1)
    lwz r12, 0x8(r31)
    mtctr r12
    bctrl
    lis r3, lbl_80793140@ha
    stw r31, 0x940(r1)
    addi r3, r3, lbl_80793140@l
    stw r3, 0x4c0(r1)
    addi r3, r1, 0x4e0
    lwz r12, 0x8(r31)
    mtctr r12
    bctrl
    lis r3, lbl_80793118@ha
    stw r28, 0x44(r1)
    addi r3, r3, lbl_80793118@l
    addi r31, r30, 0x8
    stw r3, 0x940(r1)
    li r3, 0x940
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8050D7F0_00001814
    lis r3, __files@ha
    lis r4, lbl_80793180@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80793180@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_8050D7F0_00001814:
    addic. r3, r29, 0x20
    addi r0, r30, 0x8
    stw r0, 0x20(r1)
    stw r29, 0x24(r1)
    beq lbl_fn_8050D7F0_000018E8
    lbz r0, 0x40(r1)
    lis r4, lbl_80793168@ha
    stb r0, 0x0(r3)
    addi r4, r4, lbl_80793168@l
    li r0, 0x88
    addi r6, r3, 0x3c
    lwz r7, 0x44(r1)
    addi r5, r1, 0x7c
    stw r7, 0x4(r3)
    lwz r7, 0x48(r1)
    stw r7, 0x8(r3)
    lwz r7, 0x4c(r1)
    stw r7, 0xc(r3)
    lwz r7, 0x50(r1)
    stw r7, 0x10(r3)
    stw r4, 0x480(r3)
    lwz r4, 0x60(r1)
    stw r4, 0x20(r3)
    lwz r4, 0x64(r1)
    stw r4, 0x24(r3)
    mtctr r0
lbl_fn_8050D7F0_0000187C:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8050D7F0_0000187C
    lis r5, lbl_80793140@ha
    lis r4, lbl_80793168@ha
    addi r5, r5, lbl_80793140@l
    stw r5, 0x480(r3)
    addi r4, r4, lbl_80793168@l
    li r0, 0x88
    stw r4, 0x900(r3)
    addi r6, r3, 0x4bc
    addi r5, r1, 0x4fc
    lwz r4, 0x4e0(r1)
    stw r4, 0x4a0(r3)
    lwz r4, 0x4e4(r1)
    stw r4, 0x4a4(r3)
    mtctr r0
lbl_fn_8050D7F0_000018C8:
    lwz r4, 0x4(r5)
    lwzu r0, 0x8(r5)
    stw r4, 0x4(r6)
    stwu r0, 0x8(r6)
    bdnz lbl_fn_8050D7F0_000018C8
    lis r4, lbl_80793118@ha
    addi r4, r4, lbl_80793118@l
    stw r4, 0x900(r3)
lbl_fn_8050D7F0_000018E8:
    lwz r3, 0x0(r31)
    li r4, 0x0
    lwz r5, 0x24(r1)
    stw r5, 0x4(r3)
    lwz r0, 0x0(r31)
    stw r0, 0x0(r5)
    stw r5, 0x0(r31)
    stw r31, 0x4(r5)
    lwz r3, 0x4(r30)
    stw r4, 0x24(r1)
    addi r0, r3, 0x1
    stw r0, 0x4(r30)
    b lbl_fn_8050D7F0_00001920
    bl dtor_80084684
lbl_fn_8050D7F0_00001920:
    mr r3, r30
    lwz r30, 0x8(r30)
    lwz r12, 0x0(r3)
    lwz r12, 0x10(r12)
    mtctr r12
    bctrl
    clrlwi r29, r3, 24
    clrlslwi r31, r3, 24, 1
    bl fn_800827E0
    mr r4, r31
    li r5, 0x1
    li r6, 0x5
    la r7, lbl_8087E47C
    la r8, lbl_8087E478
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0x28(r30)
    mr r5, r31
    li r4, 0x0
    bl memset
    bl fn_800827E0
    mr r4, r31
    li r5, 0x1
    li r6, 0x5
    la r7, lbl_8087E474
    la r8, lbl_8087E470
    li r9, 0x0
    bl fn_800838B8
    stw r3, 0x2c(r30)
    mr r5, r31
    li r4, 0x0
    bl memset
    stw r29, 0x30(r30)
    lwz r29, 0x48(r1)
    cmpwi r29, 0x0
    beq lbl_fn_8050D7F0_000019C4
    bl fn_800827E0
    mr r4, r29
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x48(r1)
lbl_fn_8050D7F0_000019C4:
    lwz r29, 0x4c(r1)
    cmpwi r29, 0x0
    beq lbl_fn_8050D7F0_000019E4
    bl fn_800827E0
    mr r4, r29
    bl fn_80083AD4
    li r0, 0x0
    stw r0, 0x4c(r1)
lbl_fn_8050D7F0_000019E4:
    li r3, 0x1
lbl_fn_8050D7F0_000019E8:
    lwz r10, 0x0(r1)
    lwz r0, 0x4(r10)
    lwz r31, -0x4(r10)
    lwz r30, -0x8(r10)
    lwz r29, -0xc(r10)
    lwz r28, -0x10(r10)
    mtlr r0
    mr r1, r10
    blr
}
