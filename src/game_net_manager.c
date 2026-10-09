#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void _restgpr_26(void);
extern void _savegpr_26(void);
extern void fn_800DD3FC(void);
extern void fn_801E26B4(void);
extern void fn_801E26CC(void);
extern void fn_801E26EC(void);
extern void fn_801E2708(void);
extern void fn_801E278C(void);
extern void fn_801E2CEC(void);
extern void fn_801E2D14(void);
extern void fn_801E2D24(void);
extern void fn_801E2D30(void);
extern void fn_801E2D44(void);
extern void fn_801E2D50(void);
extern void fn_801E2D60(void);
extern void fn_801E2D68(void);
extern void fn_80206BE4(void);
extern void fn_80211480(void);
extern void fn_80686A48(void);
extern void fn_80686AF0(void);
extern void fn_80686B64(void);

/* External data declarations */
extern u8 lbl_80782898[];

/* Small data declarations */
extern u32 lbl_8087DA98;
extern u32 lbl_8087DA9C;
extern u32 lbl_80882AF0;

/* Function declarations */
void fn_801E4920(void);
void fn_801E4E64(void);
void fn_801E5394(void);
void fn_801E552C(void);
void fn_801E5A5C(void);
void fn_801E610C(void);

asm void fn_801E4920(void)
{
    nofralloc
    stwu r1, -0x80(r1)
    mflr r0
    stw r0, 0x84(r1)
    addi r11, r1, 0x80
    bl _savegpr_26
    lwz r31, 0x0(r3)
    mr r28, r3
    lwz r6, 0x0(r5)
    mr r29, r4
    lwz r0, 0x4(r31)
    mr r30, r5
    lwz r3, 0x4(r6)
    cmpw r3, r0
    bne lbl_fn_801E4920_000000A8
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    blt lbl_fn_801E4920_00000090
    lwz r4, 0xc(r31)
    cmpwi r4, 0x0
    blt lbl_fn_801E4920_00000090
    cmpw r0, r4
    bne lbl_fn_801E4920_00000078
    lwz r0, 0x14(r6)
    lwz r4, 0x14(r31)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E4920_0000010C
lbl_fn_801E4920_00000078:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E4920_0000010C
lbl_fn_801E4920_00000090:
    cmpwi r0, 0x0
    blt lbl_fn_801E4920_000000A0
    li r0, 0x1
    b lbl_fn_801E4920_0000010C
lbl_fn_801E4920_000000A0:
    li r0, 0x0
    b lbl_fn_801E4920_0000010C
lbl_fn_801E4920_000000A8:
    lwz r4, 0x0(r31)
    lwz r3, 0x0(r6)
    lfs f1, 0x0(r4)
    lfs f2, 0x0(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801E4920_00000100
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r31)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E4920_0000010C
lbl_fn_801E4920_00000100:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E4920_0000010C:
    lwz r4, 0x0(r29)
    cntlzw r0, r0
    lwz r26, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x4(r4)
    lwz r0, 0x4(r26)
    cmpw r3, r0
    bne lbl_fn_801E4920_0000019C
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E4920_00000184
    lwz r5, 0xc(r26)
    cmpwi r5, 0x0
    blt lbl_fn_801E4920_00000184
    cmpw r0, r5
    bne lbl_fn_801E4920_0000016C
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r26)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E4920_00000200
lbl_fn_801E4920_0000016C:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E4920_00000200
lbl_fn_801E4920_00000184:
    cmpwi r0, 0x0
    blt lbl_fn_801E4920_00000194
    li r0, 0x1
    b lbl_fn_801E4920_00000200
lbl_fn_801E4920_00000194:
    li r0, 0x0
    b lbl_fn_801E4920_00000200
lbl_fn_801E4920_0000019C:
    lwz r5, 0x0(r26)
    lwz r3, 0x0(r4)
    lfs f1, 0x0(r5)
    lfs f2, 0x0(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801E4920_000001F4
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r26)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E4920_00000200
lbl_fn_801E4920_000001F4:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E4920_00000200:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_801E4920_00000218
    cmpwi r0, 0x0
    bne lbl_fn_801E4920_0000052C
lbl_fn_801E4920_00000218:
    cmpwi r31, 0x0
    bne lbl_fn_801E4920_000002AC
    cmpwi r0, 0x0
    bne lbl_fn_801E4920_000002AC
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r29)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r3, 0x14(r9)
    b lbl_fn_801E4920_0000052C
