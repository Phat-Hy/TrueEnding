#include "revolution/types.h"

/* External functions referenced */
extern void IOS_IoctlAsync(void);
extern void IOS_Ioctlv(void);
extern void IOS_Open(void);
extern void IOS_OpenAsync(void);
extern void IPCGetBufferHi(void);
extern void IPCGetBufferLo(void);
extern void IPCSetBufferLo(void);
extern void OSReport(const char*, ...);
extern void fn_8061C7E0(void);
extern void fn_8061C8A0(void);
extern void fn_8061C950(void);
extern void fn_8061CA50(void);
extern void fn_8061CB60(void);
extern void fn_8061CC60(void);
extern void fn_8061CD70(void);
extern void fn_8061CE50(void);
extern void fn_8061D080(void);
extern void fn_8061D2F0(void);
extern void iosAllocAligned(void);
extern void iosCreateHeap(void);
extern void iosFree(void*, void*);
extern char* strcpy(char*, const char*);
extern u32 strnlen(const char*, u32);
extern void _savegpr_21(void);
extern void _savegpr_23(void);
extern void _savegpr_25(void);
extern void _savegpr_26(void);
extern void _savegpr_27(void);
extern void _restgpr_21(void);
extern void _restgpr_23(void);
extern void _restgpr_25(void);
extern void _restgpr_26(void);
extern void _restgpr_27(void);

static const char lbl_807B0F40[] = "ISFS_OpenLib: not enough memory\n";
static const char lbl_8087E8C8[] = "/dev/fs";

/* External SDA/SBSS symbols */
extern u32 __fsFd_8087E8C0;
extern u32 __fsInitialized_808800D0;
extern u32 __devfs_808800D4;
extern u32 lbl_808800D8;
extern u32 hId_808800E4;
static u32 lo;
static u32 hi;

/* Function declarations */
void ISFS_OpenLib(void);
void _isfsFuncCb(void);
void fn_8061A880(void);
void fn_8061A980(void);
void fn_8061AA80(void);
void fn_8061ABE0(void);
void fn_8061AD30(void);
void fn_8061AE90(void);
void fn_8061AFD0(void);
void fn_8061B0B0(void);
void fn_8061B180(void);
void fn_8061B290(void);
void fn_8061B3A0(void);
void fn_8061B4D0(void);
void fn_8061B5D0(void);
void ISFS_Open(void);
void ISFS_OpenAsync(void);
void fn_8061B860(void);
void fn_8061B930(void);
void fn_8061B940(void);
void fn_8061B9D0(void);
void fn_8061B9F0(void);
void fn_8061BAA0(void);
void fn_8061BAC0(void);
void fn_8061BB70(void);
void fn_8061BB80(void);
void fn_8061BC10(void);

