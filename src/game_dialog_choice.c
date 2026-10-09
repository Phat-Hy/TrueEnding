#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void __register_global_object(void);
extern void fn_8003EFB0(void);
extern void fn_80044E0C(void);
extern void fn_800457A4(void);
extern void fn_80092814(void);
extern void fn_80097D40(void);
extern void fn_8010C00C(void);
extern void fn_8012B988(void);
extern void fn_8013407C(void);
extern void fn_8014C0B4(void);
extern void fn_8014C228(void);
extern void fn_8014FD30(void);
extern void fn_80206B14(void);
extern void fn_80206BE4(void);
extern void fn_80211480(void);
extern void fn_80211940(void);
extern void fn_80219558(void);
extern void fn_8044D3A0(void);
extern void fn_804EB754(void);
extern void fn_8059C088(void);
extern void fn_805F89F0(void);
extern void fn_805F8E70(void);
extern void fn_805F90D0(void);

/* External data declarations */
extern u8 lbl_80737A9C[];
extern u8 lbl_807C6BB8[];
extern u8 lbl_807C7060[];
extern u8 lbl_807C7B10[];

/* Small data declarations */
extern u32 lbl_8087EE74;
extern u32 lbl_8087F048;
extern u32 lbl_8087F4F0;
extern u32 lbl_8087F610;
extern u32 lbl_8087F9E8;
extern u32 lbl_80881964;
extern u32 lbl_8088196C;
extern u32 lbl_808819A4;
extern u32 lbl_80881A0C;

/* Function declarations */
void fn_8014DEE4(void);
void fn_8014EE48(void);
void fn_8014EEC4(void);
void fn_8014EF48(void);
void fn_8014F2B4(void);
void fn_8014F4FC(void);
void fn_8014F5D4(void);
void fn_8014F698(void);

