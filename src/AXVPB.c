#include "revolution/types.h"
#include "revolution/os.h"

/* External functions */
extern void _savegpr_25(void);
extern void _restgpr_25(void);
extern void fn_80607DE0(void);
extern void fn_80607F80(void);
extern void fn_80608B70(void);

/* External large data symbols */
extern u8 lbl_807AC608[];
extern u8 lbl_807AC688[];

/* External small data symbols (SDA21) */
extern u32 lbl_8087FFB8;
extern u32 lbl_8087FFBC;
extern u32 lbl_8087FFC0;
extern u32 lbl_8087FFC4;
extern u32 lbl_8087FFC8;
extern u32 lbl_8087FFCC;
extern u32 lbl_8087FFD0;
extern u32 lbl_8087FFD4;
extern u32 lbl_8087FFD8;
extern u32 lbl_8087FFDC;
extern u32 lbl_8087FFE0;
extern u32 lbl_8087FFE4;
extern u32 lbl_8087FFE8;
extern u32 lbl_8087FFEC;
extern u32 lbl_8087FFF0;
extern u32 lbl_8087FFF4;
extern u32 lbl_8087FFF8;
extern u32 lbl_8087FFFC;
extern u32 lbl_80880000;
extern u32 lbl_80880004;
extern u32 lbl_80880008;
extern u32 lbl_8088000C;
extern u32 lbl_80880014;
extern u32 lbl_80880018;
extern u32 lbl_8088001C;
extern u32 lbl_80880020;

/* Function declarations */
void fn_8060A120(void);
void fn_8060A180(void);
void fn_8060A2E0(void);
void fn_8060A2F0(void);
void fn_8060A840(void);

asm void fn_8060A120(void)
{
    nofralloc
    li r0, 0x0
    stw r0, lbl_8087FFB8
    stw r0, lbl_8087FFBC
    stw r0, lbl_8087FFC0
    stw r0, lbl_8087FFC4
    stw r0, lbl_8087FFC8
    stw r0, lbl_8087FFCC
    stw r0, lbl_8087FFD0
    stw r0, lbl_8087FFD4
    stw r0, lbl_8087FFD8
    stw r0, lbl_8087FFDC
    stw r0, lbl_8087FFE0
    stw r0, lbl_8087FFE4
    stw r0, lbl_8087FFE8
    stw r0, lbl_8087FFEC
    stw r0, lbl_8087FFF0
    stw r0, lbl_8087FFF4
    stw r0, lbl_8087FFF8
    stw r0, lbl_8087FFFC
    stw r0, lbl_80880000
    stw r0, lbl_80880004
    blr
}

