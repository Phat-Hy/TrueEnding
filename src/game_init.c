#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_25(void);
extern void _savegpr_25(void);
extern void fn_800DC880(void);

/* External data declarations */
extern u8 lbl_8072EE0C[];
extern u8 lbl_807704A0[];

/* Small data declarations */
extern u32 lbl_80880608;
extern u32 lbl_8088060C;
extern u32 lbl_80880610;
extern u32 lbl_80880614;
extern u32 lbl_80880618;
extern u32 lbl_8088061C;
extern u32 lbl_80880620;
extern u32 lbl_80880624;
extern u32 lbl_80880628;
extern u32 lbl_8088062C;
extern u32 lbl_80880630;
extern u32 lbl_80880634;
extern u32 lbl_80880638;
extern u32 lbl_8088063C;
extern u32 lbl_80880640;
extern u32 lbl_80880644;
extern u32 lbl_80880648;
extern u32 lbl_8088064C;
extern u32 lbl_80880650;
extern u32 lbl_80880654;
extern u32 lbl_80880658;
extern u32 lbl_8088065C;
extern u32 lbl_80880660;

/* Function declarations */
void fn_800082AC(void);

asm void fn_800082AC(void)
{
    nofralloc
    stwu r1, -0x320(r1)
    mflr r0
    stw r0, 0x324(r1)
    addi r11, r1, 0x320
    bl _savegpr_25
    lis r25, lbl_807704A0@ha
    lis r27, lbl_8072EE0C@ha
    addi r25, r25, lbl_807704A0@l
    li r4, 0x0
    addi r3, r27, lbl_8072EE0C@l
    bl fn_800DC880
    addi r28, r25, 0x0
    li r26, 0x0
    stw r3, 0x4(r28)
    addi r27, r27, lbl_8072EE0C@l
    addi r3, r27, 0x5
    li r4, 0x0
    stw r26, 0xc(r28)
    bl fn_800DC880
    stw r3, 0x1c(r28)
    addi r3, r27, 0x11
    li r4, 0x0
    stw r26, 0x24(r28)
    bl fn_800DC880
    stw r3, 0x34(r28)
    addi r3, r27, 0x1b
    li r4, 0x0
    stw r26, 0x3c(r28)
    bl fn_800DC880
    stw r3, 0x4c(r28)
    addi r3, r27, 0x24
    li r4, 0x0
    stw r26, 0x54(r28)
    bl fn_800DC880
    stw r3, 0x64(r28)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x6c(r28)
    bl fn_800DC880
    addi r28, r25, 0x78
    li r4, 0x0
    stw r3, 0x4(r28)
    addi r3, r27, 0x31
    stw r26, 0xc(r28)
    bl fn_800DC880
    stw r3, 0x1c(r28)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0x24(r28)
    bl fn_800DC880
    stw r3, 0x34(r28)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x3c(r28)
    bl fn_800DC880
    stw r3, 0x4c(r28)
    addi r3, r27, 0x45
    li r4, 0x0
    stw r26, 0x54(r28)
    bl fn_800DC880
    stw r3, 0x64(r28)
    addi r3, r27, 0x4e
    li r4, 0x0
    stw r26, 0x6c(r28)
    bl fn_800DC880
    stw r3, 0x7c(r28)
    addi r3, r27, 0x57
    li r4, 0x0
    stw r26, 0x84(r28)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2f8(r1)
    lwz r0, 0x2f8(r1)
    stw r3, 0x94(r28)
    addi r3, r27, 0x5d
    stw r0, 0x9c(r28)
    bl fn_800DC880
    stw r3, 0xac(r28)
    addi r3, r27, 0x65
    li r4, 0x0
    stw r26, 0xb4(r28)
    bl fn_800DC880
    stw r3, 0xc4(r28)
    addi r3, r27, 0x6b
    li r4, 0x0
    stw r26, 0xcc(r28)
    bl fn_800DC880
    stw r3, 0xdc(r28)
    addi r3, r27, 0x71
    li r4, 0x0
    stw r26, 0xe4(r28)
    bl fn_800DC880
    stw r3, 0xf4(r28)
    addi r3, r27, 0x77
    li r4, 0x0
    stw r26, 0xfc(r28)
    bl fn_800DC880
    stw r3, 0x10c(r28)
    addi r3, r27, 0x7c
    li r4, 0x0
    stw r26, 0x114(r28)
    bl fn_800DC880
    stw r3, 0x124(r28)
    addi r3, r27, 0x85
    li r4, 0x0
    stw r26, 0x12c(r28)
    bl fn_800DC880
    stw r3, 0x13c(r28)
    addi r3, r27, 0x93
    li r4, 0x0
    stw r26, 0x144(r28)
    bl fn_800DC880
    stw r3, 0x154(r28)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x15c(r28)
    bl fn_800DC880
    addi r29, r25, 0x1e0
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0xa1
    stw r26, 0xc(r29)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2f4(r1)
    lwz r0, 0x2f4(r1)
    stw r3, 0x1c(r29)
    addi r3, r27, 0xa7
    stw r0, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    li r28, 0x1
    addi r3, r27, 0x7c
    li r4, 0x0
    stw r28, 0x3c(r29)
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x54(r29)
    bl fn_800DC880
    addi r30, r25, 0x240
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xac
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    li r29, -0x1
    addi r3, r27, 0xb3
    li r4, 0x0
    stw r29, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0xba
    li r4, 0x0
    stw r29, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0xc1
    li r4, 0x0
    stw r29, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r29, 0x6c(r30)
    bl fn_800DC880
    addi r30, r25, 0x2b8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x7c
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xc9
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    addi r30, r25, 0x2e8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x2e
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xcd
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2f0(r1)
    lwz r0, 0x2f0(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0xd3
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2ec(r1)
    lwz r0, 0x2ec(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0xda
    stw r0, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0xe1
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0xe7
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x7c
    li r4, 0x0
    stw r29, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0xb4(r30)
    bl fn_800DC880
    addi r30, r25, 0x3a8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xed
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x31
    li r4, 0x0
    stw r28, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x45
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x4e
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0xf0
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2e8(r1)
    lwz r0, 0x2e8(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0xf7
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2e4(r1)
    lwz r0, 0x2e4(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0xfe
    stw r0, 0xcc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2e0(r1)
    lwz r0, 0x2e0(r1)
    stw r3, 0xdc(r30)
    addi r3, r27, 0x104
    stw r0, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x10b
    li r4, 0x0
    stw r28, 0xfc(r30)
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x114(r30)
    bl fn_800DC880
    addi r30, r25, 0x4c8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xf0
    stw r26, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2dc(r1)
    lwz r0, 0x2dc(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x113
    stw r0, 0x24(r30)
    bl fn_800DC880
    addi r30, r25, 0x4f8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x588
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x13b
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0xf0
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2d8(r1)
    lwz r0, 0x2d8(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0xf7
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2d4(r1)
    lwz r0, 0x2d4(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0xfe
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2d0(r1)
    lwz r0, 0x2d0(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    stw r0, 0x84(r30)
    bl fn_800DC880
    addi r30, r25, 0x618
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x13b
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x6a8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x140
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x738
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x140
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x7c8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x140
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0xf7
    li r4, 0x0
    bl fn_800DC880
    addi r5, r25, 0x870
    li r4, 0x0
    stw r3, 0x4(r5)
    addi r3, r27, 0x2e
    stw r28, 0xc(r5)
    bl fn_800DC880
    addi r30, r25, 0x888
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xed
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x31
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x45
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x4e
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0xf0
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2cc(r1)
    lwz r0, 0x2cc(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0xf7
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2c8(r1)
    lwz r0, 0x2c8(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0xfe
    stw r0, 0xcc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2c4(r1)
    lwz r0, 0x2c4(r1)
    stw r3, 0xdc(r30)
    addi r3, r27, 0x104
    stw r0, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x147
    li r4, 0x0
    stw r28, 0xfc(r30)
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    stw r28, 0x114(r30)
    bl fn_800DC880
    addi r30, r25, 0x9a8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0xa50
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x2e
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xf0
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2c0(r1)
    lwz r0, 0x2c0(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x153
    stw r0, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x15b
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x162
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x169
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    addi r30, r25, 0xaf8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x172
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0xba8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x178
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xa7
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0xf0
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2bc(r1)
    lwz r0, 0x2bc(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x113
    stw r0, 0x54(r30)
    bl fn_800DC880
    addi r30, r25, 0xc08
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0xce0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x18b
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r29, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0xdb8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x18b
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x191
    li r4, 0x0
    stw r29, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x19e
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2b8(r1)
    lwz r0, 0x2b8(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x1ba
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2b4(r1)
    lwz r0, 0x2b4(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x1ca
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x2b0(r1)
    lwz r0, 0x2b0(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x1da
    stw r0, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880610
    li r4, 0x0
    stfs f0, 0x2ac(r1)
    lwz r0, 0x2ac(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    stw r0, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0xe90
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x1e1
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x1e5
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x1ec
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x1f2
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x18b
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x1f8
    li r4, 0x0
    stw r29, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0xf68
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x200
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x207
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x1ec
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x1f2
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x18b
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x1f8
    li r4, 0x0
    stw r29, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x207
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x1050
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x210
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xe7
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    addi r30, r25, 0x1080
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x216
    stw r29, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880614
    li r4, 0x0
    stfs f0, 0x2a8(r1)
    lwz r0, 0x2a8(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x21b
    stw r0, 0x24(r30)
    bl fn_800DC880
    addi r30, r25, 0x10b0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x220
    stw r29, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x226
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_80880618
    li r4, 0x0
    stfs f0, 0x2a4(r1)
    lwz r0, 0x2a4(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x22c
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880618
    li r4, 0x0
    stfs f0, 0x2a0(r1)
    lwz r0, 0x2a0(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x232
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_80880618
    li r4, 0x0
    stfs f0, 0x29c(r1)
    lwz r0, 0x29c(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0xe7
    stw r0, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x21b
    li r4, 0x0
    stw r29, 0x84(r30)
    bl fn_800DC880
    addi r30, r25, 0x1140
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xe7
    stw r29, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x191
    li r4, 0x0
    stw r29, 0x24(r30)
    bl fn_800DC880
    addi r30, r25, 0x1170
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x19e
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x298(r1)
    lwz r0, 0x298(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x1ba
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x294(r1)
    lwz r0, 0x294(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x1ca
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x290(r1)
    lwz r0, 0x290(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x178
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x28c(r1)
    lwz r0, 0x28c(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x238
    stw r0, 0x84(r30)
    bl fn_800DC880
    addi r30, r25, 0x1200
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x191
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x19e
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x288(r1)
    lwz r0, 0x288(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x1ba
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x284(r1)
    lwz r0, 0x284(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x1ca
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x280(r1)
    lwz r0, 0x280(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x1da
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x27c(r1)
    lwz r0, 0x27c(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0xe7
    stw r0, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x191
    li r4, 0x0
    stw r29, 0xb4(r30)
    bl fn_800DC880
    addi r30, r25, 0x12c0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x19e
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x278(r1)
    lwz r0, 0x278(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x1ba
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x274(r1)
    lwz r0, 0x274(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x1ca
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x270(r1)
    lwz r0, 0x270(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x226
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x26c(r1)
    lwz r0, 0x26c(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x22c
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x268(r1)
    lwz r0, 0x268(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x232
    stw r0, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x264(r1)
    lwz r0, 0x264(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x23f
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088061C
    li r4, 0x0
    stfs f0, 0x260(r1)
    lwz r0, 0x260(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0x246
    stw r0, 0xcc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880620
    li r4, 0x0
    stfs f0, 0x25c(r1)
    lwz r0, 0x25c(r1)
    stw r3, 0xdc(r30)
    addi r3, r27, 0xe7
    stw r0, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0xe7
    li r4, 0x0
    stw r29, 0xfc(r30)
    bl fn_800DC880
    addi r5, r25, 0x13c8
    li r4, 0x0
    stw r3, 0x4(r5)
    addi r3, r27, 0x24c
    stw r29, 0xc(r5)
    bl fn_800DC880
    addi r5, r25, 0x13e0
    li r4, 0x0
    stw r3, 0x4(r5)
    addi r3, r27, 0x257
    stw r26, 0xc(r5)
    bl fn_800DC880
    addi r30, r25, 0x13f8
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x25e
    stw r26, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x258(r1)
    lwz r0, 0x258(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x262
    stw r0, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x254(r1)
    lwz r0, 0x254(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x266
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x250(r1)
    lwz r0, 0x250(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x26a
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x24c(r1)
    lwz r0, 0x24c(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x26e
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x248(r1)
    lwz r0, 0x248(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x272
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x244(r1)
    lwz r0, 0x244(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x276
    stw r0, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x240(r1)
    lwz r0, 0x240(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x27a
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x23c(r1)
    lwz r0, 0x23c(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0x27e
    stw r0, 0xcc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x238(r1)
    lwz r0, 0x238(r1)
    stw r3, 0xdc(r30)
    addi r3, r27, 0x282
    stw r0, 0xe4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x234(r1)
    lwz r0, 0x234(r1)
    stw r3, 0xf4(r30)
    addi r3, r27, 0x288
    stw r0, 0xfc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x230(r1)
    lwz r0, 0x230(r1)
    stw r3, 0x10c(r30)
    addi r3, r27, 0x28e
    stw r0, 0x114(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x22c(r1)
    lwz r0, 0x22c(r1)
    stw r3, 0x124(r30)
    addi r3, r27, 0x140
    stw r0, 0x12c(r30)
    bl fn_800DC880
    addi r31, r25, 0x1530
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x238
    stw r28, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0xcd
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    lfs f0, lbl_80880624
    li r4, 0x0
    stfs f0, 0x228(r1)
    lwz r0, 0x228(r1)
    stw r3, 0x34(r31)
    addi r3, r27, 0x294
    stw r0, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880628
    li r4, 0x0
    stfs f0, 0x224(r1)
    lwz r0, 0x224(r1)
    stw r3, 0x4c(r31)
    addi r3, r27, 0x29a
    stw r0, 0x54(r31)
    bl fn_800DC880
    lfs f0, lbl_8088062C
    li r4, 0x0
    stfs f0, 0x220(r1)
    lwz r0, 0x220(r1)
    stw r3, 0x64(r31)
    addi r3, r27, 0x2a0
    stw r0, 0x6c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880630
    li r4, 0x0
    stfs f0, 0x21c(r1)
    lwz r0, 0x21c(r1)
    stw r3, 0x7c(r31)
    addi r3, r27, 0x2a7
    stw r0, 0x84(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x218(r1)
    lwz r0, 0x218(r1)
    stw r3, 0x94(r31)
    addi r3, r27, 0xe7
    stw r0, 0x9c(r31)
    bl fn_800DC880
    stw r3, 0xac(r31)
    lis r30, 0xff00
    addi r3, r27, 0x2b0
    li r4, 0x0
    stw r30, 0xb4(r31)
    bl fn_800DC880
    lfs f0, lbl_80880634
    li r4, 0x0
    stfs f0, 0x214(r1)
    lwz r0, 0x214(r1)
    stw r3, 0xc4(r31)
    addi r3, r27, 0x2b6
    stw r0, 0xcc(r31)
    bl fn_800DC880
    addi r31, r25, 0x1608
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x2bd
    stw r29, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x2c4
    li r4, 0x0
    stw r29, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x2cb
    li r4, 0x0
    stw r29, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x2d2
    li r4, 0x0
    stw r29, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x2d9
    li r4, 0x0
    stw r29, 0x6c(r31)
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x2e0
    li r4, 0x0
    stw r29, 0x84(r31)
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x2e7
    li r4, 0x0
    stw r29, 0x9c(r31)
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x2ee
    li r4, 0x0
    stw r29, 0xb4(r31)
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x2f5
    li r4, 0x0
    stw r29, 0xcc(r31)
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x2fc
    li r4, 0x0
    stw r29, 0xe4(r31)
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x303
    li r4, 0x0
    stw r29, 0xfc(r31)
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x30a
    li r4, 0x0
    stw r29, 0x114(r31)
    bl fn_800DC880
    addi r5, r25, 0x1728
    li r4, 0x0
    stw r3, 0x4(r5)
    addi r3, r27, 0xa1
    stw r26, 0xc(r5)
    bl fn_800DC880
    lfs f0, lbl_80880608
    addi r5, r25, 0x1740
    stfs f0, 0x210(r1)
    li r4, 0x0
    lwz r0, 0x210(r1)
    stw r3, 0x4(r5)
    addi r3, r27, 0x312
    stw r0, 0xc(r5)
    bl fn_800DC880
    addi r5, r25, 0x1758
    li r4, 0x0
    stw r3, 0x4(r5)
    addi r3, r27, 0x325
    stw r26, 0xc(r5)
    bl fn_800DC880
    addi r31, r25, 0x1770
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x118
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x325
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x18f0
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x368
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x377
    li r4, 0x0
    stw r26, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x385
    li r4, 0x0
    stw r26, 0x6c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x20c(r1)
    lwz r0, 0x20c(r1)
    stw r3, 0x7c(r31)
    addi r3, r27, 0x397
    stw r0, 0x84(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x208(r1)
    lwz r0, 0x208(r1)
    stw r3, 0x94(r31)
    addi r3, r27, 0x3a9
    stw r0, 0x9c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x204(r1)
    lwz r0, 0x204(r1)
    stw r3, 0xac(r31)
    addi r3, r27, 0x191
    stw r0, 0xb4(r31)
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x19e
    li r4, 0x0
    stw r26, 0xcc(r31)
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0xe4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x200(r1)
    lwz r0, 0x200(r1)
    stw r3, 0xf4(r31)
    addi r3, r27, 0x1ba
    stw r0, 0xfc(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1fc(r1)
    lwz r0, 0x1fc(r1)
    stw r3, 0x10c(r31)
    addi r3, r27, 0x1ca
    stw r0, 0x114(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1f8(r1)
    lwz r0, 0x1f8(r1)
    stw r3, 0x124(r31)
    addi r3, r27, 0x3bb
    stw r0, 0x12c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1f4(r1)
    lwz r0, 0x1f4(r1)
    stw r3, 0x13c(r31)
    addi r3, r27, 0x3c6
    stw r0, 0x144(r31)
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x3cf
    li r4, 0x0
    stw r26, 0x15c(r31)
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x325
    li r4, 0x0
    stw r26, 0x174(r31)
    bl fn_800DC880
    addi r31, r25, 0x1a70
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x368
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x377
    li r4, 0x0
    stw r26, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x385
    li r4, 0x0
    stw r26, 0x6c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1f0(r1)
    lwz r0, 0x1f0(r1)
    stw r3, 0x7c(r31)
    addi r3, r27, 0x397
    stw r0, 0x84(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1ec(r1)
    lwz r0, 0x1ec(r1)
    stw r3, 0x94(r31)
    addi r3, r27, 0x3a9
    stw r0, 0x9c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1e8(r1)
    lwz r0, 0x1e8(r1)
    stw r3, 0xac(r31)
    addi r3, r27, 0x3d8
    stw r0, 0xb4(r31)
    bl fn_800DC880
    lfs f0, lbl_80880638
    li r4, 0x0
    stfs f0, 0x1e4(r1)
    lwz r0, 0x1e4(r1)
    stw r3, 0xc4(r31)
    addi r3, r27, 0x3e0
    stw r0, 0xcc(r31)
    bl fn_800DC880
    lfs f0, lbl_8088063C
    li r4, 0x0
    stfs f0, 0x1e0(r1)
    lwz r0, 0x1e0(r1)
    stw r3, 0xdc(r31)
    addi r3, r27, 0x3e8
    stw r0, 0xe4(r31)
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x7c
    li r4, 0x0
    stw r26, 0xfc(r31)
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x3c6
    li r4, 0x0
    stw r26, 0x114(r31)
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x3f0
    li r4, 0x0
    stw r26, 0x12c(r31)
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    stw r26, 0x144(r31)
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x325
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x1bf0
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x191
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x19e
    li r4, 0x0
    stw r26, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x6c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1dc(r1)
    lwz r0, 0x1dc(r1)
    stw r3, 0x7c(r31)
    addi r3, r27, 0x1ba
    stw r0, 0x84(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1d8(r1)
    lwz r0, 0x1d8(r1)
    stw r3, 0x94(r31)
    addi r3, r27, 0x1ca
    stw r0, 0x9c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1d4(r1)
    lwz r0, 0x1d4(r1)
    stw r3, 0xac(r31)
    addi r3, r27, 0x3bb
    stw r0, 0xb4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1d0(r1)
    lwz r0, 0x1d0(r1)
    stw r3, 0xc4(r31)
    addi r3, r27, 0x3f8
    stw r0, 0xcc(r31)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x1cc(r1)
    lwz r0, 0x1cc(r1)
    stw r3, 0xdc(r31)
    addi r3, r27, 0x3c6
    stw r0, 0xe4(r31)
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    stw r26, 0xfc(r31)
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x325
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x1d70
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x3c6
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r26, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x325
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x1ef0
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x401
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x40a
    li r4, 0x0
    stw r29, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x191
    li r4, 0x0
    stw r29, 0x6c(r31)
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x19e
    li r4, 0x0
    stw r26, 0x84(r31)
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x9c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1c8(r1)
    lwz r0, 0x1c8(r1)
    stw r3, 0xac(r31)
    addi r3, r27, 0x1ba
    stw r0, 0xb4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1c4(r1)
    lwz r0, 0x1c4(r1)
    stw r3, 0xc4(r31)
    addi r3, r27, 0x1ca
    stw r0, 0xcc(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1c0(r1)
    lwz r0, 0x1c0(r1)
    stw r3, 0xdc(r31)
    addi r3, r27, 0x3bb
    stw r0, 0xe4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1bc(r1)
    lwz r0, 0x1bc(r1)
    stw r3, 0xf4(r31)
    addi r3, r27, 0x3cf
    stw r0, 0xfc(r31)
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x3c6
    li r4, 0x0
    stw r26, 0x114(r31)
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    stw r26, 0x12c(r31)
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x325
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2070
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x32a
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x401
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x40a
    li r4, 0x0
    stw r29, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x191
    li r4, 0x0
    stw r29, 0x6c(r31)
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x19e
    li r4, 0x0
    stw r26, 0x84(r31)
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x1aa
    li r4, 0x0
    stw r26, 0x9c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1b8(r1)
    lwz r0, 0x1b8(r1)
    stw r3, 0xac(r31)
    addi r3, r27, 0x1ba
    stw r0, 0xb4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1b4(r1)
    lwz r0, 0x1b4(r1)
    stw r3, 0xc4(r31)
    addi r3, r27, 0x1ca
    stw r0, 0xcc(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1b0(r1)
    lwz r0, 0x1b0(r1)
    stw r3, 0xdc(r31)
    addi r3, r27, 0x3bb
    stw r0, 0xe4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1ac(r1)
    lwz r0, 0x1ac(r1)
    stw r3, 0xf4(r31)
    addi r3, r27, 0x3cf
    stw r0, 0xfc(r31)
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0xa1
    li r4, 0x0
    stw r26, 0x114(r31)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x1a8(r1)
    lwz r0, 0x1a8(r1)
    stw r3, 0x124(r31)
    addi r3, r27, 0x413
    stw r0, 0x12c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880640
    li r4, 0x0
    stfs f0, 0x1a4(r1)
    lwz r0, 0x1a4(r1)
    stw r3, 0x13c(r31)
    addi r3, r27, 0x3c6
    stw r0, 0x144(r31)
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    stw r26, 0x15c(r31)
    bl fn_800DC880
    stw r3, 0x16c(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2208
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x118
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2370
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x216
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x57
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x1a0(r1)
    lwz r0, 0x1a0(r1)
    stw r3, 0x34(r31)
    addi r3, r27, 0x421
    stw r0, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x19c(r1)
    lwz r0, 0x19c(r1)
    stw r3, 0x4c(r31)
    addi r3, r27, 0x12d
    stw r0, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x24d8
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x427
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0xe7
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x42d
    li r4, 0x0
    stw r29, 0x3c(r31)
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x433
    li r4, 0x0
    stw r26, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x439
    li r4, 0x0
    stw r26, 0x6c(r31)
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x43f
    li r4, 0x0
    stw r26, 0x84(r31)
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x446
    li r4, 0x0
    stw r26, 0x9c(r31)
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x44d
    li r4, 0x0
    stw r26, 0xb4(r31)
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x454
    li r4, 0x0
    stw r26, 0xcc(r31)
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    stw r28, 0xe4(r31)
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2640
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x45d
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x468
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x471
    li r4, 0x0
    stw r26, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880644
    li r4, 0x0
    stfs f0, 0x198(r1)
    lwz r0, 0x198(r1)
    stw r3, 0x4c(r31)
    addi r3, r27, 0x47b
    stw r0, 0x54(r31)
    bl fn_800DC880
    lfs f0, lbl_80880648
    li r4, 0x0
    stfs f0, 0x194(r1)
    lwz r0, 0x194(r1)
    stw r3, 0x64(r31)
    addi r3, r27, 0x483
    stw r0, 0x6c(r31)
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    stw r29, 0x84(r31)
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x27a8
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x118
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2910
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0xe7
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x246
    li r4, 0x0
    stw r29, 0x24(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x190(r1)
    lwz r0, 0x190(r1)
    stw r3, 0x34(r31)
    addi r3, r27, 0x57
    stw r0, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x18c(r1)
    lwz r0, 0x18c(r1)
    stw r3, 0x4c(r31)
    addi r3, r27, 0x48d
    stw r0, 0x54(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x188(r1)
    lwz r0, 0x188(r1)
    stw r3, 0x64(r31)
    addi r3, r27, 0x134
    stw r0, 0x6c(r31)
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2a78
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x140
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x492
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    lfs f0, lbl_8088064C
    li r4, 0x0
    stfs f0, 0x184(r1)
    lwz r0, 0x184(r1)
    stw r3, 0x34(r31)
    addi r3, r27, 0x497
    stw r0, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x180(r1)
    lwz r0, 0x180(r1)
    stw r3, 0x4c(r31)
    addi r3, r27, 0x12d
    stw r0, 0x54(r31)
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r31, r25, 0x2be0
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0x140
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x497
    li r4, 0x0
    stw r26, 0x24(r31)
    bl fn_800DC880
    lfs f0, lbl_80880650
    li r4, 0x0
    stfs f0, 0x17c(r1)
    lwz r0, 0x17c(r1)
    stw r3, 0x34(r31)
    addi r3, r27, 0x49c
    stw r0, 0x3c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880610
    li r4, 0x0
    stfs f0, 0x178(r1)
    lwz r0, 0x178(r1)
    stw r3, 0x4c(r31)
    addi r3, r27, 0x4a4
    stw r0, 0x54(r31)
    bl fn_800DC880
    lfs f0, lbl_80880654
    li r4, 0x0
    stfs f0, 0x174(r1)
    lwz r0, 0x174(r1)
    stw r3, 0x64(r31)
    addi r3, r27, 0x4ac
    stw r0, 0x6c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x170(r1)
    lwz r0, 0x170(r1)
    stw r3, 0x7c(r31)
    addi r3, r27, 0x4b5
    stw r0, 0x84(r31)
    bl fn_800DC880
    lfs f0, lbl_80880658
    li r4, 0x0
    stfs f0, 0x16c(r1)
    lwz r0, 0x16c(r1)
    stw r3, 0x94(r31)
    addi r3, r27, 0x4be
    stw r0, 0x9c(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x168(r1)
    lwz r0, 0x168(r1)
    stw r3, 0xac(r31)
    addi r3, r27, 0x4c9
    stw r0, 0xb4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088065C
    li r4, 0x0
    stfs f0, 0x164(r1)
    lwz r0, 0x164(r1)
    stw r3, 0xc4(r31)
    addi r3, r27, 0x4d4
    stw r0, 0xcc(r31)
    bl fn_800DC880
    lfs f0, lbl_8088062C
    li r4, 0x0
    stfs f0, 0x160(r1)
    lwz r0, 0x160(r1)
    stw r3, 0xdc(r31)
    addi r3, r27, 0x4db
    stw r0, 0xe4(r31)
    bl fn_800DC880
    lfs f0, lbl_8088065C
    li r4, 0x0
    stfs f0, 0x15c(r1)
    lwz r0, 0x15c(r1)
    stw r3, 0xf4(r31)
    addi r3, r27, 0x4e2
    stw r0, 0xfc(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x158(r1)
    lwz r0, 0x158(r1)
    stw r3, 0x10c(r31)
    addi r3, r27, 0x4e9
    stw r0, 0x114(r31)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x154(r1)
    lwz r0, 0x154(r1)
    stw r3, 0x124(r31)
    addi r3, r27, 0x4f0
    stw r0, 0x12c(r31)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x150(r1)
    lwz r0, 0x150(r1)
    stw r3, 0x13c(r31)
    addi r3, r27, 0x4f7
    stw r0, 0x144(r31)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x14c(r1)
    lwz r0, 0x14c(r1)
    stw r3, 0x154(r31)
    addi r3, r27, 0x113
    stw r0, 0x15c(r31)
    bl fn_800DC880
    addi r31, r25, 0x2d48
    li r4, 0x0
    stw r3, 0x4(r31)
    addi r3, r27, 0xe7
    stw r26, 0xc(r31)
    bl fn_800DC880
    stw r3, 0x1c(r31)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r30, 0x24(r31)
    bl fn_800DC880
    stw r3, 0x34(r31)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r31)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r31)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r31)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r31)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r31)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r31)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r31)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r31)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r31)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r31)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r31)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r31)
    addi r3, r27, 0x4fe
    li r4, 0x0
    bl fn_800DC880
    lfs f0, lbl_8088060C
    addi r30, r25, 0x2ed0
    stfs f0, 0x148(r1)
    li r4, 0x0
    lwz r0, 0x148(r1)
    stw r3, 0x4(r30)
    addi r3, r27, 0x504
    stw r0, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x144(r1)
    lwz r0, 0x144(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x50a
    stw r0, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x140(r1)
    lwz r0, 0x140(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x510
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x13c(r1)
    lwz r0, 0x13c(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x518
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x138(r1)
    lwz r0, 0x138(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x51e
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x134(r1)
    lwz r0, 0x134(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x524
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x130(r1)
    lwz r0, 0x130(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x52a
    stw r0, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x12c(r1)
    lwz r0, 0x12c(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x532
    stw r0, 0xb4(r30)
    bl fn_800DC880
    addi r30, r25, 0x2f90
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x538
    stw r26, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x128(r1)
    lwz r0, 0x128(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x53c
    stw r0, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x124(r1)
    lwz r0, 0x124(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x543
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x120(r1)
    lwz r0, 0x120(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x54d
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x11c(r1)
    lwz r0, 0x11c(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x140
    stw r0, 0x6c(r30)
    bl fn_800DC880
    addi r30, r25, 0x3008
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x556
    stw r28, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088061C
    li r4, 0x0
    stfs f0, 0x118(r1)
    lwz r0, 0x118(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x560
    stw r0, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_80880644
    li r4, 0x0
    stfs f0, 0x114(r1)
    lwz r0, 0x114(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x568
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880660
    li r4, 0x0
    stfs f0, 0x110(r1)
    lwz r0, 0x110(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x573
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x10c(r1)
    lwz r0, 0x10c(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x57c
    stw r0, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    li r0, 0x2
    addi r3, r27, 0x585
    li r4, 0x0
    stw r0, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    addi r30, r25, 0x30b0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xa1
    stw r26, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x108(r1)
    lwz r0, 0x108(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x58f
    stw r0, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x104(r1)
    lwz r0, 0x104(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x2a7
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x100(r1)
    lwz r0, 0x100(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x413
    stw r0, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x595
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    addi r30, r25, 0x3140
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x59c
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x5a4
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x5ac
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x5b4
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x1f2
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    li r0, 0x1e
    addi r3, r27, 0x5bc
    li r4, 0x0
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    addi r30, r25, 0x31d0
    stfs f0, 0xfc(r1)
    li r4, 0x0
    lwz r0, 0xfc(r1)
    stw r3, 0x4(r30)
    addi r3, r27, 0x5c2
    stw r0, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0xf8(r1)
    lwz r0, 0xf8(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x31
    stw r0, 0x24(r30)
    bl fn_800DC880
    addi r30, r25, 0x3200
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x5c8
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x5cd
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x5d5
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x5dd
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x2e
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    addi r30, r25, 0x3278
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x5e3
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x178
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x5e8
    li r4, 0x0
    stw r28, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0xe7
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x5ee
    li r4, 0x0
    stw r29, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0xa1
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_80880640
    li r4, 0x0
    stfs f0, 0xf4(r1)
    lwz r0, 0xf4(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x113
    stw r0, 0x9c(r30)
    bl fn_800DC880
    addi r30, r25, 0x3320
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3428
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x5f5
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x45
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x4e
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x3f8
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0xf0(r1)
    lwz r0, 0xf0(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x5fc
    stw r0, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3530
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x5f5
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x45
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x4e
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x3f8
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0xec(r1)
    lwz r0, 0xec(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x5fc
    stw r0, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3638
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x601
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x606
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x60e
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x613
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x61b
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x620
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x629
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x62f
    li r4, 0x0
    stw r26, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x341
    li r4, 0x0
    stw r26, 0xcc(r30)
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3750
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r30)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r30)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r30)
    addi r3, r27, 0x638
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r30)
    addi r3, r27, 0x640
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x184(r30)
    addi r3, r27, 0x648
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x19c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3900
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x650
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xe8(r1)
    lwz r0, 0xe8(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x45
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xe4(r1)
    lwz r0, 0xe4(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x4e
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xe0(r1)
    lwz r0, 0xe0(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x659
    stw r0, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x663
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xdc(r1)
    lwz r0, 0xdc(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x669
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xd8(r1)
    lwz r0, 0xd8(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0x675
    stw r0, 0xcc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xd4(r1)
    lwz r0, 0xd4(r1)
    stw r3, 0xdc(r30)
    addi r3, r27, 0x67b
    stw r0, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x685
    li r4, 0x0
    stw r26, 0xfc(r30)
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x68c
    li r4, 0x0
    stw r26, 0x114(r30)
    bl fn_800DC880
    stw r3, 0x124(r30)
    addi r3, r27, 0x695
    li r4, 0x0
    stw r26, 0x12c(r30)
    bl fn_800DC880
    stw r3, 0x13c(r30)
    addi r3, r27, 0x69e
    li r4, 0x0
    stw r26, 0x144(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xd0(r1)
    lwz r0, 0xd0(r1)
    stw r3, 0x154(r30)
    addi r3, r27, 0x6a5
    stw r0, 0x15c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xcc(r1)
    lwz r0, 0xcc(r1)
    stw r3, 0x16c(r30)
    addi r3, r27, 0x6ac
    stw r0, 0x174(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xc8(r1)
    lwz r0, 0xc8(r1)
    stw r3, 0x184(r30)
    addi r3, r27, 0x335
    stw r0, 0x18c(r30)
    bl fn_800DC880
    stw r3, 0x19c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    stw r26, 0x1a4(r30)
    bl fn_800DC880
    addi r30, r25, 0x3ab0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x6b3
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x685
    li r4, 0x0
    stw r29, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x68c
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x695
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x14c
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x17d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x184
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x341
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r30)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r30)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r30)
    addi r3, r27, 0x638
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r30)
    addi r3, r27, 0x640
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x184(r30)
    addi r3, r27, 0x648
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x19c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3c60
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x650
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xc4(r1)
    lwz r0, 0xc4(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x45
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xc0(r1)
    lwz r0, 0xc0(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x4e
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xbc(r1)
    lwz r0, 0xbc(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x659
    stw r0, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x685
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x68c
    li r4, 0x0
    stw r26, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x695
    li r4, 0x0
    stw r26, 0xcc(r30)
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x350
    li r4, 0x0
    stw r26, 0xfc(r30)
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r30)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r30)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r30)
    addi r3, r27, 0x638
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r30)
    addi r3, r27, 0x640
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x184(r30)
    addi r3, r27, 0x648
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x19c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3e10
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x650
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x663
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xb8(r1)
    lwz r0, 0xb8(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x669
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xb4(r1)
    lwz r0, 0xb4(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x675
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xb0(r1)
    lwz r0, 0xb0(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x67b
    stw r0, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x69e
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xac(r1)
    lwz r0, 0xac(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x6a5
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xa8(r1)
    lwz r0, 0xa8(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0x6ac
    stw r0, 0xcc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xa4(r1)
    lwz r0, 0xa4(r1)
    stw r3, 0xdc(r30)
    addi r3, r27, 0x348
    stw r0, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x350
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x358
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x124(r30)
    addi r3, r27, 0x360
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x13c(r30)
    addi r3, r27, 0x419
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x154(r30)
    addi r3, r27, 0x638
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x16c(r30)
    addi r3, r27, 0x640
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x184(r30)
    addi r3, r27, 0x648
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x19c(r30)
    addi r3, r27, 0x32a
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x3fd0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x6b8
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xa1
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0xa0(r1)
    lwz r0, 0xa0(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x413
    stw r0, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0xa7
    li r4, 0x0
    stw r26, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x6bf
    li r4, 0x0
    stw r28, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x6c8
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x6cf
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x9c(r1)
    lwz r0, 0x9c(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x6d8
    stw r0, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x6e1
    li r4, 0x0
    stw r26, 0xcc(r30)
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x6e9
    li r4, 0x0
    stw r28, 0xe4(r30)
    bl fn_800DC880
    stw r3, 0xf4(r30)
    addi r3, r27, 0x6f4
    li r4, 0x0
    stw r28, 0xfc(r30)
    bl fn_800DC880
    stw r3, 0x10c(r30)
    addi r3, r27, 0x6b8
    li r4, 0x0
    stw r28, 0x114(r30)
    bl fn_800DC880
    addi r30, r25, 0x40f0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xa1
    stw r26, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x98(r1)
    lwz r0, 0x98(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x413
    stw r0, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0xa7
    li r4, 0x0
    stw r26, 0x3c(r30)
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x6ff
    li r4, 0x0
    stw r28, 0x54(r30)
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x704
    li r4, 0x0
    stw r26, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x709
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    stw r3, 0x94(r30)
    addi r3, r27, 0x70e
    li r4, 0x0
    stw r26, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x94(r1)
    lwz r0, 0x94(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x31
    stw r0, 0xb4(r30)
    bl fn_800DC880
    addi r30, r25, 0x41b0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x37
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x3c
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x90(r1)
    lwz r0, 0x90(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x45
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x8c(r1)
    lwz r0, 0x8c(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x4e
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x88(r1)
    lwz r0, 0x88(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x7c
    stw r0, 0x6c(r30)
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x663
    li r4, 0x0
    stw r26, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x84(r1)
    lwz r0, 0x84(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x669
    stw r0, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x80(r1)
    lwz r0, 0x80(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x675
    stw r0, 0xb4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x7c(r1)
    lwz r0, 0x7c(r1)
    stw r3, 0xc4(r30)
    addi r3, r27, 0x718
    stw r0, 0xcc(r30)
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x721
    li r4, 0x0
    stw r26, 0xe4(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x78(r1)
    lwz r0, 0x78(r1)
    stw r3, 0xf4(r30)
    addi r3, r27, 0x727
    stw r0, 0xfc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x74(r1)
    lwz r0, 0x74(r1)
    stw r3, 0x10c(r30)
    addi r3, r27, 0x72d
    stw r0, 0x114(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x70(r1)
    lwz r0, 0x70(r1)
    stw r3, 0x124(r30)
    addi r3, r27, 0x737
    stw r0, 0x12c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x6c(r1)
    lwz r0, 0x6c(r1)
    stw r3, 0x13c(r30)
    addi r3, r27, 0x744
    stw r0, 0x144(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x68(r1)
    lwz r0, 0x68(r1)
    stw r3, 0x154(r30)
    addi r3, r27, 0x335
    stw r0, 0x15c(r30)
    bl fn_800DC880
    stw r3, 0x16c(r30)
    addi r3, r27, 0x752
    li r4, 0x0
    stw r26, 0x174(r30)
    bl fn_800DC880
    addi r5, r25, 0x4330
    li r4, 0x0
    stw r3, 0x4(r5)
    addi r3, r27, 0x31
    stw r26, 0xc(r5)
    bl fn_800DC880
    addi r30, r25, 0x4348
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x37
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0xcd
    li r4, 0x0
    stw r26, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x64(r1)
    lwz r0, 0x64(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x294
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x60(r1)
    lwz r0, 0x60(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x757
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x5c(r1)
    lwz r0, 0x5c(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x663
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x58(r1)
    lwz r0, 0x58(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x75d
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x54(r1)
    lwz r0, 0x54(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x675
    stw r0, 0x9c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x50(r1)
    lwz r0, 0x50(r1)
    stw r3, 0xac(r30)
    addi r3, r27, 0x7c
    stw r0, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0xcc(r30)
    bl fn_800DC880
    stw r3, 0xdc(r30)
    addi r3, r27, 0x37
    li r4, 0x0
    stw r26, 0xe4(r30)
    bl fn_800DC880
    addi r30, r25, 0x4438
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0xcd
    stw r26, 0xc(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x4c(r1)
    lwz r0, 0x4c(r1)
    stw r3, 0x1c(r30)
    addi r3, r27, 0x294
    stw r0, 0x24(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x48(r1)
    lwz r0, 0x48(r1)
    stw r3, 0x34(r30)
    addi r3, r27, 0x757
    stw r0, 0x3c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x44(r1)
    lwz r0, 0x44(r1)
    stw r3, 0x4c(r30)
    addi r3, r27, 0x663
    stw r0, 0x54(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x40(r1)
    lwz r0, 0x40(r1)
    stw r3, 0x64(r30)
    addi r3, r27, 0x75d
    stw r0, 0x6c(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x3c(r1)
    lwz r0, 0x3c(r1)
    stw r3, 0x7c(r30)
    addi r3, r27, 0x675
    stw r0, 0x84(r30)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x38(r1)
    lwz r0, 0x38(r1)
    stw r3, 0x94(r30)
    addi r3, r27, 0x335
    stw r0, 0x9c(r30)
    bl fn_800DC880
    stw r3, 0xac(r30)
    addi r3, r27, 0x763
    li r4, 0x0
    stw r26, 0xb4(r30)
    bl fn_800DC880
    stw r3, 0xc4(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    stw r28, 0xcc(r30)
    bl fn_800DC880
    addi r30, r25, 0x4510
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x118
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x45a0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x773
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x4630
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x77b
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r30, r25, 0x46c0
    li r4, 0x0
    stw r3, 0x4(r30)
    addi r3, r27, 0x785
    stw r26, 0xc(r30)
    bl fn_800DC880
    stw r3, 0x1c(r30)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r29, 0x24(r30)
    bl fn_800DC880
    stw r3, 0x34(r30)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r30)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r30)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r30)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4750
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x140
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x78f
    li r4, 0x0
    stw r28, 0x24(r29)
    bl fn_800DC880
    lfs f0, lbl_80880610
    li r4, 0x0
    stfs f0, 0x34(r1)
    lwz r0, 0x34(r1)
    stw r3, 0x34(r29)
    addi r3, r27, 0x799
    stw r0, 0x3c(r29)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x30(r1)
    lwz r0, 0x30(r1)
    stw r3, 0x4c(r29)
    addi r3, r27, 0x7a3
    stw r0, 0x54(r29)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x2c(r1)
    lwz r0, 0x2c(r1)
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    stw r0, 0x6c(r29)
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x47f8
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x7ab
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x7b3
    li r4, 0x0
    stw r28, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x126
    li r4, 0x0
    stw r26, 0x3c(r29)
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4888
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x7bd
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r26, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4918
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x37
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x7c4
    li r4, 0x0
    stw r26, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x126
    li r4, 0x0
    stw r26, 0x3c(r29)
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x49a8
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x6b8
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r26, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4a38
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x7cc
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4ac8
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x140
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x11f
    li r4, 0x0
    stw r28, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x126
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x113
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4b58
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x709
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x7d3
    li r4, 0x0
    stw r26, 0x24(r29)
    bl fn_800DC880
    stw r3, 0x34(r29)
    addi r3, r27, 0x7db
    li r4, 0x0
    stw r26, 0x3c(r29)
    bl fn_800DC880
    stw r3, 0x4c(r29)
    addi r3, r27, 0x12d
    li r4, 0x0
    stw r26, 0x54(r29)
    bl fn_800DC880
    stw r3, 0x64(r29)
    addi r3, r27, 0x134
    li r4, 0x0
    bl fn_800DC880
    stw r3, 0x7c(r29)
    addi r3, r27, 0x7e6
    li r4, 0x0
    bl fn_800DC880
    addi r29, r25, 0x4be8
    li r4, 0x0
    stw r3, 0x4(r29)
    addi r3, r27, 0x7c4
    stw r26, 0xc(r29)
    bl fn_800DC880
    stw r3, 0x1c(r29)
    addi r3, r27, 0x7ef
    li r4, 0x0
    stw r28, 0x24(r29)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x28(r1)
    lwz r0, 0x28(r1)
    stw r3, 0x34(r29)
    addi r3, r27, 0x7f5
    stw r0, 0x3c(r29)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x24(r1)
    lwz r0, 0x24(r1)
    stw r3, 0x4c(r29)
    addi r3, r27, 0x7fb
    stw r0, 0x54(r29)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x20(r1)
    lwz r0, 0x20(r1)
    stw r3, 0x64(r29)
    addi r3, r27, 0x801
    stw r0, 0x6c(r29)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x1c(r1)
    lwz r0, 0x1c(r1)
    stw r3, 0x7c(r29)
    addi r3, r27, 0x807
    stw r0, 0x84(r29)
    bl fn_800DC880
    stw r3, 0x94(r29)
    addi r3, r27, 0x813
    li r4, 0x0
    stw r26, 0x9c(r29)
    bl fn_800DC880
    stw r3, 0xac(r29)
    addi r3, r27, 0x335
    li r4, 0x0
    stw r26, 0xb4(r29)
    bl fn_800DC880
    stw r3, 0xc4(r29)
    addi r3, r27, 0xcd
    li r4, 0x0
    stw r26, 0xcc(r29)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    addi r28, r25, 0x4cf0
    stfs f0, 0x18(r1)
    li r4, 0x0
    lwz r0, 0x18(r1)
    stw r3, 0x4(r28)
    addi r3, r27, 0x294
    stw r0, 0xc(r28)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0x14(r1)
    lwz r0, 0x14(r1)
    stw r3, 0x1c(r28)
    addi r3, r27, 0x757
    stw r0, 0x24(r28)
    bl fn_800DC880
    lfs f0, lbl_80880608
    li r4, 0x0
    stfs f0, 0x10(r1)
    lwz r0, 0x10(r1)
    stw r3, 0x34(r28)
    addi r3, r27, 0x822
    stw r0, 0x3c(r28)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    li r4, 0x0
    stfs f0, 0xc(r1)
    lwz r0, 0xc(r1)
    stw r3, 0x4c(r28)
    addi r3, r27, 0x82a
    stw r0, 0x54(r28)
    bl fn_800DC880
    lfs f0, lbl_8088060C
    lis r26, 0xc
    stfs f0, 0x8(r1)
    addi r4, r26, 0xbd0
    lwz r0, 0x8(r1)
    stw r3, 0x64(r28)
    addi r3, r27, 0x832
    stw r0, 0x6c(r28)
    bl fn_800DC880
    addi r25, r25, 0x4d68
    addi r4, r26, 0xbd0
    stw r3, 0xc(r25)
    addi r3, r27, 0x83e
    bl fn_800DC880
    stw r3, 0x34(r25)
    addi r3, r27, 0x848
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x5c(r25)
    addi r3, r27, 0x857
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x84(r25)
    addi r3, r27, 0x866
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0xac(r25)
    addi r3, r27, 0x874
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0xd4(r25)
    addi r3, r27, 0x880
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0xfc(r25)
    addi r3, r27, 0x88a
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x124(r25)
    addi r3, r27, 0x896
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x14c(r25)
    addi r3, r27, 0x8a3
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x174(r25)
    addi r3, r27, 0x8af
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x19c(r25)
    addi r3, r27, 0x8bb
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x1c4(r25)
    addi r3, r27, 0x8c6
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x1ec(r25)
    addi r3, r27, 0x8cc
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x214(r25)
    addi r3, r27, 0x8d3
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x23c(r25)
    addi r3, r27, 0x8db
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x264(r25)
    addi r3, r27, 0x8e5
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x28c(r25)
    addi r3, r27, 0x8f3
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x2b4(r25)
    addi r3, r27, 0x8fe
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x2dc(r25)
    addi r3, r27, 0x90a
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x304(r25)
    addi r3, r27, 0x916
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x32c(r25)
    addi r3, r27, 0x24c
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x354(r25)
    addi r3, r27, 0x925
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x37c(r25)
    addi r3, r27, 0x932
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x3a4(r25)
    addi r3, r27, 0x942
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x3cc(r25)
    addi r3, r27, 0x950
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x3f4(r25)
    addi r3, r27, 0x95d
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x41c(r25)
    addi r3, r27, 0x969
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x444(r25)
    addi r3, r27, 0x971
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x46c(r25)
    addi r3, r27, 0x978
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x494(r25)
    addi r3, r27, 0x984
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x4bc(r25)
    addi r3, r27, 0x992
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x4e4(r25)
    addi r3, r27, 0x99f
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x50c(r25)
    addi r3, r27, 0x9ae
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x534(r25)
    addi r3, r27, 0x9bb
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x55c(r25)
    addi r3, r27, 0x9c9
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x584(r25)
    addi r3, r27, 0x9d8
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x5ac(r25)
    addi r3, r27, 0x9e7
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x5d4(r25)
    addi r3, r27, 0x9f6
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x5fc(r25)
    addi r3, r27, 0xa03
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x624(r25)
    addi r3, r27, 0xa10
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x64c(r25)
    addi r3, r27, 0xa1b
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x674(r25)
    addi r3, r27, 0xa26
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x69c(r25)
    addi r3, r27, 0xa34
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x6c4(r25)
    addi r3, r27, 0xa3f
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x6ec(r25)
    addi r3, r27, 0xa4d
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x714(r25)
    addi r3, r27, 0xa58
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x73c(r25)
    addi r3, r27, 0xa67
    addi r4, r26, 0xbd0
    bl fn_800DC880
    stw r3, 0x764(r25)
    addi r3, r27, 0xa76
    addi r4, r26, 0xbd0
    bl fn_800DC880
    addi r11, r1, 0x320
    stw r3, 0x78c(r25)
    bl _restgpr_25
    lwz r0, 0x324(r1)
    mtlr r0
    addi r1, r1, 0x320
    blr
}