lbl_fn_801E4920_000002AC:
    lwz r26, 0x0(r28)
    lwz r4, 0x0(r29)
    lwz r0, 0x4(r26)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E4920_00000334
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E4920_0000031C
    lwz r5, 0xc(r26)
    cmpwi r5, 0x0
    blt lbl_fn_801E4920_0000031C
    cmpw r0, r5
    bne lbl_fn_801E4920_00000304
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r26)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E4920_00000398
lbl_fn_801E4920_00000304:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E4920_00000398
lbl_fn_801E4920_0000031C:
    cmpwi r0, 0x0
    blt lbl_fn_801E4920_0000032C
    li r0, 0x1
    b lbl_fn_801E4920_00000398
lbl_fn_801E4920_0000032C:
    li r0, 0x0
    b lbl_fn_801E4920_00000398
lbl_fn_801E4920_00000334:
    lwz r5, 0x0(r26)
    lwz r3, 0x0(r4)
    lfs f1, 0x0(r5)
    lfs f2, 0x0(r3)
    lfs f0, lbl_80882AF0
    fsubs f3, f2, f1
    fabs f3, f3
    frsp f3, f3
    fcmpo cr0, f3, f0
    bge lbl_fn_801E4920_0000038C
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r26)
    bl fn_80206BE4
    bl fn_80211480
    mr r4, r3
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r4)
    bl fn_80686AF0
    srwi r0, r3, 31
    b lbl_fn_801E4920_00000398
lbl_fn_801E4920_0000038C:
    fcmpo cr0, f2, f1
    mfcr r0
    extrwi r0, r0, 1, 1
lbl_fn_801E4920_00000398:
    cmpwi r0, 0x0
    beq lbl_fn_801E4920_00000420
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r29)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x38(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E4920_00000420:
    cmpwi r31, 0x0
    beq lbl_fn_801E4920_000004AC
    lwz r10, 0x0(r29)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x14(r9)
    b lbl_fn_801E4920_0000052C
lbl_fn_801E4920_000004AC:
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E4920_0000052C:
    addi r11, r1, 0x80
    bl _restgpr_26
    lwz r0, 0x84(r1)
    mtlr r0
    addi r1, r1, 0x80
    blr
}