asm void fn_8060A180(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    stw r31, 0xc(r1)
    stw r30, 0x8(r1)
    lwz r4, lbl_80880004
    lha r0, 0x52(r3)
    lwz r6, lbl_8087FFF8
    add r0, r4, r0
    stw r0, lbl_80880004
    lwz r5, lbl_8087FFEC
    lha r0, 0x54(r3)
    lwz r4, lbl_8087FFE0
    add r0, r6, r0
    stw r0, lbl_8087FFF8
    lwz r8, lbl_80880000
    lha r0, 0x56(r3)
    lwz r7, lbl_8087FFF4
    add r0, r5, r0
    stw r0, lbl_8087FFEC
    lwz r6, lbl_8087FFE8
    lha r0, 0x58(r3)
    lwz r5, lbl_8087FFDC
    add r0, r4, r0
    stw r0, lbl_8087FFE0
    lwz r4, lbl_8087FFFC
    lha r0, 0x5a(r3)
    lwz r30, lbl_8087FFF0
    add r0, r8, r0
    stw r0, lbl_80880000
    lwz r31, lbl_8087FFE4
    lha r0, 0x5c(r3)
    lwz r12, lbl_8087FFD8
    add r0, r7, r0
    stw r0, lbl_8087FFF4
    lwz r11, lbl_8087FFD4
    lha r0, 0x5e(r3)
    lwz r10, lbl_8087FFD0
    add r0, r6, r0
    stw r0, lbl_8087FFE8
    lwz r9, lbl_8087FFCC
    lha r0, 0x60(r3)
    lwz r8, lbl_8087FFC8
    add r0, r5, r0
    stw r0, lbl_8087FFDC
    lwz r7, lbl_8087FFC4
    lha r0, 0x62(r3)
    lwz r6, lbl_8087FFC0
    add r0, r4, r0
    stw r0, lbl_8087FFFC
    lwz r5, lbl_8087FFBC
    lha r0, 0x64(r3)
    lwz r4, lbl_8087FFB8
    add r0, r30, r0
    stw r0, lbl_8087FFF0
    lha r0, 0x66(r3)
    add r0, r31, r0
    stw r0, lbl_8087FFE4
    lha r0, 0x68(r3)
    add r0, r12, r0
    stw r0, lbl_8087FFD8
    lha r0, 0xfa(r3)
    add r0, r11, r0
    stw r0, lbl_8087FFD4
    lha r0, 0xfc(r3)
    add r0, r10, r0
    stw r0, lbl_8087FFD0
    lha r0, 0xfe(r3)
    add r0, r9, r0
    stw r0, lbl_8087FFCC
    lha r0, 0x100(r3)
    add r0, r8, r0
    stw r0, lbl_8087FFC8
    lha r0, 0x102(r3)
    add r0, r7, r0
    stw r0, lbl_8087FFC4
    lha r0, 0x104(r3)
    add r0, r6, r0
    stw r0, lbl_8087FFC0
    lha r0, 0x106(r3)
    add r0, r5, r0
    stw r0, lbl_8087FFBC
    lha r0, 0x108(r3)
    add r0, r4, r0
    stw r0, lbl_8087FFB8
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    addi r1, r1, 0x10
    blr
}

asm void fn_8060A2E0(void)
{
    nofralloc
    lwz r3, lbl_80880018
    blr
}

asm void fn_8060A2F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    addi r30, r3, 0x28
    stw r29, 0x14(r1)
    stw r28, 0x10(r1)
    mr r28, r3
    lwz r5, lbl_80880018
    lwz r4, lbl_80880008
    addi r0, r5, 0x1
    stw r0, lbl_80880018
    lwz r0, 0x18(r3)
    lwz r29, 0x1c(r3)
    mulli r0, r0, 0x140
    cmpwi r29, 0x0
    add r31, r4, r0
    bne lbl_fn_8060A2F0_00000240
    lhz r0, 0x10(r31)
    sth r0, 0x10(r30)
    lhz r0, 0x6a(r31)
    sth r0, 0x6a(r30)
    lhz r0, 0x7a(r31)
    sth r0, 0x7a(r30)
    lhz r0, 0x7c(r31)
    sth r0, 0x7c(r30)
    b lbl_fn_8060A2F0_00000700
lbl_fn_8060A2F0_00000240:
    clrrwi. r0, r29, 31
    beq lbl_fn_8060A2F0_0000025C
    mr r3, r31
    mr r4, r30
    li r5, 0x140
    bl memcpy
    b lbl_fn_8060A2F0_00000700
lbl_fn_8060A2F0_0000025C:
    clrlwi. r0, r29, 31
    beq lbl_fn_8060A2F0_00000274
    lhz r0, 0x8(r30)
    sth r0, 0x8(r31)
    lhz r0, 0xa(r30)
    sth r0, 0xa(r31)
lbl_fn_8060A2F0_00000274:
    rlwinm. r0, r29, 0, 30, 30
    beq lbl_fn_8060A2F0_00000284
    lwz r0, 0xc(r30)
    stw r0, 0xc(r31)
lbl_fn_8060A2F0_00000284:
    rlwinm. r0, r29, 0, 29, 29
    beq lbl_fn_8060A2F0_00000298
    lhz r0, 0x10(r30)
    sth r0, 0x10(r31)
    b lbl_fn_8060A2F0_000002A0
lbl_fn_8060A2F0_00000298:
    lhz r0, 0x10(r31)
    sth r0, 0x10(r30)
lbl_fn_8060A2F0_000002A0:
    rlwinm. r0, r29, 0, 28, 28
    beq lbl_fn_8060A2F0_000002B0
    lhz r0, 0x12(r30)
    sth r0, 0x12(r31)