asm void fn_8014DEE4(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    mr r31, r6
    stw r30, 0x1d8(r1)
    mr r30, r3
    stw r29, 0x1d4(r1)
    mr r29, r5
    stw r28, 0x1d0(r1)
    mr r28, r4
    lwz r7, 0x650(r3)
    cmpwi r7, 0x0
    beq lbl_fn_8014DEE4_00000F44
    cmpw r4, r7
    bge lbl_fn_8014DEE4_00000F44
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_000000B8
    lwz r5, 0x5c(r3)
    lwz r0, 0x11c(r5)
    cmpwi r0, 0x2
    bne lbl_fn_8014DEE4_000000B8
    cmplwi r7, 0x2
    ble lbl_fn_8014DEE4_000000B8
    cmpwi r4, 0x1
    bne lbl_fn_8014DEE4_0000007C
    lwz r5, 0x658(r3)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_00000094
lbl_fn_8014DEE4_0000007C:
    cmpwi r4, 0x0
    bne lbl_fn_8014DEE4_000000B8
    lwz r5, 0x65c(r3)
    lwz r0, 0x4(r5)
    cmpwi r0, 0x0
    bne lbl_fn_8014DEE4_000000B8
lbl_fn_8014DEE4_00000094:
    lwz r5, 0x658(r3)
    cmpwi r4, 0x0
    lwz r0, 0x65c(r3)
    stw r0, 0x658(r3)
    stw r5, 0x65c(r3)
    bne lbl_fn_8014DEE4_000000B0
    b lbl_fn_8014DEE4_000000B4
lbl_fn_8014DEE4_000000B0:
    li r0, 0x0
lbl_fn_8014DEE4_000000B4:
    stw r0, 0x64c(r3)
lbl_fn_8014DEE4_000000B8:
    lwz r3, 0x648(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8014DEE4_000000CC
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014DEE4_000000CC:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8014DEE4_000000E0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014DEE4_000000E0:
    slwi r0, r28, 2
    stw r28, 0x674(r30)
    add r3, r30, r0
    cmpwi r28, 0x0
    lwz r0, 0x654(r3)
    stw r0, 0x648(r30)
    bne lbl_fn_8014DEE4_00000128
    lwz r3, 0x678(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8014DEE4_00000128
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8014DEE4_00000128
    lwz r0, 0x678(r30)
    stw r0, 0x648(r30)
lbl_fn_8014DEE4_00000128:
    cmpwi r29, 0x0
    bne lbl_fn_8014DEE4_00000F44
    lwz r7, 0xd1c(r30)
    cmpwi r7, 0x0
    beq lbl_fn_8014DEE4_000001D8
    lwz r0, 0x12a8(r7)
    mr r5, r7
    lwz r6, 0x1028(r7)
    li r4, 0x0
    extrwi r0, r0, 1, 15
    cntlzw r0, r0
    srwi r3, r0, 5
    b lbl_fn_8014DEE4_00000178
lbl_fn_8014DEE4_0000015C:
    lwz r0, 0xfe8(r5)
    cmplw r0, r30
    bne lbl_fn_8014DEE4_00000170
    li r0, 0x1
    b lbl_fn_8014DEE4_00000194
lbl_fn_8014DEE4_00000170:
    addi r5, r5, 0x4
    addi r4, r4, 0x1
lbl_fn_8014DEE4_00000178:
    cmpwi r3, 0x0
    mr r0, r6
    bne lbl_fn_8014DEE4_00000188
    slwi r0, r6, 1
lbl_fn_8014DEE4_00000188:
    cmpw r4, r0
    blt lbl_fn_8014DEE4_0000015C
    li r0, 0x0
lbl_fn_8014DEE4_00000194:
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_000001D8
    li r0, 0x10
    mr r4, r7
    li r3, 0x0
    mtctr r0
lbl_fn_8014DEE4_000001AC:
    lwz r0, 0xfe8(r4)
    cmplw r0, r30
    bne lbl_fn_8014DEE4_000001CC
    slwi r0, r3, 2
    li r4, 0x0
    add r3, r7, r0
    stw r4, 0xfe8(r3)
    b lbl_fn_8014DEE4_000001D8
lbl_fn_8014DEE4_000001CC:
    addi r4, r4, 0x4
    addi r3, r3, 0x1
    bdnz lbl_fn_8014DEE4_000001AC
lbl_fn_8014DEE4_000001D8:
    lwz r3, 0x648(r30)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    bne lbl_fn_8014DEE4_00000238
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8014DEE4_00000238
    lwz r0, 0x650(r30)
    cmplwi r0, 0x2
    blt lbl_fn_8014DEE4_00000238
    lwz r3, 0x67c(r30)
    lwz r0, 0x658(r30)
    cmpwi r3, 0x0
    stw r0, 0x64c(r30)
    beq lbl_fn_8014DEE4_00000238
    lwz r12, 0x0(r3)
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8014DEE4_00000238
    lwz r0, 0x67c(r30)
    stw r0, 0x64c(r30)
lbl_fn_8014DEE4_00000238:
    addi r3, r30, 0x7d4
    bl fn_8012B988
    lwz r3, lbl_8087F9E8
    cmpwi r3, 0x0
    beq lbl_fn_8014DEE4_00000254
    mr r4, r30
    bl fn_8059C088
lbl_fn_8014DEE4_00000254:
    addi r3, r30, 0x7d4
    bl fn_8013407C
    lwz r3, lbl_8087F048
    cmpwi r3, 0x0
    beq lbl_fn_8014DEE4_00000270
    mr r4, r30
    bl fn_8010C00C
lbl_fn_8014DEE4_00000270:
    cmpwi r31, 0x0
    bne lbl_fn_8014DEE4_00000C08
    lwz r3, 0x648(r30)
    lwz r0, 0x4(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_0000029C
    cmpwi r0, 0x1
    beq lbl_fn_8014DEE4_00000698
    cmpwi r0, 0x2
    beq lbl_fn_8014DEE4_00000840
    b lbl_fn_8014DEE4_000009D0
lbl_fn_8014DEE4_0000029C:
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8014DEE4_00000440
    mr r3, r30
    li r4, 0x0
    li r5, 0x4
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1
    li r5, 0x16
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x2
    li r5, 0x1c
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x3
    li r5, 0x22
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x4
    li r5, 0x2a
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x5
    li r5, 0x19d
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x6
    li r5, 0x19e
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x7
    li r5, 0x1ba
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x8
    li r5, 0x1bb
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x9
    li r5, 0x19f
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xa
    li r5, 0x1a0
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xb
    li r5, 0x1bc
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xc
    li r5, 0x1bd
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xd
    li r5, 0x1a1
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xe
    li r5, 0x1a2
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xf
    li r5, 0x1be
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x10
    li r5, 0x1bf
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x11
    li r5, 0x1a3
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x12
    li r5, 0x1a4
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x13
    li r5, 0x16a
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x14
    li r5, 0x16a
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x16
    li r5, 0x15c
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x15
    li r5, 0x15d
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x17
    li r5, 0x15e
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x18
    li r5, 0x15f
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_000009D0
lbl_fn_8014DEE4_00000440:
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    bne lbl_fn_8014DEE4_00000464
    mr r3, r30
    li r4, 0x0
    li r5, 0x5
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_00000474
lbl_fn_8014DEE4_00000464:
    mr r3, r30
    li r4, 0x0
    li r5, 0x3
    bl fn_8014C0B4
lbl_fn_8014DEE4_00000474:
    mr r3, r30
    li r4, 0x1
    li r5, 0x15
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x2
    li r5, 0x1b
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x3
    li r5, 0x21
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x4
    li r5, 0x29
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x5
    li r5, 0x195
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x6
    li r5, 0x196
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x7
    li r5, 0x1b1
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x8
    li r5, 0x1b2
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x9
    li r5, 0x197
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xa
    li r5, 0x198
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xb
    li r5, 0x1b3
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xc
    li r5, 0x1b4
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xd
    li r5, 0x199
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xe
    li r5, 0x19a
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xf
    li r5, 0x1b5
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x10
    li r5, 0x1b6
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x11
    li r5, 0x19b
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x12
    li r5, 0x19c
    bl fn_8014C0B4
    lwz r3, 0x648(r30)
    lwz r3, 0x274(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8014DEE4_0000060C
    mr r3, r30
    li r4, 0x13
    li r5, 0x165
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x14
    li r5, 0x165
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x16
    li r5, 0x166
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x15
    li r5, 0x167
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x17
    li r5, 0x168
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x18
    li r5, 0x169
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_000009D0
lbl_fn_8014DEE4_0000060C:
    mr r3, r30
    li r4, 0x13
    li r5, 0x156
    bl fn_8014C0B4
    addi r3, r30, 0xb0
    li r4, 0x157
    bl fn_80097D40
    cmpwi r3, 0x0
    beq lbl_fn_8014DEE4_00000644
    mr r3, r30
    li r4, 0x14
    li r5, 0x157
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_00000654
lbl_fn_8014DEE4_00000644:
    mr r3, r30
    li r4, 0x14
    li r5, 0x156
    bl fn_8014C0B4
lbl_fn_8014DEE4_00000654:
    mr r3, r30
    li r4, 0x16
    li r5, 0x15c
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x15
    li r5, 0x15d
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x17
    li r5, 0x15e
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x18
    li r5, 0x15f
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_000009D0
lbl_fn_8014DEE4_00000698:
    mr r3, r30
    li r4, 0x0
    li r5, 0x0
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1
    li r5, 0x12
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x2
    li r5, 0x18
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x3
    li r5, 0x1e
    bl fn_8014C0B4
    lwz r3, 0x50(r30)
    bl fn_80219558
    cmpwi r3, 0x0
    li r5, 0x25
    bne lbl_fn_8014DEE4_000006F0
    li r5, 0x26
lbl_fn_8014DEE4_000006F0:
    mr r3, r30
    li r4, 0x4
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x5
    li r5, 0x185
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x6
    li r5, 0x186
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x7
    li r5, 0x1a5
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x8
    li r5, 0x1a6
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x9
    li r5, 0x187
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xa
    li r5, 0x188
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xb
    li r5, 0x1a7
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xc
    li r5, 0x1a8
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xd
    li r5, 0x189
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xe
    li r5, 0x18a
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xf
    li r5, 0x1a9
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x10
    li r5, 0x1aa
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x11
    li r5, 0x18b
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x12
    li r5, 0x18c
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x13
    li r5, 0x156
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x14
    li r5, 0x156
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x16
    li r5, 0x15c
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x15
    li r5, 0x15d
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x17
    li r5, 0x15e
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x18
    li r5, 0x15f
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_000009D0
lbl_fn_8014DEE4_00000840:
    mr r3, r30
    li r4, 0x0
    li r5, 0x1
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1
    li r5, 0x13
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x2
    li r5, 0x19
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x3
    li r5, 0x1f
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x4
    li r5, 0x27
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x5
    li r5, 0x18d
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x6
    li r5, 0x18e
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x7
    li r5, 0x1ab
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x8
    li r5, 0x1ac
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x9
    li r5, 0x18f
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xa
    li r5, 0x190
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xb
    li r5, 0x1ad
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xc
    li r5, 0x1ae
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xd
    li r5, 0x191
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xe
    li r5, 0x192
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0xf
    li r5, 0x1af
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x10
    li r5, 0x1b0
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x11
    li r5, 0x193
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x12
    li r5, 0x194
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x13
    li r5, 0x156
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x14
    li r5, 0x156
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x16
    li r5, 0x15c
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x15
    li r5, 0x15d
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x17
    li r5, 0x15e
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x18
    li r5, 0x15f
    bl fn_8014C0B4
lbl_fn_8014DEE4_000009D0:
    lwz r3, 0x5c(r30)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8014DEE4_00000A44
    mr r3, r30
    li r4, 0x19
    li r5, 0x1c4
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1a
    li r5, 0x1c5
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1b
    li r5, 0x1ce
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1c
    li r5, 0x1cf
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1d
    li r5, 0x1d0
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1e
    li r5, 0x1d1
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_00000C00
lbl_fn_8014DEE4_00000A44:
    lwz r0, 0x690(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_00000AB4
    mr r3, r30
    li r4, 0x19
    li r5, 0x1c2
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1a
    li r5, 0x1c3
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1b
    li r5, 0x1ca
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1c
    li r5, 0x1cb
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1d
    li r5, 0x1cc
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1e
    li r5, 0x1cd
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_00000C00
lbl_fn_8014DEE4_00000AB4:
    lwz r3, 0x648(r30)
    lwz r3, 0x274(r3)
    lwz r0, 0x7c(r3)
    cmpwi r0, 0x1
    bne lbl_fn_8014DEE4_00000B2C
    mr r3, r30
    li r4, 0x19
    li r5, 0x1c4
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1a
    li r5, 0x1c5
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1b
    li r5, 0x1ce
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1c
    li r5, 0x1cb
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1d
    li r5, 0x1d0
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1e
    li r5, 0x1d1
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_00000C00
lbl_fn_8014DEE4_00000B2C:
    lwz r3, 0x50(r30)
    subis r0, r3, 0x1
    cmplwi r0, 0x8709
    bne lbl_fn_8014DEE4_00000BA0
    mr r3, r30
    li r4, 0x19
    li r5, 0x2
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1a
    li r5, 0x33
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1b
    li r5, 0x14
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1c
    li r5, 0x14
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1d
    li r5, 0x14
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1e
    li r5, 0x14
    bl fn_8014C0B4
    b lbl_fn_8014DEE4_00000C00
lbl_fn_8014DEE4_00000BA0:
    mr r3, r30
    li r4, 0x19
    li r5, 0x1c0
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1a
    li r5, 0x1c1
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1b
    li r5, 0x1c6
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1c
    li r5, 0x1c7
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1d
    li r5, 0x1c8
    bl fn_8014C0B4
    mr r3, r30
    li r4, 0x1e
    li r5, 0x1c9
    bl fn_8014C0B4
lbl_fn_8014DEE4_00000C00:
    mr r3, r30
    bl fn_8014FD30
lbl_fn_8014DEE4_00000C08:
    lwz r0, 0x648(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_00000F44
    lis r4, lbl_80737A9C@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x34f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8014DEE4_00000C3C
    li r0, 0x0
    b lbl_fn_8014DEE4_00000C48
lbl_fn_8014DEE4_00000C3C:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_8014DEE4_00000C48:
    lwz r4, 0x648(r30)
    lis r3, lbl_807C7060@ha
    addi r3, r3, lbl_807C7060@l
    stw r0, 0x224(r4)
    lwz r4, 0x648(r30)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x228(r4), 0, 0
    psq_st f2, 0x230(r4), 0, 0
    psq_st f3, 0x238(r4), 0, 0
    psq_st f4, 0x240(r4), 0, 0
    psq_st f5, 0x248(r4), 0, 0
    psq_st f6, 0x250(r4), 0, 0
    lwz r0, 0x64c(r30)
    cmpwi r0, 0x0
    beq lbl_fn_8014DEE4_00000F44
    lwz r0, 0x12a8(r30)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8014DEE4_00000D20
    lis r4, lbl_80737A9C@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x35c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8014DEE4_00000CCC
    li r0, 0x0
    b lbl_fn_8014DEE4_00000CD8
lbl_fn_8014DEE4_00000CCC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_8014DEE4_00000CD8:
    lwz r4, 0x64c(r30)
    lis r3, lbl_807C7060@ha
    addi r3, r3, lbl_807C7060@l
    stw r0, 0x224(r4)
    lwz r4, 0x64c(r30)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x228(r4), 0, 0
    psq_st f2, 0x230(r4), 0, 0
    psq_st f3, 0x238(r4), 0, 0
    psq_st f4, 0x240(r4), 0, 0
    psq_st f5, 0x248(r4), 0, 0
    psq_st f6, 0x250(r4), 0, 0
    b lbl_fn_8014DEE4_00000F44
lbl_fn_8014DEE4_00000D20:
    lis r4, lbl_80737A9C@ha
    addi r3, r30, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x35c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8014DEE4_00000D48
    li r0, 0x0
    b lbl_fn_8014DEE4_00000D54
lbl_fn_8014DEE4_00000D48:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r30)
    add r0, r3, r0
lbl_fn_8014DEE4_00000D54:
    lwz r3, 0x64c(r30)
    addi r31, r1, 0x20
    lfs f1, lbl_8088196C
    stw r0, 0x224(r3)
    lfs f0, lbl_80881964
    fcmpu cr0, f1, f1
    lfs f7, lbl_80881A0C
    stfs f7, 0x8(r1)
    stfs f7, 0xc(r1)
    stfs f1, 0x10(r1)
    stfs f1, 0x4c(r1)
    stfs f1, 0x44(r1)
    stfs f1, 0x40(r1)
    stfs f1, 0x3c(r1)
    stfs f1, 0x38(r1)
    stfs f1, 0x30(r1)
    stfs f1, 0x2c(r1)
    stfs f1, 0x28(r1)
    stfs f1, 0x24(r1)
    stfs f0, 0x48(r1)
    stfs f0, 0x34(r1)
    stfs f0, 0x20(r1)
    beq lbl_fn_8014DEE4_00000E00
    addi r3, r1, 0x80
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x80
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r3, r1, 0x50
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8014DEE4_00000E00:
    lfs f0, lbl_8088196C
    lfs f1, 0xc(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014DEE4_00000E60
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0xe0
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8014DEE4_00000E60:
    lfs f0, lbl_8088196C
    lfs f1, 0x8(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014DEE4_00000EC0
    addi r3, r1, 0x140
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r31
    addi r4, r1, 0x140
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r31), 0, 0
    psq_st f2, 0x8(r31), 0, 0
    psq_st f3, 0x10(r31), 0, 0
    psq_st f4, 0x18(r31), 0, 0
    psq_st f5, 0x20(r31), 0, 0
    psq_st f6, 0x28(r31), 0, 0
lbl_fn_8014DEE4_00000EC0:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x1a0
    lfs f2, lbl_808819A4
    fmr f3, f1
    stfs f1, 0x14(r1)
    stfs f2, 0x18(r1)
    stfs f1, 0x1c(r1)
    bl fn_805F90D0
    addi r3, r1, 0x20
    addi r4, r1, 0x1a0
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    addi r4, r1, 0x20
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r4), 0, 0
    psq_st f2, 0x8(r4), 0, 0
    psq_st f3, 0x10(r4), 0, 0
    psq_st f4, 0x18(r4), 0, 0
    psq_st f5, 0x20(r4), 0, 0
    psq_st f6, 0x28(r4), 0, 0
    lwz r3, 0x64c(r30)
    psq_st f1, 0x228(r3), 0, 0
    psq_st f2, 0x230(r3), 0, 0
    psq_st f3, 0x238(r3), 0, 0
    psq_st f4, 0x240(r3), 0, 0
    psq_st f5, 0x248(r3), 0, 0
    psq_st f6, 0x250(r3), 0, 0
lbl_fn_8014DEE4_00000F44:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    lwz r29, 0x1d4(r1)
    lwz r28, 0x1d0(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8014EE48(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lwz r4, 0x5c(r3)
    lwz r0, 0x11c(r4)
    cmpwi r0, 0x2
    bne lbl_fn_8014EE48_00000FCC
    lwz r0, 0x650(r3)
    cmplwi r0, 0x2
    blt lbl_fn_8014EE48_00000FCC
    lwz r4, 0x67c(r3)
    lwz r0, 0x658(r3)
    cmpwi r4, 0x0
    stw r0, 0x64c(r3)
    beq lbl_fn_8014EE48_00000FCC
    lwz r12, 0x0(r4)
    mr r3, r4
    lwz r12, 0xc(r12)
    mtctr r12
    bctrl
    cmpwi r3, 0x0
    bne lbl_fn_8014EE48_00000FCC
    lwz r0, 0x67c(r31)
    stw r0, 0x64c(r31)
lbl_fn_8014EE48_00000FCC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014EEC4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014EEC4_00001014
    mr r3, r0
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014EEC4_00001014:
    lwz r3, 0x64c(r30)
    cmpwi r3, 0x0
    beq lbl_fn_8014EEC4_00001028
    li r4, 0x1
    bl fn_80044E0C
lbl_fn_8014EEC4_00001028:
    cmpwi r31, 0x0
    li r0, 0x0
    li r3, -0x1
    stw r3, 0x674(r30)
    stw r0, 0x648(r30)
    stw r0, 0x64c(r30)
    bne lbl_fn_8014EEC4_0000104C
    mr r3, r30
    bl fn_8014C228
lbl_fn_8014EEC4_0000104C:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014EF48(void)
{
    nofralloc
    stwu r1, -0x1e0(r1)
    mflr r0
    stw r0, 0x1e4(r1)
    stw r31, 0x1dc(r1)
    mr r31, r3
    stw r30, 0x1d8(r1)
    lwz r0, 0x648(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8014EF48_000013B8
    lis r4, lbl_80737A9C@ha
    li r5, 0x0
    addi r4, r4, lbl_80737A9C@l
    addi r3, r3, 0xb0
    addi r4, r4, 0x34f
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8014EF48_000010B0
    li r0, 0x0
    b lbl_fn_8014EF48_000010BC
lbl_fn_8014EF48_000010B0:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r0, r3, r0
lbl_fn_8014EF48_000010BC:
    lwz r4, 0x648(r31)
    lis r3, lbl_807C7060@ha
    addi r3, r3, lbl_807C7060@l
    stw r0, 0x224(r4)
    lwz r4, 0x648(r31)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x228(r4), 0, 0
    psq_st f2, 0x230(r4), 0, 0
    psq_st f3, 0x238(r4), 0, 0
    psq_st f4, 0x240(r4), 0, 0
    psq_st f5, 0x248(r4), 0, 0
    psq_st f6, 0x250(r4), 0, 0
    lwz r0, 0x64c(r31)
    cmpwi r0, 0x0
    beq lbl_fn_8014EF48_000013B8
    lwz r0, 0x12a8(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8014EF48_00001194
    lis r4, lbl_80737A9C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x35c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8014EF48_00001140
    li r0, 0x0
    b lbl_fn_8014EF48_0000114C
lbl_fn_8014EF48_00001140:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r0, r3, r0
lbl_fn_8014EF48_0000114C:
    lwz r4, 0x64c(r31)
    lis r3, lbl_807C7060@ha
    addi r3, r3, lbl_807C7060@l
    stw r0, 0x224(r4)
    lwz r4, 0x64c(r31)
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_l f1, 0x0(r3), 0, 0
    psq_st f1, 0x228(r4), 0, 0
    psq_st f2, 0x230(r4), 0, 0
    psq_st f3, 0x238(r4), 0, 0
    psq_st f4, 0x240(r4), 0, 0
    psq_st f5, 0x248(r4), 0, 0
    psq_st f6, 0x250(r4), 0, 0
    b lbl_fn_8014EF48_000013B8
lbl_fn_8014EF48_00001194:
    lis r4, lbl_80737A9C@ha
    addi r3, r31, 0xb0
    addi r4, r4, lbl_80737A9C@l
    li r5, 0x0
    addi r4, r4, 0x35c
    bl fn_80092814
    cmpwi r3, 0x0
    bge lbl_fn_8014EF48_000011BC
    li r0, 0x0
    b lbl_fn_8014EF48_000011C8
lbl_fn_8014EF48_000011BC:
    mulli r0, r3, 0x30
    lwz r3, 0xec(r31)
    add r0, r3, r0
lbl_fn_8014EF48_000011C8:
    lwz r3, 0x64c(r31)
    addi r30, r1, 0x1a0
    lfs f1, lbl_8088196C
    stw r0, 0x224(r3)
    lfs f0, lbl_80881964
    fcmpu cr0, f1, f1
    lfs f7, lbl_80881A0C
    stfs f7, 0x14(r1)
    stfs f7, 0x18(r1)
    stfs f1, 0x1c(r1)
    stfs f1, 0x1cc(r1)
    stfs f1, 0x1c4(r1)
    stfs f1, 0x1c0(r1)
    stfs f1, 0x1bc(r1)
    stfs f1, 0x1b8(r1)
    stfs f1, 0x1b0(r1)
    stfs f1, 0x1ac(r1)
    stfs f1, 0x1a8(r1)
    stfs f1, 0x1a4(r1)
    stfs f0, 0x1c8(r1)
    stfs f0, 0x1b4(r1)
    stfs f0, 0x1a0(r1)
    beq lbl_fn_8014EF48_00001274
    addi r3, r1, 0x140
    li r4, 0x7a
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x140
    addi r5, r1, 0x170
    bl fn_805F89F0
    addi r3, r1, 0x170
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8014EF48_00001274:
    lfs f0, lbl_8088196C
    lfs f1, 0x18(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014EF48_000012D4
    addi r3, r1, 0xe0
    li r4, 0x79
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0xe0
    addi r5, r1, 0x110
    bl fn_805F89F0
    addi r3, r1, 0x110
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8014EF48_000012D4:
    lfs f0, lbl_8088196C
    lfs f1, 0x14(r1)
    fcmpu cr0, f0, f1
    beq lbl_fn_8014EF48_00001334
    addi r3, r1, 0x80
    li r4, 0x78
    bl fn_805F8E70
    mr r3, r30
    addi r4, r1, 0x80
    addi r5, r1, 0xb0
    bl fn_805F89F0
    addi r3, r1, 0xb0
    psq_l f1, 0x0(r3), 0, 0
    psq_l f2, 0x8(r3), 0, 0
    psq_l f3, 0x10(r3), 0, 0
    psq_l f4, 0x18(r3), 0, 0
    psq_l f5, 0x20(r3), 0, 0
    psq_l f6, 0x28(r3), 0, 0
    psq_st f1, 0x0(r30), 0, 0
    psq_st f2, 0x8(r30), 0, 0
    psq_st f3, 0x10(r30), 0, 0
    psq_st f4, 0x18(r30), 0, 0
    psq_st f5, 0x20(r30), 0, 0
    psq_st f6, 0x28(r30), 0, 0
lbl_fn_8014EF48_00001334:
    lfs f1, lbl_8088196C
    addi r3, r1, 0x20
    lfs f2, lbl_808819A4
    fmr f3, f1
    stfs f1, 0x8(r1)
    stfs f2, 0xc(r1)
    stfs f1, 0x10(r1)
    bl fn_805F90D0
    addi r3, r1, 0x1a0
    addi r4, r1, 0x20
    addi r5, r1, 0x50
    bl fn_805F89F0
    addi r4, r1, 0x50
    addi r3, r1, 0x1a0
    psq_l f1, 0x0(r4), 0, 0
    psq_l f2, 0x8(r4), 0, 0
    psq_l f3, 0x10(r4), 0, 0
    psq_l f4, 0x18(r4), 0, 0
    psq_l f5, 0x20(r4), 0, 0
    psq_l f6, 0x28(r4), 0, 0
    psq_st f1, 0x0(r3), 0, 0
    psq_st f2, 0x8(r3), 0, 0
    psq_st f3, 0x10(r3), 0, 0
    psq_st f4, 0x18(r3), 0, 0
    psq_st f5, 0x20(r3), 0, 0
    psq_st f6, 0x28(r3), 0, 0
    lwz r3, 0x64c(r31)
    psq_st f1, 0x228(r3), 0, 0
    psq_st f2, 0x230(r3), 0, 0
    psq_st f3, 0x238(r3), 0, 0
    psq_st f4, 0x240(r3), 0, 0
    psq_st f5, 0x248(r3), 0, 0
    psq_st f6, 0x250(r3), 0, 0
lbl_fn_8014EF48_000013B8:
    lwz r0, 0x1e4(r1)
    lwz r31, 0x1dc(r1)
    lwz r30, 0x1d8(r1)
    mtlr r0
    addi r1, r1, 0x1e0
    blr
}

asm void fn_8014F2B4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stmw r27, 0xc(r1)
    mr r30, r3
    mr r31, r4
    mr r29, r5
    mr r27, r6
    lwz r0, lbl_8087F610
    cmpwi r0, 0x0
    beq lbl_fn_8014F2B4_000014B0
    lwz r3, 0x50(r3)
    bl fn_80219558
    cmpwi r3, 0x0
    blt lbl_fn_8014F2B4_000014DC
    cmpwi r3, 0x7
    bge lbl_fn_8014F2B4_000014DC
    lwz r0, 0x650(r30)
    cmplwi r0, 0x2
    bge lbl_fn_8014F2B4_000014DC
    cmpwi r31, 0x0
    bne lbl_fn_8014F2B4_000014DC
    lwz r3, lbl_8087F610
    mr r4, r30
    mr r5, r27
    bl fn_804EB754
    cmpwi r3, 0x0
    mr r28, r3
    blt lbl_fn_8014F2B4_000014DC
    cmpwi r3, 0x3e8
    blt lbl_fn_8014F2B4_000014A8
    mr r4, r28
    li r3, 0x0
    bl fn_80206B14
    cmpwi r3, 0x0
    bne lbl_fn_8014F2B4_000014A8
    lis r29, 0x1062
    li r3, 0x0
    addi r0, r29, 0x4dd3
    mulhw r0, r0, r28
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x3e8
    subf r4, r0, r28
    bl fn_80206B14
    bl fn_80206BE4
    bl fn_80211480
    addi r0, r29, 0x4dd3
    mulhw r0, r0, r28
    srawi r0, r0, 6
    srwi r4, r0, 31
    add r4, r0, r4
    bl fn_80211940
lbl_fn_8014F2B4_000014A8:
    mr r29, r28
    b lbl_fn_8014F2B4_000014DC
lbl_fn_8014F2B4_000014B0:
    lwz r3, lbl_8087F4F0
    cmpwi r3, 0x0
    beq lbl_fn_8014F2B4_000014DC
    cmpwi r6, 0x0
    blt lbl_fn_8014F2B4_000014DC
    lwz r5, 0x50(r30)
    mr r4, r27
    bl fn_8044D3A0
    cmpwi r3, 0x0
    blt lbl_fn_8014F2B4_000014DC
    mr r29, r3
lbl_fn_8014F2B4_000014DC:
    mr r3, r31
    mr r4, r29
    mr r6, r30
    li r5, 0x0
    li r7, 0x0
    bl fn_800457A4
    cmpwi r3, 0x0
    beq lbl_fn_8014F2B4_00001604
    cmpwi r27, 0x0
    blt lbl_fn_8014F2B4_000015E0
    slwi r0, r27, 2
    lwz r7, 0x650(r30)
    srawi r0, r0, 2
    addze r5, r0
    cmplw cr1, r7, r5
    ble cr1, lbl_fn_8014F2B4_000015C4
    subf r0, r5, r7
    addi r6, r5, 0x8
    cmplwi r0, 0x8
    ble lbl_fn_8014F2B4_0000159C
    blt cr1, lbl_fn_8014F2B4_0000159C
    addi r0, r7, 0x7
    slwi r4, r7, 2
    subf r0, r6, r0
    srwi r0, r0, 3
    add r4, r30, r4
    mtctr r0
    cmplw r7, r6
    ble lbl_fn_8014F2B4_0000159C
lbl_fn_8014F2B4_00001550:
    lwz r0, 0x650(r4)
    subi r7, r7, 0x8
    stw r0, 0x654(r4)
    lwz r0, 0x64c(r4)
    stw r0, 0x650(r4)
    lwz r0, 0x648(r4)
    stw r0, 0x64c(r4)
    lwz r0, 0x644(r4)
    stw r0, 0x648(r4)
    lwz r0, 0x640(r4)
    stw r0, 0x644(r4)
    lwz r0, 0x63c(r4)
    stw r0, 0x640(r4)
    lwz r0, 0x638(r4)
    stw r0, 0x63c(r4)
    lwz r0, 0x634(r4)
    stw r0, 0x638(r4)
    subi r4, r4, 0x20
    bdnz lbl_fn_8014F2B4_00001550
lbl_fn_8014F2B4_0000159C:
    slwi r4, r7, 2
    subf r0, r5, r7
    add r4, r30, r4
    mtctr r0
    cmplw r7, r5
    ble lbl_fn_8014F2B4_000015C4
lbl_fn_8014F2B4_000015B4:
    lwz r0, 0x650(r4)
    stw r0, 0x654(r4)
    subi r4, r4, 0x4
    bdnz lbl_fn_8014F2B4_000015B4
lbl_fn_8014F2B4_000015C4:
    slwi r0, r5, 2
    add r4, r30, r0
    stw r3, 0x654(r4)
    lwz r3, 0x650(r30)
    addi r0, r3, 0x1
    stw r0, 0x650(r30)
    b lbl_fn_8014F2B4_00001604
lbl_fn_8014F2B4_000015E0:
    lwz r0, 0x650(r30)
    slwi r0, r0, 2
    add r0, r30, r0
    addic. r4, r0, 0x654
    beq lbl_fn_8014F2B4_000015F8
    stw r3, 0x0(r4)
lbl_fn_8014F2B4_000015F8:
    lwz r3, 0x650(r30)
    addi r0, r3, 0x1
    stw r0, 0x650(r30)
lbl_fn_8014F2B4_00001604:
    lmw r27, 0xc(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8014F4FC(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    mr r6, r30
    lwz r0, 0x650(r3)
    mtctr r0
    cmplwi r0, 0x0
    ble lbl_fn_8014F4FC_000016D8
lbl_fn_8014F4FC_00001648:
    lwz r7, 0x654(r6)
    lwz r0, 0x4(r7)
    cmpw r4, r0
    bne lbl_fn_8014F4FC_000016CC
    lwz r0, 0x8(r7)
    cmpw r5, r0
    bne lbl_fn_8014F4FC_000016CC
    slwi r0, r31, 2
    add r3, r3, r0
    lwz r3, 0x654(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8014F4FC_0000168C
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014F4FC_0000168C:
    slwi r0, r31, 2
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r30, r0
    b lbl_fn_8014F4FC_000016B4
lbl_fn_8014F4FC_000016A4:
    lwz r0, 0x658(r5)
    addi r4, r4, 0x1
    stw r0, 0x654(r5)
    addi r5, r5, 0x4
lbl_fn_8014F4FC_000016B4:
    lwz r3, 0x650(r30)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8014F4FC_000016A4
    stw r0, 0x650(r30)
    b lbl_fn_8014F4FC_000016D8
lbl_fn_8014F4FC_000016CC:
    addi r6, r6, 0x4
    addi r31, r31, 0x1
    bdnz lbl_fn_8014F4FC_00001648
lbl_fn_8014F4FC_000016D8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8014F5D4(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    slwi r0, r4, 2
    stw r31, 0x1c(r1)
    mr r31, r6
    stw r30, 0x18(r1)
    mr r30, r5
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    add r3, r3, r0
    lwz r3, 0x654(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8014F5D4_00001744
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014F5D4_00001744:
    slwi r0, r29, 2
    srawi r0, r0, 2
    addze r4, r0
    slwi r0, r4, 2
    add r5, r28, r0
    b lbl_fn_8014F5D4_0000176C
lbl_fn_8014F5D4_0000175C:
    lwz r0, 0x658(r5)
    addi r4, r4, 0x1
    stw r0, 0x654(r5)
    addi r5, r5, 0x4
lbl_fn_8014F5D4_0000176C:
    lwz r3, 0x650(r28)
    subi r0, r3, 0x1
    cmplw r4, r0
    blt lbl_fn_8014F5D4_0000175C
    stw r0, 0x650(r28)
    mr r3, r28
    mr r4, r30
    mr r5, r31
    mr r6, r29
    bl fn_8014F2B4
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8014F698(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r27, 0x1c(r1)
    mr r31, r3
    mr r27, r4
    mr r28, r6
    stw r5, 0x8(r1)
    lwz r3, 0x678(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8014F698_0000184C
    beq lbl_fn_8014F698_000017F8
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014F698_000017F8:
    lwz r3, 0x67c(r31)
    li r0, 0x0
    stw r0, 0x678(r31)
    cmpwi r3, 0x0
    beq lbl_fn_8014F698_0000182C
    beq lbl_fn_8014F698_00001824
    lwz r12, 0x0(r3)
    li r4, 0x1
    lwz r12, 0x8(r12)
    mtctr r12
    bctrl
lbl_fn_8014F698_00001824:
    li r0, 0x0
    stw r0, 0x67c(r31)
lbl_fn_8014F698_0000182C:
    lwz r0, 0x674(r31)
    cmpwi r0, 0x0
    bne lbl_fn_8014F698_0000184C
    mr r3, r31
    li r4, 0x0
    li r5, 0x0
    li r6, 0x0
    bl fn_8014DEE4
lbl_fn_8014F698_0000184C:
    lwz r4, 0x8(r1)
    mr r3, r27
    mr r6, r31
    li r5, 0x0
    li r7, 0x0
    bl fn_800457A4
    stw r3, 0x678(r31)
    li r29, 0x5
    li r30, 0x1
    stw r29, 0x288(r3)
    stw r30, 0x28c(r3)
    lwz r3, 0x5c(r31)
    lwz r0, 0x11c(r3)
    cmpwi r0, 0x2
    bne lbl_fn_8014F698_000018AC
    lwz r4, 0x8(r1)
    mr r3, r27
    mr r6, r31
    li r5, 0x0
    li r7, 0x0
    bl fn_800457A4
    stw r3, 0x67c(r31)
    stw r29, 0x288(r3)
    stw r30, 0x28c(r3)
lbl_fn_8014F698_000018AC:
    lwz r0, 0x12a8(r31)
    cmpwi r28, 0x0
    oris r0, r0, 0x20
    stw r0, 0x12a8(r31)
    beq lbl_fn_8014F698_00001968
    lbz r0, lbl_8087EE74
    extsb. r0, r0
    bne lbl_fn_8014F698_00001900
    lis r3, lbl_807C6BB8@ha
    li r0, 0x0
    stwu r0, lbl_807C6BB8@l(r3)
    lis r4, fn_8003EFB0@ha
    li r30, 0x1
    lis r5, lbl_807C7B10@ha
    stw r0, 0x4(r3)
    addi r4, r4, fn_8003EFB0@l
    addi r5, r5, lbl_807C7B10@l
    stw r0, 0x8(r3)
    stw r30, 0xc(r3)
    bl __register_global_object
    stb r30, lbl_8087EE74
lbl_fn_8014F698_00001900:
    lis r29, lbl_807C6BB8@ha
    addi r29, r29, lbl_807C6BB8@l
    lwz r0, 0xc(r29)
    cmpwi r0, 0x0
    beq lbl_fn_8014F698_00001968
    li r28, 0x0
    li r30, 0x0
    b lbl_fn_8014F698_0000195C
lbl_fn_8014F698_00001920:
    lwz r0, 0x0(r29)
    add r3, r0, r30
    lwzx r0, r30, r0
    cmpwi r0, -0x1
    beq lbl_fn_8014F698_0000193C
    cmpwi r0, 0x9
    bne lbl_fn_8014F698_00001954
lbl_fn_8014F698_0000193C:
    lwz r12, 0x4(r3)
    mr r4, r31
    addi r5, r1, 0x8
    li r3, 0x9
    mtctr r12
    bctrl
lbl_fn_8014F698_00001954:
    addi r28, r28, 0x1
    addi r30, r30, 0x8
lbl_fn_8014F698_0000195C:
    lwz r0, 0x4(r29)
    cmpw r28, r0
    blt lbl_fn_8014F698_00001920
lbl_fn_8014F698_00001968:
    lmw r27, 0x1c(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
