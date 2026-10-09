#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_8007708C(void);
extern void fn_806820D4(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 lbl_80732140[];
extern u8 lbl_80732148[];
extern u8 lbl_807321F0[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEF0;
extern u32 lbl_80880BD0;
extern u32 lbl_80880BD4;
extern u32 lbl_80880BD8;
extern u32 lbl_80880BDC;

/* Function declarations */
void fn_8008510C(void);
void fn_800858FC(void);
void fn_80085B40(void);
void fn_80085B4C(void);
void fn_80085BE8(void);

asm void fn_8008510C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    li r30, 0x0
    lwz r4, lbl_8087EEF0
    lwz r0, 0xd90(r4)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000048
    mr r3, r4
    addi r4, r4, 0x9c
    li r5, 0x30
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000048
    li r30, 0x1
lbl_fn_8008510C_00000048:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_0000008C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000084
    lis r4, 0x1
    subi r0, r4, 0xed0
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000084
    li r30, 0x1
lbl_fn_8008510C_00000084:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_000000B4
lbl_fn_8008510C_0000008C:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_000000B4
    mr r3, r31
    bl strlen
    li r0, 0x30
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_000000B4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000000E0
    addi r4, r3, 0x9c
    li r5, 0x31
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000000E0
    li r30, 0x1
lbl_fn_8008510C_000000E0:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_00000124
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_0000011C
    lis r4, 0x1
    subi r0, r4, 0xecf
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_0000011C
    li r30, 0x1
lbl_fn_8008510C_0000011C:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_0000014C
lbl_fn_8008510C_00000124:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_0000014C
    mr r3, r31
    bl strlen
    li r0, 0x31
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_0000014C:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000178
    addi r4, r3, 0x9c
    li r5, 0x32
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000178
    li r30, 0x1
lbl_fn_8008510C_00000178:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_000001BC
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000001B4
    lis r4, 0x1
    subi r0, r4, 0xece
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000001B4
    li r30, 0x1
lbl_fn_8008510C_000001B4:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_000001E4
lbl_fn_8008510C_000001BC:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_000001E4
    mr r3, r31
    bl strlen
    li r0, 0x32
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_000001E4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000210
    addi r4, r3, 0x9c
    li r5, 0x33
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000210
    li r30, 0x1
lbl_fn_8008510C_00000210:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_00000254
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_0000024C
    lis r4, 0x1
    subi r0, r4, 0xecd
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_0000024C
    li r30, 0x1
lbl_fn_8008510C_0000024C:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_0000027C
lbl_fn_8008510C_00000254:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_0000027C
    mr r3, r31
    bl strlen
    li r0, 0x33
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_0000027C:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000002A8
    addi r4, r3, 0x9c
    li r5, 0x34
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000002A8
    li r30, 0x1
lbl_fn_8008510C_000002A8:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_000002EC
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000002E4
    lis r4, 0x1
    subi r0, r4, 0xecc
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000002E4
    li r30, 0x1
lbl_fn_8008510C_000002E4:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_00000314
lbl_fn_8008510C_000002EC:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_00000314
    mr r3, r31
    bl strlen
    li r0, 0x34
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_00000314:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000340
    addi r4, r3, 0x9c
    li r5, 0x35
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000340
    li r30, 0x1
lbl_fn_8008510C_00000340:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_00000384
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_0000037C
    lis r4, 0x1
    subi r0, r4, 0xecb
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_0000037C
    li r30, 0x1
lbl_fn_8008510C_0000037C:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_000003AC
lbl_fn_8008510C_00000384:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_000003AC
    mr r3, r31
    bl strlen
    li r0, 0x35
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_000003AC:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000003D8
    addi r4, r3, 0x9c
    li r5, 0x36
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000003D8
    li r30, 0x1
lbl_fn_8008510C_000003D8:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_0000041C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000414
    lis r4, 0x1
    subi r0, r4, 0xeca
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000414
    li r30, 0x1
lbl_fn_8008510C_00000414:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_00000444
lbl_fn_8008510C_0000041C:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_00000444
    mr r3, r31
    bl strlen
    li r0, 0x36
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_00000444:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000470
    addi r4, r3, 0x9c
    li r5, 0x37
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000470
    li r30, 0x1
lbl_fn_8008510C_00000470:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_000004B4
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000004AC
    lis r4, 0x1
    subi r0, r4, 0xec9
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000004AC
    li r30, 0x1
lbl_fn_8008510C_000004AC:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_000004DC
lbl_fn_8008510C_000004B4:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_000004DC
    mr r3, r31
    bl strlen
    li r0, 0x37
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_000004DC:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000508
    addi r4, r3, 0x9c
    li r5, 0x38
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000508
    li r30, 0x1
lbl_fn_8008510C_00000508:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_0000054C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000544
    lis r4, 0x1
    subi r0, r4, 0xec8
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000544
    li r30, 0x1
lbl_fn_8008510C_00000544:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_00000574
lbl_fn_8008510C_0000054C:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_00000574
    mr r3, r31
    bl strlen
    li r0, 0x38
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_00000574:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000005A0
    addi r4, r3, 0x9c
    li r5, 0x39
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000005A0
    li r30, 0x1
lbl_fn_8008510C_000005A0:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_000005E4
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000005DC
    lis r4, 0x1
    subi r0, r4, 0xec7
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000005DC
    li r30, 0x1
lbl_fn_8008510C_000005DC:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_0000060C
lbl_fn_8008510C_000005E4:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_0000060C
    mr r3, r31
    bl strlen
    li r0, 0x39
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_0000060C:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000638
    addi r4, r3, 0x9c
    li r5, 0x2e
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000638
    li r30, 0x1
lbl_fn_8008510C_00000638:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_0000067C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000674
    lis r4, 0x1
    subi r0, r4, 0xed2
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000674
    li r30, 0x1
lbl_fn_8008510C_00000674:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_000006A4
lbl_fn_8008510C_0000067C:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_000006A4
    mr r3, r31
    bl strlen
    li r0, 0x2e
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_000006A4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000006D0
    addi r4, r3, 0x9c
    li r5, 0x2d
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000006D0
    li r30, 0x1
lbl_fn_8008510C_000006D0:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_00000714
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_0000070C
    lis r4, 0x1
    subi r0, r4, 0xed3
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_0000070C
    li r30, 0x1
lbl_fn_8008510C_0000070C:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_0000073C
lbl_fn_8008510C_00000714:
    mr r3, r31
    bl strlen
    cmplwi r3, 0x3e
    bge lbl_fn_8008510C_0000073C
    mr r3, r31
    bl strlen
    li r0, 0x2d
    stbux r0, r3, r31
    li r0, 0x0
    stb r0, 0x1(r3)
lbl_fn_8008510C_0000073C:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_00000770
    lis r4, 0x1
    subi r0, r4, 0xe52
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_00000770
    li r30, 0x1
lbl_fn_8008510C_00000770:
    cmpwi r30, 0x0
    bne lbl_fn_8008510C_000007B4
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8008510C_000007AC
    lis r4, 0x1
    subi r0, r4, 0xe38
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000007AC
    li r30, 0x1
lbl_fn_8008510C_000007AC:
    cmpwi r30, 0x0
    beq lbl_fn_8008510C_000007D8
lbl_fn_8008510C_000007B4:
    mr r3, r31
    bl strlen
    cmpwi r3, 0x0
    beq lbl_fn_8008510C_000007D8
    mr r3, r31
    bl strlen
    add r3, r31, r3
    li r0, 0x0
    stb r0, -0x1(r3)
lbl_fn_8008510C_000007D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800858FC(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r7, 0x4330
    stw r0, 0x64(r1)
    lwz r0, 0x10(r4)
    stfd f31, 0x50(r1)
    psq_st f31, 0x58(r1), 0, 0
    stw r31, 0x4c(r1)
    mr r31, r6
    stw r30, 0x48(r1)
    mr r30, r4
    stw r29, 0x44(r1)
    mr r29, r3
    stw r28, 0x40(r1)
    mr r28, r5
    lwz r8, 0x0(r6)
    stw r7, 0x28(r1)
    cmpw r8, r0
    stw r7, 0x30(r1)
    bge lbl_fn_800858FC_00000A0C
    lwz r0, 0xc(r4)
    cmpw r0, r8
    bgt lbl_fn_800858FC_00000A00
    subf r0, r0, r8
    lis r3, lbl_80732140@ha
    xoris r0, r0, 0x8000
    stw r0, 0x2c(r1)
    lwz r0, 0x14(r4)
    lfd f1, lbl_80732140@l(r3)
    lfd f0, 0x28(r1)
    cmpw r0, r8
    lfs f5, lbl_80880BD0
    fsubs f1, f0, f1
    lfs f0, 0x4(r4)
    fmadds f31, f5, f1, f0
    bne lbl_fn_800858FC_000008B4
    lwz r0, 0x18(r4)
    fmr f2, f31
    lis r5, 0xff81
    lwz r3, lbl_8087EEB0
    cmpwi r0, 0x0
    lfs f1, 0x0(r4)
    lfs f3, lbl_80880BD4
    lfs f4, 0x8(r4)
    subi r0, r5, 0x7f01
    beq lbl_fn_800858FC_000008AC
    addi r0, r5, -0x8000
lbl_fn_800858FC_000008AC:
    mr r4, r0
    bl fn_80060D58
lbl_fn_800858FC_000008B4:
    xoris r0, r28, 0x8000
    stw r0, 0x34(r1)
    lis r3, lbl_80732140@ha
    lfs f4, lbl_80880BD0
    lfd f3, lbl_80732140@l(r3)
    fmr f2, f31
    lfd f1, 0x30(r1)
    fmr f5, f4
    lfs f0, 0x0(r30)
    addi r4, r29, 0x4
    fsubs f1, f1, f3
    lwz r3, lbl_8087EEB0
    li r5, -0x1
    lfs f3, lbl_80880BD4
    li r6, 0x0
    fmadds f1, f4, f1, f0
    lfs f6, lbl_80880BD8
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x14(r30)
    lwz r0, 0x0(r31)
    cmpw r3, r0
    bne lbl_fn_800858FC_00000984
    lwz r0, 0x18(r30)
    cmpwi r0, 0x0
    beq lbl_fn_800858FC_00000984
    addi r3, r29, 0x68
    bl strlen
    stw r3, 0x2c(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x28(r1)
    addi r4, r29, 0x68
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
    b lbl_fn_800858FC_00000A00
lbl_fn_800858FC_00000984:
    lwz r5, 0x58(r29)
    lis r4, lbl_807321F0@ha
    addi r3, r1, 0x8
    lwz r5, 0x0(r5)
    addi r4, r4, lbl_807321F0@l
    crclr 6
    bl sprintf
    addi r3, r1, 0x8
    bl strlen
    stw r3, 0x34(r1)
    lis r3, lbl_80732148@ha
    lfd f6, lbl_80732148@l(r3)
    fmr f2, f31
    lfd f0, 0x30(r1)
    addi r4, r1, 0x8
    lfs f3, 0x0(r30)
    li r5, -0x1
    fsubs f7, f0, f6
    lfs f1, 0x8(r30)
    li r6, 0x0
    lfs f4, lbl_80880BD0
    li r7, 0x0
    fadds f1, f3, f1
    lfs f0, lbl_80880BDC
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    li r8, 0x0
    fnmsubs f1, f0, f7, f1
    lfs f3, lbl_80880BD4
    lfs f6, lbl_80880BD8
    bl fn_800616C0
lbl_fn_800858FC_00000A00:
    lwz r3, 0x0(r31)
    addi r0, r3, 0x1
    stw r0, 0x0(r31)
lbl_fn_800858FC_00000A0C:
    lwz r0, 0x64(r1)
    psq_l f31, 0x58(r1), 0, 0
    lfd f31, 0x50(r1)
    lwz r31, 0x4c(r1)
    lwz r30, 0x48(r1)
    lwz r29, 0x44(r1)
    lwz r28, 0x40(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80085B40(void)
{
    nofralloc
    li r0, 0x0
    stb r0, 0x68(r3)
    blr
}

asm void fn_80085B4C(void)
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
    beq lbl_fn_80085B4C_00000A80
    lis r4, lbl_807321F0@ha
    lwz r5, 0x58(r31)
    addi r4, r4, lbl_807321F0@l
    addi r3, r31, 0x68
    addi r4, r4, 0x3
    crclr 6
    bl fn_806820D4
lbl_fn_80085B4C_00000A80:
    lwz r3, 0x58(r31)
    lwz r0, 0x5c(r31)
    lwz r4, 0x0(r3)
    cmplw r4, r0
    bge lbl_fn_80085B4C_00000A9C
    stw r0, 0x0(r3)
    b lbl_fn_80085B4C_00000AAC
lbl_fn_80085B4C_00000A9C:
    lwz r0, 0x60(r31)
    cmplw r4, r0
    ble lbl_fn_80085B4C_00000AAC
    stw r0, 0x0(r3)
lbl_fn_80085B4C_00000AAC:
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80085B4C_00000AC8
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_80085B4C_00000AC8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80085BE8(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    li r30, 0x0
    lwz r4, lbl_8087EEF0
    lwz r0, 0xd90(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000B24
    mr r3, r4
    addi r4, r4, 0x9c
    li r5, 0x30
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000B24
    li r30, 0x1
lbl_fn_80085BE8_00000B24:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000B68
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000B60
    lis r4, 0x1
    subi r0, r4, 0xed0
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000B60
    li r30, 0x1
lbl_fn_80085BE8_00000B60:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000B84
lbl_fn_80085BE8_00000B68:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x30
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000B84:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000BB0
    addi r4, r3, 0x9c
    li r5, 0x31
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000BB0
    li r30, 0x1
lbl_fn_80085BE8_00000BB0:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000BF4
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000BEC
    lis r4, 0x1
    subi r0, r4, 0xecf
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000BEC
    li r30, 0x1
lbl_fn_80085BE8_00000BEC:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000C10
lbl_fn_80085BE8_00000BF4:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x31
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000C10:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000C3C
    addi r4, r3, 0x9c
    li r5, 0x32
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000C3C
    li r30, 0x1
lbl_fn_80085BE8_00000C3C:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000C80
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000C78
    lis r4, 0x1
    subi r0, r4, 0xece
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000C78
    li r30, 0x1
lbl_fn_80085BE8_00000C78:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000C9C
lbl_fn_80085BE8_00000C80:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x32
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000C9C:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000CC8
    addi r4, r3, 0x9c
    li r5, 0x33
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000CC8
    li r30, 0x1
lbl_fn_80085BE8_00000CC8:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000D0C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000D04
    lis r4, 0x1
    subi r0, r4, 0xecd
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000D04
    li r30, 0x1
lbl_fn_80085BE8_00000D04:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000D28
lbl_fn_80085BE8_00000D0C:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x33
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000D28:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000D54
    addi r4, r3, 0x9c
    li r5, 0x34
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000D54
    li r30, 0x1
lbl_fn_80085BE8_00000D54:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000D98
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000D90
    lis r4, 0x1
    subi r0, r4, 0xecc
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000D90
    li r30, 0x1
lbl_fn_80085BE8_00000D90:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000DB4
lbl_fn_80085BE8_00000D98:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x34
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000DB4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000DE0
    addi r4, r3, 0x9c
    li r5, 0x35
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000DE0
    li r30, 0x1
lbl_fn_80085BE8_00000DE0:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000E24
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000E1C
    lis r4, 0x1
    subi r0, r4, 0xecb
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000E1C
    li r30, 0x1
lbl_fn_80085BE8_00000E1C:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000E40
lbl_fn_80085BE8_00000E24:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x35
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000E40:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000E6C
    addi r4, r3, 0x9c
    li r5, 0x36
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000E6C
    li r30, 0x1
lbl_fn_80085BE8_00000E6C:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000EB0
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000EA8
    lis r4, 0x1
    subi r0, r4, 0xeca
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000EA8
    li r30, 0x1
lbl_fn_80085BE8_00000EA8:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000ECC
lbl_fn_80085BE8_00000EB0:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x36
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000ECC:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000EF8
    addi r4, r3, 0x9c
    li r5, 0x37
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000EF8
    li r30, 0x1
lbl_fn_80085BE8_00000EF8:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000F3C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000F34
    lis r4, 0x1
    subi r0, r4, 0xec9
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000F34
    li r30, 0x1
lbl_fn_80085BE8_00000F34:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000F58
lbl_fn_80085BE8_00000F3C:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x37
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000F58:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000F84
    addi r4, r3, 0x9c
    li r5, 0x38
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000F84
    li r30, 0x1
lbl_fn_80085BE8_00000F84:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00000FC8
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00000FC0
    lis r4, 0x1
    subi r0, r4, 0xec8
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00000FC0
    li r30, 0x1
lbl_fn_80085BE8_00000FC0:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00000FE4
lbl_fn_80085BE8_00000FC8:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x38
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00000FE4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00001010
    addi r4, r3, 0x9c
    li r5, 0x39
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00001010
    li r30, 0x1
lbl_fn_80085BE8_00001010:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00001054
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_0000104C
    lis r4, 0x1
    subi r0, r4, 0xec7
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_0000104C
    li r30, 0x1
lbl_fn_80085BE8_0000104C:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00001070
lbl_fn_80085BE8_00001054:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x39
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00001070:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_0000109C
    addi r4, r3, 0x9c
    li r5, 0x41
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_0000109C
    li r30, 0x1
lbl_fn_80085BE8_0000109C:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_000010D8
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000010D0
    addi r4, r3, 0x9c
    li r5, 0x61
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000010D0
    li r30, 0x1
lbl_fn_80085BE8_000010D0:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_000010F4
lbl_fn_80085BE8_000010D8:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x61
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_000010F4:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00001120
    addi r4, r3, 0x9c
    li r5, 0x42
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00001120
    li r30, 0x1
lbl_fn_80085BE8_00001120:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_0000115C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00001154
    addi r4, r3, 0x9c
    li r5, 0x62
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00001154
    li r30, 0x1
lbl_fn_80085BE8_00001154:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00001178
lbl_fn_80085BE8_0000115C:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x62
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00001178:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000011A4
    addi r4, r3, 0x9c
    li r5, 0x43
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000011A4
    li r30, 0x1
lbl_fn_80085BE8_000011A4:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_000011E0
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000011D8
    addi r4, r3, 0x9c
    li r5, 0x63
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000011D8
    li r30, 0x1
lbl_fn_80085BE8_000011D8:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_000011FC
lbl_fn_80085BE8_000011E0:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x63
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_000011FC:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00001228
    addi r4, r3, 0x9c
    li r5, 0x44
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00001228
    li r30, 0x1
lbl_fn_80085BE8_00001228:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00001264
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_0000125C
    addi r4, r3, 0x9c
    li r5, 0x64
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_0000125C
    li r30, 0x1
lbl_fn_80085BE8_0000125C:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00001280
lbl_fn_80085BE8_00001264:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x64
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00001280:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000012AC
    addi r4, r3, 0x9c
    li r5, 0x45
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000012AC
    li r30, 0x1
lbl_fn_80085BE8_000012AC:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_000012E8
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000012E0
    addi r4, r3, 0x9c
    li r5, 0x65
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000012E0
    li r30, 0x1
lbl_fn_80085BE8_000012E0:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00001304
lbl_fn_80085BE8_000012E8:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x65
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00001304:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00001330
    addi r4, r3, 0x9c
    li r5, 0x46
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00001330
    li r30, 0x1
lbl_fn_80085BE8_00001330:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_0000136C
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_00001364
    addi r4, r3, 0x9c
    li r5, 0x66
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_00001364
    li r30, 0x1
lbl_fn_80085BE8_00001364:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00001388
lbl_fn_80085BE8_0000136C:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x66
    stb r0, 0x68(r3)
    li r0, 0x0
    stb r0, 0x69(r3)
lbl_fn_80085BE8_00001388:
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000013BC
    lis r4, 0x1
    subi r0, r4, 0xe52
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000013BC
    li r30, 0x1
lbl_fn_80085BE8_000013BC:
    cmpwi r30, 0x0
    bne lbl_fn_80085BE8_00001400
    lwz r3, lbl_8087EEF0
    li r30, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_000013F8
    lis r4, 0x1
    subi r0, r4, 0xe38
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80085BE8_000013F8
    li r30, 0x1
lbl_fn_80085BE8_000013F8:
    cmpwi r30, 0x0
    beq lbl_fn_80085BE8_00001414
lbl_fn_80085BE8_00001400:
    addi r3, r31, 0x68
    bl strlen
    add r3, r31, r3
    li r0, 0x0
    stb r0, 0x67(r3)
lbl_fn_80085BE8_00001414:
    lwz r0, 0x4c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_80085BE8_0000143C
    lwz r12, 0x54(r31)
    cmpwi r12, 0x0
    beq lbl_fn_80085BE8_0000143C
    addi r4, r31, 0x58
    lwz r3, 0x50(r31)
    mtctr r12
    bctrl
lbl_fn_80085BE8_0000143C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
