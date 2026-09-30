#include "revolution/os.h"
#include "revolution/os/OSInterrupt.h"

u32 InterruptPrioTable[12] = {
    0x00000100,
    0x00000040,
    0xF8000000,
    0x00000200,
    0x00000080,
    0x00000010,
    0x00003000,
    0x00000020,
    0x03FF8C00,
    0x04000000,
    0x00004000,
    0xFFFFFFFF
};

u32 __OSLastInterruptSrr0;
s16 __OSLastInterrupt;
OSTime __OSLastInterruptTime;
OSInterruptHandler* InterruptHandlerTable;

void fn_805F2350(__OSException exception, OSContext* context);
static void ExternalInterruptHandler(__OSException exception, OSContext* context);
static OSInterruptMask SetInterruptMask(OSInterruptMask mask, OSInterruptMask current);

asm BOOL OSDisableInterrupts(void) {
    nofralloc
        mfmsr r3
        rlwinm r4, r3, 0, 17, 15
        mtmsr r4
        extrwi r3, r3, 1, 16
        blr
}

asm BOOL OSEnableInterrupts(void) {
    nofralloc
        mfmsr r3
        ori r4, r3, 0x8000
        mtmsr r4
        extrwi r3, r3, 1, 16
        blr
}

asm BOOL OSRestoreInterrupts(BOOL level) {
    nofralloc
        cmpwi r3, 0x0
        mfmsr r4
        beq @loc_805F1ED4
        ori r5, r4, 0x8000
        b @loc_805F1ED8
@loc_805F1ED4:
        rlwinm r5, r4, 0, 17, 15
@loc_805F1ED8:
        mtmsr r5
        extrwi r3, r4, 1, 16
        blr
}

asm OSInterruptHandler __OSSetInterruptHandler(OSInterrupt interrupt, OSInterruptHandler handler) {
    nofralloc
        lwz r5, InterruptHandlerTable
        slwi r0, r3, 2
        lwzx r3, r5, r0
        stwx r4, r5, r0
        blr
}

asm OSInterruptHandler fn_805F1F10(OSInterrupt interrupt) {
    nofralloc
        lwz r4, InterruptHandlerTable
        slwi r0, r3, 2
        lwzx r3, r4, r0
        blr
}

asm void __OSInterruptInit(void) {
    nofralloc
        stwu r1, -0x20(r1)
        mflr r0
        li r4, 0x0
        li r5, 0x80
        stw r0, 0x24(r1)
        stw r31, 0x1c(r1)
        lis r31, 0x8000
        addi r3, r31, 0x3040
        stw r30, 0x18(r1)
        stw r29, 0x14(r1)
        stw r3, InterruptHandlerTable
        bl memset
        li r0, 0x0
        stw r0, 0xc4(r31)
        lis r4, 0xcc00
        li r5, 0xf0
        stw r0, 0xc8(r31)
        lis r3, 0xcd00
        lis r0, 0x4000
        li r30, -0x10
        stw r5, 0x3004(r4)
        stw r0, 0x34(r3)
        bl OSDisableInterrupts
        lwz r0, 0xc4(r31)
        mr r29, r3
        lwz r4, 0xc8(r31)
        or r30, r30, r0
        nor r0, r0, r4
        stw r30, 0xc4(r31)
        clrrwi r3, r0, 4
        or r30, r30, r4
        b @loc_805F1FA8
@loc_805F1FA0:
        mr r4, r30
        bl SetInterruptMask
@loc_805F1FA8:
        cmpwi r3, 0x0
        bne @loc_805F1FA0
        mr r3, r29
        bl OSRestoreInterrupts
        lis r4, ExternalInterruptHandler@ha
        li r3, 0x4
        addi r4, r4, ExternalInterruptHandler@l
        bl __OSSetExceptionHandler
        lwz r0, 0x24(r1)
        lwz r31, 0x1c(r1)
        lwz r30, 0x18(r1)
        lwz r29, 0x14(r1)
        mtlr r0
        addi r1, r1, 0x20
        blr
}

