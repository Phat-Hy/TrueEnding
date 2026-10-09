#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void OSGetMEM1ArenaHi(void);
extern void OSGetMEM1ArenaLo(void);
extern void OSGetMEM2ArenaHi(void);
extern void OSGetMEM2ArenaLo(void);
extern void __register_global_object(void);
extern void fn_800832AC(void);
extern void fn_80083AD4(void);
extern void fn_80084E50(void);
extern void fn_80084E78(void);
extern void fn_80084EE8(void);
extern void fn_80084FA0(void);
extern void fn_805F3130(void);
extern void fn_805F3210(void);

/* External data declarations */
extern u8 lbl_80732048[];
extern u8 lbl_80732088[];
extern u8 lbl_807320F4[];
extern u8 lbl_80778550[];
extern u8 lbl_80778558[];
extern u8 lbl_80778560[];
extern u8 lbl_80778598[];
extern u8 lbl_807C7028[];
extern u8 lbl_807C7090[];
extern u8 lbl_807C709C[];

/* Small data declarations */
extern u32 lbl_8087EF08;
extern u32 lbl_80880BC8;
extern u32 lbl_80880BCC;

/* Function declarations */
void fn_80081DC8(void);
void fn_80081E54(void);
void fn_800820BC(void);
void fn_80082260(void);
void fn_80082490(void);
void fn_8008263C(void);
void fn_800827E0(void);
void fn_80082970(void);
void fn_80082AC8(void);
void fn_80082B54(void);
void fn_80082BE0(void);
void fn_80082CAC(void);

asm void fn_80081DC8(void)
{
    nofralloc
    lis r8, lbl_807C7028@ha
    lfs f1, lbl_80880BC8
    addi r8, r8, lbl_807C7028@l
    lfs f0, lbl_80880BCC
    addi r3, r8, 0x38
    stfs f1, 0x0(r8)
    addi r5, r8, 0x18
    addi r4, r8, 0x28
    addi r6, r8, 0x8
    addi r7, r8, 0x0
    stfs f1, 0x4(r7)
    stfs f1, 0x8(r8)
    stfs f1, 0x4(r6)
    stfs f1, 0x8(r6)
    stfs f1, 0x18(r8)
    stfs f1, 0x4(r5)
    stfs f1, 0x8(r5)
    stfs f1, 0xc(r5)
    stfs f1, 0x28(r8)
    stfs f1, 0x4(r4)
    stfs f1, 0x8(r4)
    stfs f0, 0xc(r4)
    stfs f0, 0x38(r8)
    stfs f1, 0x4(r3)
    stfs f1, 0x8(r3)
    stfs f1, 0xc(r3)
    stfs f1, 0x10(r3)
    stfs f0, 0x14(r3)
    stfs f1, 0x18(r3)
    stfs f1, 0x1c(r3)
    stfs f1, 0x20(r3)
    stfs f1, 0x24(r3)
    stfs f0, 0x28(r3)
    stfs f1, 0x2c(r3)
    blr
}