lbl_fn_8060A2F0_000002B0:
    rlwinm. r0, r29, 0, 27, 27
    beq lbl_fn_8060A2F0_000002C8
    addi r3, r31, 0x14
    addi r4, r30, 0x14
    li r5, 0x30
    bl memcpy
lbl_fn_8060A2F0_000002C8:
    rlwinm. r0, r29, 0, 25, 25
    beq lbl_fn_8060A2F0_000002E4
    lhz r0, 0x4e(r30)
    sth r0, 0x4e(r31)
    lhz r0, 0x50(r30)
    sth r0, 0x50(r31)
    b lbl_fn_8060A2F0_0000036C
lbl_fn_8060A2F0_000002E4:
    rlwinm. r0, r29, 0, 26, 26
    beq lbl_fn_8060A2F0_0000036C
    lhz r3, 0x44(r30)
    li r0, 0x0
    sth r3, 0x44(r31)
    lhz r3, 0x46(r30)
    sth r3, 0x46(r31)
    lhz r3, 0x48(r30)
    sth r3, 0x48(r31)
    lhz r3, 0x4a(r30)
    sth r3, 0x4a(r31)
    lhz r3, 0x4c(r30)
    sth r3, 0x4c(r31)
    lhz r3, 0x4e(r30)
    sth r3, 0x4e(r31)
    lhz r3, 0x50(r30)
    sth r3, 0x50(r31)
    lwz r3, 0x24(r28)
    stw r0, 0x0(r3)
    stw r0, 0x4(r3)
    stw r0, 0x8(r3)
    stw r0, 0xc(r3)
    stw r0, 0x10(r3)
    stw r0, 0x14(r3)
    stw r0, 0x18(r3)
    stw r0, 0x1c(r3)
    stw r0, 0x20(r3)
    stw r0, 0x24(r3)
    stw r0, 0x28(r3)
    stw r0, 0x2c(r3)
    stw r0, 0x30(r3)
    stw r0, 0x34(r3)
    stw r0, 0x38(r3)
    stw r0, 0x3c(r3)
lbl_fn_8060A2F0_0000036C:
    rlwinm. r0, r29, 0, 24, 24
    beq lbl_fn_8060A2F0_00000384
    addi r3, r31, 0x52
    addi r4, r30, 0x52
    li r5, 0x18
    bl memcpy
lbl_fn_8060A2F0_00000384:
    rlwinm. r0, r29, 0, 22, 22
    beq lbl_fn_8060A2F0_000003A0
    lhz r0, 0x6a(r31)
    sth r0, 0x6a(r30)
    lha r0, 0x6c(r30)
    sth r0, 0x6c(r31)
    b lbl_fn_8060A2F0_000003B8
lbl_fn_8060A2F0_000003A0:
    rlwinm. r0, r29, 0, 23, 23
    beq lbl_fn_8060A2F0_000003B8
    lhz r0, 0x6a(r30)
    sth r0, 0x6a(r31)
    lha r0, 0x6c(r30)
    sth r0, 0x6c(r31)
lbl_fn_8060A2F0_000003B8:
    rlwinm. r0, r29, 0, 17, 20
    beq lbl_fn_8060A2F0_00000410
    rlwinm. r0, r29, 0, 20, 20
    beq lbl_fn_8060A2F0_000003D0
    lhz r0, 0x6e(r30)
    sth r0, 0x6e(r31)
lbl_fn_8060A2F0_000003D0:
    rlwinm. r0, r29, 0, 19, 19
    beq lbl_fn_8060A2F0_000003E0
    lwz r0, 0x72(r30)
    stw r0, 0x72(r31)
lbl_fn_8060A2F0_000003E0:
    rlwinm. r0, r29, 0, 18, 18
    beq lbl_fn_8060A2F0_000003F0
    lwz r0, 0x76(r30)
    stw r0, 0x76(r31)
lbl_fn_8060A2F0_000003F0:
    rlwinm. r0, r29, 0, 17, 17
    beq lbl_fn_8060A2F0_00000404
    lwz r0, 0x7a(r30)
    stw r0, 0x7a(r31)
    b lbl_fn_8060A2F0_0000044C
lbl_fn_8060A2F0_00000404:
    lwz r0, 0x7a(r31)
    stw r0, 0x7a(r30)
    b lbl_fn_8060A2F0_0000044C