asm static OSInterruptMask SetInterruptMask(OSInterruptMask mask, OSInterruptMask current) {
    nofralloc
        cntlzw r0, r3
        cmpwi r0, 0xc
        bge @loc_805F201C
        cmpwi r0, 0x8
        beq @loc_805F20CC
        bge @loc_805F20F8
        cmpwi r0, 0x5
        bge @loc_805F208C
        cmpwi r0, 0x0
        bge @loc_805F203C
        blr
@loc_805F201C:
        cmpwi r0, 0x11
        bge @loc_805F2030
        cmpwi r0, 0xf
        bge @loc_805F2180
        b @loc_805F213C
@loc_805F2030:
        cmpwi r0, 0x1c
        bgelr
        b @loc_805F21B4
@loc_805F203C:
        clrrwi. r0, r4, 31
        li r5, 0x0
        bne @loc_805F204C
        ori r5, r5, 0x1
@loc_805F204C:
        rlwinm. r0, r4, 0, 1, 1
        bne @loc_805F2058
        ori r5, r5, 0x2
@loc_805F2058:
        rlwinm. r0, r4, 0, 2, 2
        bne @loc_805F2064
        ori r5, r5, 0x4
@loc_805F2064:
        rlwinm. r0, r4, 0, 3, 3
        bne @loc_805F2070
        ori r5, r5, 0x8
@loc_805F2070:
        rlwinm. r0, r4, 0, 4, 4
        bne @loc_805F207C
        ori r5, r5, 0x10
@loc_805F207C:
        lis r4, 0xcc00
        clrlwi r3, r3, 5
        sth r5, 0x401c(r4)
        blr
@loc_805F208C:
        lis r5, 0xcc00
        rlwinm. r0, r4, 0, 5, 5
        lhz r5, 0x500a(r5)
        rlwinm r5, r5, 0, 29, 22
        bne @loc_805F20A4
        ori r5, r5, 0x10
@loc_805F20A4:
        rlwinm. r0, r4, 0, 6, 6
        bne @loc_805F20B0
        ori r5, r5, 0x40
@loc_805F20B0:
        rlwinm. r0, r4, 0, 7, 7
        bne @loc_805F20BC
        ori r5, r5, 0x100
@loc_805F20BC:
        lis r4, 0xcc00
        rlwinm r3, r3, 0, 8, 4
        sth r5, 0x500a(r4)
        blr
@loc_805F20CC:
        rlwinm. r0, r4, 0, 8, 8
        lis r4, 0xcd00
        lwz r5, 0x6c00(r4)
        li r0, -0x2d
        and r5, r5, r0
        bne @loc_805F20E8
        ori r5, r5, 0x4
@loc_805F20E8:
        lis r4, 0xcd00
        rlwinm r3, r3, 0, 9, 7
        stw r5, 0x6c00(r4)
        blr
@loc_805F20F8:
        rlwinm. r0, r4, 0, 9, 9
        lis r5, 0xcd00
        lwz r5, 0x6800(r5)
        li r0, -0x2c10
        and r5, r5, r0
        bne @loc_805F2114
        ori r5, r5, 0x1
@loc_805F2114:
        rlwinm. r0, r4, 0, 10, 10
        bne @loc_805F2120
        ori r5, r5, 0x4
@loc_805F2120:
        rlwinm. r0, r4, 0, 11, 11
        bne @loc_805F212C
        ori r5, r5, 0x400
@loc_805F212C:
        lis r4, 0xcd00
        rlwinm r3, r3, 0, 12, 8
        stw r5, 0x6800(r4)
        blr
@loc_805F213C:
        rlwinm. r0, r4, 0, 12, 12
        lis r5, 0xcd00
        lwz r5, 0x6814(r5)
        li r0, -0xc10
        and r5, r5, r0
        bne @loc_805F2158
        ori r5, r5, 0x1
@loc_805F2158:
        rlwinm. r0, r4, 0, 13, 13
        bne @loc_805F2164
        ori r5, r5, 0x4
@loc_805F2164:
        rlwinm. r0, r4, 0, 14, 14
        bne @loc_805F2170
        ori r5, r5, 0x400
@loc_805F2170:
        lis r4, 0xcd00
        rlwinm r3, r3, 0, 15, 11
        stw r5, 0x6814(r4)
        blr
@loc_805F2180:
        lis r5, 0xcd00
        rlwinm. r0, r4, 0, 15, 15
        lwz r5, 0x6828(r5)
        clrrwi r5, r5, 4
        bne @loc_805F2198
        ori r5, r5, 0x1
@loc_805F2198:
        rlwinm. r0, r4, 0, 16, 16
        bne @loc_805F21A4
        ori r5, r5, 0x4
@loc_805F21A4:
        lis r4, 0xcd00
        rlwinm r3, r3, 0, 17, 14
        stw r5, 0x6828(r4)
        blr
@loc_805F21B4:
        rlwinm. r0, r4, 0, 17, 17
        li r5, 0xf0
        bne @loc_805F21C4
        ori r5, r5, 0x800
@loc_805F21C4:
        rlwinm. r0, r4, 0, 20, 20
        bne @loc_805F21D0
        ori r5, r5, 0x8
@loc_805F21D0:
        rlwinm. r0, r4, 0, 21, 21
        bne @loc_805F21DC
        ori r5, r5, 0x4
@loc_805F21DC:
        rlwinm. r0, r4, 0, 22, 22
        bne @loc_805F21E8
        ori r5, r5, 0x2
@loc_805F21E8:
        rlwinm. r0, r4, 0, 23, 23
        bne @loc_805F21F4
        ori r5, r5, 0x1
@loc_805F21F4:
        rlwinm. r0, r4, 0, 24, 24
        bne @loc_805F2200
        ori r5, r5, 0x100
@loc_805F2200:
        rlwinm. r0, r4, 0, 25, 25
        bne @loc_805F220C
        ori r5, r5, 0x1000
@loc_805F220C:
        rlwinm. r0, r4, 0, 18, 18
        bne @loc_805F2218
        ori r5, r5, 0x200
@loc_805F2218:
        rlwinm. r0, r4, 0, 19, 19
        bne @loc_805F2224
        ori r5, r5, 0x400
@loc_805F2224:
        rlwinm. r0, r4, 0, 26, 26
        bne @loc_805F2230
        ori r5, r5, 0x2000
@loc_805F2230:
        rlwinm. r0, r4, 0, 27, 27
        bne @loc_805F223C
        ori r5, r5, 0x4000
@loc_805F223C:
        lis r4, 0xcc00
        rlwinm r3, r3, 0, 28, 16
        stw r5, 0x3004(r4)
        blr
}