asm void fn_801E4E64(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_801E4E64_00000568:
    mr r3, r28
    mr r4, r27
    bl fn_801E2CEC
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_801E4E64_00000A60
    cmpwi r3, 0x14
    bgt lbl_fn_801E4E64_000005AC
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_801E610C
    b lbl_fn_801E4E64_00000A60
lbl_fn_801E4E64_000005AC:
    lwz r5, lbl_8087DA98
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_801E2D14
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_801E2D24
    lwz r3, lbl_8087DA98
    addi r6, r3, 0x1
    stw r6, lbl_8087DA98
    cmpwi r6, 0x5
    blt lbl_fn_801E4E64_00000608
    li r6, -0x4
    stw r6, lbl_8087DA98
lbl_fn_801E4E64_00000608:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_801E2D14
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_801E2D24
    lwz r3, lbl_8087DA98
    addi r0, r3, 0x1
    stw r0, lbl_8087DA98
    cmpwi r0, 0x5
    blt lbl_fn_801E4E64_00000668
    li r6, -0x4
    stw r6, lbl_8087DA98
lbl_fn_801E4E64_00000668:
    mr r3, r28
    li r4, 0x1
    bl fn_801E2D30
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_801E2D24
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801E5A5C
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801E2D44
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_801E2D44
    b lbl_fn_801E4E64_000006D4
lbl_fn_801E4E64_000006CC:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E4E64_000006D4:
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E4E64_000006CC
lbl_fn_801E4E64_00000700:
    addi r3, r1, 0x3c
    bl fn_801E2D68
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_801E278C
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_00000748
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_00000700
lbl_fn_801E4E64_00000748:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26EC
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_00000824
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    b lbl_fn_801E4E64_0000078C
lbl_fn_801E4E64_00000784:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E4E64_0000078C:
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E4E64_00000784
lbl_fn_801E4E64_000007B8:
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801E2D68
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_000007B8
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26CC
    cmpwi r3, 0x0
    bne lbl_fn_801E4E64_00000824
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    b lbl_fn_801E4E64_0000078C
lbl_fn_801E4E64_00000824:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801E26B4
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_000009DC
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_801E2D44
    addi r3, r1, 0x3c
    bl fn_801E2D68
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E4E64_00000914
    b lbl_fn_801E4E64_000008A4
lbl_fn_801E4E64_0000089C:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E4E64_000008A4:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_801E278C
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_000008E4
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_0000089C
lbl_fn_801E4E64_000008E4:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26EC
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_00000914
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
lbl_fn_801E4E64_00000914:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26EC
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_000009CC
    b lbl_fn_801E4E64_00000934
lbl_fn_801E4E64_0000092C:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E4E64_00000934:
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E4E64_0000092C
lbl_fn_801E4E64_00000960:
    addi r3, r1, 0x3c
    bl fn_801E2D68
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E4E64_00000960
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26CC
    cmpwi r3, 0x0
    bne lbl_fn_801E4E64_000009CC
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    b lbl_fn_801E4E64_00000934
lbl_fn_801E4E64_000009CC:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801E2D44
    b lbl_fn_801E4E64_00000568
lbl_fn_801E4E64_000009DC:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801E2CEC
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801E2CEC
    cmpw r3, r30
    bge lbl_fn_801E4E64_00000A30
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_801E552C
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801E2D44
    b lbl_fn_801E4E64_00000568
lbl_fn_801E4E64_00000A30:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_801E552C
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801E2D44
    b lbl_fn_801E4E64_00000568
lbl_fn_801E4E64_00000A60:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801E5394(void)
{
    nofralloc
    stwu r1, -0x120(r1)
    mflr r0
    lwz r3, 0x4(r4)
    stw r0, 0x124(r1)
    lwz r0, 0x4(r5)
    stw r31, 0x11c(r1)
    cmpw r3, r0
    stw r30, 0x118(r1)
    mr r30, r5
    stw r29, 0x114(r1)
    bne lbl_fn_801E5394_00000B10
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E5394_00000AF8
    lwz r6, 0xc(r5)
    cmpwi r6, 0x0
    blt lbl_fn_801E5394_00000AF8
    cmpw r0, r6
    bne lbl_fn_801E5394_00000AE0
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r5)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801E5394_00000BF0
lbl_fn_801E5394_00000AE0:
    xor r0, r6, r0
    srawi r3, r0, 1
    and r0, r0, r6
    subf r0, r0, r3
    srwi r3, r0, 31
    b lbl_fn_801E5394_00000BF0
lbl_fn_801E5394_00000AF8:
    cmpwi r0, 0x0
    blt lbl_fn_801E5394_00000B08
    li r3, 0x1
    b lbl_fn_801E5394_00000BF0
lbl_fn_801E5394_00000B08:
    li r3, 0x0
    b lbl_fn_801E5394_00000BF0
lbl_fn_801E5394_00000B10:
    lwz r3, 0x0(r4)
    bl fn_80206BE4
    bl fn_80211480
    mr r29, r3
    lwz r3, 0x0(r30)
    bl fn_80206BE4
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r29)
    mr r30, r3
    addi r3, r1, 0x88
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x88
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5394_00000B64
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5394_00000B64:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r30)
    addi r3, r1, 0x8
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5394_00000B98
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5394_00000B98:
    addi r3, r1, 0x88
    addi r4, r1, 0x8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801E5394_00000BE0
    lwz r3, 0x8(r29)
    bl fn_80686A48
    mr r31, r3
    lwz r3, 0x8(r30)
    bl fn_80686A48
    cmpw r31, r3
    beq lbl_fn_801E5394_00000BE0
    xor r0, r3, r31
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r3, r0, 31
    b lbl_fn_801E5394_00000BF0
lbl_fn_801E5394_00000BE0:
    lwz r3, 0x8(r29)
    lwz r4, 0x8(r30)
    bl fn_80686AF0
    srwi r3, r3, 31
lbl_fn_801E5394_00000BF0:
    lwz r0, 0x124(r1)
    lwz r31, 0x11c(r1)
    lwz r30, 0x118(r1)
    lwz r29, 0x114(r1)
    mtlr r0
    addi r1, r1, 0x120
    blr
}

