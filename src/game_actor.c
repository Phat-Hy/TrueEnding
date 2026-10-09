#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __files(void);
extern void _restgpr_20(void);
extern void _restgpr_24(void);
extern void _restgpr_25(void);
extern void _savegpr_20(void);
extern void _savegpr_24(void);
extern void _savegpr_25(void);
extern void dtor_80084684(void);
extern void fn_80017128(void);
extern void fn_8001794C(void);
extern void fn_80018834(void);
extern void fn_8001C1B4(void);
extern void fn_8001C1B8(void);
extern void fn_8001C1BC(void);
extern void fn_8003E918(void);
extern void fn_80060D58(void);
extern void fn_800616C0(void);
extern void fn_80062C8C(void);
extern void fn_80063200(void);
extern void fn_80063484(void);
extern void fn_800638B0(void);
extern void fn_8007708C(void);
extern void fn_80084320(void);
extern void fn_800844D8(void);
extern void fn_800846FC(void);
extern void fn_80084C24(void);
extern void fn_800874C8(void);
extern void fn_80087994(void);
extern void fn_8008937C(void);
extern void fn_800897D8(void);
extern void fn_800D1D3C(void);
extern void fn_800D1E9C(void);
extern void fn_800D246C(void);
extern void fn_800D3FA4(void);
extern void fn_80102890(void);
extern void fn_801083D8(void);
extern void fn_8011F8BC(void);
extern void fn_8011FBD8(void);
extern void fn_8011FE04(void);
extern void fn_8012DB04(void);
extern void fn_8016F3D0(void);
extern void fn_8017C904(void);
extern void fn_8035B854(void);
extern void fn_8036554C(void);
extern void fn_803C11A4(void);
extern void fn_803C1884(void);
extern void fn_80473E74(void);
extern void fn_80473E8C(void);
extern void fn_80547E48(void);
extern void fn_8054A690(void);
extern void fn_805B3518(void);
extern void fn_805B3658(void);
extern void fn_80680770(void);
extern void fn_80680CF8(void);
extern void fn_80686EA4(void);
extern void fn_806958E0(void);
extern void fn_806959D8(void);
extern void memmove(void);
extern int sprintf(char* str, const char* format, ...);

/* External data declarations */
extern u8 lbl_8072F924[];
extern u8 lbl_8072FA00[];
extern u8 lbl_8072FC70[];
extern u8 lbl_8072FD8C[];
extern u8 lbl_80775AC0[];
extern u8 lbl_80775AE0[];
extern u8 lbl_80775B18[];
extern u8 lbl_8078FBB0[];

/* Small data declarations */
extern u32 lbl_8087D6C8;
extern u32 lbl_8087D6C9;
extern u32 lbl_8087D6E8;
extern u32 lbl_8087D6EC;
extern u32 lbl_8087EE60;
extern u32 lbl_8087EE64;
extern u32 lbl_8087EE68;
extern u32 lbl_8087EEB0;
extern u32 lbl_8087EEF0;
extern u32 lbl_8087EF10;
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F048;
extern u32 lbl_8087F0A8;
extern u32 lbl_8087F408;
extern u32 lbl_8087F428;
extern u32 lbl_8087F430;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_8087FA00;
extern u32 lbl_808806A0;
extern u32 lbl_808806A4;
extern u32 lbl_808806A8;
extern u32 lbl_808806AC;
extern u32 lbl_808806B0;
extern u32 lbl_808806B8;
extern u32 lbl_808806BC;
extern u32 lbl_808806C0;
extern u32 lbl_808806C4;
extern u32 lbl_808806C8;
extern u32 lbl_808806CC;
extern u32 lbl_808806D0;
extern u32 lbl_808806D4;
extern u32 lbl_808806D8;
extern u32 lbl_808806DC;
extern u32 lbl_808806E0;
extern u32 lbl_808806E4;
extern u32 lbl_808806E8;
extern u32 lbl_808806EC;
extern u32 lbl_808806F0;
extern u32 lbl_808806F4;
extern u32 lbl_808806F8;
extern u32 lbl_808806FC;
extern u32 lbl_80880700;
extern u32 lbl_80880704;
extern u32 lbl_80880708;
extern u32 lbl_8088070C;
extern u32 lbl_80880710;
extern u32 lbl_80880714;
extern u32 lbl_80880718;
extern u32 lbl_8088071C;
extern u32 lbl_80880720;
extern u32 lbl_80880724;
extern u32 lbl_80880728;

/* Function declarations */
void dtor_80013D60(void);
void fn_80013DC4(void);
void fn_80013F78(void);
void dtor_80014250(void);
void fn_800142C4(void);
void fn_800142CC(void);
void fn_800142D4(void);
void fn_800143E8(void);
void fn_800144FC(void);
void fn_80014564(void);
void fn_80014798(void);
void fn_800147F0(void);
void fn_8001482C(void);
void fn_8001486C(void);
void fn_80014998(void);
void fn_800149E4(void);
void fn_80014A5C(void);
void fn_80016888(void);
void fn_80016A94(void);
void fn_80016C10(void);
void fn_80016F48(void);
void fn_80016FB4(void);
void fn_80017060(void);
void fn_80017064(void);

asm void dtor_80013D60(void)
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
    beq lbl_dtor_80013D60_00000048
    lwz r0, 0x0(r3)
    srwi. r0, r0, 31
    beq lbl_dtor_80013D60_00000038
    lwz r3, 0x8(r3)
    bl dtor_80084684
lbl_dtor_80013D60_00000038:
    cmpwi r31, 0x0
    ble lbl_dtor_80013D60_00000048
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80013D60_00000048:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80013DC4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    lis r5, 0x8000
    stw r0, 0x34(r1)
    subi r0, r5, 0x2
    cmplw r4, r0
    stmw r25, 0x14(r1)
    mr r31, r3
    mr r25, r4
    ble lbl_fn_80013DC4_000000B0
    lis r4, lbl_8072F924@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, __files@l
    addi r4, r4, 0x82
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013DC4_000000B0:
    lwz r0, 0x0(r31)
    srwi. r29, r0, 31
    bne lbl_fn_80013DC4_000000CC
    lbz r0, 0x0(r31)
    li r3, 0xb
    clrlwi r28, r0, 25
    b lbl_fn_80013DC4_000000D4
lbl_fn_80013DC4_000000CC:
    lwz r28, 0x4(r31)
    clrlwi r3, r0, 1
lbl_fn_80013DC4_000000D4:
    cmplw r25, r28
    bge lbl_fn_80013DC4_000000E0
    mr r25, r28
lbl_fn_80013DC4_000000E0:
    addi r0, r25, 0x1
    li r30, 0xb
    cmplwi r0, 0xb
    ble lbl_fn_80013DC4_000000F8
    addi r0, r25, 0x10
    clrrwi r30, r0, 4
lbl_fn_80013DC4_000000F8:
    cmplw cr1, r30, r3
    beq cr1, lbl_fn_80013DC4_00000204
    cmplwi r30, 0xb
    bne lbl_fn_80013DC4_00000118
    lwz r26, 0x8(r31)
    addi r27, r31, 0x1
    li r25, 0x0
    b lbl_fn_80013DC4_000001A8
lbl_fn_80013DC4_00000118:
    ble cr1, lbl_fn_80013DC4_00000154
    mr r3, r30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80013DC4_00000190
    lis r3, __files@ha
    lis r4, lbl_80775AC0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AC0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
    b lbl_fn_80013DC4_00000190
lbl_fn_80013DC4_00000154:
    mr r3, r30
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r27, r3
    bne lbl_fn_80013DC4_00000188
    lis r3, __files@ha
    lis r4, lbl_80775AC0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AC0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013DC4_00000188:
    cmpwi r27, 0x0
    beq lbl_fn_80013DC4_00000204
lbl_fn_80013DC4_00000190:
    cmpwi r29, 0x0
    li r25, 0x1
    beq lbl_fn_80013DC4_000001A4
    lwz r26, 0x8(r31)
    b lbl_fn_80013DC4_000001A8
lbl_fn_80013DC4_000001A4:
    addi r26, r31, 0x1
lbl_fn_80013DC4_000001A8:
    mr r3, r27
    mr r4, r26
    mr r5, r28
    bl memmove
    cmpwi r29, 0x0
    li r0, 0x0
    stbx r0, r27, r28
    beq lbl_fn_80013DC4_000001D0
    mr r3, r26
    bl dtor_80084684
lbl_fn_80013DC4_000001D0:
    lwz r0, 0x0(r31)
    cmpwi r25, 0x0
    rlwimi r0, r25, 31, 0, 0
    stw r0, 0x0(r31)
    bne lbl_fn_80013DC4_000001F4
    lbz r0, 0x0(r31)
    rlwimi r0, r28, 0, 25, 31
    stb r0, 0x0(r31)
    b lbl_fn_80013DC4_00000204
lbl_fn_80013DC4_000001F4:
    rlwimi r0, r30, 0, 1, 31
    stw r27, 0x8(r31)
    stw r28, 0x4(r31)
    stw r0, 0x0(r31)