asm OSInterruptMask __OSMaskInterrupts(OSInterruptMask mask) {
    nofralloc
        stwu r1, -0x20(r1)
        mflr r0
        stw r0, 0x24(r1)
        stw r31, 0x1c(r1)
        mr r31, r3
        stw r30, 0x18(r1)
        stw r29, 0x14(r1)
        bl OSDisableInterrupts
        lis r4, 0x8000
        mr r30, r3
        lwz r29, 0xc4(r4)
        lwz r5, 0xc8(r4)
        or r0, r29, r5
        andc r3, r31, r0
        or r31, r31, r29
        stw r31, 0xc4(r4)
        or r31, r31, r5
        b @loc_805F22A0
@loc_805F2298:
        mr r4, r31
        bl SetInterruptMask
@loc_805F22A0:
        cmpwi r3, 0x0
        bne @loc_805F2298
        mr r3, r30
        bl OSRestoreInterrupts
        lwz r31, 0x1c(r1)
        mr r3, r29
        lwz r30, 0x18(r1)
        lwz r29, 0x14(r1)
        lwz r0, 0x24(r1)
        mtlr r0
        addi r1, r1, 0x20
        blr
}

asm OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask mask) {
    nofralloc
        stwu r1, -0x20(r1)
        mflr r0
        stw r0, 0x24(r1)
        stw r31, 0x1c(r1)
        mr r31, r3
        stw r30, 0x18(r1)
        stw r29, 0x14(r1)
        bl OSDisableInterrupts
        lis r4, 0x8000
        mr r30, r3
        lwz r29, 0xc4(r4)
        lwz r5, 0xc8(r4)
        or r0, r29, r5
        and r3, r31, r0
        andc r31, r29, r31
        stw r31, 0xc4(r4)
        or r31, r31, r5
        b @loc_805F2320
@loc_805F2318:
        mr r4, r31
        bl SetInterruptMask
@loc_805F2320:
        cmpwi r3, 0x0
        bne @loc_805F2318
        mr r3, r30
        bl OSRestoreInterrupts
        lwz r31, 0x1c(r1)
        mr r3, r29
        lwz r30, 0x18(r1)
        lwz r29, 0x14(r1)
        lwz r0, 0x24(r1)
        mtlr r0
        addi r1, r1, 0x20
        blr
}