asm void fn_801E552C(void)
{
    nofralloc
    stwu r1, -0x60(r1)
    mflr r0
    lis r6, 0x6666
    stw r0, 0x64(r1)
    stmw r27, 0x4c(r1)
    mr r27, r3
    mr r28, r4
    mr r29, r5
    addi r31, r6, 0x6667
lbl_fn_801E552C_00000C30:
    mr r3, r28
    mr r4, r27
    bl fn_801E2CEC
    cmpwi r3, 0x1
    mr r30, r3
    ble lbl_fn_801E552C_00001128
    cmpwi r3, 0x14
    bgt lbl_fn_801E552C_00000C74
    lwz r0, 0x0(r28)
    mr r5, r29
    stw r0, 0x30(r1)
    addi r3, r1, 0x34
    addi r4, r1, 0x30
    lwz r0, 0x0(r27)
    stw r0, 0x34(r1)
    bl fn_801E610C
    b lbl_fn_801E552C_00001128
lbl_fn_801E552C_00000C74:
    lwz r5, lbl_8087DA9C
    srawi r0, r30, 2
    addze r6, r0
    mr r3, r27
    mulhw r0, r31, r5
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r5
    add r4, r6, r0
    bl fn_801E2D14
    stw r3, 0x2c(r1)
    addi r3, r1, 0x40
    addi r4, r1, 0x2c
    bl fn_801E2D24
    lwz r3, lbl_8087DA9C
    addi r6, r3, 0x1
    stw r6, lbl_8087DA9C
    cmpwi r6, 0x5
    blt lbl_fn_801E552C_00000CD0
    li r6, -0x4
    stw r6, lbl_8087DA9C
lbl_fn_801E552C_00000CD0:
    mulhw r0, r31, r6
    slwi r4, r30, 2
    mr r3, r27
    subf r4, r30, r4
    srawi r4, r4, 2
    addze r5, r4
    srawi r0, r0, 1
    srwi r4, r0, 31
    add r0, r0, r4
    mulli r0, r0, 0x5
    subf r0, r0, r6
    add r4, r5, r0
    bl fn_801E2D14
    stw r3, 0x28(r1)
    addi r3, r1, 0x3c
    addi r4, r1, 0x28
    bl fn_801E2D24
    lwz r3, lbl_8087DA9C
    addi r0, r3, 0x1
    stw r0, lbl_8087DA9C
    cmpwi r0, 0x5
    blt lbl_fn_801E552C_00000D30
    li r6, -0x4
    stw r6, lbl_8087DA9C
lbl_fn_801E552C_00000D30:
    mr r3, r28
    li r4, 0x1
    bl fn_801E2D30
    stw r3, 0x24(r1)
    addi r3, r1, 0x38
    addi r4, r1, 0x24
    bl fn_801E2D24
    lwz r5, 0x38(r1)
    mr r6, r29
    lwz r7, 0x3c(r1)
    addi r3, r1, 0x20
    lwz r0, 0x40(r1)
    addi r4, r1, 0x1c
    stw r5, 0x18(r1)
    addi r5, r1, 0x18
    stw r7, 0x1c(r1)
    stw r0, 0x20(r1)
    bl fn_801E5A5C
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801E2D44
    addi r3, r1, 0x3c
    addi r4, r1, 0x38
    bl fn_801E2D44
    b lbl_fn_801E552C_00000D9C
lbl_fn_801E552C_00000D94:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E552C_00000D9C:
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E552C_00000D94
lbl_fn_801E552C_00000DC8:
    addi r3, r1, 0x3c
    bl fn_801E2D68
    mr r4, r3
    addi r3, r1, 0x40
    bl fn_801E278C
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000E10
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000DC8
lbl_fn_801E552C_00000E10:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26EC
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000EEC
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    b lbl_fn_801E552C_00000E54
lbl_fn_801E552C_00000E4C:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E552C_00000E54:
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E552C_00000E4C
lbl_fn_801E552C_00000E80:
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x3c
    bl fn_801E2D68
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000E80
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26CC
    cmpwi r3, 0x0
    bne lbl_fn_801E552C_00000EEC
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    b lbl_fn_801E552C_00000E54
lbl_fn_801E552C_00000EEC:
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801E26B4
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_000010A4
    addi r3, r1, 0x38
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    mr r4, r28
    addi r3, r1, 0x3c
    bl fn_801E2D44
    addi r3, r1, 0x3c
    bl fn_801E2D68
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E552C_00000FDC
    b lbl_fn_801E552C_00000F6C
lbl_fn_801E552C_00000F64:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E552C_00000F6C:
    mr r4, r28
    addi r3, r1, 0x40
    bl fn_801E278C
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000FAC
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000F64
lbl_fn_801E552C_00000FAC:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26EC
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000FDC
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
lbl_fn_801E552C_00000FDC:
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26EC
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00001094
    b lbl_fn_801E552C_00000FFC
lbl_fn_801E552C_00000FF4:
    addi r3, r1, 0x40
    bl fn_801E2D50
lbl_fn_801E552C_00000FFC:
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    beq lbl_fn_801E552C_00000FF4
lbl_fn_801E552C_00001028:
    addi r3, r1, 0x3c
    bl fn_801E2D68
    bl fn_801E2D60
    mr r30, r3
    mr r3, r27
    bl fn_801E2D60
    mr r4, r3
    mr r3, r29
    mr r5, r30
    bl fn_801E5394
    cmpwi r3, 0x0
    bne lbl_fn_801E552C_00001028
    addi r3, r1, 0x40
    addi r4, r1, 0x3c
    bl fn_801E26CC
    cmpwi r3, 0x0
    bne lbl_fn_801E552C_00001094
    addi r3, r1, 0x3c
    bl fn_801E2D60
    mr r30, r3
    addi r3, r1, 0x40
    bl fn_801E2D60
    mr r4, r30
    bl fn_801E2708
    addi r3, r1, 0x40
    bl fn_801E2D50
    b lbl_fn_801E552C_00000FFC
lbl_fn_801E552C_00001094:
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801E2D44
    b lbl_fn_801E552C_00000C30
lbl_fn_801E552C_000010A4:
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801E2CEC
    mr r30, r3
    mr r4, r27
    addi r3, r1, 0x40
    bl fn_801E2CEC
    cmpw r3, r30
    bge lbl_fn_801E552C_000010F8
    lwz r0, 0x40(r1)
    mr r5, r29
    stw r0, 0x10(r1)
    addi r3, r1, 0x14
    addi r4, r1, 0x10
    lwz r0, 0x0(r27)
    stw r0, 0x14(r1)
    bl fn_801E552C
    mr r3, r27
    addi r4, r1, 0x40
    bl fn_801E2D44
    b lbl_fn_801E552C_00000C30
lbl_fn_801E552C_000010F8:
    lwz r4, 0x0(r28)
    mr r5, r29
    lwz r0, 0x40(r1)
    addi r3, r1, 0xc
    stw r4, 0x8(r1)
    addi r4, r1, 0x8
    stw r0, 0xc(r1)
    bl fn_801E552C
    mr r3, r28
    addi r4, r1, 0x40
    bl fn_801E2D44
    b lbl_fn_801E552C_00000C30
lbl_fn_801E552C_00001128:
    lmw r27, 0x4c(r1)
    lwz r0, 0x64(r1)
    mtlr r0
    addi r1, r1, 0x60
    blr
}