lbl_fn_8060A2F0_00000410:
    rlwinm. r0, r29, 0, 21, 21
    beq lbl_fn_8060A2F0_0000043C
    lwz r0, 0x6e(r30)
    stw r0, 0x6e(r31)
    lwz r0, 0x72(r30)
    stw r0, 0x72(r31)
    lwz r0, 0x76(r30)
    stw r0, 0x76(r31)
    lwz r0, 0x7a(r30)
    stw r0, 0x7a(r31)
    b lbl_fn_8060A2F0_0000044C
lbl_fn_8060A2F0_0000043C:
    lhz r0, 0x7a(r31)
    sth r0, 0x7a(r30)
    lhz r0, 0x7c(r31)
    sth r0, 0x7c(r30)
lbl_fn_8060A2F0_0000044C:
    rlwinm. r0, r29, 0, 16, 16
    beq lbl_fn_8060A2F0_000004A4
    lwz r0, 0x7e(r30)
    stw r0, 0x7e(r31)
    lwz r0, 0x82(r30)
    stw r0, 0x82(r31)
    lwz r0, 0x86(r30)
    stw r0, 0x86(r31)
    lwz r0, 0x8a(r30)
    stw r0, 0x8a(r31)
    lwz r0, 0x8e(r30)
    stw r0, 0x8e(r31)
    lwz r0, 0x92(r30)
    stw r0, 0x92(r31)
    lwz r0, 0x96(r30)
    stw r0, 0x96(r31)
    lwz r0, 0x9a(r30)
    stw r0, 0x9a(r31)
    lwz r0, 0x9e(r30)
    stw r0, 0x9e(r31)
    lwz r0, 0xa2(r30)
    stw r0, 0xa2(r31)
lbl_fn_8060A2F0_000004A4:
    rlwinm. r0, r29, 0, 14, 14
    beq lbl_fn_8060A2F0_000004C0
    lhz r0, 0xa6(r30)
    sth r0, 0xa6(r31)
    lhz r0, 0xa8(r30)
    sth r0, 0xa8(r31)
    b lbl_fn_8060A2F0_00000500
lbl_fn_8060A2F0_000004C0:
    rlwinm. r0, r29, 0, 15, 15
    beq lbl_fn_8060A2F0_00000500
    lhz r0, 0xa6(r30)
    sth r0, 0xa6(r31)
    lhz r0, 0xa8(r30)
    sth r0, 0xa8(r31)
    lhz r0, 0xaa(r30)
    sth r0, 0xaa(r31)
    lhz r0, 0xac(r30)
    sth r0, 0xac(r31)
    lhz r0, 0xae(r30)
    sth r0, 0xae(r31)
    lhz r0, 0xb0(r30)
    sth r0, 0xb0(r31)
    lhz r0, 0xb2(r30)
    sth r0, 0xb2(r31)
lbl_fn_8060A2F0_00000500:
    rlwinm. r0, r29, 0, 13, 13
    beq lbl_fn_8060A2F0_00000520
    lhz r0, 0xb4(r30)
    sth r0, 0xb4(r31)
    lhz r0, 0xb6(r30)
    sth r0, 0xb6(r31)
    lhz r0, 0xb8(r30)
    sth r0, 0xb8(r31)
lbl_fn_8060A2F0_00000520:
    rlwinm. r0, r29, 0, 11, 11
    beq lbl_fn_8060A2F0_0000053C
    lhz r0, 0xbe(r30)
    sth r0, 0xbe(r31)
    lhz r0, 0xc0(r30)
    sth r0, 0xc0(r31)
    b lbl_fn_8060A2F0_00000564
lbl_fn_8060A2F0_0000053C:
    rlwinm. r0, r29, 0, 12, 12
    beq lbl_fn_8060A2F0_00000564
    lhz r0, 0xba(r30)
    sth r0, 0xba(r31)
    lhz r0, 0xbc(r30)
    sth r0, 0xbc(r31)
    lhz r0, 0xbe(r30)
    sth r0, 0xbe(r31)
    lhz r0, 0xc0(r30)
    sth r0, 0xc0(r31)