asm void ISFS_OpenLib(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    lwz r0, __fsInitialized_808800D0
    cmpwi r0, 0x0
    bne lbl_ISFS_OpenLib_00000034
    bl IPCGetBufferLo
    stw r3, lo
    bl IPCGetBufferHi
    stw r3, hi
lbl_ISFS_OpenLib_00000034:
    lwz r3, lo
    lwz r0, __fsInitialized_808800D0
    addi r3, r3, 0x1f
    clrrwi r3, r3, 5
    cmpwi r0, 0x0
    stw r3, __devfs_808800D4
    bne lbl_ISFS_OpenLib_00000078
    lwz r0, hi
    addi r4, r3, 0x40
    cmplw r4, r0
    ble lbl_ISFS_OpenLib_00000078
    lis r3, lbl_807B0F40@ha
    addi r3, r3, lbl_807B0F40@l
    crclr 6
    bl OSReport
    li r31, -0x16
    b lbl_ISFS_OpenLib_0000010C
lbl_ISFS_OpenLib_00000078:
    la r4, lbl_8087E8C8
    bl strcpy
    lwz r3, __devfs_808800D4
    li r4, 0x0
    bl IOS_Open
    cmpwi r3, 0x0
    stw r3, __fsFd_8087E8C0
    bge lbl_ISFS_OpenLib_000000A0
    mr r31, r3
    b lbl_ISFS_OpenLib_0000010C
lbl_ISFS_OpenLib_000000A0:
    lwz r4, __fsInitialized_808800D0
    lwz r30, __devfs_808800D4
    cmpwi r4, 0x0
    bne lbl_ISFS_OpenLib_000000D8
    lwz r0, hi
    addi r3, r30, 0x1540
    cmplw r3, r0
    ble lbl_ISFS_OpenLib_000000D8
    lis r3, lbl_807B0F40@ha
    addi r3, r3, lbl_807B0F40@l
    crclr 6
    bl OSReport
    li r31, -0x16
    b lbl_ISFS_OpenLib_0000010C
lbl_ISFS_OpenLib_000000D8:
    cmpwi r4, 0x0
    bne lbl_ISFS_OpenLib_000000F0
    addi r3, r30, 0x1540
    bl IPCSetBufferLo
    li r0, 0x1
    stw r0, __fsInitialized_808800D0
lbl_ISFS_OpenLib_000000F0:
    mr r3, r30
    li r4, 0x1540
    bl iosCreateHeap
    cmpwi r3, 0x0
    stw r3, hId_808800E4
    bge lbl_ISFS_OpenLib_0000010C
    li r31, -0x16
lbl_ISFS_OpenLib_0000010C:
    mr r3, r31
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void _isfsFuncCb(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    cmpwi cr1, r3, 0x0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    stw r30, 0x8(r1)
    mr r30, r3
    blt cr1, lbl__isfsFuncCb_0000025C
    lwz r0, 0x108(r4)
    cmplwi r0, 0x1
    beq lbl__isfsFuncCb_00000184
    cmplwi r0, 0x2
    beq lbl__isfsFuncCb_00000198
    cmplwi r0, 0x3
    beq lbl__isfsFuncCb_000001BC
    cmplwi r0, 0x4
    beq lbl__isfsFuncCb_00000214
    cmplwi r0, 0x5
    beq lbl__isfsFuncCb_0000024C
    b lbl__isfsFuncCb_0000025C
lbl__isfsFuncCb_00000184:
    bne cr1, lbl__isfsFuncCb_0000025C
    lwz r3, 0x10c(r4)
    li r5, 0x1c
    bl memcpy
    b lbl__isfsFuncCb_0000025C
lbl__isfsFuncCb_00000198:
    bne cr1, lbl__isfsFuncCb_0000025C
    addi r0, r4, 0x3f
    lwz r3, 0x10c(r4)
    clrrwi r4, r0, 5
    addi r0, r4, 0x5f
    clrrwi r4, r0, 5
    lwz r0, 0x0(r4)
    stw r0, 0x0(r3)
    b lbl__isfsFuncCb_0000025C
lbl__isfsFuncCb_000001BC:
    bne cr1, lbl__isfsFuncCb_0000025C
    addi r0, r4, 0x5f
    lwz r3, 0x10c(r4)
    clrrwi r5, r0, 5
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    lwz r3, 0x110(r4)
    lhz r0, 0x4(r5)
    sth r0, 0x0(r3)
    lwz r3, 0x114(r4)
    lbz r0, 0x49(r5)
    stw r0, 0x0(r3)
    lwz r3, 0x118(r4)
    lbz r0, 0x46(r5)
    stw r0, 0x0(r3)
    lwz r3, 0x11c(r4)
    lbz r0, 0x47(r5)
    stw r0, 0x0(r3)
    lwz r3, 0x120(r4)
    lbz r0, 0x48(r5)
    stw r0, 0x0(r3)
    b lbl__isfsFuncCb_0000025C
lbl__isfsFuncCb_00000214:
    bne cr1, lbl__isfsFuncCb_0000025C
    addi r0, r4, 0x3f
    lwz r3, 0x10c(r4)
    clrrwi r5, r0, 5
    addi r0, r5, 0x5f
    clrrwi r6, r0, 5
    lwz r5, 0x0(r6)
    addi r0, r6, 0x23
    stw r5, 0x0(r3)
    clrrwi r5, r0, 5
    lwz r3, 0x110(r4)
    lwz r0, 0x0(r5)
    stw r0, 0x0(r3)
    b lbl__isfsFuncCb_0000025C
lbl__isfsFuncCb_0000024C:
    bne cr1, lbl__isfsFuncCb_0000025C
    lwz r3, 0x10c(r4)
    li r5, 0x8
    bl memcpy
lbl__isfsFuncCb_0000025C:
    li r0, 0x0
    stw r0, lbl_808800D8
    lwz r12, 0x100(r31)
    cmpwi r12, 0x0
    beq lbl__isfsFuncCb_00000280
    mr r3, r30
    lwz r4, 0x104(r31)
    mtctr r12
    bctrl
lbl__isfsFuncCb_00000280:
    cmpwi r31, 0x0
    beq lbl__isfsFuncCb_00000294
    lwz r3, hId_808800E4
    mr r4, r31
    bl iosFree
lbl__isfsFuncCb_00000294:
    mr r3, r30
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    lwz r0, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8061A880(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    li r30, 0x0
    beq lbl_fn_8061A880_00000304
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061A880_00000304
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061A880_0000030C
lbl_fn_8061A880_00000304:
    li r31, -0x65
    b lbl_fn_8061A880_00000370
lbl_fn_8061A880_0000030C:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061A880_00000330
    li r31, -0x16
    b lbl_fn_8061A880_00000370
lbl_fn_8061A880_00000330:
    mr r4, r25
    addi r5, r31, 0x1
    addi r3, r3, 0x6
    bl memcpy
    stb r26, 0x49(r30)
    mr r5, r30
    li r4, 0x3
    li r6, 0x4c
    stb r27, 0x46(r30)
    li r7, 0x0
    li r8, 0x0
    stb r28, 0x47(r30)
    stb r29, 0x48(r30)
    lwz r3, __fsFd_8087E8C0
    bl fn_8061D080
    mr r31, r3
lbl_fn_8061A880_00000370:
    cmpwi r30, 0x0
    beq lbl_fn_8061A880_00000388
    beq lbl_fn_8061A880_00000388
    lwz r3, hId_808800E4
    mr r4, r30
    bl iosFree
lbl_fn_8061A880_00000388:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061A980(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    beq lbl_fn_8061A980_00000408
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061A980_00000408
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061A980_00000410
lbl_fn_8061A980_00000408:
    li r3, -0x65
    b lbl_fn_8061A980_0000048C
lbl_fn_8061A980_00000410:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061A980_00000434
    li r3, -0x76
    b lbl_fn_8061A980_0000048C
lbl_fn_8061A980_00000434:
    stw r28, 0x100(r3)
    li r0, 0x0
    mr r4, r23
    addi r5, r31, 0x1
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    addi r3, r3, 0x6
    bl memcpy
    stb r24, 0x49(r30)
    lis r9, _isfsFuncCb@ha
    mr r5, r30
    mr r10, r30
    stb r25, 0x46(r30)
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x3
    li r6, 0x4c
    stb r26, 0x47(r30)
    li r7, 0x0
    li r8, 0x0
    stb r27, 0x48(r30)
    lwz r3, __fsFd_8087E8C0
    bl IOS_IoctlAsync
lbl_fn_8061A980_0000048C:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061AA80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    li r29, 0x0
    beq lbl_fn_8061AA80_0000050C
    cmpwi r5, 0x0
    beq lbl_fn_8061AA80_0000050C
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061AA80_0000050C
    clrlwi. r0, r4, 27
    bne lbl_fn_8061AA80_0000050C
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061AA80_00000514
lbl_fn_8061AA80_0000050C:
    li r31, -0x65
    b lbl_fn_8061AA80_000005D0
lbl_fn_8061AA80_00000514:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8061AA80_00000538
    li r31, -0x16
    b lbl_fn_8061AA80_000005D0
lbl_fn_8061AA80_00000538:
    addi r0, r3, 0x3f
    mr r4, r26
    clrrwi r30, r0, 5
    addi r5, r31, 0x1
    mr r3, r30
    bl memcpy
    stw r30, 0x0(r29)
    li r3, 0x40
    addi r0, r30, 0x5f
    cmpwi r27, 0x0
    stw r3, 0x4(r29)
    clrrwi r30, r0, 5
    li r3, 0x4
    stw r30, 0x8(r29)
    stw r3, 0xc(r29)
    beq lbl_fn_8061AA80_000005A4
    lwz r0, 0x0(r28)
    li r5, 0x2
    stw r0, 0x0(r30)
    li r6, 0x2
    stw r27, 0x10(r29)
    lwz r0, 0x0(r28)
    mulli r0, r0, 0xd
    stw r0, 0x14(r29)
    stw r30, 0x18(r29)
    stw r3, 0x1c(r29)
    b lbl_fn_8061AA80_000005AC
lbl_fn_8061AA80_000005A4:
    li r5, 0x1
    li r6, 0x1
lbl_fn_8061AA80_000005AC:
    lwz r3, __fsFd_8087E8C0
    mr r7, r29
    li r4, 0x4
    bl IOS_Ioctlv
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061AA80_000005D0
    lwz r0, 0x0(r30)
    stw r0, 0x0(r28)
lbl_fn_8061AA80_000005D0:
    cmpwi r29, 0x0
    beq lbl_fn_8061AA80_000005E8
    beq lbl_fn_8061AA80_000005E8
    lwz r3, hId_808800E4
    mr r4, r29
    bl iosFree
lbl_fn_8061AA80_000005E8:
    addi r11, r1, 0x20
    mr r3, r31
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061ABE0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    beq lbl_fn_8061ABE0_00000670
    cmpwi r5, 0x0
    beq lbl_fn_8061ABE0_00000670
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061ABE0_00000670
    clrlwi. r0, r4, 27
    bne lbl_fn_8061ABE0_00000670
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061ABE0_00000678
lbl_fn_8061ABE0_00000670:
    li r3, -0x65
    b lbl_fn_8061ABE0_00000740
lbl_fn_8061ABE0_00000678:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061ABE0_0000069C
    li r3, -0x76
    b lbl_fn_8061ABE0_00000740
lbl_fn_8061ABE0_0000069C:
    stw r28, 0x100(r3)
    li r6, 0x2
    addi r0, r3, 0x3f
    mr r4, r25
    stw r29, 0x104(r3)
    clrrwi r29, r0, 5
    addi r5, r31, 0x1
    stw r6, 0x108(r3)
    stw r27, 0x10c(r3)
    mr r3, r29
    bl memcpy
    stw r29, 0x0(r30)
    li r3, 0x40
    addi r0, r29, 0x5f
    cmpwi r26, 0x0
    stw r3, 0x4(r30)
    clrrwi r4, r0, 5
    li r3, 0x4
    stw r4, 0x8(r30)
    stw r3, 0xc(r30)
    beq lbl_fn_8061ABE0_0000071C
    lwz r0, 0x0(r27)
    li r5, 0x2
    stw r0, 0x0(r4)
    li r6, 0x2
    stw r26, 0x10(r30)
    lwz r0, 0x0(r27)
    mulli r0, r0, 0xd
    stw r0, 0x14(r30)
    stw r4, 0x18(r30)
    stw r3, 0x1c(r30)
    b lbl_fn_8061ABE0_00000724
lbl_fn_8061ABE0_0000071C:
    li r5, 0x1
    li r6, 0x1
lbl_fn_8061ABE0_00000724:
    lis r8, _isfsFuncCb@ha
    lwz r3, __fsFd_8087E8C0
    mr r7, r30
    mr r9, r30
    addi r8, r8, _isfsFuncCb@l
    li r4, 0x4
    bl fn_8061D2F0
lbl_fn_8061ABE0_00000740:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061AD30(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r30, r3
    mr r23, r4
    mr r24, r5
    mr r25, r6
    mr r26, r7
    mr r27, r8
    mr r28, r9
    li r29, 0x0
    beq lbl_fn_8061AD30_000007EC
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061AD30_000007EC
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    beq lbl_fn_8061AD30_000007EC
    cmpwi r23, 0x0
    beq lbl_fn_8061AD30_000007EC
    cmpwi r24, 0x0
    beq lbl_fn_8061AD30_000007EC
    cmpwi r25, 0x0
    beq lbl_fn_8061AD30_000007EC
    cmpwi r26, 0x0
    beq lbl_fn_8061AD30_000007EC
    cmpwi r27, 0x0
    beq lbl_fn_8061AD30_000007EC
    cmpwi r28, 0x0
    bne lbl_fn_8061AD30_000007F4
lbl_fn_8061AD30_000007EC:
    li r31, -0x65
    b lbl_fn_8061AD30_00000884
lbl_fn_8061AD30_000007F4:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8061AD30_00000818
    li r31, -0x16
    b lbl_fn_8061AD30_00000884
lbl_fn_8061AD30_00000818:
    mr r4, r30
    addi r5, r31, 0x1
    bl memcpy
    addi r0, r29, 0x5f
    lwz r3, __fsFd_8087E8C0
    clrrwi r30, r0, 5
    mr r5, r29
    mr r7, r30
    li r4, 0x6
    li r6, 0x40
    li r8, 0x4c
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061AD30_00000884
    lwz r0, 0x0(r30)
    stw r0, 0x0(r23)
    lhz r0, 0x4(r30)
    sth r0, 0x0(r24)
    lbz r0, 0x49(r30)
    stw r0, 0x0(r25)
    lbz r0, 0x46(r30)
    stw r0, 0x0(r26)
    lbz r0, 0x47(r30)
    stw r0, 0x0(r27)
    lbz r0, 0x48(r30)
    stw r0, 0x0(r28)
lbl_fn_8061AD30_00000884:
    cmpwi r29, 0x0
    beq lbl_fn_8061AD30_0000089C
    beq lbl_fn_8061AD30_0000089C
    lwz r3, hId_808800E4
    mr r4, r29
    bl iosFree
lbl_fn_8061AD30_0000089C:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061AE90(void)
{
    nofralloc
    stwu r1, -0x40(r1)
    mflr r0
    stw r0, 0x44(r1)
    addi r11, r1, 0x40
    bl _savegpr_21
    cmpwi r3, 0x0
    lwz r29, 0x48(r1)
    mr r21, r3
    mr r22, r4
    mr r23, r5
    mr r24, r6
    mr r25, r7
    mr r26, r8
    mr r27, r9
    mr r28, r10
    beq lbl_fn_8061AE90_00000950
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061AE90_00000950
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    beq lbl_fn_8061AE90_00000950
    cmpwi r22, 0x0
    beq lbl_fn_8061AE90_00000950
    cmpwi r23, 0x0
    beq lbl_fn_8061AE90_00000950
    cmpwi r24, 0x0
    beq lbl_fn_8061AE90_00000950
    cmpwi r25, 0x0
    beq lbl_fn_8061AE90_00000950
    cmpwi r26, 0x0
    beq lbl_fn_8061AE90_00000950
    cmpwi r27, 0x0
    bne lbl_fn_8061AE90_00000958
lbl_fn_8061AE90_00000950:
    li r3, -0x65
    b lbl_fn_8061AE90_000009DC
lbl_fn_8061AE90_00000958:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061AE90_0000097C
    li r3, -0x76
    b lbl_fn_8061AE90_000009DC
lbl_fn_8061AE90_0000097C:
    stw r22, 0x10c(r3)
    li r0, 0x3
    mr r4, r21
    addi r5, r31, 0x1
    stw r23, 0x110(r3)
    stw r24, 0x114(r3)
    stw r25, 0x118(r3)
    stw r26, 0x11c(r3)
    stw r27, 0x120(r3)
    stw r28, 0x100(r3)
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    bl memcpy
    addi r0, r30, 0x5f
    lis r9, _isfsFuncCb@ha
    lwz r3, __fsFd_8087E8C0
    mr r5, r30
    mr r10, r30
    clrrwi r7, r0, 5
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x6
    li r6, 0x40
    li r8, 0x4c
    bl IOS_IoctlAsync
lbl_fn_8061AE90_000009DC:
    addi r11, r1, 0x40
    bl _restgpr_21
    lwz r0, 0x44(r1)
    mtlr r0
    addi r1, r1, 0x40
    blr
}

asm void fn_8061AFD0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r3
    beq lbl_fn_8061AFD0_00000A48
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061AFD0_00000A48
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061AFD0_00000A50
lbl_fn_8061AFD0_00000A48:
    li r31, -0x65
    b lbl_fn_8061AFD0_00000AA0
lbl_fn_8061AFD0_00000A50:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061AFD0_00000A74
    li r31, -0x16
    b lbl_fn_8061AFD0_00000AA0
lbl_fn_8061AFD0_00000A74:
    mr r4, r29
    addi r5, r31, 0x1
    bl memcpy
    lwz r3, __fsFd_8087E8C0
    mr r5, r30
    li r4, 0x7
    li r6, 0x40
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r31, r3
lbl_fn_8061AFD0_00000AA0:
    cmpwi r30, 0x0
    beq lbl_fn_8061AFD0_00000AB8
    beq lbl_fn_8061AFD0_00000AB8
    lwz r3, hId_808800E4
    mr r4, r30
    bl iosFree
lbl_fn_8061AFD0_00000AB8:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061B0B0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    beq lbl_fn_8061B0B0_00000B28
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061B0B0_00000B28
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061B0B0_00000B30
lbl_fn_8061B0B0_00000B28:
    li r3, -0x65
    b lbl_fn_8061B0B0_00000B98
lbl_fn_8061B0B0_00000B30:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061B0B0_00000B54
    li r3, -0x76
    b lbl_fn_8061B0B0_00000B98
lbl_fn_8061B0B0_00000B54:
    mr r4, r27
    addi r5, r31, 0x1
    bl memcpy
    stw r28, 0x100(r30)
    lis r9, _isfsFuncCb@ha
    li r0, 0x0
    mr r5, r30
    stw r29, 0x104(r30)
    mr r10, r30
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x7
    stw r0, 0x108(r30)
    li r6, 0x40
    li r7, 0x0
    li r8, 0x0
    lwz r3, __fsFd_8087E8C0
    bl IOS_IoctlAsync
lbl_fn_8061B0B0_00000B98:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061B180(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r3, 0x0
    mr r27, r3
    mr r28, r4
    li r29, 0x0
    beq lbl_fn_8061B180_00000C18
    cmpwi r4, 0x0
    beq lbl_fn_8061B180_00000C18
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061B180_00000C18
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r30, r3
    beq lbl_fn_8061B180_00000C18
    mr r3, r28
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061B180_00000C20
lbl_fn_8061B180_00000C18:
    li r30, -0x65
    b lbl_fn_8061B180_00000C80
lbl_fn_8061B180_00000C20:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8061B180_00000C44
    li r30, -0x16
    b lbl_fn_8061B180_00000C80
lbl_fn_8061B180_00000C44:
    mr r4, r27
    addi r5, r30, 0x1
    bl memcpy
    mr r4, r28
    addi r3, r29, 0x40
    addi r5, r31, 0x1
    bl memcpy
    lwz r3, __fsFd_8087E8C0
    mr r5, r29
    li r4, 0x8
    li r6, 0x80
    li r7, 0x0
    li r8, 0x0
    bl fn_8061D080
    mr r30, r3
lbl_fn_8061B180_00000C80:
    cmpwi r29, 0x0
    beq lbl_fn_8061B180_00000C98
    beq lbl_fn_8061B180_00000C98
    lwz r3, hId_808800E4
    mr r4, r29
    bl iosFree
lbl_fn_8061B180_00000C98:
    addi r11, r1, 0x20
    mr r3, r30
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061B290(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    beq lbl_fn_8061B290_00000D2C
    cmpwi r4, 0x0
    beq lbl_fn_8061B290_00000D2C
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061B290_00000D2C
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r30, r3
    beq lbl_fn_8061B290_00000D2C
    mr r3, r26
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061B290_00000D34
lbl_fn_8061B290_00000D2C:
    li r3, -0x65
    b lbl_fn_8061B290_00000DAC
lbl_fn_8061B290_00000D34:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8061B290_00000D58
    li r3, -0x76
    b lbl_fn_8061B290_00000DAC
lbl_fn_8061B290_00000D58:
    stw r27, 0x100(r3)
    li r0, 0x0
    mr r4, r25
    addi r5, r30, 0x1
    stw r28, 0x104(r3)
    stw r0, 0x108(r3)
    bl memcpy
    mr r4, r26
    addi r3, r29, 0x40
    addi r5, r31, 0x1
    bl memcpy
    lis r9, _isfsFuncCb@ha
    lwz r3, __fsFd_8087E8C0
    mr r5, r29
    mr r10, r29
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x8
    li r6, 0x80
    li r7, 0x0
    li r8, 0x0
    bl IOS_IoctlAsync
lbl_fn_8061B290_00000DAC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061B3A0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r31, r6
    mr r28, r7
    beq lbl_fn_8061B3A0_00000E30
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061B3A0_00000E30
    cmpwi r4, 0x0
    beq lbl_fn_8061B3A0_00000E30
    cmpwi r5, 0x0
    beq lbl_fn_8061B3A0_00000E30
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r30, r3
    bne lbl_fn_8061B3A0_00000E38
lbl_fn_8061B3A0_00000E30:
    li r3, -0x65
    b lbl_fn_8061B3A0_00000EDC
lbl_fn_8061B3A0_00000E38:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r29, r3
    bne lbl_fn_8061B3A0_00000E5C
    li r3, -0x76
    b lbl_fn_8061B3A0_00000EDC
lbl_fn_8061B3A0_00000E5C:
    stw r31, 0x100(r3)
    li r31, 0x4
    addi r0, r3, 0x37
    mr r4, r25
    stw r28, 0x104(r3)
    clrrwi r28, r0, 5
    addi r5, r30, 0x1
    stw r31, 0x108(r3)
    stw r26, 0x10c(r3)
    stw r27, 0x110(r3)
    mr r3, r28
    bl memcpy
    stw r28, 0x0(r29)
    li r3, 0x40
    lis r8, _isfsFuncCb@ha
    addi r0, r28, 0x5f
    stw r3, 0x4(r29)
    clrrwi r3, r0, 5
    addi r0, r3, 0x23
    mr r7, r29
    stw r3, 0x8(r29)
    clrrwi r0, r0, 5
    mr r9, r29
    addi r8, r8, _isfsFuncCb@l
    stw r31, 0xc(r29)
    li r4, 0xc
    li r5, 0x1
    li r6, 0x2
    stw r0, 0x10(r29)
    stw r31, 0x14(r29)
    lwz r3, __fsFd_8087E8C0
    bl fn_8061D2F0
lbl_fn_8061B3A0_00000EDC:
    addi r11, r1, 0x30
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061B4D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_25
    cmpwi r3, 0x0
    mr r25, r3
    mr r26, r4
    mr r27, r5
    mr r28, r6
    mr r29, r7
    li r30, 0x0
    beq lbl_fn_8061B4D0_00000F54
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061B4D0_00000F54
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061B4D0_00000F5C
lbl_fn_8061B4D0_00000F54:
    li r31, -0x65
    b lbl_fn_8061B4D0_00000FC0
lbl_fn_8061B4D0_00000F5C:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061B4D0_00000F80
    li r31, -0x16
    b lbl_fn_8061B4D0_00000FC0
lbl_fn_8061B4D0_00000F80:
    mr r4, r25
    addi r5, r31, 0x1
    addi r3, r3, 0x6
    bl memcpy
    stb r26, 0x49(r30)
    mr r5, r30
    li r4, 0x9
    li r6, 0x4c
    stb r27, 0x46(r30)
    li r7, 0x0
    li r8, 0x0
    stb r28, 0x47(r30)
    stb r29, 0x48(r30)
    lwz r3, __fsFd_8087E8C0
    bl fn_8061D080
    mr r31, r3
lbl_fn_8061B4D0_00000FC0:
    cmpwi r30, 0x0
    beq lbl_fn_8061B4D0_00000FD8
    beq lbl_fn_8061B4D0_00000FD8
    lwz r3, hId_808800E4
    mr r4, r30
    bl iosFree
lbl_fn_8061B4D0_00000FD8:
    addi r11, r1, 0x30
    mr r3, r31
    bl _restgpr_25
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8061B5D0(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    addi r11, r1, 0x30
    bl _savegpr_23
    cmpwi r3, 0x0
    mr r23, r3
    mr r24, r4
    mr r25, r5
    mr r26, r6
    mr r27, r7
    mr r28, r8
    mr r29, r9
    beq lbl_fn_8061B5D0_00001058
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    blt lbl_fn_8061B5D0_00001058
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_fn_8061B5D0_00001060
lbl_fn_8061B5D0_00001058:
    li r3, -0x65
    b lbl_fn_8061B5D0_000010DC
lbl_fn_8061B5D0_00001060:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061B5D0_00001084
    li r3, -0x76
    b lbl_fn_8061B5D0_000010DC
lbl_fn_8061B5D0_00001084:
    stw r28, 0x100(r3)
    li r0, 0x0
    mr r4, r23
    addi r5, r31, 0x1
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    addi r3, r3, 0x6
    bl memcpy
    stb r24, 0x49(r30)
    lis r9, _isfsFuncCb@ha
    mr r5, r30
    mr r10, r30
    stb r25, 0x46(r30)
    addi r9, r9, _isfsFuncCb@l
    li r4, 0x9
    li r6, 0x4c
    stb r26, 0x47(r30)
    li r7, 0x0
    li r8, 0x0
    stb r27, 0x48(r30)
    lwz r3, __fsFd_8087E8C0
    bl IOS_IoctlAsync
lbl_fn_8061B5D0_000010DC:
    addi r11, r1, 0x30
    bl _restgpr_23
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void ISFS_Open(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r3, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    stw r28, 0x10(r1)
    mr r28, r3
    beq lbl_ISFS_Open_00001144
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_ISFS_Open_0000114C
lbl_ISFS_Open_00001144:
    li r31, -0x65
    b lbl_ISFS_Open_0000118C
lbl_ISFS_Open_0000114C:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_ISFS_Open_00001170
    li r31, -0x16
    b lbl_ISFS_Open_0000118C
lbl_ISFS_Open_00001170:
    mr r4, r28
    addi r5, r31, 0x1
    bl memcpy
    mr r3, r30
    mr r4, r29
    bl IOS_Open
    mr r31, r3
lbl_ISFS_Open_0000118C:
    cmpwi r30, 0x0
    beq lbl_ISFS_Open_000011A4
    beq lbl_ISFS_Open_000011A4
    lwz r3, hId_808800E4
    mr r4, r30
    bl iosFree
lbl_ISFS_Open_000011A4:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r28, 0x10(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void ISFS_OpenAsync(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_26
    cmpwi r3, 0x0
    mr r26, r3
    mr r27, r4
    mr r28, r5
    mr r29, r6
    beq lbl_ISFS_OpenAsync_00001210
    li r4, 0x40
    bl strnlen
    cmplwi r3, 0x40
    mr r31, r3
    bne lbl_ISFS_OpenAsync_00001218
lbl_ISFS_OpenAsync_00001210:
    li r3, -0x65
    b lbl_ISFS_OpenAsync_00001270
lbl_ISFS_OpenAsync_00001218:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_ISFS_OpenAsync_0000123C
    li r3, -0x76
    b lbl_ISFS_OpenAsync_00001270
lbl_ISFS_OpenAsync_0000123C:
    stw r28, 0x100(r3)
    li r0, 0x0
    mr r4, r26
    addi r5, r31, 0x1
    stw r29, 0x104(r3)
    stw r0, 0x108(r3)
    bl memcpy
    lis r5, _isfsFuncCb@ha
    mr r3, r30
    mr r4, r27
    mr r6, r30
    addi r5, r5, _isfsFuncCb@l
    bl IOS_OpenAsync
lbl_ISFS_OpenAsync_00001270:
    addi r11, r1, 0x20
    bl _restgpr_26
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061B860(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    cmpwi r4, 0x0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r3
    stw r30, 0x18(r1)
    li r30, 0x0
    stw r29, 0x14(r1)
    mr r29, r4
    beq lbl_fn_8061B860_000012C4
    clrlwi. r0, r4, 27
    beq lbl_fn_8061B860_000012CC
lbl_fn_8061B860_000012C4:
    li r31, -0x65
    b lbl_fn_8061B860_00001328
lbl_fn_8061B860_000012CC:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    mr r30, r3
    bne lbl_fn_8061B860_000012F0
    li r31, -0x16
    b lbl_fn_8061B860_00001328
lbl_fn_8061B860_000012F0:
    mr r3, r31
    mr r7, r30
    li r4, 0xb
    li r5, 0x0
    li r6, 0x0
    li r8, 0x8
    bl fn_8061D080
    cmpwi r3, 0x0
    mr r31, r3
    bne lbl_fn_8061B860_00001328
    mr r3, r29
    mr r4, r30
    li r5, 0x8
    bl memcpy
lbl_fn_8061B860_00001328:
    cmpwi r30, 0x0
    beq lbl_fn_8061B860_00001340
    beq lbl_fn_8061B860_00001340
    lwz r3, hId_808800E4
    mr r4, r30
    bl iosFree
lbl_fn_8061B860_00001340:
    mr r3, r31
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061B930(void)
{
    nofralloc
    b fn_8061CE50
}

asm void fn_8061B940(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    mr r27, r3
    lwz r3, hId_808800E4
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_fn_8061B940_000013B8
    li r3, -0x76
    b lbl_fn_8061B940_000013E4
lbl_fn_8061B940_000013B8:
    stw r30, 0x100(r3)
    lis r6, _isfsFuncCb@ha
    li r0, 0x0
    mr r4, r28
    stw r31, 0x104(r3)
    mr r5, r29
    mr r7, r3
    addi r6, r6, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r27
    bl fn_8061CD70
lbl_fn_8061B940_000013E4:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061B9D0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8061B9D0_00001410
    clrlwi. r0, r4, 27
    beq lbl_fn_8061B9D0_00001418
lbl_fn_8061B9D0_00001410:
    li r3, -0x65
    blr
lbl_fn_8061B9D0_00001418:
    b fn_8061CA50
    blr
}

asm void fn_8061B9F0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    beq lbl_fn_8061B9F0_00001458
    clrlwi. r0, r4, 27
    beq lbl_fn_8061B9F0_00001460
lbl_fn_8061B9F0_00001458:
    li r3, -0x65
    b lbl_fn_8061B9F0_000014AC
lbl_fn_8061B9F0_00001460:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_fn_8061B9F0_00001480
    li r3, -0x76
    b lbl_fn_8061B9F0_000014AC
lbl_fn_8061B9F0_00001480:
    stw r30, 0x100(r3)
    lis r6, _isfsFuncCb@ha
    li r0, 0x0
    mr r4, r28
    stw r31, 0x104(r3)
    mr r5, r29
    mr r7, r3
    addi r6, r6, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r27
    bl fn_8061C950
lbl_fn_8061B9F0_000014AC:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061BAA0(void)
{
    nofralloc
    cmpwi r4, 0x0
    beq lbl_fn_8061BAA0_000014E0
    clrlwi. r0, r4, 27
    beq lbl_fn_8061BAA0_000014E8
lbl_fn_8061BAA0_000014E0:
    li r3, -0x65
    blr
lbl_fn_8061BAA0_000014E8:
    b fn_8061CC60
    blr
}

asm void fn_8061BAC0(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    addi r11, r1, 0x20
    bl _savegpr_27
    cmpwi r4, 0x0
    mr r27, r3
    mr r28, r4
    mr r29, r5
    mr r30, r6
    mr r31, r7
    beq lbl_fn_8061BAC0_00001528
    clrlwi. r0, r4, 27
    beq lbl_fn_8061BAC0_00001530
lbl_fn_8061BAC0_00001528:
    li r3, -0x65
    b lbl_fn_8061BAC0_0000157C
lbl_fn_8061BAC0_00001530:
    lwz r3, hId_808800E4
    li r4, 0x140
    li r5, 0x20
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_fn_8061BAC0_00001550
    li r3, -0x76
    b lbl_fn_8061BAC0_0000157C
lbl_fn_8061BAC0_00001550:
    stw r30, 0x100(r3)
    lis r6, _isfsFuncCb@ha
    li r0, 0x0
    mr r4, r28
    stw r31, 0x104(r3)
    mr r5, r29
    mr r7, r3
    addi r6, r6, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r27
    bl fn_8061CB60
lbl_fn_8061BAC0_0000157C:
    addi r11, r1, 0x20
    bl _restgpr_27
    lwz r0, 0x24(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061BB70(void)
{
    nofralloc
    b fn_8061C8A0
}

asm void fn_8061BB80(void)
{
    nofralloc
    stwu r1, -0x20(r1)
    mflr r0
    stw r0, 0x24(r1)
    stw r31, 0x1c(r1)
    mr r31, r5
    li r5, 0x20
    stw r30, 0x18(r1)
    mr r30, r4
    li r4, 0x140
    stw r29, 0x14(r1)
    mr r29, r3
    lwz r3, hId_808800E4
    bl iosAllocAligned
    cmpwi r3, 0x0
    bne lbl_fn_8061BB80_000015F4
    li r3, -0x76
    b lbl_fn_8061BB80_00001618
lbl_fn_8061BB80_000015F4:
    stw r30, 0x100(r3)
    lis r4, _isfsFuncCb@ha
    li r0, 0x0
    mr r5, r3
    stw r31, 0x104(r3)
    addi r4, r4, _isfsFuncCb@l
    stw r0, 0x108(r3)
    mr r3, r29
    bl fn_8061C7E0
lbl_fn_8061BB80_00001618:
    lwz r0, 0x24(r1)
    lwz r31, 0x1c(r1)
    lwz r30, 0x18(r1)
    lwz r29, 0x14(r1)
    mtlr r0
    addi r1, r1, 0x20
    blr
}

asm void fn_8061BC10(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    li r5, 0x20
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r4
    li r4, 0x140
    stw r30, 0x8(r1)
    mr r30, r3
    lwz r3, hId_808800E4
    bl iosAllocAligned
    lwz r0, __fsFd_8087E8C0
    cmpwi r0, 0x0
    bge lbl_fn_8061BC10_00001680
    li r3, -0x65
    b lbl_fn_8061BC10_000016B8
lbl_fn_8061BC10_00001680:
    stw r30, 0x100(r3)
    lis r9, _isfsFuncCb@ha
    li r0, 0x0
    mr r10, r3
    stw r31, 0x104(r3)
    addi r9, r9, _isfsFuncCb@l
    li r4, 0xd
    li r5, 0x0
    stw r0, 0x108(r3)
    li r6, 0x0
    li r7, 0x0
    li r8, 0x0
    lwz r3, __fsFd_8087E8C0
    bl IOS_IoctlAsync
lbl_fn_8061BC10_000016B8:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
