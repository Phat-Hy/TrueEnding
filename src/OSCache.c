#include "revolution/os.h"
#include "revolution/os/OSCache.h"

extern u32 PPCMfhid0(void);
extern u32 PPCMfhid2(void);
extern void PPCMthid2(u32 val);
extern u32 PPCMfl2cr(void);
extern void PPCMtl2cr(u32 val);
extern u32 PPCMfmsr(void);
extern void PPCMtmsr(u32 val);
extern void PPCHalt(void);

#define HID0 1008
#define HID2 920
#define DMA_U 922
#define DMA_L 923

asm void DCEnable(void) {
    nofralloc
    sync
    mfspr r3, HID0
    ori r3, r3, 0x4000
    mtspr HID0, r3
    blr
}

asm void DCInvalidateRange(register void* addr, register u32 nBytes) {
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
loop:
    dcbi 0, addr
    addi addr, addr, 32
    bdnz loop
    blr
}

asm void DCFlushRange(register void* addr, register u32 nBytes) {
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
loop:
    dcbf 0, addr
    addi addr, addr, 32
    bdnz loop
    sc
    blr
}

asm void fn_805ED1C0(register void* addr, register u32 nBytes) {
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
loop:
    dcbst 0, addr
    addi addr, addr, 32
    bdnz loop
    sc
    blr
}

asm void DCFlushRangeNoSync(register void* addr, register u32 nBytes) {
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
loop:
    dcbf 0, addr
    addi addr, addr, 32
    bdnz loop
    blr
}

asm void DCZeroRange(register void* addr, register u32 nBytes) {
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
loop:
    dcbz 0, addr
    addi addr, addr, 32
    bdnz loop
    blr
}

asm void ICInvalidateRange(register void* addr, register u32 nBytes) {
    nofralloc
    cmplwi nBytes, 0
    blelr
    clrlwi r5, addr, 27
    add nBytes, nBytes, r5
    addi nBytes, nBytes, 31
    srwi nBytes, nBytes, 5
    mtctr nBytes
loop:
    icbi 0, addr
    addi addr, addr, 32
    bdnz loop
    sync
    isync
    blr
}

asm void ICFlashInvalidate(void) {
    nofralloc
    mfspr r3, HID0
    ori r3, r3, 0x800
    mtspr HID0, r3
    blr
}

asm void ICEnable(void) {
    nofralloc
    isync
    mfspr r3, HID0
    ori r3, r3, 0x8000
    mtspr HID0, r3
    blr
}

asm void fn_805ED2C0(void) {
    nofralloc
    mfmsr r5
    ori r5, r5, 0x1000
    mtmsr r5
    lis r3, 0x8000
    li r4, 0x400
    mtctr r4
touch_loop:
    dcbt 0, r3
    dcbst 0, r3
    addi r3, r3, 32
    bdnz touch_loop
    mfspr r4, HID2
    oris r4, r4, 0x100F
    mtspr HID2, r4
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    lis r3, 0xE000
    ori r3, r3, 2
    mtdbatl 3, r3
    ori r3, r3, 0x1FE
    mtdbatu 3, r3
    isync
    lis r3, 0xE000
    li r6, 0x200
    mtctr r6
    li r6, 0
zero_loop:
    dcbz_l r6, r3
    addi r3, r3, 32
    bdnz zero_loop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    blr
}

void fn_805ED390(void) {
    BOOL enabled = OSDisableInterrupts();
    fn_805ED2C0();
    OSRestoreInterrupts(enabled);
}

asm void LCDisable(void) {
    nofralloc
    lis r3, 0xE000
    li r4, 0x200
    mtctr r4
inv_loop:
    dcbi 0, r3
    addi r3, r3, 32
    bdnz inv_loop
    mfspr r4, HID2
    rlwinm r4, r4, 0, 4, 2
    mtspr HID2, r4
    blr
}

asm void fn_805ED400(register void* dest, register void* src, register u32 blocks) {
    nofralloc
    extrwi r6, blocks, 5, 25
    clrlwi src, src, 3
    or r6, r6, src
    mtspr DMA_U, r6
    clrlslwi r6, blocks, 30, 2
    or r6, r6, dest
    ori r6, r6, 0x12
    mtspr DMA_L, r6
    blr
}