lbl_fn_8060A2F0_00000564:
    rlwinm. r0, r29, 0, 9, 9
    beq lbl_fn_8060A2F0_00000598
    lhz r0, 0xcc(r30)
    sth r0, 0xcc(r31)
    lhz r0, 0xce(r30)
    sth r0, 0xce(r31)
    lhz r0, 0xd0(r30)
    sth r0, 0xd0(r31)
    lhz r0, 0xd2(r30)
    sth r0, 0xd2(r31)
    lhz r0, 0xd4(r30)
    sth r0, 0xd4(r31)
    b lbl_fn_8060A2F0_000005F0
lbl_fn_8060A2F0_00000598:
    rlwinm. r0, r29, 0, 10, 10
    beq lbl_fn_8060A2F0_000005F0
    lhz r0, 0xc2(r30)
    sth r0, 0xc2(r31)
    lhz r0, 0xc4(r30)
    sth r0, 0xc4(r31)
    lhz r0, 0xc6(r30)
    sth r0, 0xc6(r31)
    lhz r0, 0xc8(r30)
    sth r0, 0xc8(r31)
    lhz r0, 0xca(r30)
    sth r0, 0xca(r31)
    lhz r0, 0xcc(r30)
    sth r0, 0xcc(r31)
    lhz r0, 0xce(r30)
    sth r0, 0xce(r31)
    lhz r0, 0xd0(r30)
    sth r0, 0xd0(r31)
    lhz r0, 0xd2(r30)
    sth r0, 0xd2(r31)
    lhz r0, 0xd4(r30)
    sth r0, 0xd4(r31)
lbl_fn_8060A2F0_000005F0:
    rlwinm. r0, r29, 0, 8, 8
    beq lbl_fn_8060A2F0_00000600
    lhz r0, 0xd6(r30)
    sth r0, 0xd6(r31)
lbl_fn_8060A2F0_00000600:
    rlwinm. r0, r29, 0, 7, 7
    beq lbl_fn_8060A2F0_00000610
    lhz r0, 0xd8(r30)
    sth r0, 0xd8(r31)
lbl_fn_8060A2F0_00000610:
    rlwinm. r0, r29, 0, 6, 6
    beq lbl_fn_8060A2F0_00000628
    addi r3, r31, 0xda
    addi r4, r30, 0xda
    li r5, 0x20
    bl memcpy
lbl_fn_8060A2F0_00000628:
    rlwinm. r0, r29, 0, 5, 5
    beq lbl_fn_8060A2F0_00000640
    addi r3, r31, 0xfa
    addi r4, r30, 0xfa
    li r5, 0x10
    bl memcpy
lbl_fn_8060A2F0_00000640:
    rlwinm. r0, r29, 0, 4, 4
    beq lbl_fn_8060A2F0_00000658
    addi r3, r31, 0x10a
    addi r4, r30, 0x10a
    li r5, 0xa
    bl memcpy
lbl_fn_8060A2F0_00000658:
    rlwinm. r0, r29, 0, 2, 2
    beq lbl_fn_8060A2F0_00000674
    lhz r0, 0x118(r30)
    sth r0, 0x118(r31)
    lhz r0, 0x11a(r30)
    sth r0, 0x11a(r31)
    b lbl_fn_8060A2F0_00000700
lbl_fn_8060A2F0_00000674:
    rlwinm. r0, r29, 0, 1, 1
    beq lbl_fn_8060A2F0_000006A8
    lhz r0, 0x11e(r30)
    sth r0, 0x11e(r31)
    lhz r0, 0x120(r30)
    sth r0, 0x120(r31)
    lhz r0, 0x122(r30)
    sth r0, 0x122(r31)
    lhz r0, 0x124(r30)
    sth r0, 0x124(r31)
    lhz r0, 0x126(r30)
    sth r0, 0x126(r31)
    b lbl_fn_8060A2F0_00000700