asm void fn_80081E54(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r4
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80081E54_00000204
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_80081E54_00000134
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80081E54_00000134
lbl_fn_80081E54_0000011C:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80081E54_0000011C
lbl_fn_80081E54_00000134:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_80081E54_000001A8
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80081E54_000001A8
lbl_fn_80081E54_00000190:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80081E54_00000190
lbl_fn_80081E54_000001A8:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80081E54_00000204:
    lis r29, lbl_807C709C@ha
    lis r28, lbl_807320F4@ha
    addi r29, r29, lbl_807C709C@l
    lwz r0, 0x1b0(r29)
    addi r28, r28, lbl_807320F4@l
    cmpwi r0, 0x0
    beq lbl_fn_80081E54_00000228
    addi r31, r29, 0x1b4
    b lbl_fn_80081E54_0000022C
lbl_fn_80081E54_00000228:
    li r31, 0x0
lbl_fn_80081E54_0000022C:
    cmpwi r31, 0x0
    beq lbl_fn_80081E54_0000023C
    mr r3, r31
    bl fn_805F3130
lbl_fn_80081E54_0000023C:
    lwz r12, 0x138(r29)
    addi r3, r29, 0x138
    mr r4, r30
    mr r7, r28
    lwz r12, 0xc(r12)
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80081E54_000002CC
    addi r3, r29, 0x168
    bl fn_80084FA0
    cmpwi r3, 0x0
    beq lbl_fn_80081E54_000002A4
    lwz r12, 0x168(r29)
    addi r3, r29, 0x168
    mr r4, r30
    mr r7, r28
    lwz r12, 0xc(r12)
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
    b lbl_fn_80081E54_000002C8
lbl_fn_80081E54_000002A4:
    lwz r12, 0x150(r29)
    addi r3, r29, 0x150
    mr r4, r30
    mr r7, r28
    lwz r12, 0xc(r12)
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
lbl_fn_80081E54_000002C8:
    mr r27, r3
lbl_fn_80081E54_000002CC:
    cmpwi r31, 0x0
    beq lbl_fn_80081E54_000002DC
    mr r3, r31
    bl fn_805F3210
lbl_fn_80081E54_000002DC:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800820BC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r4
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_800820BC_00000470
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_800820BC_000003A0
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800820BC_000003A0
lbl_fn_800820BC_00000388:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_800820BC_00000388
lbl_fn_800820BC_000003A0:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_800820BC_00000414
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800820BC_00000414
lbl_fn_800820BC_000003FC:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_800820BC_000003FC
lbl_fn_800820BC_00000414:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_800820BC_00000470:
    lis r3, lbl_807C709C@ha
    mr r4, r30
    addi r3, r3, lbl_807C709C@l
    bl fn_80083AD4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80082260(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r4
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80082260_00000610
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_80082260_00000540
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80082260_00000540
lbl_fn_80082260_00000528:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80082260_00000528
lbl_fn_80082260_00000540:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_80082260_000005B4
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80082260_000005B4
lbl_fn_80082260_0000059C:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80082260_0000059C
lbl_fn_80082260_000005B4:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80082260_00000610:
    lis r29, lbl_807C709C@ha
    lis r28, lbl_807320F4@ha
    addi r29, r29, lbl_807C709C@l
    lwz r0, 0x1b0(r29)
    addi r28, r28, lbl_807320F4@l
    cmpwi r0, 0x0
    beq lbl_fn_80082260_00000634
    addi r31, r29, 0x1b4
    b lbl_fn_80082260_00000638
lbl_fn_80082260_00000634:
    li r31, 0x0
lbl_fn_80082260_00000638:
    cmpwi r31, 0x0
    beq lbl_fn_80082260_00000648
    mr r3, r31
    bl fn_805F3130
lbl_fn_80082260_00000648:
    lwz r12, 0x150(r29)
    addi r3, r29, 0x150
    mr r4, r30
    mr r7, r28
    lwz r12, 0xc(r12)
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80082260_000006A0
    lwz r12, 0x168(r29)
    addi r3, r29, 0x168
    mr r4, r30
    mr r7, r28
    lwz r12, 0xc(r12)
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
    mr r27, r3
lbl_fn_80082260_000006A0:
    cmpwi r31, 0x0
    beq lbl_fn_80082260_000006B0
    mr r3, r31
    bl fn_805F3210
lbl_fn_80082260_000006B0:
    mr r3, r27
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80082490(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80082490_00000844
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_80082490_00000774
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80082490_00000774
lbl_fn_80082490_0000075C:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80082490_0000075C
lbl_fn_80082490_00000774:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_80082490_000007E8
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80082490_000007E8
lbl_fn_80082490_000007D0:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80082490_000007D0
lbl_fn_80082490_000007E8:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80082490_00000844:
    lis r3, lbl_807C709C@ha
    mr r4, r30
    addi r3, r3, lbl_807C709C@l
    li r6, 0x0
    lwz r5, 0x4(r3)
    bl fn_800832AC
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8008263C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_8008263C_000009F0
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_8008263C_00000920
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_8008263C_00000920
lbl_fn_8008263C_00000908:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_8008263C_00000908
lbl_fn_8008263C_00000920:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_8008263C_00000994
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_8008263C_00000994
lbl_fn_8008263C_0000097C:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_8008263C_0000097C
lbl_fn_8008263C_00000994:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_8008263C_000009F0:
    lis r3, lbl_807C709C@ha
    mr r4, r30
    addi r3, r3, lbl_807C709C@l
    bl fn_80083AD4
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800827E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_800827E0_00000B8C
    lis r8, lbl_807C709C@ha
    lis r5, lbl_80778598@ha
    addi r31, r8, lbl_807C709C@l
    li r7, 0x0
    addi r9, r31, 0x58
    lis r4, lbl_80732048@ha
    addi r3, r31, 0xc8
    addi r5, r5, lbl_80778598@l
    addi r4, r4, lbl_80732048@l
    li r6, 0x20
    li r0, 0x8
    cmplw r9, r3
    stw r7, lbl_807C709C@l(r8)
    stw r6, 0x4(r31)
    stw r5, 0x38(r31)
    stw r7, 0x3c(r31)
    stw r4, 0x40(r31)
    stw r0, 0x44(r31)
    stw r7, 0x50(r31)
    stw r7, 0x54(r31)
    stw r7, 0x48(r31)
    stw r7, 0x4c(r31)
    bge lbl_fn_800827E0_00000ABC
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800827E0_00000ABC
lbl_fn_800827E0_00000AA4:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_800827E0_00000AA4
lbl_fn_800827E0_00000ABC:
    addi r7, r31, 0xe8
    addi r3, r31, 0x138
    lis r6, lbl_80778560@ha
    lis r4, lbl_80732088@ha
    li r5, 0x0
    li r0, 0x6
    addi r6, r6, lbl_80778560@l
    addi r4, r4, lbl_80732088@l
    cmplw r7, r3
    stw r6, 0xc8(r31)
    stw r5, 0xcc(r31)
    stw r4, 0xd0(r31)
    stw r0, 0xd4(r31)
    stw r5, 0xe0(r31)
    stw r5, 0xe4(r31)
    stw r5, 0xd8(r31)
    stw r5, 0xdc(r31)
    bge lbl_fn_800827E0_00000B30
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800827E0_00000B30
lbl_fn_800827E0_00000B18:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_800827E0_00000B18
lbl_fn_800827E0_00000B30:
    addi r3, r31, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    lis r3, lbl_807C709C@ha
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r3, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_800827E0_00000B8C:
    lwz r31, 0xc(r1)
    lis r3, lbl_807C709C@ha
    lwz r0, 0x14(r1)
    addi r3, r3, lbl_807C709C@l
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80082970(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r6, lbl_80778598@ha
    lis r5, lbl_80732048@ha
    stw r0, 0x14(r1)
    addi r9, r3, 0x58
    addi r4, r3, 0xc8
    li r8, 0x0
    stw r31, 0xc(r1)
    li r7, 0x20
    cmplw r9, r4
    addi r6, r6, lbl_80778598@l
    addi r5, r5, lbl_80732048@l
    li r0, 0x8
    stw r8, 0x0(r3)
    mr r31, r3
    stw r7, 0x4(r3)
    stw r6, 0x38(r3)
    stw r8, 0x3c(r3)
    stw r5, 0x40(r3)
    stw r0, 0x44(r3)
    stw r8, 0x50(r3)
    stw r8, 0x54(r3)
    stw r8, 0x48(r3)
    stw r8, 0x4c(r3)
    bge lbl_fn_80082970_00000C3C
    addi r0, r4, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80082970_00000C3C
lbl_fn_80082970_00000C24:
    stw r8, 0x8(r9)
    stw r8, 0xc(r9)
    stw r8, 0x0(r9)
    stw r8, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80082970_00000C24
lbl_fn_80082970_00000C3C:
    addi r8, r3, 0xe8
    addi r4, r3, 0x138
    lis r7, lbl_80778560@ha
    lis r5, lbl_80732088@ha
    li r6, 0x0
    li r0, 0x6
    addi r7, r7, lbl_80778560@l
    addi r5, r5, lbl_80732088@l
    cmplw r8, r4
    stw r7, 0xc8(r3)
    stw r6, 0xcc(r3)
    stw r5, 0xd0(r3)
    stw r0, 0xd4(r3)
    stw r6, 0xe0(r3)
    stw r6, 0xe4(r3)
    stw r6, 0xd8(r3)
    stw r6, 0xdc(r3)
    bge lbl_fn_80082970_00000CB0
    addi r0, r4, 0xf
    subf r0, r8, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80082970_00000CB0
lbl_fn_80082970_00000C98:
    stw r6, 0x8(r8)
    stw r6, 0xc(r8)
    stw r6, 0x0(r8)
    stw r6, 0x4(r8)
    addi r8, r8, 0x10
    bdnz lbl_fn_80082970_00000C98
lbl_fn_80082970_00000CB0:
    addi r3, r3, 0x138
    bl fn_80084E50
    addi r3, r31, 0x150
    bl fn_80084E50
    addi r3, r31, 0x168
    bl fn_80084E50
    addi r3, r31, 0x180
    bl fn_80084E50
    addi r3, r31, 0x198
    bl fn_80084E50
    li r0, 0x0
    stw r0, 0x1b0(r31)
    mr r3, r31
    bl fn_80082CAC
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80082AC8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80082AC8_00000D70
    cmpwi r4, 0x0
    ble lbl_fn_80082AC8_00000D70
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80082AC8_00000D60
    lis r31, lbl_807C709C@ha
    addi r3, r31, lbl_807C709C@l
    bl fn_80082970
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r31, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80082AC8_00000D60:
    lis r3, lbl_807C709C@ha
    mr r4, r30
    addi r3, r3, lbl_807C709C@l
    bl fn_80083AD4
lbl_fn_80082AC8_00000D70:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80082B54(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    mr r30, r3
    beq lbl_fn_80082B54_00000DFC
    cmpwi r4, 0x0
    ble lbl_fn_80082B54_00000DFC
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80082B54_00000DEC
    lis r31, lbl_807C709C@ha
    addi r3, r31, lbl_807C709C@l
    bl fn_80082970
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r31, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80082B54_00000DEC:
    lis r3, lbl_807C709C@ha
    mr r4, r30
    addi r3, r3, lbl_807C709C@l
    bl fn_80083AD4
lbl_fn_80082B54_00000DFC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80082BE0(void)
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
    beq lbl_fn_80082BE0_00000EC8
    li r4, -0x1
    addi r3, r3, 0x198
    bl fn_80084E78
    addi r3, r30, 0x180
    li r4, -0x1
    bl fn_80084E78
    addi r3, r30, 0x168
    li r4, -0x1
    bl fn_80084E78
    addi r3, r30, 0x150
    li r4, -0x1
    bl fn_80084E78
    addi r3, r30, 0x138
    li r4, -0x1
    bl fn_80084E78
    cmpwi r31, 0x0
    ble lbl_fn_80082BE0_00000EC8
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80082BE0_00000EB8
    lis r31, lbl_807C709C@ha
    addi r3, r31, lbl_807C709C@l
    bl fn_80082970
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    addi r3, r31, lbl_807C709C@l
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80082BE0_00000EB8:
    lis r3, lbl_807C709C@ha
    mr r4, r30
    addi r3, r3, lbl_807C709C@l
    bl fn_80083AD4
lbl_fn_80082BE0_00000EC8:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80082CAC(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    mr r30, r3
    bl OSGetMEM1ArenaHi
    mr r31, r3
    bl OSGetMEM1ArenaLo
    lis r27, lbl_807320F4@ha
    mr r28, r3
    addi r27, r27, lbl_807320F4@l
    subf r26, r3, r31
    mr r4, r28
    addi r3, r30, 0x198
    addi r6, r27, 0x1
    lis r5, 0x10
    bl fn_80084EE8
    addis r4, r28, 0x10
    addi r3, r30, 0x138
    subis r5, r26, 0x10
    addi r6, r27, 0xf
    bl fn_80084EE8
    bl OSGetMEM2ArenaHi
    mr r31, r3
    bl OSGetMEM2ArenaLo
    subf r26, r3, r31
    lis r0, 0x400
    cmplw r26, r0
    mr r28, r3
    ble lbl_fn_80082CAC_00000FA8
    subis r25, r26, 0x410
    mr r4, r28
    mr r5, r25
    addi r3, r30, 0x150
    addi r6, r27, 0x14
    bl fn_80084EE8
    add r28, r25, r28
    subf r5, r25, r26
    addis r4, r28, 0x20
    addi r3, r30, 0x168
    subis r5, r5, 0x20
    addi r6, r27, 0x19
    bl fn_80084EE8
    mr r4, r28
    addi r3, r30, 0x180
    addi r6, r27, 0x22
    lis r5, 0x20
    bl fn_80084EE8
    b lbl_fn_80082CAC_00000FBC
lbl_fn_80082CAC_00000FA8:
    mr r4, r28
    mr r5, r26
    addi r3, r30, 0x150
    addi r6, r27, 0x14
    bl fn_80084EE8
lbl_fn_80082CAC_00000FBC:
    lwz r8, 0x44(r30)
    li r0, 0x0
    lis r6, lbl_80778550@ha
    lis r5, lbl_80778558@ha
    cmpwi cr1, r8, 0x0
    stw r0, 0xc(r30)
    addi r6, r6, lbl_80778550@l
    addi r5, r5, lbl_80778558@l
    stw r6, 0x8(r30)
    li r4, 0x0
    li r3, 0x0
    stw r0, 0x10(r30)
    stw r0, 0x14(r30)
    stw r6, 0x18(r30)
    stw r0, 0x1c(r30)
    stw r0, 0x20(r30)
    stw r0, 0x24(r30)
    stw r5, 0x28(r30)
    stw r0, 0x2c(r30)
    stw r0, 0x30(r30)
    stw r0, 0x34(r30)
    ble cr1, lbl_fn_80082CAC_00001194
    cmpwi r8, 0x8
    subi r6, r8, 0x8
    ble lbl_fn_80082CAC_00001150
    li r7, 0x0
    blt cr1, lbl_fn_80082CAC_0000103C
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r8, r0
    bgt lbl_fn_80082CAC_0000103C
    li r7, 0x1
lbl_fn_80082CAC_0000103C:
    cmpwi r7, 0x0
    beq lbl_fn_80082CAC_00001150
    addi r0, r6, 0x7
    li r5, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80082CAC_00001150
lbl_fn_80082CAC_0000105C:
    lwz r0, 0x40(r30)
    addi r3, r3, 0x8
    add r6, r0, r5
    lwzx r0, r5, r0
    lwz r8, 0x4(r6)
    addi r5, r5, 0x40
    slwi r7, r0, 5
    lwz r0, 0x8(r6)
    mullw r11, r8, r7
    lwz r9, 0xc(r6)
    slwi r7, r0, 5
    lwz r0, 0x10(r6)
    slwi r10, r8, 2
    lwz r31, 0x14(r6)
    mullw r25, r9, r7
    add r4, r4, r11
    slwi r8, r0, 5
    lwz r0, 0x18(r6)
    add r4, r4, r10
    lwz r27, 0x1c(r6)
    slwi r11, r0, 5
    add r4, r4, r25
    slwi r12, r9, 2
    lwz r0, 0x20(r6)
    mullw r25, r31, r8
    lwz r29, 0x24(r6)
    slwi r28, r0, 5
    lwz r9, 0x28(r6)
    add r4, r4, r12
    lwz r8, 0x30(r6)
    slwi r12, r9, 5
    lwz r26, 0x2c(r6)
    slwi r9, r8, 5
    lwz r10, 0x34(r6)
    mullw r11, r27, r11
    lwz r0, 0x38(r6)
    lwz r7, 0x3c(r6)
    add r4, r4, r25
    slwi r6, r0, 5
    slwi r8, r31, 2
    add r4, r4, r8
    slwi r0, r27, 2
    add r4, r4, r11
    slwi r27, r29, 2
    add r4, r4, r0
    slwi r11, r26, 2
    mullw r28, r29, r28
    slwi r8, r10, 2
    slwi r0, r7, 2
    add r4, r4, r28
    mullw r12, r26, r12
    add r4, r4, r27
    add r4, r4, r12
    mullw r9, r10, r9
    add r4, r4, r11
    add r4, r4, r9
    mullw r6, r7, r6
    add r4, r4, r8
    add r4, r4, r6
    add r4, r4, r0
    bdnz lbl_fn_80082CAC_0000105C
lbl_fn_80082CAC_00001150:
    lwz r5, 0x44(r30)
    slwi r6, r3, 3
    subf r0, r3, r5
    mtctr r0
    cmpw r3, r5
    bge lbl_fn_80082CAC_00001194
lbl_fn_80082CAC_00001168:
    lwz r0, 0x40(r30)
    add r3, r0, r6
    lwzx r0, r6, r0
    lwz r5, 0x4(r3)
    addi r6, r6, 0x8
    slwi r0, r0, 5
    mullw r3, r5, r0
    slwi r0, r5, 2
    add r4, r4, r3
    add r4, r4, r0
    bdnz lbl_fn_80082CAC_00001168
lbl_fn_80082CAC_00001194:
    lwz r12, 0x138(r30)
    lis r6, lbl_807320F4@ha
    addi r6, r6, lbl_807320F4@l
    addi r3, r30, 0x138
    lwz r12, 0xc(r12)
    addi r7, r6, 0x2a
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
    stw r3, 0x3c(r30)
    mr r31, r3
    mr r27, r30
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_80082CAC_00001214
lbl_fn_80082CAC_000011D4:
    stw r31, 0x48(r27)
    mr r3, r31
    li r4, 0x0
    lwz r0, 0x40(r30)
    add r5, r0, r28
    lwz r0, 0x4(r5)
    slwi r5, r0, 2
    bl memset
    lwz r0, 0x40(r30)
    addi r27, r27, 0x10
    addi r26, r26, 0x1
    add r3, r0, r28
    addi r28, r28, 0x8
    lwz r0, 0x4(r3)
    slwi r0, r0, 2
    add r31, r31, r0
lbl_fn_80082CAC_00001214:
    lwz r0, 0x44(r30)
    cmpw r26, r0
    blt lbl_fn_80082CAC_000011D4
    mr r5, r30
    li r4, 0x0
    li r6, 0x0
    b lbl_fn_80082CAC_0000125C
lbl_fn_80082CAC_00001230:
    stw r31, 0x4c(r5)
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    lwz r0, 0x40(r30)
    add r3, r0, r6
    lwzx r0, r6, r0
    lwz r3, 0x4(r3)
    addi r6, r6, 0x8
    slwi r0, r0, 5
    mullw r0, r3, r0
    add r31, r31, r0
lbl_fn_80082CAC_0000125C:
    lwz r0, 0x44(r30)
    cmpw r4, r0
    blt lbl_fn_80082CAC_00001230
    lwz r8, 0xd4(r30)
    li r4, 0x0
    li r3, 0x0
    cmpwi cr1, r8, 0x0
    ble cr1, lbl_fn_80082CAC_000013FC
    cmpwi r8, 0x8
    subi r6, r8, 0x8
    ble lbl_fn_80082CAC_000013B8
    li r7, 0x0
    blt cr1, lbl_fn_80082CAC_000012A4
    lis r5, 0x8000
    subi r0, r5, 0x2
    cmpw r8, r0
    bgt lbl_fn_80082CAC_000012A4
    li r7, 0x1
lbl_fn_80082CAC_000012A4:
    cmpwi r7, 0x0
    beq lbl_fn_80082CAC_000013B8
    addi r0, r6, 0x7
    li r5, 0x0
    srwi r0, r0, 3
    mtctr r0
    cmpwi r6, 0x0
    ble lbl_fn_80082CAC_000013B8
lbl_fn_80082CAC_000012C4:
    lwz r0, 0xd0(r30)
    addi r3, r3, 0x8
    add r6, r0, r5
    lwzx r0, r5, r0
    lwz r8, 0x4(r6)
    addi r5, r5, 0x40
    slwi r7, r0, 5
    lwz r0, 0x8(r6)
    mullw r11, r8, r7
    lwz r9, 0xc(r6)
    slwi r7, r0, 5
    lwz r0, 0x10(r6)
    slwi r10, r8, 2
    lwz r26, 0x14(r6)
    mullw r25, r9, r7
    add r4, r4, r11
    slwi r8, r0, 5
    lwz r0, 0x18(r6)
    add r4, r4, r10
    lwz r29, 0x1c(r6)
    slwi r11, r0, 5
    add r4, r4, r25
    slwi r12, r9, 2
    lwz r0, 0x20(r6)
    mullw r25, r26, r8
    lwz r27, 0x24(r6)
    slwi r28, r0, 5
    lwz r9, 0x28(r6)
    add r4, r4, r12
    lwz r8, 0x30(r6)
    add r4, r4, r25
    slwi r12, r9, 5
    lwz r31, 0x2c(r6)
    slwi r9, r8, 5
    slwi r8, r26, 2
    lwz r10, 0x34(r6)
    add r4, r4, r8
    lwz r0, 0x38(r6)
    mullw r11, r29, r11
    lwz r7, 0x3c(r6)
    slwi r6, r0, 5
    slwi r0, r29, 2
    slwi r29, r27, 2
    slwi r8, r10, 2
    add r4, r4, r11
    slwi r11, r31, 2
    add r4, r4, r0
    slwi r0, r7, 2
    mullw r25, r27, r28
    add r4, r4, r25
    mullw r12, r31, r12
    add r4, r4, r29
    add r4, r4, r12
    mullw r9, r10, r9
    add r4, r4, r11
    add r4, r4, r9
    mullw r6, r7, r6
    add r4, r4, r8
    add r4, r4, r6
    add r4, r4, r0
    bdnz lbl_fn_80082CAC_000012C4
lbl_fn_80082CAC_000013B8:
    lwz r5, 0xd4(r30)
    slwi r6, r3, 3
    subf r0, r3, r5
    mtctr r0
    cmpw r3, r5
    bge lbl_fn_80082CAC_000013FC
lbl_fn_80082CAC_000013D0:
    lwz r0, 0xd0(r30)
    add r3, r0, r6
    lwzx r0, r6, r0
    lwz r5, 0x4(r3)
    addi r6, r6, 0x8
    slwi r0, r0, 5
    mullw r3, r5, r0
    slwi r0, r5, 2
    add r4, r4, r3
    add r4, r4, r0
    bdnz lbl_fn_80082CAC_000013D0
lbl_fn_80082CAC_000013FC:
    lwz r12, 0x150(r30)
    lis r6, lbl_807320F4@ha
    addi r6, r6, lbl_807320F4@l
    addi r3, r30, 0x150
    lwz r12, 0xc(r12)
    addi r7, r6, 0x2f
    li r5, 0x20
    li r6, 0x0
    mtctr r12
    bctrl
    stw r3, 0xcc(r30)
    mr r31, r3
    mr r27, r30
    li r26, 0x0
    li r28, 0x0
    b lbl_fn_80082CAC_0000147C
lbl_fn_80082CAC_0000143C:
    stw r31, 0xd8(r27)
    mr r3, r31
    li r4, 0x0
    lwz r0, 0xd0(r30)
    add r5, r0, r28
    lwz r0, 0x4(r5)
    slwi r5, r0, 2
    bl memset
    lwz r0, 0xd0(r30)
    addi r27, r27, 0x10
    addi r26, r26, 0x1
    add r3, r0, r28
    addi r28, r28, 0x8
    lwz r0, 0x4(r3)
    slwi r0, r0, 2
    add r31, r31, r0
lbl_fn_80082CAC_0000147C:
    lwz r0, 0xd4(r30)
    cmpw r26, r0
    blt lbl_fn_80082CAC_0000143C
    mr r5, r30
    li r4, 0x0
    li r6, 0x0
    b lbl_fn_80082CAC_000014C4
lbl_fn_80082CAC_00001498:
    stw r31, 0xdc(r5)
    addi r5, r5, 0x10
    addi r4, r4, 0x1
    lwz r0, 0xd0(r30)
    add r3, r0, r6
    lwzx r0, r6, r0
    lwz r3, 0x4(r3)
    addi r6, r6, 0x8
    slwi r0, r0, 5
    mullw r0, r3, r0
    add r31, r31, r0
lbl_fn_80082CAC_000014C4:
    lwz r0, 0xd4(r30)
    cmpw r4, r0
    blt lbl_fn_80082CAC_00001498
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
