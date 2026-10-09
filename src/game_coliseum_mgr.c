#include "revolution/types.h"
#pragma function_align 4

/* External function declarations */
extern void dtor_80084684(void);
extern void fn_8005C448(void);
extern void fn_80373148(void);
extern void fn_8048B3B0(void);

/* External data declarations */
extern u8 lbl_80756340[];

/* Small data declarations */
extern u32 lbl_8087EFA8;
extern u32 lbl_8087F128;
extern u32 lbl_8087F3C0;
extern u32 lbl_8087F408;
extern u32 lbl_8087F430;
extern u32 lbl_8087F4A0;
extern u32 lbl_8087F890;
extern u32 lbl_8087F8A0;
extern u32 lbl_80886F90;

/* Function declarations */
void fn_8048D3A4(void);
void fn_8048DE54(void);
void fn_8048E904(void);
void fn_8048E994(void);
void fn_8048E9A4(void);
void fn_8048E9E0(void);
void fn_8048EC7C(void);

asm void fn_8048D3A4(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    slwi r30, r4, 4
    mr r28, r3
    lwz r0, 0x23a0(r3)
    add r3, r0, r30
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8048D3A4_00000510
    beq lbl_fn_8048D3A4_00000500
    addic. r0, r29, 0x4
    beq lbl_fn_8048D3A4_00000294
    lwz r31, 0x4(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_00000294
    addic. r0, r31, 0x4
    beq lbl_fn_8048D3A4_00000168
    lwz r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000168
    addic. r0, r25, 0x4
    beq lbl_fn_8048D3A4_000000DC
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000000DC
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_000000A0
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000000A0
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000000A0:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000000D4
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000000D4
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000000D4:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_000000DC:
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000160
    lwz r27, 0x0(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000160
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_00000124
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000124
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000124:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000158
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000158
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000158:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000160:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000168:
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_0000028C
    lwz r25, 0x0(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_0000028C
    addic. r0, r25, 0x4
    beq lbl_fn_8048D3A4_00000200
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000200
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_000001C4
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000001C4
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000001C4:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000001F8
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000001F8
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000001F8:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000200:
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000284
    lwz r27, 0x0(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000284
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_00000248
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000248
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000248:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_0000027C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_0000027C
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_0000027C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000284:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_0000028C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048D3A4_00000294:
    cmpwi r29, 0x0
    beq lbl_fn_8048D3A4_000004F8
    lwz r31, 0x0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_000004F8
    addic. r0, r31, 0x4
    beq lbl_fn_8048D3A4_000003CC
    lwz r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000003CC
    addic. r0, r25, 0x4
    beq lbl_fn_8048D3A4_00000340
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000340
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_00000304
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000304
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000304:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000338
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000338
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000338:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000340:
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000003C4
    lwz r27, 0x0(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000003C4
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_00000388
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000388
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000388:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000003BC
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000003BC
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000003BC:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_000003C4:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000003CC:
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_000004F0
    lwz r25, 0x0(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000004F0
    addic. r0, r25, 0x4
    beq lbl_fn_8048D3A4_00000464
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000464
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_00000428
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000428
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000428:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_0000045C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_0000045C
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_0000045C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000464:
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000004E8
    lwz r26, 0x0(r25)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000004E8
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_000004AC
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000004AC
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_000004AC:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000004E0
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000004E0
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_000004E0:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000004E8:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000004F0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048D3A4_000004F8:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8048D3A4_00000500:
    lwz r0, 0x23a0(r28)
    li r4, 0x0
    add r3, r0, r30
    stw r4, 0x4(r3)
lbl_fn_8048D3A4_00000510:
    lwz r0, 0x23a0(r28)
    add r3, r0, r30
    lwz r29, 0x8(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8048D3A4_00000A08
    beq lbl_fn_8048D3A4_000009F8
    addic. r0, r29, 0x4
    beq lbl_fn_8048D3A4_0000078C
    lwz r31, 0x4(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_0000078C
    addic. r0, r31, 0x4
    beq lbl_fn_8048D3A4_00000660
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000660
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_000005D4
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000005D4
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_00000598
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000598
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000598:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000005CC
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000005CC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000005CC:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000005D4:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000658
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000658
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_0000061C
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_0000061C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_0000061C:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000650
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000650
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000650:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000658:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000660:
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_00000784
    lwz r27, 0x0(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_00000784
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_000006F8
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000006F8
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_000006BC
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000006BC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000006BC:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000006F0
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000006F0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000006F0:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000006F8:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_0000077C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_0000077C
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_00000740
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000740
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000740:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000774
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000774
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000774:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_0000077C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_00000784:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048D3A4_0000078C:
    cmpwi r29, 0x0
    beq lbl_fn_8048D3A4_000009F0
    lwz r31, 0x0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_000009F0
    addic. r0, r31, 0x4
    beq lbl_fn_8048D3A4_000008C4
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000008C4
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_00000838
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000838
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_000007FC
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000007FC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000007FC:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000830
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000830
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000830:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_00000838:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000008BC
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000008BC
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_00000880
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000880
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000880:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000008B4
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000008B4
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000008B4:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000008BC:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_000008C4:
    cmpwi r31, 0x0
    beq lbl_fn_8048D3A4_000009E8
    lwz r27, 0x0(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000009E8
    addic. r0, r27, 0x4
    beq lbl_fn_8048D3A4_0000095C
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_0000095C
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_00000920
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000920
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000920:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_00000954
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000954
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000954:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_0000095C:
    cmpwi r27, 0x0
    beq lbl_fn_8048D3A4_000009E0
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000009E0
    addic. r0, r26, 0x4
    beq lbl_fn_8048D3A4_000009A4
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000009A4
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000009A4:
    cmpwi r26, 0x0
    beq lbl_fn_8048D3A4_000009D8
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_000009D8
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_000009D8:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048D3A4_000009E0:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048D3A4_000009E8:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048D3A4_000009F0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8048D3A4_000009F8:
    lwz r0, 0x23a0(r28)
    li r4, 0x0
    add r3, r0, r30
    stw r4, 0x8(r3)
lbl_fn_8048D3A4_00000A08:
    lwz r0, 0x23a0(r28)
    add r3, r0, r30
    lwz r25, 0xc(r3)
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000A9C
    beq lbl_fn_8048D3A4_00000A8C
    addic. r3, r25, 0x10
    beq lbl_fn_8048D3A4_00000A54
    beq lbl_fn_8048D3A4_00000A54
    beq lbl_fn_8048D3A4_00000A54
    beq lbl_fn_8048D3A4_00000A54
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8048D3A4_00000A54
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8048D3A4_00000A54:
    cmpwi r25, 0x0
    beq lbl_fn_8048D3A4_00000A84
    beq lbl_fn_8048D3A4_00000A84
    beq lbl_fn_8048D3A4_00000A84
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8048D3A4_00000A84
    lwz r0, 0x4(r25)
    subf r0, r0, r0
    stw r0, 0x4(r25)
    lwz r3, 0x0(r25)
    bl dtor_80084684
lbl_fn_8048D3A4_00000A84:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048D3A4_00000A8C:
    lwz r0, 0x23a0(r28)
    li r4, 0x0
    add r3, r0, r30
    stw r4, 0xc(r3)
lbl_fn_8048D3A4_00000A9C:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8048DE54(void)
{
    nofralloc
    stwu r1, -0x30(r1)
    mflr r0
    stw r0, 0x34(r1)
    stmw r25, 0x14(r1)
    slwi r30, r4, 4
    mr r28, r3
    lwz r0, 0x2394(r3)
    add r3, r0, r30
    lwz r29, 0x4(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8048DE54_00000FC0
    beq lbl_fn_8048DE54_00000FB0
    addic. r0, r29, 0x4
    beq lbl_fn_8048DE54_00000D44
    lwz r31, 0x4(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_00000D44
    addic. r0, r31, 0x4
    beq lbl_fn_8048DE54_00000C18
    lwz r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000C18
    addic. r0, r25, 0x4
    beq lbl_fn_8048DE54_00000B8C
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000B8C
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000B50
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000B50
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000B50:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000B84
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000B84
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000B84:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000B8C:
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000C10
    lwz r27, 0x0(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000C10
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000BD4
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000BD4
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000BD4:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000C08
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000C08
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000C08:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000C10:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00000C18:
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_00000D3C
    lwz r25, 0x0(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000D3C
    addic. r0, r25, 0x4
    beq lbl_fn_8048DE54_00000CB0
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000CB0
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000C74
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000C74
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000C74:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000CA8
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000CA8
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000CA8:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000CB0:
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000D34
    lwz r27, 0x0(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000D34
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000CF8
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000CF8
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000CF8:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000D2C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000D2C
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000D2C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000D34:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00000D3C:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048DE54_00000D44:
    cmpwi r29, 0x0
    beq lbl_fn_8048DE54_00000FA8
    lwz r31, 0x0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_00000FA8
    addic. r0, r31, 0x4
    beq lbl_fn_8048DE54_00000E7C
    lwz r25, 0x4(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000E7C
    addic. r0, r25, 0x4
    beq lbl_fn_8048DE54_00000DF0
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000DF0
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000DB4
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000DB4
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000DB4:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000DE8
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000DE8
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000DE8:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000DF0:
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000E74
    lwz r27, 0x0(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000E74
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000E38
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000E38
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000E38:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000E6C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000E6C
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000E6C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000E74:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00000E7C:
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_00000FA0
    lwz r25, 0x0(r31)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000FA0
    addic. r0, r25, 0x4
    beq lbl_fn_8048DE54_00000F14
    lwz r27, 0x4(r25)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000F14
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00000ED8
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000ED8
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000ED8:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000F0C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000F0C
    addi r3, r26, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    li r4, -0x1
    bl fn_8005C448
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000F0C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000F14:
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00000F98
    lwz r26, 0x0(r25)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000F98
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_00000F5C
    lwz r27, 0x4(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000F5C
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000F5C:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00000F90
    lwz r27, 0x0(r26)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00000F90
    addi r3, r27, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    li r4, -0x1
    bl fn_8005C448
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00000F90:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00000F98:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00000FA0:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048DE54_00000FA8:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8048DE54_00000FB0:
    lwz r0, 0x2394(r28)
    li r4, 0x0
    add r3, r0, r30
    stw r4, 0x4(r3)
lbl_fn_8048DE54_00000FC0:
    lwz r0, 0x2394(r28)
    add r3, r0, r30
    lwz r29, 0x8(r3)
    cmpwi r29, 0x0
    beq lbl_fn_8048DE54_000014B8
    beq lbl_fn_8048DE54_000014A8
    addic. r0, r29, 0x4
    beq lbl_fn_8048DE54_0000123C
    lwz r31, 0x4(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_0000123C
    addic. r0, r31, 0x4
    beq lbl_fn_8048DE54_00001110
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00001110
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_00001084
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001084
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_00001048
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001048
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001048:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_0000107C
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_0000107C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_0000107C:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00001084:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00001108
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001108
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_000010CC
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_000010CC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_000010CC:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001100
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001100
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001100:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00001108:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00001110:
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_00001234
    lwz r27, 0x0(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00001234
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_000011A8
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_000011A8
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_0000116C
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_0000116C
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_0000116C:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_000011A0
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_000011A0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_000011A0:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_000011A8:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_0000122C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_0000122C
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_000011F0
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_000011F0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_000011F0:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001224
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001224
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001224:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_0000122C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00001234:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048DE54_0000123C:
    cmpwi r29, 0x0
    beq lbl_fn_8048DE54_000014A0
    lwz r31, 0x0(r29)
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_000014A0
    addic. r0, r31, 0x4
    beq lbl_fn_8048DE54_00001374
    lwz r27, 0x4(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00001374
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_000012E8
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_000012E8
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_000012AC
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_000012AC
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_000012AC:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_000012E0
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_000012E0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_000012E0:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_000012E8:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_0000136C
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_0000136C
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_00001330
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001330
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001330:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001364
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001364
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001364:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_0000136C:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00001374:
    cmpwi r31, 0x0
    beq lbl_fn_8048DE54_00001498
    lwz r27, 0x0(r31)
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00001498
    addic. r0, r27, 0x4
    beq lbl_fn_8048DE54_0000140C
    lwz r26, 0x4(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_0000140C
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_000013D0
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_000013D0
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_000013D0:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001404
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001404
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001404:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_0000140C:
    cmpwi r27, 0x0
    beq lbl_fn_8048DE54_00001490
    lwz r26, 0x0(r27)
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001490
    addic. r0, r26, 0x4
    beq lbl_fn_8048DE54_00001454
    lwz r25, 0x4(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001454
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001454:
    cmpwi r26, 0x0
    beq lbl_fn_8048DE54_00001488
    lwz r25, 0x0(r26)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001488
    addi r3, r25, 0x4
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    li r4, -0x1
    bl fn_8005C448
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_00001488:
    mr r3, r26
    bl dtor_80084684
lbl_fn_8048DE54_00001490:
    mr r3, r27
    bl dtor_80084684
lbl_fn_8048DE54_00001498:
    mr r3, r31
    bl dtor_80084684
lbl_fn_8048DE54_000014A0:
    mr r3, r29
    bl dtor_80084684
lbl_fn_8048DE54_000014A8:
    lwz r0, 0x2394(r28)
    li r4, 0x0
    add r3, r0, r30
    stw r4, 0x8(r3)
lbl_fn_8048DE54_000014B8:
    lwz r0, 0x2394(r28)
    add r3, r0, r30
    lwz r25, 0xc(r3)
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_0000154C
    beq lbl_fn_8048DE54_0000153C
    addic. r3, r25, 0x10
    beq lbl_fn_8048DE54_00001504
    beq lbl_fn_8048DE54_00001504
    beq lbl_fn_8048DE54_00001504
    beq lbl_fn_8048DE54_00001504
    lwz r0, 0x0(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8048DE54_00001504
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    lwz r3, 0x0(r3)
    bl dtor_80084684
lbl_fn_8048DE54_00001504:
    cmpwi r25, 0x0
    beq lbl_fn_8048DE54_00001534
    beq lbl_fn_8048DE54_00001534
    beq lbl_fn_8048DE54_00001534
    lwz r0, 0x0(r25)
    cmpwi r0, 0x0
    beq lbl_fn_8048DE54_00001534
    lwz r0, 0x4(r25)
    subf r0, r0, r0
    stw r0, 0x4(r25)
    lwz r3, 0x0(r25)
    bl dtor_80084684
lbl_fn_8048DE54_00001534:
    mr r3, r25
    bl dtor_80084684
lbl_fn_8048DE54_0000153C:
    lwz r0, 0x2394(r28)
    li r4, 0x0
    add r3, r0, r30
    stw r4, 0xc(r3)
lbl_fn_8048DE54_0000154C:
    lmw r25, 0x14(r1)
    lwz r0, 0x34(r1)
    mtlr r0
    addi r1, r1, 0x30
    blr
}

asm void fn_8048E904(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    li r31, 0x0
    stw r30, 0x8(r1)
    mr r30, r3
    b lbl_fn_8048E904_00001590
lbl_fn_8048E904_00001580:
    mr r3, r30
    mr r4, r31
    bl fn_8048D3A4
    addi r31, r31, 0x1
lbl_fn_8048E904_00001590:
    addi r3, r30, 0x23a0
    bl fn_8048B3B0
    cmpw r31, r3
    blt lbl_fn_8048E904_00001580
    li r31, 0x0
    b lbl_fn_8048E904_000015B8
lbl_fn_8048E904_000015A8:
    mr r3, r30
    mr r4, r31
    bl fn_8048DE54
    addi r31, r31, 0x1
lbl_fn_8048E904_000015B8:
    addi r3, r30, 0x2394
    bl fn_8048B3B0
    cmpw r31, r3
    blt lbl_fn_8048E904_000015A8
    addi r3, r30, 0x23a0
    bl fn_8048E994
    addi r3, r30, 0x2394
    bl fn_8048E994
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8048E994(void)
{
    nofralloc
    lwz r0, 0x4(r3)
    subf r0, r0, r0
    stw r0, 0x4(r3)
    blr
}

asm void fn_8048E9A4(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    xoris r5, r5, 0x8000
    lis r0, 0x4330
    lis r6, lbl_80756340@ha
    stw r5, 0xc(r1)
    lfd f2, lbl_80756340@l(r6)
    stw r0, 0x8(r1)
    lfs f0, lbl_80886F90
    lfd f1, 0x8(r1)
    stw r4, 0x1f70(r3)
    fsubs f1, f1, f2
    fadds f0, f0, f1
    stfs f0, 0x1f6c(r3)
    addi r1, r1, 0x10
    blr
}

asm void fn_8048E9E0(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    lbz r0, 0x2404(r3)
    extrwi. r0, r0, 1, 24
    bne lbl_fn_8048E9E0_000018C4
    lwz r3, 0x1f70(r3)
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_00001684
    lwz r12, 0x0(r3)
    lwz r12, 0x20(r12)
    mtctr r12
    bctrl
    lwz r3, 0x1f70(r31)
    li r0, 0x3
    stw r0, 0x8(r3)
lbl_fn_8048E9E0_00001684:
    lbz r0, 0x2404(r31)
    ori r0, r0, 0x80
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_000016D4
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_000016D4
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 4, 25, 25
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F430
    bl fn_80373148
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_000016D4:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_00001700
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 3, 26, 26
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F8A0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_00001700:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_0000172C
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 2, 27, 27
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F408
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_0000172C:
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_00001758
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 1, 28, 28
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F890
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_00001758:
    lwz r3, lbl_8087F128
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_00001784
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 0, 29, 29
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F128
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_00001784:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_000017B0
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 31, 30, 30
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F3C0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_000017B0:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_8048E9E0_000017DC
    lwz r3, 0x38(r3)
    lbz r0, 0x2404(r31)
    rlwimi r0, r3, 30, 31, 31
    stb r0, 0x2404(r31)
    lwz r3, lbl_8087F4A0
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
lbl_fn_8048E9E0_000017DC:
    lwz r3, lbl_8087EFA8
    lwz r5, 0x70(r31)
    lwz r0, 0x34(r3)
    stw r0, 0x2408(r31)
    cmpwi r5, 0x0
    lbz r0, 0x2405(r31)
    lwz r3, lbl_8087EFA8
    lwz r4, 0x3ac(r3)
    neg r3, r4
    or r3, r3, r4
    rlwimi r0, r3, 8, 24, 24
    stb r0, 0x2405(r31)
    beq lbl_fn_8048E9E0_000018C4
    lwz r0, 0x190(r5)
    cmpwi r0, 0x195
    beq lbl_fn_8048E9E0_00001848
    cmpwi r0, 0x1fb
    beq lbl_fn_8048E9E0_00001848
    cmpwi r0, 0x58d
    beq lbl_fn_8048E9E0_00001848
    cmpwi r0, 0x5e6
    beq lbl_fn_8048E9E0_00001848
    cmpwi r0, 0x26ad
    beq lbl_fn_8048E9E0_00001848
    cmpwi r0, 0x7d4
    beq lbl_fn_8048E9E0_00001888
    b lbl_fn_8048E9E0_000018C4
lbl_fn_8048E9E0_00001848:
    lwz r5, lbl_8087EFA8
    li r0, 0xb
    lwz r3, 0x34(r5)
    addi r4, r3, 0x1
    cmpwi r4, 0xb
    bge lbl_fn_8048E9E0_00001864
    mr r0, r4
lbl_fn_8048E9E0_00001864:
    cmpw r3, r0
    ble lbl_fn_8048E9E0_00001870
    b lbl_fn_8048E9E0_00001880
lbl_fn_8048E9E0_00001870:
    cmpwi r4, 0xb
    li r3, 0xb
    bge lbl_fn_8048E9E0_00001880
    mr r3, r4
lbl_fn_8048E9E0_00001880:
    stw r3, 0x34(r5)
    b lbl_fn_8048E9E0_000018C4
lbl_fn_8048E9E0_00001888:
    lwz r5, lbl_8087EFA8
    li r0, 0xc
    lwz r3, 0x34(r5)
    addi r4, r3, 0x2
    cmpwi r4, 0xc
    bge lbl_fn_8048E9E0_000018A4
    mr r0, r4
lbl_fn_8048E9E0_000018A4:
    cmpw r3, r0
    ble lbl_fn_8048E9E0_000018B0
    b lbl_fn_8048E9E0_000018C0
lbl_fn_8048E9E0_000018B0:
    cmpwi r4, 0xc
    li r3, 0xc
    bge lbl_fn_8048E9E0_000018C0
    mr r3, r4
lbl_fn_8048E9E0_000018C0:
    stw r3, 0x34(r5)
lbl_fn_8048E9E0_000018C4:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}

asm void fn_8048EC7C(void)
{
    nofralloc
    stwu r1, -0x10(r1)
    mflr r0
    stw r0, 0x14(r1)
    stw r31, 0xc(r1)
    mr r31, r3
    stw r30, 0x8(r1)
    lbz r0, 0x2404(r3)
    extrwi. r0, r0, 1, 24
    beq lbl_fn_8048EC7C_00001ABC
    lwz r0, 0x1f70(r3)
    cmpwi r0, 0x0
    beq lbl_fn_8048EC7C_00001910
    li r0, 0x0
    stw r0, 0x1f70(r3)
lbl_fn_8048EC7C_00001910:
    lbz r0, 0x2404(r3)
    rlwinm r0, r0, 0, 25, 23
    stb r0, 0x2404(r3)
    lwz r3, lbl_8087F430
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_00001968
    bl fn_80373148
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_00001968
    lbz r0, 0x2404(r31)
    lwz r3, lbl_8087F430
    extrwi r30, r0, 1, 25
    bl fn_80373148
    cmpwi r30, 0x0
    beq lbl_fn_8048EC7C_0000195C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_00001968
lbl_fn_8048EC7C_0000195C:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_00001968:
    lwz r3, lbl_8087F8A0
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_0000199C
    lbz r0, 0x2404(r31)
    extrwi. r0, r0, 1, 26
    beq lbl_fn_8048EC7C_00001990
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_0000199C
lbl_fn_8048EC7C_00001990:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_0000199C:
    lwz r3, lbl_8087F408
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_000019D0
    lbz r0, 0x2404(r31)
    extrwi. r0, r0, 1, 27
    beq lbl_fn_8048EC7C_000019C4
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_000019D0
lbl_fn_8048EC7C_000019C4:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_000019D0:
    lwz r3, lbl_8087F890
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_00001A04
    lbz r0, 0x2404(r31)
    extrwi. r0, r0, 1, 28
    beq lbl_fn_8048EC7C_000019F8
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_00001A04
lbl_fn_8048EC7C_000019F8:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_00001A04:
    lwz r3, lbl_8087F128
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_00001A38
    lbz r0, 0x2404(r31)
    extrwi. r0, r0, 1, 29
    beq lbl_fn_8048EC7C_00001A2C
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_00001A38
lbl_fn_8048EC7C_00001A2C:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_00001A38:
    lwz r3, lbl_8087F3C0
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_00001A6C
    lbz r0, 0x2404(r31)
    extrwi. r0, r0, 1, 30
    beq lbl_fn_8048EC7C_00001A60
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_00001A6C
lbl_fn_8048EC7C_00001A60:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_00001A6C:
    lwz r3, lbl_8087F4A0
    cmpwi r3, 0x0
    beq lbl_fn_8048EC7C_00001AA0
    lbz r0, 0x2404(r31)
    clrlwi. r0, r0, 31
    beq lbl_fn_8048EC7C_00001A94
    lwz r0, 0x38(r3)
    ori r0, r0, 0x4
    stw r0, 0x38(r3)
    b lbl_fn_8048EC7C_00001AA0
lbl_fn_8048EC7C_00001A94:
    lwz r0, 0x38(r3)
    rlwinm r0, r0, 0, 30, 28
    stw r0, 0x38(r3)
lbl_fn_8048EC7C_00001AA0:
    lwz r3, lbl_8087EFA8
    lwz r0, 0x2408(r31)
    stw r0, 0x34(r3)
    lbz r0, 0x2405(r31)
    lwz r3, lbl_8087EFA8
    extrwi r0, r0, 1, 24
    stw r0, 0x3ac(r3)
lbl_fn_8048EC7C_00001ABC:
    lwz r0, 0x14(r1)
    lwz r31, 0xc(r1)
    lwz r30, 0x8(r1)
    mtlr r0
    addi r1, r1, 0x10
    blr
}
