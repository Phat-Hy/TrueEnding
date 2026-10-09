#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void fn_80082970(void);
extern void fn_80082BE0(void);
extern void fn_80082CAC(void);
extern void fn_800832AC(void);
extern void fn_80083AD4(void);
extern void fn_8008510C(void);
extern void fn_800DC12C(void);
extern void fn_8022AB18(void);
extern void fn_8022ADB8(void);
extern void fn_8022B114(void);
extern void fn_8022B848(void);
extern void fn_8022B84C(void);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732048[];
extern u8 lbl_80732088[];
extern u8 lbl_80778560[];
extern u8 lbl_80778598[];
extern u8 lbl_807785D8[];
extern u8 lbl_807C7090[];
extern u8 lbl_807C709C[];

/* Small data declarations */
extern u32 lbl_8087EF08;

/* Function declarations */
void fn_80084110(void);
void fn_80084320(void);
void fn_800844D8(void);
void dtor_80084684(void);
void fn_800846FC(void);
void fn_800848B4(void);
void fn_80084A78(void);
void fn_80084C24(void);
void fn_80084DC8(void);
void fn_80084E00(void);
void fn_80084E08(void);
void fn_80084E0C(void);
void fn_80084E44(void);
void fn_80084E4C(void);
void fn_80084E50(void);
void fn_80084E78(void);
void fn_80084EE8(void);
void fn_80084F30(void);
void fn_80084F58(void);
void fn_80084F6C(void);
void fn_80084F7C(void);
void fn_80084F84(void);
void fn_80084FA0(void);
void fn_80084FA8(void);
void fn_80084FD8(void);
void fn_80085018(void);
void fn_80085024(void);
void fn_800850B4(void);

