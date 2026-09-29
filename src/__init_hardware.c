void __OSPSInit(void);
void __OSFPRInit(void);
void __OSCacheInit(void);

__declspec(section ".init") asm void __init_hardware(void) {
    nofralloc
    mfmsr r0
    ori r0, r0, 0x2000
    mtmsr r0
    mflr r31
    bl __OSPSInit
    bl __OSFPRInit
    bl __OSCacheInit
    mtlr r31
    blr
}

__declspec(section ".init") asm void __flush_cache(void* addr, unsigned int size) {
    nofralloc
    lis r5, 0xffff
    ori r5, r5, 0xfff1
    and r5, r5, r3
    subf r3, r5, r3
    add r4, r4, r3
@loop:
    dcbst 0, r5
    sync
    icbi 0, r5
    addic r5, r5, 8
    subic. r4, r4, 8
    bge @loop
    isync
    blr
}