asm void fn_801E5A5C(void)
{
    nofralloc
    stwu r1, -0x390(r1)
    mflr r0
    stw r0, 0x394(r1)
    stmw r25, 0x374(r1)
    mr r28, r3
    mr r29, r4
    mr r30, r5
    lwz r25, 0x0(r3)
    lwz r6, 0x0(r5)
    lwz r0, 0x4(r25)
    lwz r3, 0x4(r6)
    cmpw r3, r0
    bne lbl_fn_801E5A5C_000011E0
    lwz r0, 0xc(r6)
    cmpwi r0, 0x0
    blt lbl_fn_801E5A5C_000011C8
    lwz r4, 0xc(r25)
    cmpwi r4, 0x0
    blt lbl_fn_801E5A5C_000011C8
    cmpw r0, r4
    bne lbl_fn_801E5A5C_000011B0
    lwz r0, 0x14(r6)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_000012C0
lbl_fn_801E5A5C_000011B0:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_000012C0
lbl_fn_801E5A5C_000011C8:
    cmpwi r0, 0x0
    blt lbl_fn_801E5A5C_000011D8
    li r0, 0x1
    b lbl_fn_801E5A5C_000012C0
lbl_fn_801E5A5C_000011D8:
    li r0, 0x0
    b lbl_fn_801E5A5C_000012C0
lbl_fn_801E5A5C_000011E0:
    lwz r3, 0x0(r6)
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r27)
    mr r26, r3
    addi r3, r1, 0x268
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x268
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5A5C_00001234
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5A5C_00001234:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r26)
    addi r3, r1, 0x2e8
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x2e8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5A5C_00001268
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5A5C_00001268:
    addi r3, r1, 0x268
    addi r4, r1, 0x2e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801E5A5C_000012B0
    lwz r3, 0x8(r27)
    bl fn_80686A48
    mr r25, r3
    lwz r3, 0x8(r26)
    bl fn_80686A48
    cmpw r25, r3
    beq lbl_fn_801E5A5C_000012B0
    xor r0, r3, r25
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_000012C0
lbl_fn_801E5A5C_000012B0:
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r26)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801E5A5C_000012C0:
    lwz r4, 0x0(r29)
    cntlzw r0, r0
    lwz r25, 0x0(r30)
    srwi r31, r0, 5
    lwz r3, 0x4(r4)
    lwz r0, 0x4(r25)
    cmpw r3, r0
    bne lbl_fn_801E5A5C_00001350
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E5A5C_00001338
    lwz r5, 0xc(r25)
    cmpwi r5, 0x0
    blt lbl_fn_801E5A5C_00001338
    cmpw r0, r5
    bne lbl_fn_801E5A5C_00001320
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r25)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_00001430
lbl_fn_801E5A5C_00001320:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_00001430
lbl_fn_801E5A5C_00001338:
    cmpwi r0, 0x0
    blt lbl_fn_801E5A5C_00001348
    li r0, 0x1
    b lbl_fn_801E5A5C_00001430