lbl_fn_80013DC4_00000204:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80013F78(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    stmw r19, 0x2c(r1)
    mr r20, r3
    mr r21, r4
    mr r22, r6
    mr r23, r7
    stw r5, 0x8(r1)
    lwz r0, 0x0(r3)
    srwi. r31, r0, 31
    bne lbl_fn_80013F78_0000025C
    lbz r0, 0x0(r3)
    addi r29, r3, 0x1
    li r27, 0xb
    clrlwi r28, r0, 25
    b lbl_fn_80013F78_00000268
lbl_fn_80013F78_0000025C:
    lwz r29, 0x8(r3)
    clrlwi r27, r0, 1
    lwz r28, 0x4(r3)
lbl_fn_80013F78_00000268:
    cmplw r4, r28
    ble lbl_fn_80013F78_00000294
    lis r4, lbl_8072F924@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, __files@l
    addi r4, r4, 0xa5
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013F78_00000294:
    lwz r0, 0x8(r1)
    subf r3, r21, r28
    stw r3, 0x14(r1)
    addi r4, r1, 0x8
    cmplw r3, r0
    bge lbl_fn_80013F78_000002B0
    addi r4, r1, 0x14
lbl_fn_80013F78_000002B0:
    lis r3, 0x8000
    subf r25, r22, r23
    subi r0, r3, 0x2
    lwz r26, 0x0(r4)
    cmplw r25, r0
    bgt lbl_fn_80013F78_000002D8
    subf r30, r26, r28
    subf r0, r25, r0
    cmplw r30, r0
    ble lbl_fn_80013F78_000002FC
lbl_fn_80013F78_000002D8:
    lis r4, lbl_8072F924@ha
    lis r3, __files@ha
    addi r4, r4, lbl_8072F924@l
    addi r3, r3, __files@l
    addi r4, r4, 0xc0
    addi r3, r3, 0xa0
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013F78_000002FC:
    add r30, r25, r30
    add r0, r21, r26
    cmplw r30, r27
    subf r24, r0, r28
    blt lbl_fn_80013F78_000003F0
    addi r3, r27, 0xf
    addi r0, r30, 0x1
    clrrwi r27, r3, 4
    b lbl_fn_80013F78_0000032C
lbl_fn_80013F78_00000320:
    slwi r3, r27, 1
    addi r3, r3, 0xf
    clrrwi r27, r3, 4
lbl_fn_80013F78_0000032C:
    cmplw r27, r0
    blt lbl_fn_80013F78_00000320
    mr r3, r27
    bl fn_800844D8
    cmpwi r3, 0x0
    mr r28, r3
    bne lbl_fn_80013F78_00000368
    lis r3, __files@ha
    lis r4, lbl_80775AC0@ha
    addi r3, r3, __files@l
    addi r3, r3, 0xa0
    addi r4, r4, lbl_80775AC0@l
    crclr 6
    bl fn_80680770
    bl fn_80686EA4
lbl_fn_80013F78_00000368:
    cmpwi r21, 0x0
    beq lbl_fn_80013F78_00000380
    mr r3, r28
    mr r4, r29
    mr r5, r21
    bl memcpy
lbl_fn_80013F78_00000380:
    add r19, r28, r21
    mr r4, r22
    mr r3, r19
    subf r5, r22, r23
    bl memmove
    cmpwi r24, 0x0
    beq lbl_fn_80013F78_000003B0
    add r0, r29, r21
    mr r5, r24
    add r3, r19, r25
    add r4, r26, r0
    bl memcpy
lbl_fn_80013F78_000003B0:
    lbz r0, lbl_8087D6C8
    cmpwi r31, 0x0
    stbx r0, r28, r30
    beq lbl_fn_80013F78_000003CC
    mr r3, r29
    bl dtor_80084684
    b lbl_fn_80013F78_000003D8
lbl_fn_80013F78_000003CC:
    lwz r0, 0x0(r20)
    oris r0, r0, 0x8000
    stw r0, 0x0(r20)
lbl_fn_80013F78_000003D8:
    lwz r0, 0x0(r20)
    rlwimi r0, r27, 0, 1, 31
    stw r28, 0x8(r20)
    stw r30, 0x4(r20)
    stw r0, 0x0(r20)
    b lbl_fn_80013F78_000004D8
lbl_fn_80013F78_000003F0:
    cmpwi r24, 0x0
    li r3, 0x0
    stw r3, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x20(r1)
    beq lbl_fn_80013F78_00000474
    add r0, r29, r21
    add r0, r25, r0
    cmplw r0, r23
    bge lbl_fn_80013F78_00000474
    add r0, r29, r28
    cmplw r23, r0
    bgt lbl_fn_80013F78_00000474
    cmpwi r3, 0x0
    bne lbl_fn_80013F78_00000438
    lbz r0, 0x18(r1)
    clrlwi r5, r0, 25
    b lbl_fn_80013F78_0000043C
lbl_fn_80013F78_00000438:
    li r5, 0x0
lbl_fn_80013F78_0000043C:
    lbz r0, 0xc(r1)
    mr r6, r22
    stb r0, 0x10(r1)
    mr r7, r23
    addi r3, r1, 0x18
    addi r8, r1, 0x10
    li r4, 0x0
    bl fn_80013F78
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80013F78_00000470
    lwz r22, 0x20(r1)
    b lbl_fn_80013F78_00000474
lbl_fn_80013F78_00000470:
    addi r22, r1, 0x19
lbl_fn_80013F78_00000474:
    cmpwi r24, 0x0
    beq lbl_fn_80013F78_00000490
    add r0, r29, r21
    mr r5, r24
    add r3, r0, r25
    add r4, r0, r26
    bl memmove
lbl_fn_80013F78_00000490:
    mr r4, r22
    mr r5, r25
    add r3, r29, r21
    bl memmove
    lbz r0, lbl_8087D6C9
    cmpwi r31, 0x0
    stbx r0, r29, r30
    bne lbl_fn_80013F78_000004C0
    lbz r0, 0x0(r20)
    rlwimi r0, r30, 0, 25, 31
    stb r0, 0x0(r20)
    b lbl_fn_80013F78_000004C4
lbl_fn_80013F78_000004C0:
    stw r30, 0x4(r20)
lbl_fn_80013F78_000004C4:
    lwz r0, 0x18(r1)
    srwi. r0, r0, 31
    beq lbl_fn_80013F78_000004D8
    lwz r3, 0x20(r1)
    bl dtor_80084684
lbl_fn_80013F78_000004D8:
    mr r3, r20
    lmw r19, 0x2c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void dtor_80014250(void)
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
    beq lbl_dtor_80014250_00000548
    li r4, 0x0
    stw r4, 0x4(r3)
    beq lbl_dtor_80014250_00000538
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_dtor_80014250_00000538
    stw r4, 0x4(r3)
    mr r3, r0
    bl dtor_80084684
lbl_dtor_80014250_00000538:
    cmpwi r31, 0x0
    ble lbl_dtor_80014250_00000548
    mr r3, r30
    bl dtor_80084684
lbl_dtor_80014250_00000548:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800142C4(void)
{
    nofralloc
    stw r3, lbl_8087EE60
    blr
}

asm void fn_800142CC(void)
{
    nofralloc
    stw r3, lbl_8087EE64
    blr
}

asm void fn_800142D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x7e8(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800142D4_000005A8
    lwz r4, lbl_8087F0A8
    lwz r31, 0xa4(r4)
lbl_fn_800142D4_000005A8:
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    lfs f0, lbl_808806A0
    fcmpo cr0, f0, f1
    bge lbl_fn_800142D4_0000066C
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f0, lbl_808806A4
    fcmpo cr0, f1, f0
    bge lbl_fn_800142D4_0000066C
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f0, lbl_808806A8
    lfs f2, lbl_808806A4
    fadds f1, f0, f1
    lfs f0, lbl_808806A0
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_800142D4_0000060C
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f2, lbl_808806A8
    lfs f0, lbl_808806A4
    fadds f1, f2, f1
    fsubs f0, f0, f1
lbl_fn_800142D4_0000060C:
    lfs f2, lbl_808806A4
    fcmpo cr0, f0, f2
    bge lbl_fn_800142D4_00000654
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f2, lbl_808806A8
    lfs f0, lbl_808806A4
    fadds f1, f2, f1
    lfs f2, lbl_808806A0
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    ble lbl_fn_800142D4_00000654
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f2, lbl_808806A8
    lfs f0, lbl_808806A4
    fadds f1, f2, f1
    fsubs f2, f0, f1
lbl_fn_800142D4_00000654:
    lfs f0, lbl_808806AC
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r31, r31, r0
lbl_fn_800142D4_0000066C:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800143E8(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    li r31, 0x0
    stw r30, 0x18(r1)
    mr r30, r3
    lwz r0, 0x7e8(r3)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    bne lbl_fn_800143E8_000006BC
    lwz r4, lbl_8087F0A8
    lwz r31, 0xa4(r4)
lbl_fn_800143E8_000006BC:
    addi r3, r3, 0x7d4
    bl fn_8012DB04
    lfs f0, lbl_808806A0
    fcmpo cr0, f0, f1
    bge lbl_fn_800143E8_00000780
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f0, lbl_808806A4
    fcmpo cr0, f1, f0
    bge lbl_fn_800143E8_00000780
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f0, lbl_808806A8
    lfs f2, lbl_808806A4
    fadds f1, f0, f1
    lfs f0, lbl_808806A0
    fsubs f1, f2, f1
    fcmpo cr0, f1, f0
    ble lbl_fn_800143E8_00000720
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f2, lbl_808806A8
    lfs f0, lbl_808806A4
    fadds f1, f2, f1
    fsubs f0, f0, f1
lbl_fn_800143E8_00000720:
    lfs f2, lbl_808806A4
    fcmpo cr0, f0, f2
    bge lbl_fn_800143E8_00000768
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f2, lbl_808806A8
    lfs f0, lbl_808806A4
    fadds f1, f2, f1
    lfs f2, lbl_808806A0
    fsubs f0, f0, f1
    fcmpo cr0, f0, f2
    ble lbl_fn_800143E8_00000768
    addi r3, r30, 0x7d4
    bl fn_8012DB04
    lfs f2, lbl_808806A8
    lfs f0, lbl_808806A4
    fadds f1, f2, f1
    fsubs f2, f0, f1
lbl_fn_800143E8_00000768:
    lfs f0, lbl_808806B0
    fmuls f0, f0, f2
    fctiwz f0, f0
    stfd f0, 0x8(r1)
    lwz r0, 0xc(r1)
    add r31, r31, r0
lbl_fn_800143E8_00000780:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_800144FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r0, lbl_8087EE68
    cmpwi r0, 0x0
    bne lbl_fn_800144FC_000007EC
    lis r5, lbl_8072FD8C@ha
    li r3, 0x7e0
    addi r5, r5, lbl_8072FD8C@l
    li r4, 0x3
    mr r6, r5
    li r7, 0x0
    bl fn_80084320
    cmpwi r3, 0x0
    beq lbl_fn_800144FC_000007E8
    mr r4, r31
    bl fn_80014564
lbl_fn_800144FC_000007E8:
    stw r3, lbl_8087EE68
lbl_fn_800144FC_000007EC:
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    lwz r3, lbl_8087EE68
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80014564(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    mr r31, r3
    bl fn_800D1D3C
    lis r3, lbl_80775AE0@ha
    li r26, 0x0
    addi r3, r3, lbl_80775AE0@l
    addi r27, r31, 0x5c
    stw r3, 0x0(r31)
    mr r3, r27
    stw r26, 0x48(r31)
    stw r26, 0x4c(r31)
    stw r26, 0x50(r31)
    stw r26, 0x54(r31)
    stw r26, 0x58(r31)
    bl fn_80473E74
    lis r30, lbl_8078FBB0@ha
    addi r25, r31, 0x64
    addi r30, r30, lbl_8078FBB0@l
    stw r30, 0x0(r27)
    mr r3, r25
    bl fn_80473E74
    lfs f0, lbl_808806B8
    li r27, 0x1
    lis r28, fn_800147F0@ha
    lis r29, fn_8001482C@ha
    stw r30, 0x0(r25)
    addi r3, r31, 0xe4
    addi r4, r28, fn_800147F0@l
    addi r5, r29, fn_8001482C@l
    stw r26, 0x6c(r31)
    li r6, 0x34
    li r7, 0x10
    stw r26, 0x70(r31)
    stw r26, 0x74(r31)
    stw r26, 0x78(r31)
    stw r26, 0x7c(r31)
    stw r26, 0x80(r31)
    stw r26, 0x84(r31)
    stw r26, 0x88(r31)
    stw r26, 0x8c(r31)
    stw r26, 0x90(r31)
    stfs f0, 0x94(r31)
    stw r27, 0x98(r31)
    stw r26, 0xdc(r31)
    stw r26, 0xe0(r31)
    bl fn_806958E0
    lis r30, lbl_80775B18@ha
    addi r3, r31, 0x424
    addi r30, r30, lbl_80775B18@l
    stw r30, 0x424(r31)
    bl fn_8003E918
    stw r30, 0x458(r31)
    addi r3, r31, 0x458
    bl fn_8003E918
    stw r26, 0x48c(r31)
    addi r3, r31, 0x490
    addi r4, r28, fn_800147F0@l
    addi r5, r29, fn_8001482C@l
    li r6, 0x34
    li r7, 0x10
    bl fn_806958E0
    li r3, -0x1
    li r0, 0x1c2
    stw r3, 0x7d0(r31)
    stw r0, 0x7d4(r31)
    stw r27, 0x7d8(r31)
    stw r26, 0x7dc(r31)
    bl fn_8001C1B4
    lwz r0, 0x7dc(r31)
    lis r3, lbl_8072FD8C@ha
    addi r3, r3, lbl_8072FD8C@l
    cmpwi r0, 0x0
    addi r4, r3, 0x1
    bne lbl_fn_80014564_0000095C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80014564_0000095C
    addi r3, r3, 0x10
    bl fn_8008937C
    stw r3, 0x7dc(r31)
    mr r25, r3
    b lbl_fn_80014564_00000960
lbl_fn_80014564_0000095C:
    li r25, 0x0
lbl_fn_80014564_00000960:
    lis r30, lbl_8072FD8C@ha
    mr r3, r25
    addi r30, r30, lbl_8072FD8C@l
    addi r5, r31, 0x50
    addi r4, r30, 0xb
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x15
    addi r5, r31, 0x54
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    mr r3, r25
    addi r4, r30, 0x1e
    bl fn_8008937C
    mr r25, r3
    addi r4, r30, 0x25
    addi r5, r31, 0x7d0
    li r6, -0x1
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x37
    addi r5, r31, 0x7d4
    li r6, -0x1
    li r7, 0x270f
    li r8, 0x1
    li r9, 0x0
    li r10, 0x0
    bl fn_800874C8
    mr r3, r25
    addi r4, r30, 0x4a
    addi r5, r31, 0x7d8
    li r6, 0x0
    li r7, 0x0
    bl fn_80087994
    addi r3, r31, 0x9c
    li r4, 0x0
    li r5, 0x40
    bl memset
    mr r3, r31
    bl fn_805B3518
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_80014798(void)
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
    beq lbl_fn_80014798_00000A74
    li r4, 0x0
    bl fn_80473E8C
    cmpwi r31, 0x0
    ble lbl_fn_80014798_00000A74
    mr r3, r30
    bl dtor_80084684
lbl_fn_80014798_00000A74:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800147F0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    lis r4, lbl_80775B18@ha
    stw r0, 0x14(r1)
    addi r4, r4, lbl_80775B18@l
    stw r31, 0xc(r1)
    mr r31, r3
    stw r4, 0x0(r3)
    bl fn_8003E918
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001482C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    beq lbl_fn_8001482C_00000AF4
    cmpwi r4, 0x0
    ble lbl_fn_8001482C_00000AF4
    bl dtor_80084684
lbl_fn_8001482C_00000AF4:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8001486C(void)
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
    beq lbl_fn_8001486C_00000C1C
    lis r4, lbl_80775AE0@ha
    li r0, 0x0
    addi r4, r4, lbl_80775AE0@l
    stw r4, 0x0(r3)
    stw r0, lbl_8087EE68
    bl fn_8001C1B8
    addic. r0, r30, 0x7dc
    beq lbl_fn_8001486C_00000B6C
    lwz r4, 0x7dc(r30)
    cmpwi r4, 0x0
    beq lbl_fn_8001486C_00000B6C
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_8001486C_00000B6C
    bl fn_800897D8
lbl_fn_8001486C_00000B6C:
    addic. r3, r30, 0x48c
    beq lbl_fn_8001486C_00000B90
    beq lbl_fn_8001486C_00000B90
    lis r4, fn_8001482C@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_8001482C@l
    li r5, 0x34
    li r6, 0x10
    bl fn_806959D8
lbl_fn_8001486C_00000B90:
    addic. r3, r30, 0xe0
    beq lbl_fn_8001486C_00000BB4
    beq lbl_fn_8001486C_00000BB4
    lis r4, fn_8001482C@ha
    addi r3, r3, 0x4
    addi r4, r4, fn_8001482C@l
    li r5, 0x34
    li r6, 0x10
    bl fn_806959D8
lbl_fn_8001486C_00000BB4:
    addic. r4, r30, 0x6c
    beq lbl_fn_8001486C_00000BE0
    beq lbl_fn_8001486C_00000BE0
    beq lbl_fn_8001486C_00000BE0
    lwz r3, 0x0(r4)
    cmpwi r3, 0x0
    beq lbl_fn_8001486C_00000BE0
    lwz r0, 0x4(r4)
    subf r0, r0, r0
    stw r0, 0x4(r4)
    bl dtor_80084684
lbl_fn_8001486C_00000BE0:
    addic. r3, r30, 0x64
    beq lbl_fn_8001486C_00000BF0
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8001486C_00000BF0:
    addic. r3, r30, 0x5c
    beq lbl_fn_8001486C_00000C00
    li r4, 0x0
    bl fn_80473E8C
lbl_fn_8001486C_00000C00:
    mr r3, r30
    li r4, 0x0
    bl fn_800D1E9C
    cmpwi r31, 0x0
    ble lbl_fn_8001486C_00000C1C
    mr r3, r30
    bl dtor_80084684
lbl_fn_8001486C_00000C1C:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80014998(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    bl fn_800D3FA4
    cmpwi r3, 0x0
    bne lbl_fn_80014998_00000C60
    li r3, 0x0
    b lbl_fn_80014998_00000C70
lbl_fn_80014998_00000C60:
    mr r3, r31
    li r4, 0x1
    bl fn_800D246C
    li r3, 0x1
lbl_fn_80014998_00000C70:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_800149E4(void)
{
    nofralloc
    lwz r4, lbl_8087EFA8
    li r0, 0x0
    lfs f0, 0x94(r3)
    lfs f2, 0x3a4(r4)
    lfs f1, lbl_808806BC
    fadds f0, f0, f2
    stw r0, 0x98(r3)
    stfs f0, 0x94(r3)
    b lbl_fn_800149E4_00000CC0
lbl_fn_800149E4_00000CA8:
    lfs f0, 0x94(r3)
    lwz r4, 0x98(r3)
    fsubs f0, f0, f1
    addi r0, r4, 0x1
    stw r0, 0x98(r3)
    stfs f0, 0x94(r3)
lbl_fn_800149E4_00000CC0:
    lfs f0, 0x94(r3)
    fcmpo cr0, f0, f1
    cror eq, gt, eq
    beq lbl_fn_800149E4_00000CA8
    lwz r4, 0x90(r3)
    li r0, 0x12c
    stw r0, 0xdc(r3)
    addi r4, r4, 0x1
    slwi r0, r4, 30
    srwi r4, r4, 31
    subf r0, r4, r0
    rotlwi r0, r0, 2
    add r0, r0, r4
    stw r0, 0x90(r3)
    b fn_80018834
}

asm void fn_80014A5C(void)
{
    nofralloc
    stwu r1, -0x340(r1)
    mflr r0
    stw r0, 0x344(r1)
    addi r11, r1, 0x280
    stfd f31, 0x330(r1)
    psq_st f31, 0x338(r1), 0, 0
    stfd f30, 0x320(r1)
    psq_st f30, 0x328(r1), 0, 0
    stfd f29, 0x310(r1)
    psq_st f29, 0x318(r1), 0, 0
    stfd f28, 0x300(r1)
    psq_st f28, 0x308(r1), 0, 0
    stfd f27, 0x2f0(r1)
    psq_st f27, 0x2f8(r1), 0, 0
    stfd f26, 0x2e0(r1)
    psq_st f26, 0x2e8(r1), 0, 0
    stfd f25, 0x2d0(r1)
    psq_st f25, 0x2d8(r1), 0, 0
    stfd f24, 0x2c0(r1)
    psq_st f24, 0x2c8(r1), 0, 0
    stfd f23, 0x2b0(r1)
    psq_st f23, 0x2b8(r1), 0, 0
    stfd f22, 0x2a0(r1)
    psq_st f22, 0x2a8(r1), 0, 0
    stfd f21, 0x290(r1)
    psq_st f21, 0x298(r1), 0, 0
    stfd f20, 0x280(r1)
    psq_st f20, 0x288(r1), 0, 0
    bl _savegpr_20
    lwz r0, 0x50(r3)
    lis r30, lbl_8072FA00@ha
    mr r22, r3
    cmpwi r0, 0x0
    addi r30, r30, lbl_8072FA00@l
    beq lbl_fn_80014A5C_000011E8
    lwz r3, lbl_8087EF10
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000DA0
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000DA0:
    lwz r3, lbl_8087EEF0
    li r21, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000DD4
    lis r4, 0x1
    subi r0, r4, 0xe48
    addi r4, r3, 0x34
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000DD4
    li r21, 0x1
lbl_fn_80014A5C_00000DD4:
    cmpwi r21, 0x0
    bne lbl_fn_80014A5C_00000E18
    lwz r3, lbl_8087EEF0
    li r21, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000E10
    lis r4, 0x1
    subi r0, r4, 0xe4e
    addi r4, r3, 0x34
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000E10
    li r21, 0x1
lbl_fn_80014A5C_00000E10:
    cmpwi r21, 0x0
    beq lbl_fn_80014A5C_00000ECC
lbl_fn_80014A5C_00000E18:
    lwz r3, lbl_8087EEF0
    li r21, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000E4C
    lis r4, 0x1
    subi r0, r4, 0xe48
    addi r4, r3, 0x34
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000E4C
    li r21, 0x1
lbl_fn_80014A5C_00000E4C:
    cmpwi r21, 0x0
    beq lbl_fn_80014A5C_00000E70
    lwz r3, 0x78(r22)
    subic. r0, r3, 0x1
    stw r0, 0x78(r22)
    bge lbl_fn_80014A5C_000011E8
    li r0, 0x4
    stw r0, 0x78(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000E70:
    lwz r3, lbl_8087EEF0
    li r21, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000EA4
    lis r4, 0x1
    subi r0, r4, 0xe4e
    addi r4, r3, 0x34
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000EA4
    li r21, 0x1
lbl_fn_80014A5C_00000EA4:
    cmpwi r21, 0x0
    beq lbl_fn_80014A5C_000011E8
    lwz r3, 0x78(r22)
    addi r0, r3, 0x1
    stw r0, 0x78(r22)
    cmpwi r0, 0x5
    blt lbl_fn_80014A5C_000011E8
    li r0, 0x0
    stw r0, 0x78(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000ECC:
    lwz r3, lbl_8087EEF0
    li r21, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000F00
    lis r4, 0x1
    subi r0, r4, 0xe4c
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000F00
    li r21, 0x1
lbl_fn_80014A5C_00000F00:
    cmpwi r21, 0x0
    beq lbl_fn_80014A5C_00001070
    lwz r0, 0x78(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000F30
    cmpwi r0, 0x1
    beq lbl_fn_80014A5C_00000F94
    cmpwi r0, 0x2
    beq lbl_fn_80014A5C_00000FCC
    cmpwi r0, 0x4
    beq lbl_fn_80014A5C_00001004
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000F30:
    lwz r3, 0x88(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    bl fn_80547E48
    b lbl_fn_80014A5C_00000F48
lbl_fn_80014A5C_00000F44:
    bl fn_80547E48
lbl_fn_80014A5C_00000F48:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000F5C
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000F44
lbl_fn_80014A5C_00000F5C:
    cmpwi r3, 0x0
    bne lbl_fn_80014A5C_00000F8C
    lwz r3, lbl_8087F890
    bl fn_8011FE04
    b lbl_fn_80014A5C_00000F74
lbl_fn_80014A5C_00000F70:
    bl fn_80547E48
lbl_fn_80014A5C_00000F74:
    lwz r0, 0x88(r22)
    cmplw r3, r0
    bne lbl_fn_80014A5C_00000F70
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00000F70
lbl_fn_80014A5C_00000F8C:
    stw r3, 0x88(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000F94:
    lwz r3, 0x8c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    bl fn_8035B854
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000FBC
    lwz r3, 0x8c(r22)
    bl fn_8035B854
    stw r3, 0x8c(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000FBC:
    lwz r3, lbl_8087F408
    bl fn_8011FBD8
    stw r3, 0x8c(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000FCC:
    lwz r3, 0x80(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    bl fn_8054A690
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00000FF4
    lwz r3, 0x80(r22)
    bl fn_8054A690
    stw r3, 0x80(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00000FF4:
    lwz r3, lbl_8087F8A0
    bl fn_8011F8BC
    stw r3, 0x80(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00001004:
    lwz r3, 0x84(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    bl fn_80547E48
    b lbl_fn_80014A5C_0000101C
lbl_fn_80014A5C_00001018:
    bl fn_80547E48
lbl_fn_80014A5C_0000101C:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00001030
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80014A5C_00001018
lbl_fn_80014A5C_00001030:
    cmpwi r3, 0x0
    bne lbl_fn_80014A5C_00001068
    lwz r3, lbl_8087F890
    bl fn_8011FE04
    b lbl_fn_80014A5C_00001048
lbl_fn_80014A5C_00001044:
    bl fn_80547E48
lbl_fn_80014A5C_00001048:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_0000105C
    lwz r0, 0x84(r22)
    cmplw r3, r0
    bne lbl_fn_80014A5C_00001044
lbl_fn_80014A5C_0000105C:
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80014A5C_00001044
lbl_fn_80014A5C_00001068:
    stw r3, 0x84(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_00001070:
    lwz r3, lbl_8087EEF0
    li r21, 0x0
    lwz r0, 0xd90(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_000010A4
    lis r4, 0x1
    subi r0, r4, 0xe4a
    addi r4, r3, 0x9c
    clrlwi r5, r0, 16
    bl fn_8007708C
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000010A4
    li r21, 0x1
lbl_fn_80014A5C_000010A4:
    cmpwi r21, 0x0
    beq lbl_fn_80014A5C_000011E8
    lwz r0, 0x78(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_000010D4
    cmpwi r0, 0x1
    beq lbl_fn_80014A5C_0000112C
    cmpwi r0, 0x2
    beq lbl_fn_80014A5C_0000115C
    cmpwi r0, 0x4
    beq lbl_fn_80014A5C_0000118C
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_000010D4:
    lwz r3, 0x88(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    lwz r3, 0x1424(r3)
    b lbl_fn_80014A5C_000010EC
lbl_fn_80014A5C_000010E8:
    lwz r3, 0x1424(r3)
lbl_fn_80014A5C_000010EC:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00001100
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_000010E8
lbl_fn_80014A5C_00001100:
    cmpwi r3, 0x0
    bne lbl_fn_80014A5C_00001124
    lwz r3, lbl_8087F890
    lwz r3, 0x48(r3)
    b lbl_fn_80014A5C_00001118
lbl_fn_80014A5C_00001114:
    lwz r3, 0x1424(r3)
lbl_fn_80014A5C_00001118:
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00001114
lbl_fn_80014A5C_00001124:
    stw r3, 0x88(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_0000112C:
    lwz r3, 0x8c(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    lwz r0, 0x14ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_0000114C
    stw r0, 0x8c(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_0000114C:
    lwz r3, lbl_8087F408
    lwz r0, 0x48(r3)
    stw r0, 0x8c(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_0000115C:
    lwz r3, 0x80(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    lwz r0, 0x14ac(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_0000117C
    stw r0, 0x80(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_0000117C:
    lwz r3, lbl_8087F428
    bl fn_8036554C
    stw r3, 0x80(r22)
    b lbl_fn_80014A5C_000011E8
lbl_fn_80014A5C_0000118C:
    lwz r3, 0x84(r22)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E8
    lwz r3, 0x1424(r3)
    b lbl_fn_80014A5C_000011A4
lbl_fn_80014A5C_000011A0:
    lwz r3, 0x1424(r3)
lbl_fn_80014A5C_000011A4:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011B8
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80014A5C_000011A0
lbl_fn_80014A5C_000011B8:
    cmpwi r3, 0x0
    bne lbl_fn_80014A5C_000011E4
    lwz r3, lbl_8087F890
    lwz r3, 0x48(r3)
    b lbl_fn_80014A5C_000011D0
lbl_fn_80014A5C_000011CC:
    lwz r3, 0x1424(r3)
lbl_fn_80014A5C_000011D0:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_000011E4
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80014A5C_000011CC
lbl_fn_80014A5C_000011E4:
    stw r3, 0x84(r22)
lbl_fn_80014A5C_000011E8:
    lwz r0, 0x50(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_000028F8
    lwz r25, lbl_8087EEB0
    lwz r3, lbl_8087F430
    cmpwi r25, 0x0
    lwz r29, 0x10d8(r3)
    beq lbl_fn_80014A5C_00002AB0
    cmpwi r29, 0x0
    bne lbl_fn_80014A5C_00001214
    b lbl_fn_80014A5C_00002AB0
lbl_fn_80014A5C_00001214:
    lfs f30, lbl_808806C4
    mr r3, r25
    lfs f31, lbl_808806C0
    lis r4, 0x9000
    lfs f29, lbl_808806C8
    fmr f1, f30
    lfs f28, lbl_808806CC
    fmr f2, f30
    fmr f3, f31
    lfs f27, lbl_808806D0
    fmr f4, f29
    fmr f5, f28
    lfs f26, lbl_808806D4
    bl fn_80060D58
    lfs f0, lbl_808806DC
    lis r3, 0xd100
    lfs f4, lbl_808806D8
    fmr f23, f27
    fmadds f3, f0, f29, f30
    lfs f0, lbl_808806E0
    lwz r0, 0x78(r22)
    fadds f25, f4, f30
    fadds f22, f0, f30
    cmpwi r0, 0x0
    fadds f24, f4, f3
    subi r24, r3, 0x56
    fadds f21, f0, f3
    li r23, 0x0
    beq lbl_fn_80014A5C_000012AC
    cmpwi r0, 0x1
    beq lbl_fn_80014A5C_000012B4
    cmpwi r0, 0x2
    beq lbl_fn_80014A5C_000012BC
    cmpwi r0, 0x3
    beq lbl_fn_80014A5C_000012C4
    cmpwi r0, 0x4
    beq lbl_fn_80014A5C_000012CC
    b lbl_fn_80014A5C_000012D0
lbl_fn_80014A5C_000012AC:
    lwz r23, 0x88(r22)
    b lbl_fn_80014A5C_000012D0
lbl_fn_80014A5C_000012B4:
    lwz r23, 0x8c(r22)
    b lbl_fn_80014A5C_000012D0
lbl_fn_80014A5C_000012BC:
    lwz r23, 0x80(r22)
    b lbl_fn_80014A5C_000012D0
lbl_fn_80014A5C_000012C4:
    lwz r23, 0x7c(r22)
    b lbl_fn_80014A5C_000012D0
lbl_fn_80014A5C_000012CC:
    lwz r23, 0x84(r22)
lbl_fn_80014A5C_000012D0:
    lfs f0, lbl_808806BC
    fmr f1, f25
    fmr f2, f23
    slwi r0, r0, 2
    addi r3, r30, 0x258
    fmr f4, f26
    lwzx r4, r3, r0
    fmr f5, f26
    fsubs f3, f31, f0
    lfs f6, lbl_808806B8
    mr r3, r25
    li r5, -0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    cmpwi r23, 0x0
    fadds f23, f27, f27
    beq lbl_fn_80014A5C_000028F8
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    addi r21, r21, lbl_8072FD8C@l
    lis r31, 0xd100
    fmr f1, f25
    lwz r26, 0x5c(r23)
    fmr f2, f23
    lwz r27, 0x64(r23)
    fmr f4, f26
    lfs f6, lbl_808806B8
    fmr f5, f26
    mr r3, r25
    fsubs f3, f31, f0
    addi r28, r23, 0xc58
    addi r4, r21, 0x5e
    subi r5, r31, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    mr r3, r23
    bl fn_8017C904
    mr r5, r3
    addi r3, r1, 0x148
    addi r4, r21, 0x66
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r31, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r21, 0x6a
    fmr f5, f26
    subi r5, r31, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x60(r23)
    addi r3, r1, 0x148
    addi r4, r21, 0x66
    lwz r5, 0xc(r5)
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r31, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r21, 0x6f
    fmr f5, f26
    subi r5, r31, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x58(r23)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r31, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r21, 0x7c
    subi r5, r31, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x80(r23)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f21
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r31, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r21, 0x83
    fmr f5, f26
    subi r5, r31, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    cmpwi r27, 0x0
    beq lbl_fn_80014A5C_00001618
    lis r3, 0x51ec
    lwz r9, 0x4(r27)
    subi r0, r3, 0x7ae1
    addi r4, r21, 0x86
    mulhw r0, r0, r9
    addi r3, r1, 0x148
    addi r7, r27, 0x8
    srawi r6, r0, 5
    srawi r0, r0, 5
    srwi r5, r0, 31
    srwi r8, r6, 31
    add r0, r0, r5
    mulli r0, r0, 0x64
    add r5, r6, r8
    subf r6, r0, r9
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r31, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80014A5C_00001618:
    fadds f23, f23, f27
    lfs f3, lbl_808806D8
    lis r21, lbl_8072FD8C@ha
    lis r5, 0xd100
    addi r21, r21, lbl_8072FD8C@l
    lfs f0, lbl_808806BC
    fadds f23, f23, f3
    lfs f6, lbl_808806B8
    fmr f1, f25
    mr r3, r25
    fmr f4, f26
    addi r4, r21, 0x96
    fmr f2, f23
    subi r5, r5, 0x56
    fmr f5, f26
    li r6, 0x1
    fsubs f3, f31, f0
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x0(r28)
    cmpwi r5, 0x0
    blt lbl_fn_80014A5C_0000169C
    cmpwi r5, 0xe
    bge lbl_fn_80014A5C_0000169C
    slwi r0, r5, 2
    addi r3, r30, 0x98
    lwzx r5, r3, r0
    addi r3, r1, 0x148
    addi r4, r21, 0x66
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_000016B4
lbl_fn_80014A5C_0000169C:
    lis r4, lbl_8072FD8C@ha
    addi r3, r1, 0x148
    addi r4, r4, lbl_8072FD8C@l
    addi r4, r4, 0x78
    crclr 6
    bl sprintf
lbl_fn_80014A5C_000016B4:
    lfs f0, lbl_808806BC
    lis r31, 0xd100
    fmr f1, f22
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r31, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    fmr f1, f25
    addi r21, r21, lbl_8072FD8C@l
    fmr f4, f26
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f5, f26
    mr r3, r25
    fsubs f3, f31, f0
    addi r4, r21, 0x9c
    subi r5, r31, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lha r5, 0xe2(r28)
    cmpwi r5, 0x0
    blt lbl_fn_80014A5C_00001788
    cmpwi r5, 0x17
    bge lbl_fn_80014A5C_00001788
    lha r0, 0xe4(r28)
    cmpwi r0, 0x0
    blt lbl_fn_80014A5C_00001788
    cmpwi r0, 0x17
    bge lbl_fn_80014A5C_00001788
    slwi r4, r5, 2
    addi r3, r30, 0x1c8
    slwi r0, r0, 2
    lwzx r5, r3, r4
    lwzx r6, r3, r0
    addi r3, r1, 0x148
    lha r7, 0xe6(r28)
    addi r4, r21, 0xa4
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_000017A8
lbl_fn_80014A5C_00001788:
    lis r4, lbl_8072FD8C@ha
    lha r6, 0xe4(r28)
    addi r4, r4, lbl_8072FD8C@l
    lha r7, 0xe6(r28)
    addi r3, r1, 0x148
    addi r4, r4, 0xba
    crclr 6
    bl sprintf
lbl_fn_80014A5C_000017A8:
    lfs f0, lbl_808806BC
    lis r30, 0xd100
    fmr f1, f22
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r30, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    fmr f1, f25
    addi r21, r21, lbl_8072FD8C@l
    fmr f4, f26
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f5, f26
    mr r3, r25
    fsubs f3, f31, f0
    addi r4, r21, 0xd0
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0xec(r28)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r30, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r21, 0xd9
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lhz r0, 0xe0(r28)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    extrwi r5, r0, 1, 17
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f21
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r30, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r21, 0xe3
    fmr f5, f26
    subi r5, r30, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0xc(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_00001968
    subi r0, r3, 0x1
    lwz r5, 0x9c(r29)
    mulli r0, r0, 0x30
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_0000197C
lbl_fn_80014A5C_00001968:
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    li r5, 0x0
    crclr 6
    bl sprintf
lbl_fn_80014A5C_0000197C:
    lfs f0, lbl_808806BC
    lis r30, 0xd100
    fmr f1, f22
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r30, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    addi r21, r21, lbl_8072FD8C@l
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r21, 0xe7
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x10(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_00001A28
    subi r0, r3, 0x1
    lwz r5, 0x9c(r29)
    mulli r0, r0, 0x30
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_00001A3C
lbl_fn_80014A5C_00001A28:
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    li r5, 0x0
    crclr 6
    bl sprintf
lbl_fn_80014A5C_00001A3C:
    lfs f0, lbl_808806BC
    lis r30, 0xd100
    fmr f1, f21
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r30, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    fmr f1, f25
    addi r21, r21, lbl_8072FD8C@l
    fmr f4, f26
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f5, f26
    mr r3, r25
    fsubs f3, f31, f0
    addi r4, r21, 0xec
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_00001AEC
    subi r0, r3, 0x1
    lwz r5, 0x9c(r29)
    mulli r0, r0, 0x30
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    lwzx r5, r5, r0
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_00001B00
lbl_fn_80014A5C_00001AEC:
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    li r5, 0x0
    crclr 6
    bl sprintf
lbl_fn_80014A5C_00001B00:
    lfs f0, lbl_808806BC
    lis r30, 0xd100
    fmr f1, f22
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r30, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    addi r21, r21, lbl_8072FD8C@l
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r21, 0xf1
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_00001BAC
    subi r0, r3, 0x1
    lwz r4, 0xb0(r29)
    slwi r0, r0, 6
    addi r3, r1, 0x148
    lwzx r5, r4, r0
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_00001BC0
lbl_fn_80014A5C_00001BAC:
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    li r5, 0x0
    crclr 6
    bl sprintf
lbl_fn_80014A5C_00001BC0:
    lfs f0, lbl_808806BC
    lis r30, 0xd100
    fmr f1, f21
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r30, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    fmr f1, f25
    addi r21, r21, lbl_8072FD8C@l
    fmr f4, f26
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f5, f26
    mr r3, r25
    fsubs f3, f31, f0
    addi r4, r21, 0xf6
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0xbc(r28)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r30, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r21, 0xfb
    fmr f5, f26
    subi r5, r30, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x4(r28)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r30, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r21, 0x106
    fmr f5, f26
    subi r5, r30, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0xb4(r28)
    addi r3, r1, 0x148
    lwz r6, 0xb8(r28)
    addi r4, r21, 0x10d
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r30, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r21, 0x116
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r4, 0xb4(r28)
    mr r3, r29
    bl fn_803C1884
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00001E14
    lwz r4, 0xb4(r28)
    mr r3, r29
    bl fn_803C1884
    mr r4, r3
    addi r3, r1, 0x148
    lwz r5, 0x28(r4)
    addi r4, r21, 0x78
    crclr 6
    bl sprintf
    b lbl_fn_80014A5C_00001E24
lbl_fn_80014A5C_00001E14:
    addi r3, r1, 0x148
    addi r4, r21, 0x122
    crclr 6
    bl sprintf
lbl_fn_80014A5C_00001E24:
    lfs f0, lbl_808806BC
    lis r30, 0xd100
    fmr f1, f21
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r30, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    lis r21, lbl_8072FD8C@ha
    fmr f1, f25
    addi r21, r21, lbl_8072FD8C@l
    fmr f4, f26
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f5, f26
    mr r3, r25
    fsubs f3, f31, f0
    addi r4, r21, 0x125
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0x674(r23)
    addi r3, r1, 0x148
    addi r4, r21, 0x78
    addi r5, r5, 0x1
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r30, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r21, 0x12c
    subi r5, r30, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0xd4(r28)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00001FA4
    lwz r3, 0x218(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00001F4C
    lwz r5, 0x4(r3)
    b lbl_fn_80014A5C_00001F50
lbl_fn_80014A5C_00001F4C:
    li r5, 0x0
lbl_fn_80014A5C_00001F50:
    lis r4, lbl_8072FD8C@ha
    addi r3, r1, 0x148
    addi r4, r4, lbl_8072FD8C@l
    addi r4, r4, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    lis r5, 0xd100
    fmr f1, f21
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r5, 0x1
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
lbl_fn_80014A5C_00001FA4:
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    lis r3, lbl_8072FD8C@ha
    lis r21, 0xd100
    addi r30, r3, lbl_8072FD8C@l
    fmr f1, f25
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    addi r4, r30, 0x134
    fsubs f3, f31, f0
    subi r5, r21, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0xc0(r28)
    addi r3, r1, 0x148
    addi r4, r30, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r21, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f0, lbl_808806BC
    fmr f1, f24
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r30, 0x13f
    subi r5, r21, 0x56
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r5, 0xd8(r28)
    addi r3, r1, 0x148
    addi r4, r30, 0x78
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f21
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r21, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806D8
    lfs f20, lbl_808806BC
    mr r31, r28
    lfs f24, lbl_808806E4
    li r20, 0x0
    fadds f23, f23, f0
    lfs f21, lbl_808806E8
lbl_fn_80014A5C_000020DC:
    lfs f1, 0x140(r31)
    addi r3, r1, 0x148
    addi r4, r30, 0x14a
    addi r5, r20, 0x1
    crset 6
    bl sprintf
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f2, f23
    mr r3, r25
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    subi r5, r21, 0x1
    fsubs f3, f31, f20
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f1, 0x160(r31)
    addi r3, r1, 0x148
    addi r4, r30, 0x14a
    addi r5, r20, 0x9
    crset 6
    bl sprintf
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    addi r4, r1, 0x148
    fadds f1, f24, f25
    subi r5, r21, 0x1
    fsubs f3, f31, f20
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f1, 0x180(r31)
    addi r3, r1, 0x148
    addi r4, r30, 0x14a
    addi r5, r20, 0x11
    crset 6
    bl sprintf
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    addi r4, r1, 0x148
    fadds f1, f21, f25
    subi r5, r21, 0x1
    fsubs f3, f31, f20
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    addi r20, r20, 0x1
    fadds f23, f23, f27
    cmplwi r20, 0x8
    addi r31, r31, 0x4
    blt lbl_fn_80014A5C_000020DC
    lfs f3, lbl_808806D8
    lis r30, lbl_8072FD8C@ha
    addi r30, r30, lbl_8072FD8C@l
    lis r21, 0xd100
    fadds f23, f23, f3
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r30, 0x156
    fmr f5, f26
    subi r5, r21, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x38(r23)
    addi r3, r1, 0x148
    addi r4, r30, 0x15b
    rlwinm r5, r0, 0, 29, 29
    clrlwi r7, r0, 31
    subi r6, r5, 0x4
    rlwinm r8, r0, 0, 30, 30
    subi r5, r7, 0x1
    subi r0, r8, 0x2
    cntlzw r6, r6
    cntlzw r5, r5
    srwi r7, r6, 5
    cntlzw r0, r0
    srwi r6, r5, 5
    srwi r5, r0, 5
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r21, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r30, 0x16b
    fmr f5, f26
    subi r5, r21, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r7, 0x560(r23)
    addi r3, r1, 0x148
    lwz r6, 0x564(r23)
    addi r4, r30, 0xba
    lwz r5, 0x55c(r23)
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r21, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r30, 0x174
    fmr f5, f26
    subi r5, r21, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r0, 0x12a4(r23)
    addi r3, r1, 0x148
    addi r4, r30, 0x17b
    extrwi r7, r0, 1, 26
    extrwi r6, r0, 1, 25
    srwi r5, r0, 31
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r21, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f23, f23, f27
    lfs f0, lbl_808806BC
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f2, f23
    addi r4, r30, 0x197
    fmr f5, f26
    subi r5, r21, 0x56
    fsubs f3, f31, f0
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    addi r3, r1, 0x148
    addi r4, r30, 0x66
    addi r5, r28, 0x1b0
    crclr 6
    bl sprintf
    lfs f0, lbl_808806BC
    fmr f1, f22
    fmr f2, f23
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r25
    fmr f5, f26
    fsubs f3, f31, f0
    addi r4, r1, 0x148
    subi r5, r21, 0x1
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, 0xc(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_000024A4
    lwz r0, 0x74(r29)
    cmpw r3, r0
    bgt lbl_fn_80014A5C_000024A4
    subi r0, r3, 0x1
    lis r4, 0xff9a
    mulli r0, r0, 0x30
    lwz r6, 0x9c(r29)
    subi r5, r4, 0x67
    lfs f3, lbl_808806EC
    lfs f4, lbl_808806B8
    mr r3, r25
    add r6, r6, r0
    lfs f6, lbl_808806BC
    lfs f0, 0x8(r6)
    li r4, 0xc
    lfs f1, 0x4(r6)
    fadds f2, f3, f0
    lfs f3, 0xc(r6)
    lfs f5, 0x14(r6)
    bl fn_80062C8C
lbl_fn_80014A5C_000024A4:
    lwz r3, 0x10(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_00002500
    lwz r0, 0x74(r29)
    cmpw r3, r0
    bgt lbl_fn_80014A5C_00002500
    subi r0, r3, 0x1
    lis r4, 0xff9a
    mulli r0, r0, 0x30
    lwz r6, 0x9c(r29)
    subi r5, r4, 0x6601
    lfs f3, lbl_808806F0
    lfs f4, lbl_808806B8
    mr r3, r25
    add r6, r6, r0
    lfs f6, lbl_808806BC
    lfs f0, 0x8(r6)
    li r4, 0xc
    lfs f1, 0x4(r6)
    fadds f2, f3, f0
    lfs f3, 0xc(r6)
    lfs f5, 0x14(r6)
    bl fn_80062C8C
lbl_fn_80014A5C_00002500:
    lwz r3, 0x14(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_00002558
    lwz r0, 0x74(r29)
    cmpw r3, r0
    bgt lbl_fn_80014A5C_00002558
    subi r0, r3, 0x1
    lwz r5, 0x9c(r29)
    mulli r0, r0, 0x30
    lfs f3, lbl_808806F4
    lfs f4, lbl_808806B8
    mr r3, r25
    lfs f6, lbl_808806BC
    li r4, 0xc
    add r6, r5, r0
    li r5, -0x6667
    lfs f0, 0x8(r6)
    lfs f1, 0x4(r6)
    fadds f2, f3, f0
    lfs f3, 0xc(r6)
    lfs f5, 0x14(r6)
    bl fn_80062C8C
lbl_fn_80014A5C_00002558:
    lwz r3, 0x18(r28)
    cmpwi r3, 0x0
    ble lbl_fn_80014A5C_000025B0
    lwz r0, 0xa8(r29)
    cmpw r3, r0
    bgt lbl_fn_80014A5C_000025B0
    subi r0, r3, 0x1
    lwz r3, 0xb0(r29)
    slwi r0, r0, 6
    lfs f3, lbl_808806F4
    add r5, r3, r0
    lfs f4, lbl_808806B8
    lfs f0, 0x8(r5)
    mr r3, r25
    lfs f1, 0x4(r5)
    li r4, 0xc
    fadds f2, f3, f0
    lfs f3, 0xc(r5)
    lfs f5, lbl_808806F0
    li r5, -0x67
    lfs f6, lbl_808806BC
    bl fn_80062C8C
lbl_fn_80014A5C_000025B0:
    lfs f2, 0x530(r23)
    lis r6, 0xff01
    psq_l f1, 0x528(r23), 0, 0
    addi r5, r1, 0x38
    psq_st f1, 0x0(r5), 0, 0
    mr r3, r25
    lfs f1, lbl_808806B8
    addi r4, r1, 0x14
    lfs f4, lbl_808806F8
    subi r6, r6, 0x1
    lfs f0, 0x3c(r1)
    fadds f5, f2, f1
    lfs f3, lbl_808806D0
    fadds f4, f0, f4
    lfs f0, 0x38(r1)
    stfs f2, 0x40(r1)
    fadds f6, f0, f1
    lfs f2, lbl_808806FC
    fadds f0, f4, f3
    stfs f4, 0x3c(r1)
    stfs f1, 0x8(r1)
    stfs f3, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f6, 0x14(r1)
    stfs f0, 0x18(r1)
    stfs f5, 0x1c(r1)
    bl fn_800638B0
    cmpwi r26, 0x0
    beq lbl_fn_80014A5C_000026BC
    cmpwi r27, 0x0
    beq lbl_fn_80014A5C_000026BC
    addi r3, r1, 0x2c
    psq_l f1, 0x528(r23), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    addi r5, r1, 0x20
    lfs f3, 0x50(r27)
    fmr f5, f31
    lfs f0, lbl_80880700
    mr r3, r25
    lfs f2, 0x530(r23)
    li r4, 0xc
    fmuls f7, f0, f3
    psq_l f1, 0x534(r23), 0, 0
    psq_st f1, 0x0(r5), 0, 0
    li r5, -0x100
    lfs f3, lbl_808806F0
    stfs f2, 0x34(r1)
    lfs f2, 0x53c(r23)
    lfs f0, 0x30(r1)
    stfs f2, 0x28(r1)
    fadds f2, f3, f0
    lfs f1, 0x2c(r1)
    lfs f3, 0x34(r1)
    lfs f4, 0x24(r1)
    lfs f6, 0x4c(r27)
    bl fn_80063484
    lfs f3, lbl_808806F0
    fmr f4, f31
    lfs f0, 0x30(r1)
    mr r3, r25
    lfs f1, 0x2c(r1)
    li r4, 0xc
    fadds f2, f3, f0
    lfs f3, 0x34(r1)
    li r5, -0x6700
    lfs f5, 0x58(r27)
    bl fn_80063200
lbl_fn_80014A5C_000026BC:
    lwz r0, 0x18(r28)
    cmpwi r0, 0x0
    ble lbl_fn_80014A5C_000026F4
    lis r4, 0xff89
    lfs f1, 0x1c(r28)
    subi r5, r4, 0x1
    lfs f2, 0x20(r28)
    lfs f3, 0x24(r28)
    mr r3, r25
    lfs f4, lbl_808806B8
    li r4, 0xc
    lfs f5, lbl_808806BC
    lfs f6, lbl_808806C4
    bl fn_80062C8C
lbl_fn_80014A5C_000026F4:
    lwz r0, 0x54(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_000028F8
    fmr f2, f30
    lfs f4, lbl_80880704
    fmr f3, f31
    mr r3, r25
    fmr f5, f28
    lis r4, 0x9000
    fadds f1, f30, f29
    bl fn_80060D58
    fadds f25, f25, f29
    lis r3, lbl_8072FD8C@ha
    addi r31, r3, lbl_8072FD8C@l
    fmr f2, f27
    fmr f3, f31
    lfs f6, lbl_808806B8
    fmr f1, f25
    mr r3, r25
    fmr f4, f26
    mr r5, r24
    fmr f5, f26
    addi r4, r31, 0x19f
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lwz r3, lbl_8087F048
    fadds f20, f27, f27
    mr r4, r23
    addis r27, r3, 0x1
    subi r27, r27, 0x3410
    bl fn_80102890
    cmpwi r3, 0x0
    blt lbl_fn_80014A5C_000028F8
    mulli r0, r3, 0x934
    li r24, 0x0
    lis r21, 0x8100
    add r29, r27, r0
    mr r30, r29
    b lbl_fn_80014A5C_000028E4
lbl_fn_80014A5C_00002798:
    mr r3, r30
    mr r4, r24
    bl fn_801083D8
    mr r26, r3
    lwz r3, 0x0(r27)
    bl fn_8017C904
    lfs f1, 0x128(r29)
    mr r5, r3
    lfs f2, 0x248(r27)
    mr r6, r26
    addi r3, r1, 0x148
    addi r4, r31, 0x1a4
    crset 6
    bl sprintf
    lwz r26, 0x0(r27)
    li r4, 0x0
    li r3, 0x0
    li r5, 0x0
    lwz r6, 0x38(r26)
    rlwinm r0, r6, 0, 29, 29
    cmplwi r0, 0x4
    beq lbl_fn_80014A5C_00002800
    clrlwi r0, r6, 31
    cmplwi r0, 0x1
    beq lbl_fn_80014A5C_00002800
    li r5, 0x1
lbl_fn_80014A5C_00002800:
    cmpwi r5, 0x0
    beq lbl_fn_80014A5C_0000281C
    lwz r0, 0x7e0(r26)
    rlwinm r0, r0, 0, 26, 26
    cmplwi r0, 0x20
    beq lbl_fn_80014A5C_0000281C
    li r3, 0x1
lbl_fn_80014A5C_0000281C:
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00002850
    lwz r0, 0x55c(r26)
    li r3, 0x0
    cmpwi r0, 0x6
    bne lbl_fn_80014A5C_00002844
    lwz r0, 0x560(r26)
    cmpwi r0, 0x1c
    bne lbl_fn_80014A5C_00002844
    li r3, 0x1
lbl_fn_80014A5C_00002844:
    cmpwi r3, 0x0
    bne lbl_fn_80014A5C_00002850
    li r4, 0x1
lbl_fn_80014A5C_00002850:
    cmpwi r4, 0x0
    beq lbl_fn_80014A5C_000028D8
    lwz r0, 0x48(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00002870
    lwz r0, 0xd18(r26)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_000028D8
lbl_fn_80014A5C_00002870:
    mr r3, r23
    mr r4, r26
    li r20, -0x1
    li r5, 0x1
    bl fn_8016F3D0
    cmpwi r3, 0x0
    beq lbl_fn_80014A5C_00002890
    subi r20, r21, 0x1
lbl_fn_80014A5C_00002890:
    lwz r0, 0xc4(r28)
    cmplw r0, r26
    bne lbl_fn_80014A5C_000028A0
    li r20, -0x4f50
lbl_fn_80014A5C_000028A0:
    fmr f1, f25
    lfs f6, lbl_808806B8
    fmr f2, f20
    mr r3, r25
    fmr f3, f31
    mr r5, r20
    fmr f4, f26
    addi r4, r1, 0x148
    fmr f5, f26
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    fadds f20, f20, f27
lbl_fn_80014A5C_000028D8:
    addi r27, r27, 0x934
    addi r29, r29, 0x4
    addi r24, r24, 0x1
lbl_fn_80014A5C_000028E4:
    lwz r3, lbl_8087F048
    addis r3, r3, 0x3
    lwz r0, 0x63b0(r3)
    cmpw r24, r0
    blt lbl_fn_80014A5C_00002798
lbl_fn_80014A5C_000028F8:
    lwz r0, 0x58(r22)
    cmpwi r0, 0x0
    beq lbl_fn_80014A5C_00002AB0
    lwz r21, lbl_8087EEB0
    cmpwi r21, 0x0
    beq lbl_fn_80014A5C_00002AB0
    lfs f20, lbl_808806C0
    mr r3, r21
    lfs f27, lbl_808806C4
    lis r4, 0x4400
    lfs f28, lbl_80880710
    fmr f3, f20
    fmr f1, f27
    lfs f25, lbl_80880708
    fmr f2, f28
    lfs f26, lbl_8088070C
    lfs f4, lbl_80880714
    lfs f5, lbl_80880718
    bl fn_80060D58
    lfs f0, lbl_808806D8
    lis r23, lbl_8072FD8C@ha
    lfs f24, lbl_808806BC
    addi r23, r23, lbl_8072FD8C@l
    fadds f27, f27, f0
    lfs f23, lbl_808806E4
    fadds f28, f28, f0
    lfs f22, lbl_808806E8
    lfs f21, lbl_8088071C
    li r20, 0x0
lbl_fn_80014A5C_0000296C:
    lfs f1, 0x9c(r22)
    addi r3, r1, 0x48
    addi r4, r23, 0x1b8
    addi r5, r20, 0x1
    crset 6
    bl sprintf
    fmr f1, f27
    lfs f6, lbl_808806B8
    fmr f2, f28
    mr r3, r21
    fmr f4, f26
    addi r4, r1, 0x48
    fmr f5, f26
    li r5, -0x1
    fsubs f3, f20, f24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f1, 0xac(r22)
    addi r3, r1, 0x48
    addi r4, r23, 0x1b8
    addi r5, r20, 0x5
    crset 6
    bl sprintf
    fmr f2, f28
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r21
    fmr f5, f26
    addi r4, r1, 0x48
    fadds f1, f23, f27
    li r5, -0x1
    fsubs f3, f20, f24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f1, 0xbc(r22)
    addi r3, r1, 0x48
    addi r4, r23, 0x1b8
    addi r5, r20, 0x9
    crset 6
    bl sprintf
    fmr f2, f28
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r21
    fmr f5, f26
    addi r4, r1, 0x48
    fadds f1, f22, f27
    li r5, -0x1
    fsubs f3, f20, f24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    lfs f1, 0xcc(r22)
    addi r3, r1, 0x48
    addi r4, r23, 0x1b8
    addi r5, r20, 0xd
    crset 6
    bl sprintf
    fmr f2, f28
    lfs f6, lbl_808806B8
    fmr f4, f26
    mr r3, r21
    fmr f5, f26
    addi r4, r1, 0x48
    fadds f1, f21, f27
    li r5, -0x1
    fsubs f3, f20, f24
    li r6, 0x1
    li r7, 0x1
    li r8, 0x0
    bl fn_800616C0
    addi r20, r20, 0x1
    fadds f28, f28, f25
    cmpwi r20, 0x4
    addi r22, r22, 0x4
    blt lbl_fn_80014A5C_0000296C
lbl_fn_80014A5C_00002AB0:
    addi r11, r1, 0x280
    psq_l f31, 0x338(r1), 0, 0
    lfd f31, 0x330(r1)
    psq_l f30, 0x328(r1), 0, 0
    lfd f30, 0x320(r1)
    psq_l f29, 0x318(r1), 0, 0
    lfd f29, 0x310(r1)
    psq_l f28, 0x308(r1), 0, 0
    lfd f28, 0x300(r1)
    psq_l f27, 0x2f8(r1), 0, 0
    lfd f27, 0x2f0(r1)
    psq_l f26, 0x2e8(r1), 0, 0
    lfd f26, 0x2e0(r1)
    psq_l f25, 0x2d8(r1), 0, 0
    lfd f25, 0x2d0(r1)
    psq_l f24, 0x2c8(r1), 0, 0
    lfd f24, 0x2c0(r1)
    psq_l f23, 0x2b8(r1), 0, 0
    lfd f23, 0x2b0(r1)
    psq_l f22, 0x2a8(r1), 0, 0
    lfd f22, 0x2a0(r1)
    psq_l f21, 0x298(r1), 0, 0
    lfd f21, 0x290(r1)
    psq_l f20, 0x288(r1), 0, 0
    lfd f20, 0x280(r1)
    bl _restgpr_20
    lwz r0, 0x344(r1)
    mtlr r0
    addi r1, r1, 0x340
    blr
}

asm void fn_80016888(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    stw r31, 0x3c(r1)
    mr r31, r3
    stw r30, 0x38(r1)
    stw r29, 0x34(r1)
    stw r28, 0x30(r1)
    lwz r3, lbl_8087FA00
    bl fn_805B3658
    li r0, 0x1
    stw r0, 0x98(r31)
    mr r3, r31
    lwz r4, lbl_8087F8A0
    lwz r4, 0x48(r4)
    bl fn_80017064
    lwz r3, lbl_8087F428
    bl fn_8036554C
    mr r28, r3
    addi r29, r1, 0x1c
    li r30, 0x0
    b lbl_fn_80016888_00002BF0
lbl_fn_80016888_00002B80:
    lhz r0, 0xd38(r28)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_80016888_00002BD8
    stw r30, 0x1c(r1)
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x1c
    bl fn_80016A94
    cmpwi r29, 0x0
    beq lbl_fn_80016888_00002BD8
    lwz r3, 0x1c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80016888_00002BD8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80016888_00002BD4
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80016888_00002BD4:
    stw r30, 0x1c(r1)
lbl_fn_80016888_00002BD8:
    mr r3, r31
    mr r4, r28
    bl fn_80017064
    lwz r0, 0xc64(r28)
    stw r0, 0xc60(r28)
    lwz r28, 0x14ac(r28)
lbl_fn_80016888_00002BF0:
    cmpwi r28, 0x0
    bne lbl_fn_80016888_00002B80
    lwz r3, lbl_8087F890
    lwz r28, 0x48(r3)
    b lbl_fn_80016888_00002C1C
lbl_fn_80016888_00002C04:
    mr r3, r31
    mr r4, r28
    bl fn_80017064
    lwz r0, 0xc64(r28)
    stw r0, 0xc60(r28)
    lwz r28, 0x1424(r28)
lbl_fn_80016888_00002C1C:
    cmpwi r28, 0x0
    bne lbl_fn_80016888_00002C04
    lwz r3, lbl_8087F408
    addi r29, r1, 0x8
    li r30, 0x0
    lwz r28, 0x48(r3)
    b lbl_fn_80016888_00002CA8
lbl_fn_80016888_00002C38:
    lhz r0, 0xd38(r28)
    extrwi. r0, r0, 1, 16
    bne lbl_fn_80016888_00002C90
    stw r30, 0x8(r1)
    mr r3, r31
    mr r4, r28
    addi r5, r1, 0x8
    bl fn_80016A94
    cmpwi r29, 0x0
    beq lbl_fn_80016888_00002C90
    lwz r3, 0x8(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80016888_00002C90
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80016888_00002C8C
    addi r3, r29, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80016888_00002C8C:
    stw r30, 0x8(r1)
lbl_fn_80016888_00002C90:
    mr r3, r31
    mr r4, r28
    bl fn_80017064
    lwz r0, 0xc64(r28)
    stw r0, 0xc60(r28)
    lwz r28, 0x14ac(r28)
lbl_fn_80016888_00002CA8:
    cmpwi r28, 0x0
    bne lbl_fn_80016888_00002C38
    bl fn_8001C1BC
    mr r3, r31
    li r4, 0x0
    bl fn_800D246C
    lwz r3, lbl_8087F408
    lwz r0, 0x48(r3)
    stw r0, 0x8c(r31)
    lwz r3, lbl_8087F428
    bl fn_8036554C
    stw r3, 0x80(r31)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x48(r3)
    stw r0, 0x7c(r31)
    lwz r3, lbl_8087F890
    lwz r0, 0x48(r3)
    stw r0, 0x84(r31)
    b lbl_fn_80016888_00002CFC
lbl_fn_80016888_00002CF4:
    lwz r0, 0x1424(r3)
    stw r0, 0x84(r31)
lbl_fn_80016888_00002CFC:
    lwz r3, 0x84(r31)
    cmpwi r3, 0x0
    beq lbl_fn_80016888_00002D14
    lwz r0, 0x1428(r3)
    cmpwi r0, 0x0
    bne lbl_fn_80016888_00002CF4
lbl_fn_80016888_00002D14:
    lwz r0, 0x44(r1)
    lwz r31, 0x3c(r1)
    lwz r30, 0x38(r1)
    lwz r29, 0x34(r1)
    lwz r28, 0x30(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80016A94(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    stw r0, 0x64(r1)
    li r0, 0x0
    stw r31, 0x5c(r1)
    mr r31, r4
    stw r30, 0x58(r1)
    stw r29, 0x54(r1)
    mr r29, r3
    stw r0, 0x2c(r1)
    lwz r6, 0x0(r5)
    cntlzw r0, r6
    srwi. r0, r0, 5
    bne lbl_fn_80016A94_00002D88
    stw r6, 0x2c(r1)
    addi r3, r5, 0x4
    addi r4, r1, 0x30
    li r5, 0x0
    lwz r12, 0x0(r6)
    mtctr r12
    bctrl
lbl_fn_80016A94_00002D88:
    lwz r4, 0xd0c(r31)
    mr r3, r29
    addi r5, r1, 0x2c
    bl fn_80016C10
    addic. r4, r1, 0x2c
    mr r29, r3
    beq lbl_fn_80016A94_00002DD8
    lwz r3, 0x2c(r1)
    cmpwi r3, 0x0
    beq lbl_fn_80016A94_00002DD8
    lwz r12, 0x0(r3)
    cmpwi r12, 0x0
    beq lbl_fn_80016A94_00002DD0
    addi r3, r4, 0x4
    li r5, 0x1
    mr r4, r3
    mtctr r12
    bctrl
lbl_fn_80016A94_00002DD0:
    li r0, 0x0
    stw r0, 0x2c(r1)
lbl_fn_80016A94_00002DD8:
    lwz r4, lbl_8087F430
    mr r5, r29
    addi r3, r1, 0x20
    lwz r4, 0x10d8(r4)
    bl fn_803C11A4
    addi r3, r1, 0x20
    lfs f2, 0x28(r1)
    addi r29, r1, 0x8
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x0(r29), 0, 0
    addi r30, r1, 0x14
    psq_l f1, 0x534(r31), 0, 0
    stfs f2, 0x10(r1)
    lfs f2, 0x53c(r31)
    psq_st f1, 0x0(r30), 0, 0
    stfs f2, 0x1c(r1)
    bl fn_80680CF8
    lis r4, 0x4178
    lis r0, 0x4330
    addi r5, r4, 0x749f
    psq_l f1, 0x0(r29), 0, 0
    mulhw r5, r5, r3
    lis r4, lbl_8072FC70@ha
    stw r0, 0x40(r1)
    lfs f2, 0x10(r1)
    stfs f2, 0x530(r31)
    lfs f2, 0x1c(r1)
    srawi r0, r5, 8
    lfd f6, lbl_8072FC70@l(r4)
    srwi r4, r0, 31
    lfs f4, lbl_80880724
    add r0, r0, r4
    lfs f3, lbl_80880720
    mulli r0, r0, 0x3e9
    lfs f0, lbl_80880728
    psq_st f1, 0x528(r31), 0, 0
    subf r0, r0, r3
    stfs f2, 0x53c(r31)
    xoris r0, r0, 0x8000
    stw r0, 0x44(r1)
    lfd f5, 0x40(r1)
    fsubs f5, f5, f6
    fdivs f4, f5, f4
    fmsubs f0, f3, f4, f0
    stfs f0, 0x18(r1)
    psq_l f1, 0x0(r30), 0, 0
    psq_st f1, 0x534(r31), 0, 0
    lwz r31, 0x5c(r1)
    lwz r30, 0x58(r1)
    lwz r29, 0x54(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_80016C10(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_24
    lwz r3, lbl_8087F430
    li r28, 0x0
    stw r28, 0x8(r1)
    mr r25, r4
    lwz r30, 0x10d8(r3)
    mr r26, r5
    stw r28, 0xc(r1)
    lwz r0, 0x74(r30)
    b lbl_fn_80016C10_00002EEC
    bl fn_80084C24
lbl_fn_80016C10_00002EEC:
    cmpwi r0, 0x0
    stw r0, 0x8(r1)
    beq lbl_fn_80016C10_00002F18
    slwi r3, r0, 2
    li r4, 0x0
    la r5, lbl_8087D6EC
    la r6, lbl_8087D6E8
    li r7, 0x0
    bl fn_800846FC
    stw r3, 0xc(r1)
    b lbl_fn_80016C10_00002F20
lbl_fn_80016C10_00002F18:
    li r0, 0x0
    stw r0, 0xc(r1)
lbl_fn_80016C10_00002F20:
    lwz r0, 0x8(r1)
    li r4, 0x0
    lwz r3, 0xc(r1)
    slwi r5, r0, 2
    bl memset
    cmpwi r25, 0x0
    ble lbl_fn_80016C10_00003034
    li r27, 0x1
    li r31, 0x0
    b lbl_fn_80016C10_00003024
lbl_fn_80016C10_00002F48:
    subi r4, r27, 0x1
    lwz r0, 0x9c(r30)
    mulli r5, r4, 0x30
    add r3, r0, r5
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80016C10_00003020
    lwz r0, 0x9c(r30)
    slwi r29, r4, 2
    lwz r3, 0xc(r1)
    add r24, r0, r5
    stwx r31, r3, r29
    lwz r3, 0x0(r26)
    cmpwi r3, 0x0
    bne lbl_fn_80016C10_00002FCC
    lwz r0, 0x20(r24)
    cmpw r25, r0
    bne lbl_fn_80016C10_00003020
    lfs f0, 0x14(r24)
    li r4, 0x64
    lwz r0, 0x1c(r24)
    fctiwz f0, f0
    cmpwi r0, 0x64
    stfd f0, 0x10(r1)
    lwz r5, 0x14(r1)
    bge lbl_fn_80016C10_00002FB4
    mr r4, r0
lbl_fn_80016C10_00002FB4:
    slwi r0, r4, 2
    lwz r3, 0xc(r1)
    add r0, r0, r4
    add r0, r5, r0
    stwx r0, r3, r29
    b lbl_fn_80016C10_00003020
lbl_fn_80016C10_00002FCC:
    lwz r12, 0x4(r3)
    mr r4, r24
    addi r3, r26, 0x4
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80016C10_00003020
    lfs f0, 0x14(r24)
    li r4, 0x64
    lwz r0, 0x1c(r24)
    fctiwz f0, f0
    cmpwi r0, 0x64
    stfd f0, 0x10(r1)
    lwz r5, 0x14(r1)
    bge lbl_fn_80016C10_0000300C
    mr r4, r0
lbl_fn_80016C10_0000300C:
    slwi r0, r4, 2
    lwz r3, 0xc(r1)
    add r0, r0, r4
    add r0, r5, r0
    stwx r0, r3, r29
lbl_fn_80016C10_00003020:
    addi r27, r27, 0x1
lbl_fn_80016C10_00003024:
    lwz r0, 0x74(r30)
    cmpw r27, r0
    ble lbl_fn_80016C10_00002F48
    b lbl_fn_80016C10_000030D8
lbl_fn_80016C10_00003034:
    li r27, 0x1
    b lbl_fn_80016C10_000030CC
lbl_fn_80016C10_0000303C:
    subi r3, r27, 0x1
    lwz r0, 0x9c(r30)
    mulli r4, r3, 0x30
    add r3, r0, r4
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80016C10_000030C8
    lwz r3, 0x0(r26)
    lwz r0, 0x9c(r30)
    cmpwi r3, 0x0
    add r24, r0, r4
    beq lbl_fn_80016C10_00003088
    lwz r12, 0x4(r3)
    mr r4, r24
    addi r3, r26, 0x4
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    beq lbl_fn_80016C10_000030C8
lbl_fn_80016C10_00003088:
    lfs f0, 0x14(r24)
    li r4, 0x64
    lwz r0, 0x1c(r24)
    fctiwz f0, f0
    cmpwi r0, 0x64
    stfd f0, 0x10(r1)
    lwz r5, 0x14(r1)
    bge lbl_fn_80016C10_000030AC
    mr r4, r0
lbl_fn_80016C10_000030AC:
    slwi r3, r4, 2
    subi r0, r27, 0x1
    add r4, r3, r4
    lwz r3, 0xc(r1)
    slwi r0, r0, 2
    add r4, r5, r4
    stwx r4, r3, r0
lbl_fn_80016C10_000030C8:
    addi r27, r27, 0x1
lbl_fn_80016C10_000030CC:
    lwz r0, 0x74(r30)
    cmpw r27, r0
    ble lbl_fn_80016C10_0000303C
lbl_fn_80016C10_000030D8:
    lwz r0, 0x74(r30)
    li r6, 0x1
    lwz r3, 0xc(r1)
    mtctr r0
    cmpwi r0, 0x1
    blt lbl_fn_80016C10_00003120
lbl_fn_80016C10_000030F0:
    subi r5, r6, 0x1
    lwz r4, 0x9c(r30)
    mulli r0, r5, 0x30
    add r4, r4, r0
    lwz r0, 0x2c(r4)
    cmpwi r0, 0x0
    beq lbl_fn_80016C10_00003118
    slwi r0, r5, 2
    lwzx r0, r3, r0
    add r28, r28, r0
lbl_fn_80016C10_00003118:
    addi r6, r6, 0x1
    bdnz lbl_fn_80016C10_000030F0
lbl_fn_80016C10_00003120:
    cmpwi r28, 0x0
    bne lbl_fn_80016C10_00003148
    cmpwi r3, 0x0
    beq lbl_fn_80016C10_00003134
    bl fn_80084C24
lbl_fn_80016C10_00003134:
    li r0, 0x0
    stw r0, 0xc(r1)
    li r3, -0x1
    stw r0, 0x8(r1)
    b lbl_fn_80016C10_000031D0
lbl_fn_80016C10_00003148:
    bl fn_80680CF8
    divw r0, r3, r28
    lwz r4, 0x74(r30)
    lwz r5, 0xc(r1)
    li r7, 0x1
    mullw r0, r0, r28
    subf r6, r0, r3
    mtctr r4
    cmpwi r4, 0x1
    blt lbl_fn_80016C10_000031B0
lbl_fn_80016C10_00003170:
    subi r4, r7, 0x1
    lwz r3, 0x9c(r30)
    mulli r0, r4, 0x30
    add r3, r3, r0
    lwz r0, 0x2c(r3)
    cmpwi r0, 0x0
    beq lbl_fn_80016C10_000031A8
    slwi r0, r4, 2
    lwzx r0, r5, r0
    cmpw r6, r0
    bge lbl_fn_80016C10_000031A4
    mr r30, r7
    b lbl_fn_80016C10_000031B0
lbl_fn_80016C10_000031A4:
    subf r6, r0, r6
lbl_fn_80016C10_000031A8:
    addi r7, r7, 0x1
    bdnz lbl_fn_80016C10_00003170
lbl_fn_80016C10_000031B0:
    cmpwi r5, 0x0
    beq lbl_fn_80016C10_000031C0
    mr r3, r5
    bl fn_80084C24
lbl_fn_80016C10_000031C0:
    li r0, 0x0
    stw r0, 0xc(r1)
    mr r3, r30
    stw r0, 0x8(r1)
lbl_fn_80016C10_000031D0:
    addi r11, r1, 0x40
    bl _restgpr_24
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_80016F48(void)
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
    beq lbl_fn_80016F48_00003238
    lwz r3, 0x4(r3)
    cmpwi r3, 0x0
    beq lbl_fn_80016F48_0000321C
    bl fn_80084C24
lbl_fn_80016F48_0000321C:
    cmpwi r31, 0x0
    li r0, 0x0
    stw r0, 0x4(r30)
    stw r0, 0x0(r30)
    ble lbl_fn_80016F48_00003238
    mr r3, r30
    bl dtor_80084684
lbl_fn_80016F48_00003238:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80016FB4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    stw r31, 0xe0(r3)
    addi r3, r3, 0x458
    bl fn_8003E918
    stw r31, 0x48c(r30)
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_80016FB4_000032B0
    lwz r3, 0x48(r3)
    b lbl_fn_80016FB4_000032A8
lbl_fn_80016FB4_00003294:
    lwz r0, 0xf14(r3)
    stw r0, 0xf18(r3)
    stw r31, 0xf14(r3)
    stw r31, 0xd10(r3)
    lwz r3, 0x14ac(r3)
lbl_fn_80016FB4_000032A8:
    cmpwi r3, 0x0
    bne lbl_fn_80016FB4_00003294
lbl_fn_80016FB4_000032B0:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_80016FB4_000032E8
    lwz r5, 0x48(r3)
    li r3, 0x1
    li r0, 0x0
    b lbl_fn_80016FB4_000032E0
lbl_fn_80016FB4_000032CC:
    lwz r4, 0xf14(r5)
    stw r4, 0xf18(r5)
    stw r3, 0xf14(r5)
    stw r0, 0xd10(r5)
    lwz r5, 0x14ac(r5)
lbl_fn_80016FB4_000032E0:
    cmpwi r5, 0x0
    bne lbl_fn_80016FB4_000032CC
lbl_fn_80016FB4_000032E8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_80017060(void)
{
    nofralloc
    b fn_80016FB4
}

asm void fn_80017064(void)
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
    lwz r0, 0x55c(r4)
    cmpwi r0, 0x2
    beq lbl_fn_80017064_00003338
    li r3, 0x0
    b lbl_fn_80017064_000033AC
lbl_fn_80017064_00003338:
    lwz r0, 0x54c(r4)
    rlwinm r0, r0, 0, 18, 18
    cmplwi r0, 0x2000
    beq lbl_fn_80017064_00003354
    lwz r0, 0xc54(r4)
    cmpwi r0, 0x0
    bne lbl_fn_80017064_0000335C
lbl_fn_80017064_00003354:
    li r3, 0x0
    b lbl_fn_80017064_000033AC
lbl_fn_80017064_0000335C:
    li r3, 0x0
    li r31, 0x0
    b lbl_fn_80017064_000033A0
lbl_fn_80017064_00003368:
    lwz r0, 0x48(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80017064_00003390
    lwz r0, 0xc50(r30)
    cmpwi r0, 0x1
    bne lbl_fn_80017064_00003390
    mr r3, r29
    mr r4, r30
    bl fn_8001794C
    b lbl_fn_80017064_0000339C
lbl_fn_80017064_00003390:
    mr r3, r29
    mr r4, r30
    bl fn_80017128
lbl_fn_80017064_0000339C:
    addi r31, r31, 0x1
lbl_fn_80017064_000033A0:
    lwz r0, 0x98(r29)
    cmpw r31, r0
    blt lbl_fn_80017064_00003368
lbl_fn_80017064_000033AC:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}