asm void fn_80084110(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_80084110_000001F0
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80084110_0000018C
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
    bge lbl_fn_80084110_000000BC
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084110_000000BC
lbl_fn_80084110_000000A4:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80084110_000000A4
lbl_fn_80084110_000000BC:
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
    bge lbl_fn_80084110_00000130
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084110_00000130
lbl_fn_80084110_00000118:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80084110_00000118
lbl_fn_80084110_00000130:
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
lbl_fn_80084110_0000018C:
    lis r3, lbl_807C709C@ha
    cmpwi r30, 0x0
    addi r30, r3, lbl_807C709C@l
    li r0, 0x0
    stw r0, lbl_807C709C@l(r3)
    li r0, 0x20
    stw r0, 0x4(r30)
    ble lbl_fn_80084110_000001F0
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80084110_000001E0
    mr r3, r30
    bl fn_80082970
    lis r4, fn_80082BE0@ha
    lis r5, lbl_807C7090@ha
    mr r3, r30
    addi r4, r4, fn_80082BE0@l
    addi r5, r5, lbl_807C7090@l
    bl __register_global_object
    li r0, 0x1
    stb r0, lbl_8087EF08
lbl_fn_80084110_000001E0:
    lis r3, lbl_807C709C@ha
    mr r4, r29
    addi r3, r3, lbl_807C709C@l
    bl fn_80083AD4
lbl_fn_80084110_000001F0:
    lwz r31, 0x1c(r1)
    mr r3, r29
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80084320(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_80084320_00000394
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
    bge lbl_fn_80084320_000002C4
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084320_000002C4
lbl_fn_80084320_000002AC:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80084320_000002AC
lbl_fn_80084320_000002C4:
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
    bge lbl_fn_80084320_00000338
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084320_00000338
lbl_fn_80084320_00000320:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80084320_00000320
lbl_fn_80084320_00000338:
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
lbl_fn_80084320_00000394:
    lis r3, lbl_807C709C@ha
    mr r4, r29
    addi r3, r3, lbl_807C709C@l
    mr r6, r30
    lwz r5, 0x4(r3)
    bl fn_800832AC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800844D8(void)
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
    bne lbl_fn_800844D8_00000544
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
    bge lbl_fn_800844D8_00000474
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800844D8_00000474
lbl_fn_800844D8_0000045C:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_800844D8_0000045C
lbl_fn_800844D8_00000474:
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
    bge lbl_fn_800844D8_000004E8
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800844D8_000004E8
lbl_fn_800844D8_000004D0:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_800844D8_000004D0
lbl_fn_800844D8_000004E8:
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
lbl_fn_800844D8_00000544:
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

asm void dtor_80084684(void)
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
    bne lbl_dtor_80084684_000005C4
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
lbl_dtor_80084684_000005C4:
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

asm void fn_800846FC(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    mr r30, r4
    stw r29, 0x14(r1)
    mr r29, r3
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_800846FC_00000770
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
    bge lbl_fn_800846FC_000006A0
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800846FC_000006A0
lbl_fn_800846FC_00000688:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_800846FC_00000688
lbl_fn_800846FC_000006A0:
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
    bge lbl_fn_800846FC_00000714
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800846FC_00000714
lbl_fn_800846FC_000006FC:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_800846FC_000006FC
lbl_fn_800846FC_00000714:
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
lbl_fn_800846FC_00000770:
    lis r3, lbl_807C709C@ha
    mr r4, r29
    addi r3, r3, lbl_807C709C@l
    mr r6, r30
    lwz r5, 0x4(r3)
    bl fn_800832AC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800848B4(void)
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
    lbz r0, lbl_8087EF08
    extsb. r0, r0
    bne lbl_fn_800848B4_00000930
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
    bge lbl_fn_800848B4_00000860
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800848B4_00000860
lbl_fn_800848B4_00000848:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_800848B4_00000848
lbl_fn_800848B4_00000860:
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
    bge lbl_fn_800848B4_000008D4
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_800848B4_000008D4
lbl_fn_800848B4_000008BC:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_800848B4_000008BC
lbl_fn_800848B4_000008D4:
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
lbl_fn_800848B4_00000930:
    lis r3, lbl_807C709C@ha
    mr r4, r28
    mr r5, r29
    mr r6, r30
    addi r3, r3, lbl_807C709C@l
    bl fn_800832AC
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80084A78(void)
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
    bne lbl_fn_80084A78_00000AE4
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
    bge lbl_fn_80084A78_00000A14
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084A78_00000A14
lbl_fn_80084A78_000009FC:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80084A78_000009FC
lbl_fn_80084A78_00000A14:
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
    bge lbl_fn_80084A78_00000A88
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084A78_00000A88
lbl_fn_80084A78_00000A70:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80084A78_00000A70
lbl_fn_80084A78_00000A88:
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
lbl_fn_80084A78_00000AE4:
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

asm void fn_80084C24(void)
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
    bne lbl_fn_80084C24_00000C90
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
    bge lbl_fn_80084C24_00000BC0
    addi r0, r3, 0xf
    subf r0, r9, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084C24_00000BC0
lbl_fn_80084C24_00000BA8:
    stw r7, 0x8(r9)
    stw r7, 0xc(r9)
    stw r7, 0x0(r9)
    stw r7, 0x4(r9)
    addi r9, r9, 0x10
    bdnz lbl_fn_80084C24_00000BA8
lbl_fn_80084C24_00000BC0:
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
    bge lbl_fn_80084C24_00000C34
    addi r0, r3, 0xf
    subf r0, r7, r0
    srwi r0, r0, 4
    mtctr r0
    bge lbl_fn_80084C24_00000C34
lbl_fn_80084C24_00000C1C:
    stw r5, 0x8(r7)
    stw r5, 0xc(r7)
    stw r5, 0x0(r7)
    stw r5, 0x4(r7)
    addi r7, r7, 0x10
    bdnz lbl_fn_80084C24_00000C1C
lbl_fn_80084C24_00000C34:
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
lbl_fn_80084C24_00000C90:
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

asm void fn_80084DC8(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    lwz r4, 0x8(r3)
    subi r6, r5, 0x1
    slwi r0, r6, 3
    add r5, r4, r0
    slwi r4, r6, 4
    lwz r0, 0x0(r5)
    add r4, r3, r4
    lwz r3, 0x4(r5)
    slwi r0, r0, 5
    lwz r4, 0x14(r4)
    mullw r0, r3, r0
    add r3, r4, r0
    blr
}

asm void fn_80084E00(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

asm void fn_80084E08(void)
{
    nofralloc
    blr
}

asm void fn_80084E0C(void)
{
    nofralloc
    lwz r5, 0xc(r3)
    lwz r4, 0x8(r3)
    subi r6, r5, 0x1
    slwi r0, r6, 3
    add r5, r4, r0
    slwi r4, r6, 4
    lwz r0, 0x0(r5)
    add r4, r3, r4
    lwz r3, 0x4(r5)
    slwi r0, r0, 5
    lwz r4, 0x14(r4)
    mullw r0, r3, r0
    add r3, r4, r0
    blr
}

asm void fn_80084E44(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    blr
}

asm void fn_80084E4C(void)
{
    nofralloc
    blr
}

asm void fn_80084E50(void)
{
    nofralloc
    lis r4, lbl_807785D8@ha
    li r0, 0x0
    addi r4, r4, lbl_807785D8@l
    stw r4, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    blr
}

asm void fn_80084E78(void)
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
    beq lbl_fn_80084E78_00000DBC
    lwz r0, 0x14(r3)
    lis r4, lbl_807785D8@ha
    addi r4, r4, lbl_807785D8@l
    stw r4, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80084E78_00000DAC
    mr r3, r0
    bl fn_8022ADB8
lbl_fn_80084E78_00000DAC:
    cmpwi r31, 0x0
    ble lbl_fn_80084E78_00000DBC
    mr r3, r30
    bl dtor_80084684
lbl_fn_80084E78_00000DBC:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80084EE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    mr r0, r4
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x4(r3)
    mr r4, r5
    stw r5, 0x8(r3)
    mr r3, r0
    li r5, 0x1
    bl fn_8022AB18
    stw r3, 0x14(r31)
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80084F30(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    mr r6, r4
    cmpwi r0, 0x0
    beq lbl_fn_80084F30_00000E40
    lwz r3, 0x14(r3)
    mr r4, r5
    mr r5, r6
    b fn_8022B848
lbl_fn_80084F30_00000E40:
    li r3, 0x0
    blr
}

asm void fn_80084F58(void)
{
    nofralloc
    lwz r3, 0x14(r3)
    cmpwi r3, 0x0
    beqlr
    b fn_8022B114
    blr
}

asm void fn_80084F6C(void)
{
    nofralloc
    lwz r4, 0x4(r3)
    lwz r0, 0x8(r3)
    add r3, r4, r0
    blr
}

asm void fn_80084F7C(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    blr
}

asm void fn_80084F84(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80084F84_00000E88
    lwz r3, 0x10(r3)
    blr
lbl_fn_80084F84_00000E88:
    li r3, 0x0
    blr
}

asm void fn_80084FA0(void)
{
    nofralloc
    lwz r3, 0x8(r3)
    blr
}

asm void fn_80084FA8(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    lwz r4, 0x14(r3)
    cmpwi r4, 0x0
    beq lbl_fn_80084FA8_00000EB8
    addi r3, r1, 0x8
    bl fn_8022B84C
lbl_fn_80084FA8_00000EB8:
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80084FD8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_80084FD8_00000EF0
    cmpwi r4, 0x0
    ble lbl_fn_80084FD8_00000EF0
    bl dtor_80084684
lbl_fn_80084FD8_00000EF0:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80085018(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x68(r3)
    blr
}

asm void fn_80085024(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x68
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_80085024_00000F48
    addi r3, r31, 0x68
    bl fn_800DC12C
    lwz r4, 0x58(r31)
    stw r3, 0x0(r4)
lbl_fn_80085024_00000F48:
    lwz r3, 0x58(r31)
    lwz r0, 0x5c(r31)
    lwz r4, 0x0(r3)
    cmpw r4, r0
    bge lbl_fn_80085024_00000F64
    stw r0, 0x0(r3)
    b lbl_fn_80085024_00000F74
lbl_fn_80085024_00000F64:
    lwz r0, 0x60(r31)
    cmpw r4, r0
    ble lbl_fn_80085024_00000F74
    stw r0, 0x0(r3)
lbl_fn_80085024_00000F74:
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80085024_00000F90
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_80085024_00000F90:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800850B4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    addi r3, r3, 0x68
    bl fn_8008510C
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_800850B4_00000FE8
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_800850B4_00000FE8
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_800850B4_00000FE8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