lbl_fn_801E5A5C_00001348:
    li r0, 0x0
    b lbl_fn_801E5A5C_00001430
lbl_fn_801E5A5C_00001350:
    lwz r3, 0x0(r4)
    bl fn_80206BE4
    bl fn_80211480
    mr r27, r3
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r27)
    mr r26, r3
    addi r3, r1, 0x168
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x168
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5A5C_000013A4
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5A5C_000013A4:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r26)
    addi r3, r1, 0x1e8
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x1e8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5A5C_000013D8
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5A5C_000013D8:
    addi r3, r1, 0x168
    addi r4, r1, 0x1e8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801E5A5C_00001420
    lwz r3, 0x8(r27)
    bl fn_80686A48
    mr r25, r3
    lwz r3, 0x8(r26)
    bl fn_80686A48
    cmpw r25, r3
    beq lbl_fn_801E5A5C_00001420
    xor r0, r3, r25
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_00001430
lbl_fn_801E5A5C_00001420:
    lwz r3, 0x8(r27)
    lwz r4, 0x8(r26)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801E5A5C_00001430:
    cmpwi r31, 0x0
    cntlzw r0, r0
    srwi r0, r0, 5
    beq lbl_fn_801E5A5C_00001448
    cmpwi r0, 0x0
    bne lbl_fn_801E5A5C_000017D8
lbl_fn_801E5A5C_00001448:
    cmpwi r31, 0x0
    bne lbl_fn_801E5A5C_000014DC
    cmpwi r0, 0x0
    bne lbl_fn_801E5A5C_000014DC
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r29)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x50(r1)
    stw r7, 0x54(r1)
    stw r6, 0x58(r1)
    stw r5, 0x5c(r1)
    stw r4, 0x60(r1)
    stw r3, 0x64(r1)
    stw r3, 0x14(r9)
    b lbl_fn_801E5A5C_000017D8
lbl_fn_801E5A5C_000014DC:
    lwz r26, 0x0(r28)
    lwz r4, 0x0(r29)
    lwz r0, 0x4(r26)
    lwz r3, 0x4(r4)
    cmpw r3, r0
    bne lbl_fn_801E5A5C_00001564
    lwz r0, 0xc(r4)
    cmpwi r0, 0x0
    blt lbl_fn_801E5A5C_0000154C
    lwz r5, 0xc(r26)
    cmpwi r5, 0x0
    blt lbl_fn_801E5A5C_0000154C
    cmpw r0, r5
    bne lbl_fn_801E5A5C_00001534
    lwz r0, 0x14(r4)
    lwz r4, 0x14(r26)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_00001644
lbl_fn_801E5A5C_00001534:
    xor r0, r5, r0
    srawi r3, r0, 1
    and r0, r0, r5
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_00001644
lbl_fn_801E5A5C_0000154C:
    cmpwi r0, 0x0
    blt lbl_fn_801E5A5C_0000155C
    li r0, 0x1
    b lbl_fn_801E5A5C_00001644