lbl_fn_8060A2F0_000006A8:
    rlwinm. r0, r29, 0, 3, 3
    beq lbl_fn_8060A2F0_00000700
    lhz r0, 0x114(r30)
    sth r0, 0x114(r31)
    lhz r0, 0x116(r30)
    sth r0, 0x116(r31)
    lhz r0, 0x118(r30)
    sth r0, 0x118(r31)
    lhz r0, 0x11a(r30)
    sth r0, 0x11a(r31)
    lhz r0, 0x11c(r30)
    sth r0, 0x11c(r31)
    lhz r0, 0x11e(r30)
    sth r0, 0x11e(r31)
    lhz r0, 0x120(r30)
    sth r0, 0x120(r31)
    lhz r0, 0x122(r30)
    sth r0, 0x122(r31)
    lhz r0, 0x124(r30)
    sth r0, 0x124(r31)
    lhz r0, 0x126(r30)
    sth r0, 0x126(r31)
lbl_fn_8060A2F0_00000700:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8060A840(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    lwz r0, lbl_80880014
    mr r25, r3
    li r29, 0x0
    stw r29, lbl_80880018
    mulli r4, r0, 0x140
    lwz r3, lbl_80880008
    bl DCInvalidateRange
    lwz r0, lbl_80880014
    lwz r3, lbl_8088000C
    slwi r4, r0, 6
    bl DCInvalidateRange
    bl fn_80608B70
    lwz r0, lbl_80880014
    lis r31, lbl_807AC688@ha
    lis r30, lbl_807AC608@ha
    li r27, 0x1f
    mulli r0, r0, 0x258
    addi r31, r31, lbl_807AC688@l
    addi r30, r30, lbl_807AC608@l
    add r0, r3, r0
    add r3, r0, r25
    addi r28, r3, 0x20
lbl_fn_8060A840_0000078C:
    mr r3, r27
    bl fn_80607DE0
    mr r26, r3
    b lbl_fn_8060A840_0000098C
lbl_fn_8060A840_0000079C:
    lhz r0, 0x6c(r26)
    cmplwi r0, 0x1
    bne lbl_fn_8060A840_000007AC
    addi r28, r28, 0x81
lbl_fn_8060A840_000007AC:
    lwz r0, 0x20(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8060A840_000007CC
    lwz r0, 0x18(r26)
    lwz r3, lbl_80880008
    mulli r0, r0, 0x140
    add r3, r3, r0
    bl fn_8060A180
lbl_fn_8060A840_000007CC:
    lhz r0, 0x38(r26)
    cmplwi r0, 0x1
    bne lbl_fn_8060A840_00000978
    lhz r0, 0xe2(r26)
    addi r28, r28, 0x183
    cmpwi r0, 0x0
    beq lbl_fn_8060A840_000007EC
    addi r28, r28, 0x135
lbl_fn_8060A840_000007EC:
    lhz r0, 0xea(r26)
    cmpwi r0, 0x0
    beq lbl_fn_8060A840_000007FC
    addi r28, r28, 0x400
lbl_fn_8060A840_000007FC:
    lhz r0, 0x6c(r26)
    cmplwi r0, 0x1
    bne lbl_fn_8060A840_0000080C
    addi r28, r28, 0x1b
lbl_fn_8060A840_0000080C:
    lhz r3, 0x30(r26)
    lhz r0, 0xce(r26)
    cmpwi r3, 0x0
    lhz r4, 0xd0(r26)
    rlwimi r4, r0, 16, 0, 15
    bne lbl_fn_8060A840_0000083C
    slwi r3, r4, 9
    addis r3, r3, 0x1
    addi r0, r3, -0x8000
    srwi r3, r0, 16
    addi r0, r3, 0x619
    b lbl_fn_8060A840_0000085C
lbl_fn_8060A840_0000083C:
    cmplwi r3, 0x1
    li r0, 0x25d
    bne lbl_fn_8060A840_0000085C
    slwi r3, r4, 9
    addis r3, r3, 0x1
    addi r0, r3, -0x8000
    srwi r3, r0, 16
    addi r0, r3, 0x5ba
lbl_fn_8060A840_0000085C:
    lwz r4, 0x34(r26)
    add r28, r28, r0
    lhz r0, 0xfe(r26)
    rlwinm r5, r4, 13, 25, 29
    clrlslwi r3, r4, 27, 2
    rlwinm r6, r4, 8, 25, 29
    rlwinm r4, r4, 18, 25, 29
    cmplwi r0, 0x1
    lwzx r5, r30, r5
    lwzx r0, r30, r3
    lwzx r6, r30, r6
    lwzx r4, r30, r4
    add r0, r5, r0
    add r3, r28, r6
    add r0, r4, r0
    add r28, r3, r0
    bne lbl_fn_8060A840_00000928
    lhz r0, 0x13c(r26)
    addi r28, r28, 0x265
    cmplwi r0, 0x1
    bne lbl_fn_8060A840_000008B8
    addi r28, r28, 0x76
    b lbl_fn_8060A840_000008C4
lbl_fn_8060A840_000008B8:
    cmplwi r0, 0x2
    bne lbl_fn_8060A840_000008C4
    addi r28, r28, 0x342
lbl_fn_8060A840_000008C4:
    lhz r3, 0x100(r26)
    rlwinm r4, r3, 30, 28, 29
    clrlslwi r0, r3, 30, 2
    lwzx r4, r31, r4
    rlwinm r9, r3, 20, 28, 29
    lwzx r0, r31, r0
    rlwinm r8, r3, 22, 28, 29
    rlwinm r7, r3, 24, 28, 29
    rlwinm r6, r3, 26, 28, 29
    rlwinm r5, r3, 28, 28, 29
    rlwinm r3, r3, 0, 28, 29
    lwzx r7, r31, r7
    add r0, r4, r0
    lwzx r3, r31, r3
    lwzx r9, r31, r9
    add r7, r28, r7
    lwzx r8, r31, r8
    add r0, r3, r0
    lwzx r6, r31, r6
    lwzx r4, r31, r5
    add r8, r9, r8
    add r3, r8, r7
    add r4, r6, r4
    add r0, r4, r0
    add r28, r3, r0
lbl_fn_8060A840_00000928:
    lwz r0, lbl_80880020
    cmplw r0, r28
    ble lbl_fn_8060A840_00000940
    mr r3, r26
    bl fn_8060A2F0
    b lbl_fn_8060A840_00000980
lbl_fn_8060A840_00000940:
    lwz r0, 0x18(r26)
    lwz r3, lbl_80880008
    mulli r0, r0, 0x140
    add r25, r3, r0
    lhz r0, 0x10(r25)
    cmplwi r0, 0x1
    bne lbl_fn_8060A840_00000964
    mr r3, r25
    bl fn_8060A180
lbl_fn_8060A840_00000964:
    sth r29, 0x38(r26)
    mr r3, r26
    sth r29, 0x10(r25)
    bl fn_80607F80
    b lbl_fn_8060A840_00000980
lbl_fn_8060A840_00000978:
    mr r3, r26
    bl fn_8060A2F0
lbl_fn_8060A840_00000980:
    stw r29, 0x1c(r26)
    stw r29, 0x20(r26)
    lwz r26, 0x0(r26)
lbl_fn_8060A840_0000098C:
    cmpwi r26, 0x0
    bne lbl_fn_8060A840_0000079C
    subic. r27, r27, 0x1
    bne lbl_fn_8060A840_0000078C
    stw r28, lbl_8088001C
    li r3, 0x0
    bl fn_80607DE0
    mr r25, r3
    li r26, 0x0
    b lbl_fn_8060A840_000009F0
lbl_fn_8060A840_000009B4:
    lwz r0, 0x20(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8060A840_000009D4
    lwz r0, 0x18(r25)
    lwz r3, lbl_80880008
    mulli r0, r0, 0x140
    add r3, r3, r0
    bl fn_8060A180
lbl_fn_8060A840_000009D4:
    stw r26, 0x20(r25)
    lwz r0, 0x18(r25)
    lwz r3, lbl_80880008
    mulli r0, r0, 0x140
    add r3, r3, r0
    sth r26, 0x10(r3)
    lwz r25, 0x0(r25)
lbl_fn_8060A840_000009F0:
    cmpwi r25, 0x0
    bne lbl_fn_8060A840_000009B4
    lwz r0, lbl_80880014
    lwz r3, lbl_80880008
    mulli r4, r0, 0x140
    bl DCFlushRange
    lwz r0, lbl_80880014
    lwz r3, lbl_8088000C
    slwi r4, r0, 6
    bl DCFlushRange
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}