asm void fn_805F2350(__OSException exception, OSContext* context) {
    nofralloc
        stwu r1, -0x20(r1)
        mflr r0
        lis r3, 0xcc00
        stw r0, 0x24(r1)
        stw r31, 0x1c(r1)
        stw r30, 0x18(r1)
        mr r30, r4
        stw r29, 0x14(r1)
        lwz r31, 0x3000(r3)
        lwz r0, 0x3004(r3)
        rlwinm. r31, r31, 0, 16, 14
        beq @loc_805F2388
        and. r0, r31, r0
        bne @loc_805F2390
@loc_805F2388:
        mr r3, r30
        bl OSLoadContext
@loc_805F2390:
        rlwinm. r0, r31, 0, 24, 24
        li r0, 0x0
        beq @loc_805F23E0
        lis r3, 0xcc00
        lhz r4, 0x401e(r3)
        clrlwi. r3, r4, 31
        beq @loc_805F23B0
        oris r0, r0, 0x8000
@loc_805F23B0:
        rlwinm. r3, r4, 0, 30, 30
        beq @loc_805F23BC
        oris r0, r0, 0x4000
@loc_805F23BC:
        rlwinm. r3, r4, 0, 29, 29
        beq @loc_805F23C8
        oris r0, r0, 0x2000
@loc_805F23C8:
        rlwinm. r3, r4, 0, 28, 28
        beq @loc_805F23D4
        oris r0, r0, 0x1000
@loc_805F23D4:
        rlwinm. r3, r4, 0, 27, 27
        beq @loc_805F23E0
        oris r0, r0, 0x800
@loc_805F23E0:
        rlwinm. r3, r31, 0, 25, 25
        beq @loc_805F2414
        lis r3, 0xcc00
        lhz r4, 0x500a(r3)
        rlwinm. r3, r4, 0, 28, 28
        beq @loc_805F23FC
        oris r0, r0, 0x400
@loc_805F23FC:
        rlwinm. r3, r4, 0, 26, 26
        beq @loc_805F2408
        oris r0, r0, 0x200
@loc_805F2408:
        rlwinm. r3, r4, 0, 24, 24
        beq @loc_805F2414
        oris r0, r0, 0x100
@loc_805F2414:
        rlwinm. r3, r31, 0, 26, 26
        beq @loc_805F2430
        lis r3, 0xcd00
        lwz r3, 0x6c00(r3)
        rlwinm. r3, r3, 0, 28, 28
        beq @loc_805F2430
        oris r0, r0, 0x80
@loc_805F2430:
        rlwinm. r3, r31, 0, 27, 27
        beq @loc_805F24B0
        lis r3, 0xcd00
        lwz r4, 0x6800(r3)
        rlwinm. r3, r4, 0, 30, 30
        beq @loc_805F244C
        oris r0, r0, 0x40
@loc_805F244C:
        rlwinm. r3, r4, 0, 28, 28
        beq @loc_805F2458
        oris r0, r0, 0x20
@loc_805F2458:
        rlwinm. r3, r4, 0, 20, 20
        beq @loc_805F2464
        oris r0, r0, 0x10
@loc_805F2464:
        lis r3, 0xcd00
        lwz r4, 0x6814(r3)
        rlwinm. r3, r4, 0, 30, 30
        beq @loc_805F2478
        oris r0, r0, 0x8
@loc_805F2478:
        rlwinm. r3, r4, 0, 28, 28
        beq @loc_805F2484
        oris r0, r0, 0x4
@loc_805F2484:
        rlwinm. r3, r4, 0, 20, 20
        beq @loc_805F2490
        oris r0, r0, 0x2
@loc_805F2490:
        lis r3, 0xcd00
        lwz r4, 0x6828(r3)
        rlwinm. r3, r4, 0, 30, 30
        beq @loc_805F24A4
        oris r0, r0, 0x1
@loc_805F24A4:
        rlwinm. r3, r4, 0, 28, 28
        beq @loc_805F24B0
        ori r0, r0, 0x8000
@loc_805F24B0:
        rlwinm. r3, r31, 0, 18, 18
        beq @loc_805F24BC
        ori r0, r0, 0x20
@loc_805F24BC:
        rlwinm. r3, r31, 0, 19, 19
        beq @loc_805F24C8
        ori r0, r0, 0x40
@loc_805F24C8:
        rlwinm. r3, r31, 0, 21, 21
        beq @loc_805F24D4
        ori r0, r0, 0x1000
@loc_805F24D4:
        rlwinm. r3, r31, 0, 22, 22
        beq @loc_805F24E0
        ori r0, r0, 0x2000
@loc_805F24E0:
        rlwinm. r3, r31, 0, 23, 23
        beq @loc_805F24EC
        ori r0, r0, 0x80
@loc_805F24EC:
        rlwinm. r3, r31, 0, 28, 28
        beq @loc_805F24F8
        ori r0, r0, 0x800
@loc_805F24F8:
        rlwinm. r3, r31, 0, 29, 29
        beq @loc_805F2504
        ori r0, r0, 0x400
@loc_805F2504:
        rlwinm. r3, r31, 0, 30, 30
        beq @loc_805F2510
        ori r0, r0, 0x200
@loc_805F2510:
        rlwinm. r3, r31, 0, 20, 20
        beq @loc_805F251C
        ori r0, r0, 0x4000
@loc_805F251C:
        clrlwi. r3, r31, 31
        beq @loc_805F2528
        ori r0, r0, 0x100
@loc_805F2528:
        rlwinm. r3, r31, 0, 17, 17
        beq @loc_805F2534
        ori r0, r0, 0x10
@loc_805F2534:
        lis r3, 0x8000
        lwz r4, 0xc4(r3)
        lwz r3, 0xc8(r3)
        or r3, r4, r3
        andc. r3, r0, r3
        beq @loc_805F25D4
        lis r4, InterruptPrioTable@ha
        addi r4, r4, InterruptPrioTable@l
        nop
@loc_805F2558:
        lwz r0, 0x0(r4)
        and. r0, r3, r0
        beq @loc_805F2570
        cntlzw r0, r0
        extsh r29, r0
        b @loc_805F2578
@loc_805F2570:
        addi r4, r4, 0x4
        b @loc_805F2558
@loc_805F2578:
        lwz r3, InterruptHandlerTable
        slwi r0, r29, 2
        lwzx r31, r3, r0
        cmpwi r31, 0x0
        beq @loc_805F25D4
        cmpwi r29, 0x4
        ble @loc_805F25AC
        sth r29, __OSLastInterrupt
        bl OSGetTime
        stw r4, __OSLastInterruptTime+4
        stw r3, __OSLastInterruptTime
        lwz r0, 0x198(r30)
        stw r0, __OSLastInterruptSrr0
@loc_805F25AC:
        bl OSDisableScheduler
        mr r12, r31
        mr r3, r29
        mr r4, r30
        mtctr r12
        bctrl
        bl OSEnableScheduler
        bl __OSReschedule
        mr r3, r30
        bl OSLoadContext
@loc_805F25D4:
        mr r3, r30
        bl OSLoadContext
        lwz r0, 0x24(r1)
        lwz r31, 0x1c(r1)
        lwz r30, 0x18(r1)
        lwz r29, 0x14(r1)
        mtlr r0
        addi r1, r1, 0x20
        blr
}

asm static void ExternalInterruptHandler(__OSException exception, OSContext* context) {
    nofralloc
        stw r0, 0x0(r4)
        stw r1, 0x4(r4)
        stw r2, 0x8(r4)
        stmw r6, 0x18(r4)
        mfspr r0, GQR1
        stw r0, 0x1a8(r4)
        mfspr r0, GQR2
        stw r0, 0x1ac(r4)
        mfspr r0, GQR3
        stw r0, 0x1b0(r4)
        mfspr r0, GQR4
        stw r0, 0x1b4(r4)
        mfspr r0, GQR5
        stw r0, 0x1b8(r4)
        mfspr r0, GQR6
        stw r0, 0x1bc(r4)
        mfspr r0, GQR7
        stw r0, 0x1c0(r4)
        stwu r1, -0x8(r1)
        b fn_805F2350
}