asm void fn_805ED430(register void* dest, register void* src, register u32 blocks) {
    nofralloc
    extrwi r6, blocks, 5, 25
    clrlwi dest, dest, 3
    or r6, r6, dest
    mtspr DMA_U, r6
    clrlslwi r6, blocks, 30, 2
    or r6, r6, src
    ori r6, r6, 0x2
    mtspr DMA_L, r6
    blr
}

u32 fn_805ED460(void* dest, void* src, u32 nBytes) {
    u32 blocks = (nBytes + 31) >> 5;
    u32 count = (blocks + 127) >> 7;
    while (blocks != 0) {
        if (blocks < 128) {
            fn_805ED400(dest, src, blocks);
            blocks = 0;
        } else {
            fn_805ED400(dest, src, 0);
            blocks -= 128;
            dest = (void*)((u32)dest + 0x1000);
            src = (void*)((u32)src + 0x1000);
        }
    }
    return count;
}

u32 fn_805ED500(void* dest, void* src, u32 nBytes) {
    u32 blocks = (nBytes + 31) >> 5;
    u32 count = (blocks + 127) >> 7;
    while (blocks != 0) {
        if (blocks < 128) {
            fn_805ED430(dest, src, blocks);
            blocks = 0;
        } else {
            fn_805ED430(dest, src, 0);
            blocks -= 128;
            dest = (void*)((u32)dest + 0x1000);
            src = (void*)((u32)src + 0x1000);
        }
    }
    return count;
}

asm void fn_805ED5A0(register u32 len) {
    nofralloc
loop:
    mfspr r4, HID2
    extrwi r4, r4, 4, 4
    cmpw r4, len
    bgt loop
    blr
}

static void DMAErrorHandler(OSError error, OSContext* context, ...) {
    u32 hid2 = PPCMfhid2();
    OSReport("Machine check received\n");
    OSReport("HID2 = 0x%x   SRR1 = 0x%x\n", hid2, context->srr1);
    if (!(hid2 & 0x00F00000) || !(context->srr1 & 0x00200000)) {
        OSReport("Machine check was not DMA/locked cache related\n");
        OSDumpContext(context);
        PPCHalt();
    }
    OSReport("DMAErrorHandler(): An error occurred while processing DMA.\n");
    OSReport("The following errors have been detected and cleared :\n");
    if (hid2 & 0x00800000) {
        OSReport("\t- Requested a locked cache tag that was already in the cache\n");
    }
    if (hid2 & 0x00400000) {
        OSReport("\t- DMA attempted to access normal cache\n");
    }
    if (hid2 & 0x00200000) {
        OSReport("\t- DMA missed in data cache\n");
    }
    if (hid2 & 0x00100000) {
        OSReport("\t- DMA queue overflowed\n");
    }
    PPCMthid2(hid2);
}

void __OSCacheInit(void) {
    if (!(PPCMfhid0() & 0x00008000)) {
        ICEnable();
    }
    if (!(PPCMfhid0() & 0x00004000)) {
        DCEnable();
    }
    if (!(PPCMfl2cr() & 0x80000000)) {
        u32 msr = PPCMfmsr();
        asm { sync }
        PPCMtmsr(0x30);
        asm { sync }
        asm { sync }
        PPCMtl2cr(PPCMfl2cr() & 0x7FFFFFFF);
        asm { sync }
        asm { sync }
        PPCMtl2cr(PPCMfl2cr() & 0x7FFFFFFF);
        asm { sync }
        PPCMtl2cr(PPCMfl2cr() | 0x00200000);
        while (PPCMfl2cr() & 1) {
        }
        PPCMtl2cr(PPCMfl2cr() & ~0x00200000);
        while (PPCMfl2cr() & 1) {
        }
        PPCMtmsr(msr);
        PPCMtl2cr((PPCMfl2cr() | 0x80000000) & ~0x00200000);
    }
    OSSetErrorHandler(1, DMAErrorHandler);
}
