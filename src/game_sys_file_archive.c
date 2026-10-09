#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_19(void);
extern void _restgpr_25(void);
extern void _savegpr_19(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80013DC4(void);
extern void fn_80013F78(void);
extern void fn_800616C0(void);
extern void fn_800DC980(void);
extern void fn_80221CF8(void);
extern void fn_804803A4(void);
extern void fn_8049D52C(void);
extern void fn_8053B02C(void);
extern void fn_8053C128(void);
extern void fn_805411E0(void);
extern int sprintf(char* str, const char* format, ...);
extern u32 strlen(const char* str);

/* External data declarations */
extern u8 jumptable_80783750[];
extern u8 lbl_807428E0[];
extern u8 lbl_807428F4[];
extern u8 lbl_807837E0[];
extern u8 lbl_807837E8[];
extern u8 lbl_807837F4[];
extern u8 lbl_807837FC[];
extern u8 lbl_80783808[];
extern u8 lbl_80783810[];
extern u8 lbl_80783818[];
extern u8 lbl_80783820[];
extern u8 lbl_80783828[];
extern u8 lbl_80783830[];
extern u8 lbl_80783838[];
extern u8 lbl_80783840[];
extern u8 lbl_8078384C[];
extern u8 lbl_80783858[];
extern u8 lbl_80783860[];
extern u8 lbl_8078386C[];
extern u8 lbl_80783878[];
extern u8 lbl_80783880[];

/* Small data declarations */
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EF00;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F540;
extern u32 lbl_80882FF0;
extern u32 lbl_80882FF4;
extern u32 lbl_80883000;
extern u32 lbl_80883004;
extern u32 lbl_80883008;
extern u32 lbl_8088300C;
extern u32 lbl_80883010;

/* Function declarations */
void fn_80221F54(void);
void fn_80221FA4(void);
void fn_80222A24(void);
void fn_80222A38(void);
void fn_80222AD0(void);
void fn_8022354C(void);

asm void fn_80221F54(void)
{
    nofralloc
    cmpwi r4, 0x6
    bgelr
    slwi r0, r4, 2
    add r5, r3, r0
    lwz r0, 0x5c(r5)
    cmpwi r0, 0x0
    beqlr
    lwz r0, 0x0(r3)
    cmpw r0, r4
    beq lbl_fn_80221F54_00000034
    lwz r5, lbl_8087F0A8
    li r0, 0x0
    stw r0, 0x4(r5)
lbl_fn_80221F54_00000034:
    stw r4, 0x0(r3)
    slwi r0, r4, 2
    add r4, r3, r0
    lwz r12, 0x5c(r4)
    mtctr r12
    bctr
    blr
}

asm void fn_80221FA4(void)
{
    nofralloc
    stwu r1, -0x100(r1)
    mflr r0
    stw r0, 0x104(r1)
    stfd f31, 0xf0(r1)
    psq_st f31, 0xf8(r1), 0, 0
    stfd f30, 0xe0(r1)
    psq_st f30, 0xe8(r1), 0, 0
    stfd f29, 0xd0(r1)
    psq_st f29, 0xd8(r1), 0, 0
    stw r31, 0xcc(r1)
    stw r30, 0xc8(r1)
    stw r29, 0xc4(r1)
    lwz r3, lbl_8087F540
    lwz r30, 0x70(r3)
    cmpwi r30, 0x0
    beq lbl_fn_80221FA4_00000A9C
    mr r3, r30
    bl fn_805411E0
    cmpwi r3, 0x0
    mr r31, r3
    beq lbl_fn_80221FA4_00000A9C
    lwz r5, 0x4c(r30)
    lis r4, lbl_807428F4@ha
    addi r4, r4, lbl_807428F4@l
    lfs f29, 0x198(r30)
    cmpwi r5, 0x0
    lfs f31, lbl_80883000
    lfs f30, lbl_80883004
    addi r3, r1, 0xac
    addi r4, r4, 0x15
    beq lbl_fn_80221FA4_000000D0
    b lbl_fn_80221FA4_000000D4
lbl_fn_80221FA4_000000D0:
    la r5, lbl_8087EF00
lbl_fn_80221FA4_000000D4:
    crclr 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_00000108
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_0000010C
lbl_fn_80221FA4_00000108:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_0000010C:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_8088300C
    lwz r3, 0xc(r31)
    fadds f30, f30, f0
    bl fn_80221CF8
    lis r4, lbl_807428F4@ha
    mr r5, r3
    addi r4, r4, lbl_807428F4@l
    addi r3, r1, 0xa0
    addi r4, r4, 0x27
    crclr 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80221FA4_00000180
    lwz r4, 0xa0(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80221FA4_00000180
    lwz r3, 0xa4(r1)
    lwz r0, 0xa8(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    b lbl_fn_80221FA4_000001D8
lbl_fn_80221FA4_00000180:
    cmpwi r3, 0x0
    beq lbl_fn_80221FA4_00000190
    lwz r5, 0xb0(r1)
    b lbl_fn_80221FA4_00000198
lbl_fn_80221FA4_00000190:
    lbz r0, 0xac(r1)
    clrlwi r5, r0, 25
lbl_fn_80221FA4_00000198:
    lwz r0, 0xa0(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_000001B4
    lbz r0, 0xa0(r1)
    addi r6, r1, 0xa1
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_000001BC
lbl_fn_80221FA4_000001B4:
    lwz r6, 0xa8(r1)
    lwz r4, 0xa4(r1)
lbl_fn_80221FA4_000001BC:
    lbz r0, 0x54(r1)
    add r7, r6, r4
    stb r0, 0x50(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x50
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80221FA4_000001D8:
    lwz r0, 0xa0(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_000001EC
    lwz r3, 0xa8(r1)
    bl dtor_80084684
lbl_fn_80221FA4_000001EC:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_00000218
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_0000021C
lbl_fn_80221FA4_00000218:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_0000021C:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_8088300C
    lis r4, lbl_807428F4@ha
    lwz r5, 0x4(r31)
    addi r4, r4, lbl_807428F4@l
    fadds f30, f30, f0
    addi r3, r1, 0x94
    cmpwi r5, 0x0
    addi r4, r4, 0x39
    beq lbl_fn_80221FA4_0000025C
    b lbl_fn_80221FA4_00000260
lbl_fn_80221FA4_0000025C:
    la r5, lbl_8087EF00
lbl_fn_80221FA4_00000260:
    crclr 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80221FA4_00000298
    lwz r4, 0x94(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80221FA4_00000298
    lwz r3, 0x98(r1)
    lwz r0, 0x9c(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    b lbl_fn_80221FA4_000002F0
lbl_fn_80221FA4_00000298:
    cmpwi r3, 0x0
    beq lbl_fn_80221FA4_000002A8
    lwz r5, 0xb0(r1)
    b lbl_fn_80221FA4_000002B0
lbl_fn_80221FA4_000002A8:
    lbz r0, 0xac(r1)
    clrlwi r5, r0, 25
lbl_fn_80221FA4_000002B0:
    lwz r0, 0x94(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_000002CC
    lbz r0, 0x94(r1)
    addi r6, r1, 0x95
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_000002D4
lbl_fn_80221FA4_000002CC:
    lwz r6, 0x9c(r1)
    lwz r4, 0x98(r1)
lbl_fn_80221FA4_000002D4:
    lbz r0, 0x4c(r1)
    add r7, r6, r4
    stb r0, 0x48(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x48
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80221FA4_000002F0:
    lwz r0, 0x94(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_00000304
    lwz r3, 0x9c(r1)
    bl dtor_80084684
lbl_fn_80221FA4_00000304:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_00000330
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_00000334
lbl_fn_80221FA4_00000330:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_00000334:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x2c(r31)
    lis r0, 0x4330
    lis r4, lbl_807428E0@ha
    lfs f3, lbl_8088300C
    xoris r3, r3, 0x8000
    stw r3, 0xbc(r1)
    lis r5, lbl_807428F4@ha
    lfd f2, lbl_807428E0@l(r4)
    stw r0, 0xb8(r1)
    addi r5, r5, lbl_807428F4@l
    fmr f1, f29
    addi r3, r1, 0x88
    lfd f0, 0xb8(r1)
    fadds f30, f30, f3
    addi r4, r5, 0x4b
    fsubs f2, f0, f2
    crset 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80221FA4_000003C4
    lwz r4, 0x88(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80221FA4_000003C4
    lwz r3, 0x8c(r1)
    lwz r0, 0x90(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    b lbl_fn_80221FA4_0000041C
lbl_fn_80221FA4_000003C4:
    cmpwi r3, 0x0
    beq lbl_fn_80221FA4_000003D4
    lwz r5, 0xb0(r1)
    b lbl_fn_80221FA4_000003DC
lbl_fn_80221FA4_000003D4:
    lbz r0, 0xac(r1)
    clrlwi r5, r0, 25
lbl_fn_80221FA4_000003DC:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_000003F8
    lbz r0, 0x88(r1)
    addi r6, r1, 0x89
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_00000400
lbl_fn_80221FA4_000003F8:
    lwz r6, 0x90(r1)
    lwz r4, 0x8c(r1)
lbl_fn_80221FA4_00000400:
    lbz r0, 0x44(r1)
    add r7, r6, r4
    stb r0, 0x40(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x40
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80221FA4_0000041C:
    lwz r0, 0x88(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_00000430
    lwz r3, 0x90(r1)
    bl dtor_80084684
lbl_fn_80221FA4_00000430:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_0000045C
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_00000460
lbl_fn_80221FA4_0000045C:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_00000460:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, lbl_8087F540
    lis r4, lbl_807428E0@ha
    lfs f0, lbl_8088300C
    li r6, 0x0
    lwz r8, 0x70(r3)
    li r3, 0x0
    fadds f30, f30, f0
    lwz r5, 0xc(r31)
    lwz r9, 0xbc(r8)
    lis r0, 0x4330
    lfs f1, lbl_80882FF0
    lfd f2, lbl_807428E0@l(r4)
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_80221FA4_00000520
lbl_fn_80221FA4_000004B4:
    cmpwi r6, 0x0
    li r4, 0x0
    blt lbl_fn_80221FA4_000004CC
    cmpw r6, r9
    bge lbl_fn_80221FA4_000004CC
    li r4, 0x1
lbl_fn_80221FA4_000004CC:
    cmpwi r4, 0x0
    beq lbl_fn_80221FA4_000004E0
    lwz r4, 0xb8(r8)
    lwzx r7, r4, r3
    b lbl_fn_80221FA4_000004E4
lbl_fn_80221FA4_000004E0:
    li r7, 0x0
lbl_fn_80221FA4_000004E4:
    lwz r4, 0xc(r7)
    cmpw r5, r4
    bne lbl_fn_80221FA4_000004F8
    fadds f1, f1, f29
    b lbl_fn_80221FA4_00000520
lbl_fn_80221FA4_000004F8:
    lwz r4, 0x2c(r7)
    addi r6, r6, 0x1
    stw r0, 0xb8(r1)
    addi r3, r3, 0x8
    xoris r4, r4, 0x8000
    stw r4, 0xbc(r1)
    lfd f0, 0xb8(r1)
    fsubs f0, f0, f2
    fadds f1, f1, f0
    bdnz lbl_fn_80221FA4_000004B4
lbl_fn_80221FA4_00000520:
    li r6, 0x0
    li r5, 0x0
    li r3, 0x0
    mtctr r9
    cmpwi r9, 0x0
    ble lbl_fn_80221FA4_0000057C
lbl_fn_80221FA4_00000538:
    cmpwi r5, 0x0
    li r0, 0x0
    blt lbl_fn_80221FA4_00000550
    cmpw r5, r9
    bge lbl_fn_80221FA4_00000550
    li r0, 0x1
lbl_fn_80221FA4_00000550:
    cmpwi r0, 0x0
    beq lbl_fn_80221FA4_00000564
    lwz r4, 0xb8(r8)
    lwzx r4, r4, r3
    b lbl_fn_80221FA4_00000568
lbl_fn_80221FA4_00000564:
    li r4, 0x0
lbl_fn_80221FA4_00000568:
    lwz r0, 0x2c(r4)
    addi r5, r5, 0x1
    addi r3, r3, 0x8
    add r6, r6, r0
    bdnz lbl_fn_80221FA4_00000538
lbl_fn_80221FA4_0000057C:
    xoris r3, r6, 0x8000
    lis r0, 0x4330
    stw r3, 0xbc(r1)
    lis r4, lbl_807428E0@ha
    lfd f2, lbl_807428E0@l(r4)
    lis r4, lbl_807428F4@ha
    stw r0, 0xb8(r1)
    addi r4, r4, lbl_807428F4@l
    addi r3, r1, 0x7c
    lfd f0, 0xb8(r1)
    addi r4, r4, 0x68
    fsubs f2, f0, f2
    crset 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80221FA4_000005E4
    lwz r4, 0x7c(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80221FA4_000005E4
    lwz r3, 0x80(r1)
    lwz r0, 0x84(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    b lbl_fn_80221FA4_0000063C
lbl_fn_80221FA4_000005E4:
    cmpwi r3, 0x0
    beq lbl_fn_80221FA4_000005F4
    lwz r5, 0xb0(r1)
    b lbl_fn_80221FA4_000005FC
lbl_fn_80221FA4_000005F4:
    lbz r0, 0xac(r1)
    clrlwi r5, r0, 25
lbl_fn_80221FA4_000005FC:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_00000618
    lbz r0, 0x7c(r1)
    addi r6, r1, 0x7d
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_00000620
lbl_fn_80221FA4_00000618:
    lwz r6, 0x84(r1)
    lwz r4, 0x80(r1)
lbl_fn_80221FA4_00000620:
    lbz r0, 0x3c(r1)
    add r7, r6, r4
    stb r0, 0x38(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x38
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80221FA4_0000063C:
    lwz r0, 0x7c(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_00000650
    lwz r3, 0x84(r1)
    bl dtor_80084684
lbl_fn_80221FA4_00000650:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_0000067C
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_00000680
lbl_fn_80221FA4_0000067C:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_00000680:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0xac(r1)
    lis r3, lbl_807428F4@ha
    lfs f0, lbl_8088300C
    addi r3, r3, lbl_807428F4@l
    lwz r4, lbl_8087F540
    srwi. r0, r0, 31
    fadds f30, f30, f0
    addi r30, r3, 0x85
    lwz r31, 0x1e78(r4)
    bne lbl_fn_80221FA4_000006CC
    lbz r0, 0xac(r1)
    clrlwi r29, r0, 25
    b lbl_fn_80221FA4_000006D0
lbl_fn_80221FA4_000006CC:
    lwz r29, 0xb0(r1)
lbl_fn_80221FA4_000006D0:
    lbz r0, 0x34(r1)
    mr r3, r30
    stb r0, 0x30(r1)
    bl strlen
    mr r0, r3
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0xac
    add r7, r30, r0
    addi r8, r1, 0x30
    li r4, 0x0
    bl fn_80013F78
    cmpwi r31, 0x0
    beq lbl_fn_80221FA4_00000788
    lwz r4, lbl_8087F540
    addi r3, r1, 0x70
    bl fn_80222A38
    lwz r0, 0xac(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_0000072C
    lbz r0, 0xac(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_00000730
lbl_fn_80221FA4_0000072C:
    lwz r4, 0xb0(r1)
lbl_fn_80221FA4_00000730:
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_0000074C
    lbz r0, 0x70(r1)
    addi r6, r1, 0x71
    clrlwi r5, r0, 25
    b lbl_fn_80221FA4_00000754
lbl_fn_80221FA4_0000074C:
    lwz r6, 0x78(r1)
    lwz r5, 0x74(r1)
lbl_fn_80221FA4_00000754:
    lbz r0, 0x2c(r1)
    add r7, r6, r5
    stb r0, 0x28(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x28
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x70(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_000007E0
    lwz r3, 0x78(r1)
    bl dtor_80084684
    b lbl_fn_80221FA4_000007E0
lbl_fn_80221FA4_00000788:
    lwz r0, 0xac(r1)
    lis r3, lbl_807428F4@ha
    addi r3, r3, lbl_807428F4@l
    srwi. r0, r0, 31
    addi r30, r3, 0x94
    bne lbl_fn_80221FA4_000007AC
    lbz r0, 0xac(r1)
    clrlwi r29, r0, 25
    b lbl_fn_80221FA4_000007B0
lbl_fn_80221FA4_000007AC:
    lwz r29, 0xb0(r1)
lbl_fn_80221FA4_000007B0:
    lbz r0, 0x24(r1)
    mr r3, r30
    stb r0, 0x20(r1)
    bl strlen
    mr r0, r3
    mr r4, r29
    mr r6, r30
    addi r3, r1, 0xac
    add r7, r30, r0
    addi r8, r1, 0x20
    li r5, 0x0
    bl fn_80013F78
lbl_fn_80221FA4_000007E0:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_0000080C
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_00000810
lbl_fn_80221FA4_0000080C:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_00000810:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0xac(r1)
    lis r3, lbl_807428F4@ha
    lfs f0, lbl_8088300C
    addi r3, r3, lbl_807428F4@l
    srwi. r0, r0, 31
    fadds f30, f30, f0
    addi r30, r3, 0x96
    bne lbl_fn_80221FA4_00000854
    lbz r0, 0xac(r1)
    clrlwi r29, r0, 25
    b lbl_fn_80221FA4_00000858
lbl_fn_80221FA4_00000854:
    lwz r29, 0xb0(r1)
lbl_fn_80221FA4_00000858:
    lbz r0, 0x1c(r1)
    mr r3, r30
    stb r0, 0x18(r1)
    bl strlen
    mr r0, r3
    mr r5, r29
    mr r6, r30
    addi r3, r1, 0xac
    add r7, r30, r0
    addi r8, r1, 0x18
    li r4, 0x0
    bl fn_80013F78
    cmpwi r31, 0x0
    beq lbl_fn_80221FA4_00000928
    lwz r5, lbl_8087F540
    lis r4, lbl_807428F4@ha
    addi r4, r4, lbl_807428F4@l
    addi r3, r1, 0x64
    lfs f0, 0x1e88(r5)
    addi r4, r4, 0xa5
    lfs f1, 0x1e8c(r5)
    fsubs f1, f1, f0
    crset 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_000008D0
    lbz r0, 0xac(r1)
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_000008D4
lbl_fn_80221FA4_000008D0:
    lwz r4, 0xb0(r1)
lbl_fn_80221FA4_000008D4:
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_000008F0
    lbz r0, 0x64(r1)
    addi r6, r1, 0x65
    clrlwi r5, r0, 25
    b lbl_fn_80221FA4_000008F8
lbl_fn_80221FA4_000008F0:
    lwz r6, 0x6c(r1)
    lwz r5, 0x68(r1)
lbl_fn_80221FA4_000008F8:
    lbz r0, 0x14(r1)
    add r7, r6, r5
    stb r0, 0x10(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x10
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_00000928
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_80221FA4_00000928:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_00000954
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_00000958
lbl_fn_80221FA4_00000954:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_00000958:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_8088300C
    lis r4, lbl_807428F4@ha
    lwz r3, lbl_8087F540
    addi r4, r4, lbl_807428F4@l
    fadds f30, f30, f0
    addi r4, r4, 0xac
    lfs f1, 0x1eb4(r3)
    addi r3, r1, 0x58
    crset 6
    bl fn_800DC980
    lwz r0, 0xac(r1)
    srwi. r3, r0, 31
    bne lbl_fn_80221FA4_000009C8
    lwz r4, 0x58(r1)
    srwi. r0, r4, 31
    bne lbl_fn_80221FA4_000009C8
    lwz r3, 0x5c(r1)
    lwz r0, 0x60(r1)
    stw r4, 0xac(r1)
    stw r3, 0xb0(r1)
    stw r0, 0xb4(r1)
    b lbl_fn_80221FA4_00000A20
lbl_fn_80221FA4_000009C8:
    cmpwi r3, 0x0
    beq lbl_fn_80221FA4_000009D8
    lwz r5, 0xb0(r1)
    b lbl_fn_80221FA4_000009E0
lbl_fn_80221FA4_000009D8:
    lbz r0, 0xac(r1)
    clrlwi r5, r0, 25
lbl_fn_80221FA4_000009E0:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    bne lbl_fn_80221FA4_000009FC
    lbz r0, 0x58(r1)
    addi r6, r1, 0x59
    clrlwi r4, r0, 25
    b lbl_fn_80221FA4_00000A04
lbl_fn_80221FA4_000009FC:
    lwz r6, 0x60(r1)
    lwz r4, 0x5c(r1)
lbl_fn_80221FA4_00000A04:
    lbz r0, 0xc(r1)
    add r7, r6, r4
    stb r0, 0x8(r1)
    addi r3, r1, 0xac
    addi r8, r1, 0x8
    li r4, 0x0
    bl fn_80013F78
lbl_fn_80221FA4_00000A20:
    lwz r0, 0x58(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_00000A34
    lwz r3, 0x60(r1)
    bl dtor_80084684
lbl_fn_80221FA4_00000A34:
    lwz r0, 0xac(r1)
    fmr f1, f31
    lfs f4, lbl_80883008
    fmr f2, f30
    srwi. r0, r0, 31
    lwz r3, lbl_8087EEB0
    fmr f5, f4
    lfs f3, lbl_80882FF4
    bne lbl_fn_80221FA4_00000A60
    addi r4, r1, 0xad
    b lbl_fn_80221FA4_00000A64
lbl_fn_80221FA4_00000A60:
    lwz r4, 0xb4(r1)
lbl_fn_80221FA4_00000A64:
    lfs f6, lbl_80882FF0
    li r5, -0x1
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r3, lbl_8087F0A8
    li r0, 0x2
    stw r0, 0x4(r3)
    lwz r0, 0xac(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80221FA4_00000A9C
    lwz r3, 0xb4(r1)
    bl dtor_80084684
lbl_fn_80221FA4_00000A9C:
    lwz r0, 0x104(r1)
    psq_l f31, 0xf8(r1), 0, 0
    lfd f31, 0xf0(r1)
    psq_l f30, 0xe8(r1), 0, 0
    lfd f30, 0xe0(r1)
    psq_l f29, 0xd8(r1), 0, 0
    lfd f29, 0xd0(r1)
    lwz r31, 0xcc(r1)
    lwz r30, 0xc8(r1)
    lwz r29, 0xc4(r1)
    mtlr r0
    addi r1, r1, 0x100
    blr
}

asm void fn_80222A24(void)
{
    nofralloc
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    bnelr
    la r3, lbl_8087EF00
    blr
}

asm void fn_80222A38(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    lwz r6, 0x1e7c(r4)
    stw r0, 0x24(r1)
    srwi. r0, r6, 31
    stw r31, 0x1c(r1)
    mr r31, r4
    stw r30, 0x18(r1)
    mr r30, r3
    bne lbl_fn_80222A38_00000B24
    lwz r5, 0x1e80(r4)
    lwz r0, 0x1e84(r4)
    stw r6, 0x0(r3)
    stw r5, 0x4(r3)
    stw r0, 0x8(r3)
    b lbl_fn_80222A38_00000B64
lbl_fn_80222A38_00000B24:
    li r0, 0x0
    stw r0, 0x0(r3)
    lwz r4, 0x1e80(r4)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    bl fn_80013DC4
    lbz r5, 0xc(r1)
    mr r3, r30
    stb r5, 0x8(r1)
    addi r8, r1, 0x8
    lwz r6, 0x1e84(r31)
    li r4, 0x0
    lwz r0, 0x1e80(r31)
    li r5, 0x0
    add r7, r6, r0
    bl fn_80013F78
lbl_fn_80222A38_00000B64:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_80222AD0(void)
{
    nofralloc
    stwu r1, -0x2a0(r1)
    mflr r0
    stw r0, 0x2a4(r1)
    addi r11, r1, 0x2a0
    bl _savegpr_25
    lwz r4, lbl_8087F540
    lis r0, 0x4330
    stw r0, 0x270(r1)
    mr r28, r3
    lwz r30, 0x70(r4)
    stw r0, 0x278(r1)
    cmpwi r30, 0x0
    beq lbl_fn_80222AD0_000015E0
    lwz r0, 0x1a38(r4)
    lis r4, lbl_807428F4@ha
    addi r4, r4, lbl_807428F4@l
    li r29, 0x1
    cmpwi r0, 0x0
    addi r26, r4, 0xc1
    beq lbl_fn_80222AD0_00000BE8
    cmpwi r0, 0x1
    beq lbl_fn_80222AD0_00000BF0
    cmpwi r0, 0x2
    beq lbl_fn_80222AD0_00000BF8
    cmpwi r0, 0x3
    beq lbl_fn_80222AD0_00000C00
    b lbl_fn_80222AD0_00000C04
lbl_fn_80222AD0_00000BE8:
    addi r26, r4, 0xc7
    b lbl_fn_80222AD0_00000C04
lbl_fn_80222AD0_00000BF0:
    addi r26, r4, 0xcc
    b lbl_fn_80222AD0_00000C04
lbl_fn_80222AD0_00000BF8:
    addi r26, r4, 0xd1
    b lbl_fn_80222AD0_00000C04
lbl_fn_80222AD0_00000C00:
    addi r26, r4, 0xd6
lbl_fn_80222AD0_00000C04:
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lis r27, lbl_807428E0@ha
    lwz r0, 0x288(r30)
    lfd f5, lbl_807428E0@l(r27)
    lis r31, lbl_807428F4@ha
    lfd f3, 0x270(r1)
    addi r31, r31, lbl_807428F4@l
    srawi r0, r0, 10
    lfs f4, 0xc(r3)
    fsubs f3, f3, f5
    lfs f0, 0x8(r3)
    lfs f1, 0x4(r3)
    fmr f5, f4
    lwz r3, lbl_8087EEB0
    addze r25, r0
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    lfs f6, lbl_80882FF0
    addi r4, r31, 0xdb
    li r5, -0x1
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    li r29, 0x3
    lfs f4, 0xc(r28)
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lfd f6, lbl_807428E0@l(r27)
    fmr f5, f4
    lfd f3, 0x278(r1)
    addi r4, r31, 0xe7
    lfs f0, 0x8(r28)
    li r5, -0x1
    fsubs f7, f3, f6
    lfs f1, 0x4(r28)
    li r6, 0x1
    lwz r3, lbl_8087EEB0
    li r7, 0x0
    fmadds f2, f4, f7, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    lfs f6, lbl_80882FF0
    li r29, 0x4
    bl fn_800616C0
    lwz r3, lbl_8087F540
    bl fn_804803A4
    cmpwi r3, 0x0
    addi r5, r31, 0xf6
    beq lbl_fn_80222AD0_00000CD4
    addi r5, r31, 0xf0
lbl_fn_80222AD0_00000CD4:
    lis r27, lbl_807428F4@ha
    mr r6, r26
    addi r27, r27, lbl_807428F4@l
    mr r7, r25
    addi r3, r1, 0x170
    addi r4, r27, 0x103
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lis r3, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r3)
    addi r4, r1, 0x170
    lfd f0, 0x270(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    li r29, 0x5
    bl fn_800616C0
    lwz r3, lbl_8087F540
    addi r5, r27, 0x122
    lwz r0, 0xc4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80222AD0_00000D60
    addi r5, r27, 0x120
lbl_fn_80222AD0_00000D60:
    lis r31, lbl_807428F4@ha
    lfs f1, 0xb4(r3)
    addi r31, r31, lbl_807428F4@l
    addi r3, r1, 0x170
    addi r4, r31, 0x124
    crset 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lis r27, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r27)
    addi r4, r1, 0x170
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    li r29, 0x6
    bl fn_800616C0
    lwz r5, lbl_8087F540
    addi r3, r1, 0x170
    addi r4, r31, 0x13e
    lwz r6, 0x1a3c(r5)
    lwz r5, 0x1a38(r5)
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lfs f4, 0xc(r28)
    addi r4, r1, 0x170
    lfd f3, lbl_807428E0@l(r27)
    li r5, -0x1
    lfd f0, 0x270(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r6, 0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    li r29, 0x7
    bl fn_800616C0
    lwz r5, lbl_8087F540
    addi r3, r1, 0x170
    addi r4, r31, 0x15f
    lwz r5, 0x1a74(r5)
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lfs f4, 0xc(r28)
    addi r4, r1, 0x170
    lfd f3, lbl_807428E0@l(r27)
    li r5, -0x1
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r6, 0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    bl fn_800616C0
    li r29, 0x9
    lfs f4, 0xc(r28)
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lfd f6, lbl_807428E0@l(r27)
    fmr f5, f4
    lfd f3, 0x270(r1)
    addi r4, r31, 0x16d
    lfs f0, 0x8(r28)
    li r5, -0x1
    fsubs f7, f3, f6
    lfs f1, 0x4(r28)
    li r6, 0x1
    lwz r3, lbl_8087EEB0
    li r7, 0x0
    fmadds f2, f4, f7, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    lfs f6, lbl_80882FF0
    li r29, 0xa
    bl fn_800616C0
    lwz r0, 0x194(r30)
    cmplwi r0, 0xe
    bgt lbl_fn_80222AD0_00000FCC
    lis r3, jumptable_80783750@ha
    slwi r0, r0, 2
    addi r3, r3, jumptable_80783750@l
    lwzx r3, r3, r0
    mtctr r3
    bctr
    lis r5, lbl_80783880@ha
    addi r5, r5, lbl_80783880@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783878@ha
    addi r5, r5, lbl_80783878@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_8078386C@ha
    addi r5, r5, lbl_8078386C@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783860@ha
    addi r5, r5, lbl_80783860@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783858@ha
    addi r5, r5, lbl_80783858@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_8078384C@ha
    addi r5, r5, lbl_8078384C@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783840@ha
    addi r5, r5, lbl_80783840@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783838@ha
    addi r5, r5, lbl_80783838@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783830@ha
    addi r5, r5, lbl_80783830@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783828@ha
    addi r5, r5, lbl_80783828@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783820@ha
    addi r5, r5, lbl_80783820@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783818@ha
    addi r5, r5, lbl_80783818@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783810@ha
    addi r5, r5, lbl_80783810@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_80783808@ha
    addi r5, r5, lbl_80783808@l
    b lbl_fn_80222AD0_00000FD0
    lis r5, lbl_807837FC@ha
    addi r5, r5, lbl_807837FC@l
    b lbl_fn_80222AD0_00000FD0
lbl_fn_80222AD0_00000FCC:
    li r5, 0x0
lbl_fn_80222AD0_00000FD0:
    lis r4, lbl_807428F4@ha
    lwz r6, 0x190(r30)
    addi r4, r4, lbl_807428F4@l
    addi r3, r1, 0x170
    addi r4, r4, 0x176
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lis r3, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r3)
    addi r4, r1, 0x170
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    li r29, 0xb
    bl fn_800616C0
    lwz r0, 0x50(r30)
    cmpwi r0, 0x1
    beq lbl_fn_80222AD0_00001060
    cmpwi r0, 0x2
    beq lbl_fn_80222AD0_0000106C
    cmpwi r0, 0x3
    beq lbl_fn_80222AD0_00001078
    b lbl_fn_80222AD0_00001084
lbl_fn_80222AD0_00001060:
    lis r27, lbl_807837F4@ha
    addi r27, r27, lbl_807837F4@l
    b lbl_fn_80222AD0_00001088
lbl_fn_80222AD0_0000106C:
    lis r27, lbl_807837E8@ha
    addi r27, r27, lbl_807837E8@l
    b lbl_fn_80222AD0_00001088
lbl_fn_80222AD0_00001078:
    lis r27, lbl_807837E0@ha
    addi r27, r27, lbl_807837E0@l
    b lbl_fn_80222AD0_00001088
lbl_fn_80222AD0_00001084:
    li r27, 0x0
lbl_fn_80222AD0_00001088:
    li r0, 0x0
    stw r0, 0x64(r1)
    mr r3, r27
    addi r31, r1, 0x64
    stw r0, 0x68(r1)
    stw r0, 0x6c(r1)
    bl strlen
    mr r26, r3
    mr r3, r31
    mr r4, r26
    bl fn_80013DC4
    lbz r0, 0xc(r1)
    mr r3, r31
    stb r0, 0x8(r1)
    mr r6, r27
    add r7, r27, r26
    addi r8, r1, 0x8
    li r4, 0x0
    li r5, 0x0
    bl fn_80013F78
    lwz r0, 0x58(r30)
    addi r3, r1, 0x70
    stw r0, 0x10(r1)
    stw r0, 0x14(r1)
    lbz r6, 0x13(r1)
    stw r0, 0x18(r1)
    lhz r5, 0x14(r1)
    lbz r4, 0x1a(r1)
    bl fn_8049D52C
    lwz r0, 0x64(r1)
    lwz r7, 0x54(r30)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80222AD0_00001124
    addi r6, r1, 0x65
    b lbl_fn_80222AD0_00001128
lbl_fn_80222AD0_00001124:
    lwz r6, 0x6c(r1)
lbl_fn_80222AD0_00001128:
    lwz r5, 0x4c(r30)
    cmpwi r5, 0x0
    beq lbl_fn_80222AD0_00001138
    b lbl_fn_80222AD0_0000113C
lbl_fn_80222AD0_00001138:
    la r5, lbl_8087EF00
lbl_fn_80222AD0_0000113C:
    lis r4, lbl_807428F4@ha
    addi r3, r1, 0x170
    addi r4, r4, lbl_807428F4@l
    addi r8, r1, 0x70
    addi r4, r4, 0x188
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lis r3, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r3)
    addi r4, r1, 0x170
    lfd f0, 0x270(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    li r29, 0xc
    bl fn_800616C0
    lwz r0, 0x68(r30)
    srwi r0, r0, 31
    cntlzw r0, r0
    srwi r0, r0, 5
    cntlzw r0, r0
    srwi. r0, r0, 5
    bne lbl_fn_80222AD0_000011D0
    addi r5, r30, 0x69
    b lbl_fn_80222AD0_000011D4
lbl_fn_80222AD0_000011D0:
    lwz r5, 0x70(r30)
lbl_fn_80222AD0_000011D4:
    lis r27, lbl_807428F4@ha
    addi r3, r1, 0x170
    addi r27, r27, lbl_807428F4@l
    addi r4, r27, 0x1b0
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lis r3, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r3)
    addi r4, r1, 0x170
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    li r29, 0xd
    bl fn_800616C0
    lwz r0, 0x98(r30)
    addi r7, r27, 0x122
    extrwi. r0, r0, 1, 4
    beq lbl_fn_80222AD0_00001254
    addi r7, r27, 0x120
lbl_fn_80222AD0_00001254:
    lwz r0, 0x98(r30)
    lis r3, lbl_807428F4@ha
    addi r3, r3, lbl_807428F4@l
    extrwi. r0, r0, 1, 3
    addi r6, r3, 0x122
    beq lbl_fn_80222AD0_00001270
    addi r6, r3, 0x120
lbl_fn_80222AD0_00001270:
    lis r31, lbl_807428F4@ha
    lwz r5, 0x94(r30)
    addi r31, r31, lbl_807428F4@l
    addi r3, r1, 0x170
    addi r4, r31, 0x1c1
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lis r27, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r27)
    addi r4, r1, 0x170
    lfd f0, 0x270(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    li r29, 0xe
    bl fn_800616C0
    lfs f3, 0xb4(r30)
    addi r3, r1, 0x170
    lfs f0, lbl_80883010
    addi r4, r31, 0x1ed
    lwz r5, 0xbc(r30)
    fmuls f1, f0, f3
    crset 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lfs f4, 0xc(r28)
    addi r4, r1, 0x170
    lfd f3, lbl_807428E0@l(r27)
    li r5, -0x1
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r6, 0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    li r29, 0xf
    bl fn_800616C0
    lfs f2, 0xa4(r30)
    addi r5, r1, 0x58
    psq_l f1, 0x9c(r30), 0, 0
    addi r6, r1, 0x4c
    addi r7, r1, 0x40
    psq_st f1, 0x0(r5), 0, 0
    frsp f3, f2
    addi r3, r1, 0x170
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r31, 0x20c
    psq_st f1, 0x0(r7), 0, 0
    lfs f1, 0x58(r1)
    stfs f2, 0x48(r1)
    stfs f2, 0x60(r1)
    stfs f2, 0x54(r1)
    lfs f2, 0x50(r1)
    crset 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lfs f4, 0xc(r28)
    addi r4, r1, 0x170
    lfd f3, lbl_807428E0@l(r27)
    li r5, -0x1
    lfd f0, 0x270(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r6, 0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    li r29, 0x10
    bl fn_800616C0
    lfs f2, 0xb0(r30)
    addi r5, r1, 0x34
    psq_l f1, 0xa8(r30), 0, 0
    addi r6, r1, 0x28
    addi r7, r1, 0x1c
    psq_st f1, 0x0(r5), 0, 0
    frsp f3, f2
    addi r3, r1, 0x170
    psq_st f1, 0x0(r6), 0, 0
    addi r4, r31, 0x227
    psq_st f1, 0x0(r7), 0, 0
    lfs f1, 0x34(r1)
    stfs f2, 0x24(r1)
    stfs f2, 0x3c(r1)
    stfs f2, 0x30(r1)
    lfs f2, 0x2c(r1)
    crset 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lfs f4, 0xc(r28)
    addi r4, r1, 0x170
    lfd f3, lbl_807428E0@l(r27)
    li r5, -0x1
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r6, 0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r8, 0x0
    li r29, 0x11
    bl fn_800616C0
    lfs f1, 0x198(r30)
    addi r3, r1, 0x170
    addi r4, r31, 0x242
    crset 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x274(r1)
    lfs f4, 0xc(r28)
    addi r4, r1, 0x170
    lfd f3, lbl_807428E0@l(r27)
    li r5, -0x1
    lfd f0, 0x270(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r6, 0x1
    fsubs f0, f0, f3
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80882FF4
    lfs f6, lbl_80882FF0
    li r7, 0x0
    fmadds f2, f4, f0, f1
    li r8, 0x0
    li r29, 0x12
    bl fn_800616C0
    lwz r9, 0x174(r30)
    addi r8, r31, 0x256
    lwz r6, 0x178(r30)
    lwz r4, 0x17c(r30)
    neg r7, r9
    lwz r0, 0x180(r30)
    neg r5, r6
    or r7, r7, r9
    neg r3, r4
    cmpwi r0, 0x0
    or r5, r5, r6
    or r0, r3, r4
    srwi r10, r7, 31
    srwi r4, r5, 31
    srwi r0, r0, 31
    beq lbl_fn_80222AD0_00001524
    addi r8, r31, 0x254
lbl_fn_80222AD0_00001524:
    lis r3, lbl_807428F4@ha
    cmpwi r0, 0x0
    addi r3, r3, lbl_807428F4@l
    addi r7, r3, 0x256
    beq lbl_fn_80222AD0_0000153C
    addi r7, r3, 0x254
lbl_fn_80222AD0_0000153C:
    lis r3, lbl_807428F4@ha
    cmpwi r4, 0x0
    addi r3, r3, lbl_807428F4@l
    addi r6, r3, 0x256
    beq lbl_fn_80222AD0_00001554
    addi r6, r3, 0x254
lbl_fn_80222AD0_00001554:
    lis r9, lbl_807428F4@ha
    cmpwi r10, 0x0
    addi r9, r9, lbl_807428F4@l
    addi r3, r1, 0x170
    addi r4, r9, 0x258
    addi r5, r9, 0x256
    beq lbl_fn_80222AD0_00001574
    addi r5, r9, 0x254
lbl_fn_80222AD0_00001574:
    crclr 6
    bl sprintf
    xoris r0, r29, 0x8000
    stw r0, 0x27c(r1)
    lis r3, lbl_807428E0@ha
    lfs f4, 0xc(r28)
    lfd f3, lbl_807428E0@l(r3)
    addi r4, r1, 0x170
    lfd f0, 0x278(r1)
    fmr f5, f4
    lfs f1, 0x4(r28)
    li r5, -0x1
    fsubs f3, f0, f3
    lfs f0, 0x8(r28)
    lwz r3, lbl_8087EEB0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    fmadds f2, f4, f3, f0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x64(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80222AD0_000015E0
    lwz r3, 0x6c(r1)
    bl dtor_80084684
lbl_fn_80222AD0_000015E0:
    addi r11, r1, 0x2a0
    bl _restgpr_25
    lwz r0, 0x2a4(r1)
    mtlr r0
    addi r1, r1, 0x2a0
    blr
}

asm void fn_8022354C(void)
{
    nofralloc
    stwu r1, -0x170(r1)
    mflr r0
    stw r0, 0x174(r1)
    addi r11, r1, 0x160
    stfd f31, 0x160(r1)
    psq_st f31, 0x168(r1), 0, 0
    bl _savegpr_19
    lwz r4, lbl_8087F540
    lis r0, 0x4330
    stw r0, 0x110(r1)
    mr r27, r3
    lwz r31, 0x70(r4)
    stw r0, 0x118(r1)
    cmpwi r31, 0x0
    beq lbl_fn_8022354C_0000195C
    li r30, 0x1
    lis r24, lbl_807428E0@ha
    xoris r0, r30, 0x8000
    stw r0, 0x114(r1)
    lfs f4, 0xc(r3)
    lis r25, lbl_807428F4@ha
    lfd f3, lbl_807428E0@l(r24)
    addi r25, r25, lbl_807428F4@l
    lfd f2, 0x110(r1)
    fmr f5, f4
    lfs f0, 0x8(r3)
    addi r4, r25, 0x275
    fsubs f2, f2, f3
    lfs f1, 0x4(r3)
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80882FF4
    li r5, -0x1
    fmadds f2, f4, f2, f0
    lfs f6, lbl_80882FF0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0xbc(r31)
    addi r3, r1, 0x10
    addi r4, r25, 0x27f
    crclr 6
    li r30, 0x3
    bl sprintf
    xoris r0, r30, 0x8000
    stw r0, 0x11c(r1)
    lfs f4, 0xc(r27)
    addi r4, r1, 0x10
    lfd f2, lbl_807428E0@l(r24)
    li r5, -0x1
    lfd f0, 0x118(r1)
    fmr f5, f4
    lfs f1, 0x4(r27)
    li r6, 0x1
    fsubs f2, f0, f2
    lfs f0, 0x8(r27)
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80882FF4
    li r7, 0x0
    fmadds f2, f4, f2, f0
    lfs f6, lbl_80882FF0
    li r8, 0x0
    li r30, 0x4
    bl fn_800616C0
    lis r3, 0x6666
    lwz r5, 0xbc(r31)
    addi r0, r3, 0x6667
    li r28, 0x0
    mulhw r0, r0, r5
    li r4, 0xa
    srawi r0, r0, 2
    srwi r3, r0, 31
    add r3, r0, r3
    addi r3, r3, 0x1
    subi r0, r3, 0x1
    mtctr r0
    cmpwi r3, 0x1
    ble lbl_fn_8022354C_00001748
lbl_fn_8022354C_00001730:
    lwz r0, 0x1a0(r31)
    cmpw r4, r0
    bgt lbl_fn_8022354C_00001740
    mr r28, r4
lbl_fn_8022354C_00001740:
    addi r4, r4, 0xa
    bdnz lbl_fn_8022354C_00001730
lbl_fn_8022354C_00001748:
    addi r29, r28, 0xa
    cmpw r29, r5
    blt lbl_fn_8022354C_00001758
    mr r29, r5
lbl_fn_8022354C_00001758:
    lis r4, lbl_807428E0@ha
    lis r3, lbl_807428F4@ha
    lfd f31, lbl_807428E0@l(r4)
    addi r24, r3, lbl_807428F4@l
    slwi r26, r28, 3
    b lbl_fn_8022354C_00001954
lbl_fn_8022354C_00001770:
    lwz r0, 0x1a0(r31)
    cmpw r28, r0
    bne lbl_fn_8022354C_000017D0
    addi r3, r1, 0x10
    addi r4, r24, 0x28b
    crclr 6
    bl sprintf
    xoris r0, r30, 0x8000
    stw r0, 0x114(r1)
    lfs f4, 0xc(r27)
    addi r4, r1, 0x10
    lfd f0, 0x110(r1)
    li r5, -0x1
    lfs f1, 0x4(r27)
    fmr f5, f4
    fsubs f0, f0, f31
    lwz r3, lbl_8087EEB0
    lfs f3, lbl_80882FF4
    li r6, 0x1
    lfs f6, lbl_80882FF0
    fmadds f2, f4, f0, f1
    li r7, 0x0
    li r8, 0x0
    bl fn_800616C0
lbl_fn_8022354C_000017D0:
    cmpwi r28, 0x0
    li r3, 0x0
    blt lbl_fn_8022354C_000017EC
    lwz r0, 0xbc(r31)
    cmpw r28, r0
    bge lbl_fn_8022354C_000017EC
    li r3, 0x1
lbl_fn_8022354C_000017EC:
    cmpwi r3, 0x0
    beq lbl_fn_8022354C_00001800
    lwz r3, 0xb8(r31)
    lwzx r23, r3, r26
    b lbl_fn_8022354C_00001804
lbl_fn_8022354C_00001800:
    li r23, 0x0
lbl_fn_8022354C_00001804:
    cmpwi r28, 0x9
    bge lbl_fn_8022354C_00001888
    lwz r3, 0xc(r23)
    addi r25, r24, 0x14
    lwz r0, 0x94(r31)
    cmpw r3, r0
    bne lbl_fn_8022354C_00001824
    addi r25, r24, 0x28d
lbl_fn_8022354C_00001824:
    lwz r4, 0x10(r23)
    mr r3, r23
    bl fn_8053C128
    lwz r19, 0x4(r23)
    mr r22, r3
    lwz r21, 0x2c(r23)
    cmpwi r19, 0x0
    beq lbl_fn_8022354C_00001848
    b lbl_fn_8022354C_0000184C
lbl_fn_8022354C_00001848:
    la r19, lbl_8087EF00
lbl_fn_8022354C_0000184C:
    lwz r20, 0xc(r23)
    mr r3, r23
    bl fn_8053B02C
    stw r25, 0x8(r1)
    mr r8, r3
    mr r5, r28
    mr r6, r20
    mr r7, r19
    mr r9, r21
    mr r10, r22
    addi r3, r1, 0x10
    addi r4, r24, 0x296
    crclr 6
    bl sprintf
    b lbl_fn_8022354C_00001900
lbl_fn_8022354C_00001888:
    lwz r3, 0xc(r23)
    addi r25, r24, 0x14
    lwz r0, 0x94(r31)
    cmpw r3, r0
    bne lbl_fn_8022354C_000018A0
    addi r25, r24, 0x28d
lbl_fn_8022354C_000018A0:
    lwz r4, 0x10(r23)
    mr r3, r23
    bl fn_8053C128
    lwz r19, 0x4(r23)
    mr r20, r3
    lwz r21, 0x2c(r23)
    cmpwi r19, 0x0
    beq lbl_fn_8022354C_000018C4
    b lbl_fn_8022354C_000018C8
lbl_fn_8022354C_000018C4:
    la r19, lbl_8087EF00
lbl_fn_8022354C_000018C8:
    lwz r22, 0xc(r23)
    mr r3, r23
    bl fn_8053B02C
    stw r25, 0x8(r1)
    mr r8, r3
    mr r5, r28
    mr r6, r22
    mr r7, r19
    mr r9, r21
    mr r10, r20
    addi r3, r1, 0x10
    addi r4, r24, 0x2cc
    crclr 6
    bl sprintf
lbl_fn_8022354C_00001900:
    xoris r0, r30, 0x8000
    stw r0, 0x11c(r1)
    lfs f4, 0xc(r27)
    addi r4, r1, 0x10
    lfd f1, 0x118(r1)
    li r5, -0x1
    lfs f0, 0x4(r27)
    fmr f5, f4
    fsubs f2, f1, f31
    lwz r3, lbl_8087EEB0
    fadds f1, f0, f4
    lfs f3, lbl_80882FF4
    lfs f6, lbl_80882FF0
    fmadds f2, f4, f2, f0
    li r6, 0x1
    li r7, 0x0
    li r8, 0x0
    addi r30, r30, 0x1
    bl fn_800616C0
    addi r28, r28, 0x1
    addi r26, r26, 0x8
lbl_fn_8022354C_00001954:
    cmpw r28, r29
    blt lbl_fn_8022354C_00001770
lbl_fn_8022354C_0000195C:
    addi r11, r1, 0x160
    psq_l f31, 0x168(r1), 0, 0
    lfd f31, 0x160(r1)
    bl _restgpr_19
    lwz r0, 0x174(r1)
    mtlr r0
    addi r1, r1, 0x170
    blr
}