lbl_fn_801E5A5C_0000155C:
    li r0, 0x0
    b lbl_fn_801E5A5C_00001644
lbl_fn_801E5A5C_00001564:
    lwz r3, 0x0(r4)
    bl fn_80206BE4
    bl fn_80211480
    mr r25, r3
    lwz r3, 0x0(r26)
    bl fn_80206BE4
    bl fn_80211480
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r25)
    mr r26, r3
    addi r3, r1, 0x68
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x68
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5A5C_000015B8
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5A5C_000015B8:
    lis r4, lbl_80782898@ha
    lwz r5, 0x8(r26)
    addi r3, r1, 0xe8
    addi r4, r4, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0xe8
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E5A5C_000015EC
    li r0, 0x0
    sth r0, 0x0(r3)
lbl_fn_801E5A5C_000015EC:
    addi r3, r1, 0x68
    addi r4, r1, 0xe8
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801E5A5C_00001634
    lwz r3, 0x8(r25)
    bl fn_80686A48
    mr r27, r3
    lwz r3, 0x8(r26)
    bl fn_80686A48
    cmpw r27, r3
    beq lbl_fn_801E5A5C_00001634
    xor r0, r3, r27
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801E5A5C_00001644
lbl_fn_801E5A5C_00001634:
    lwz r3, 0x8(r25)
    lwz r4, 0x8(r26)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801E5A5C_00001644:
    cmpwi r0, 0x0
    beq lbl_fn_801E5A5C_000016CC
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r29)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x38(r1)
    stw r7, 0x3c(r1)
    stw r6, 0x40(r1)
    stw r5, 0x44(r1)
    stw r4, 0x48(r1)
    stw r3, 0x4c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E5A5C_000016CC:
    cmpwi r31, 0x0
    beq lbl_fn_801E5A5C_00001758
    lwz r10, 0x0(r29)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x20(r1)
    stw r7, 0x24(r1)
    stw r6, 0x28(r1)
    stw r5, 0x2c(r1)
    stw r4, 0x30(r1)
    stw r3, 0x34(r1)
    stw r3, 0x14(r9)
    b lbl_fn_801E5A5C_000017D8
lbl_fn_801E5A5C_00001758:
    lwz r10, 0x0(r28)
    lwz r9, 0x0(r30)
    lwz r8, 0x0(r10)
    lwz r7, 0x4(r10)
    lwz r6, 0x8(r10)
    lwz r5, 0xc(r10)
    lwz r4, 0x10(r10)
    lwz r3, 0x14(r10)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r10)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r10)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r10)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r10)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r10)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r10)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E5A5C_000017D8:
    lmw r25, 0x374(r1)
    lwz r0, 0x394(r1)
    mtlr r0
    addi r1, r1, 0x390
    blr
}

asm void fn_801E610C(void)
{
    nofralloc
    stwu r1, -0x150(r1)
    mflr r0
    stw r0, 0x154(r1)
    stmw r21, 0x124(r1)
    mr r26, r3
    mr r27, r4
    lwz r0, 0x0(r3)
    lwz r3, 0x0(r4)
    cmplw r0, r3
    beq lbl_fn_801E610C_00001A40
    subi r24, r3, 0x18
    lis r30, lbl_80782898@ha
    li r31, 0x0
    b lbl_fn_801E610C_00001A34
lbl_fn_801E610C_00001824:
    lwz r29, 0x0(r26)
    lwz r28, 0x0(r27)
    cmplw r29, r28
    beq lbl_fn_801E610C_000019A4
    addi r25, r29, 0x18
    b lbl_fn_801E610C_0000199C
lbl_fn_801E610C_0000183C:
    lwz r3, 0x4(r25)
    lwz r0, 0x4(r29)
    cmpw r3, r0
    bne lbl_fn_801E610C_000018BC
    lwz r0, 0xc(r25)
    cmpwi r0, 0x0
    blt lbl_fn_801E610C_000018A4
    lwz r4, 0xc(r29)
    cmpwi r4, 0x0
    blt lbl_fn_801E610C_000018A4
    cmpw r0, r4
    bne lbl_fn_801E610C_0000188C
    lwz r0, 0x14(r25)
    lwz r4, 0x14(r29)
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E610C_0000198C
lbl_fn_801E610C_0000188C:
    xor r0, r4, r0
    srawi r3, r0, 1
    and r0, r0, r4
    subf r0, r0, r3
    srwi r0, r0, 31
    b lbl_fn_801E610C_0000198C
lbl_fn_801E610C_000018A4:
    cmpwi r0, 0x0
    blt lbl_fn_801E610C_000018B4
    li r0, 0x1
    b lbl_fn_801E610C_0000198C
lbl_fn_801E610C_000018B4:
    li r0, 0x0
    b lbl_fn_801E610C_0000198C
lbl_fn_801E610C_000018BC:
    lwz r3, 0x0(r25)
    bl fn_80206BE4
    bl fn_80211480
    mr r21, r3
    lwz r3, 0x0(r29)
    bl fn_80206BE4
    bl fn_80211480
    lwz r5, 0x8(r21)
    mr r22, r3
    addi r3, r1, 0xa0
    addi r4, r30, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0xa0
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E610C_00001908
    sth r31, 0x0(r3)
lbl_fn_801E610C_00001908:
    lwz r5, 0x8(r22)
    addi r3, r1, 0x20
    addi r4, r30, lbl_80782898@l
    crclr 6
    bl fn_800DD3FC
    addi r3, r1, 0x20
    li r4, 0x2b
    bl fn_80686B64
    cmpwi r3, 0x0
    beq lbl_fn_801E610C_00001934
    sth r31, 0x0(r3)
lbl_fn_801E610C_00001934:
    addi r3, r1, 0xa0
    addi r4, r1, 0x20
    bl fn_80686AF0
    cmpwi r3, 0x0
    bne lbl_fn_801E610C_0000197C
    lwz r3, 0x8(r21)
    bl fn_80686A48
    mr r23, r3
    lwz r3, 0x8(r22)
    bl fn_80686A48
    cmpw r23, r3
    beq lbl_fn_801E610C_0000197C
    xor r0, r3, r23
    srawi r4, r0, 1
    and r0, r0, r3
    subf r0, r0, r4
    srwi r0, r0, 31
    b lbl_fn_801E610C_0000198C
lbl_fn_801E610C_0000197C:
    lwz r3, 0x8(r21)
    lwz r4, 0x8(r22)
    bl fn_80686AF0
    srwi r0, r3, 31
lbl_fn_801E610C_0000198C:
    cmpwi r0, 0x0
    beq lbl_fn_801E610C_00001998
    mr r29, r25
lbl_fn_801E610C_00001998:
    addi r25, r25, 0x18
lbl_fn_801E610C_0000199C:
    cmplw r25, r28
    bne lbl_fn_801E610C_0000183C
lbl_fn_801E610C_000019A4:
    lwz r9, 0x0(r26)
    cmplw r29, r9
    beq lbl_fn_801E610C_00001A28
    lwz r8, 0x0(r29)
    lwz r7, 0x4(r29)
    lwz r6, 0x8(r29)
    lwz r5, 0xc(r29)
    lwz r4, 0x10(r29)
    lwz r3, 0x14(r29)
    lwz r0, 0x0(r9)
    stw r0, 0x0(r29)
    lwz r0, 0x4(r9)
    stw r0, 0x4(r29)
    lwz r0, 0x8(r9)
    stw r0, 0x8(r29)
    lwz r0, 0xc(r9)
    stw r0, 0xc(r29)
    lwz r0, 0x10(r9)
    stw r0, 0x10(r29)
    lwz r0, 0x14(r9)
    stw r0, 0x14(r29)
    stw r8, 0x0(r9)
    stw r7, 0x4(r9)
    stw r6, 0x8(r9)
    stw r5, 0xc(r9)
    stw r4, 0x10(r9)
    stw r8, 0x8(r1)
    stw r7, 0xc(r1)
    stw r6, 0x10(r1)
    stw r5, 0x14(r1)
    stw r4, 0x18(r1)
    stw r3, 0x1c(r1)
    stw r3, 0x14(r9)
lbl_fn_801E610C_00001A28:
    lwz r3, 0x0(r26)
    addi r0, r3, 0x18
    stw r0, 0x0(r26)
lbl_fn_801E610C_00001A34:
    lwz r0, 0x0(r26)
    cmplw r0, r24
    bne lbl_fn_801E610C_00001824
lbl_fn_801E610C_00001A40:
    lmw r21, 0x124(r1)
    lwz r0, 0x154(r1)
    mtlr r0
    addi r1, r1, 0x150
    blr
}
