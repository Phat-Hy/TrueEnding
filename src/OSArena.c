#include "revolution/os.h"
#include "revolution/os/OSArena.h"

static void* __OSArenaHi;
static void* s_mem2ArenaHi;
static void* __OSArenaLo = (void*)-1;
static void* s_mem2ArenaLo = (void*)-1;

void* OSGetMEM1ArenaHi(void) {
    return __OSArenaHi;
}

void* OSGetMEM2ArenaHi(void) {
    return s_mem2ArenaHi;
}

void* OSGetArenaHi(void) {
    return __OSArenaHi;
}

void* OSGetMEM1ArenaLo(void) {
    return __OSArenaLo;
}

void* OSGetMEM2ArenaLo(void) {
    return s_mem2ArenaLo;
}

void* OSGetArenaLo(void) {
    return __OSArenaLo;
}

void OSSetMEM1ArenaHi(void* addr) {
    __OSArenaHi = addr;
}

void OSSetMEM2ArenaHi(void* addr) {
    s_mem2ArenaHi = addr;
}

void OSSetArenaHi(void* addr) {
    __OSArenaHi = addr;
}

void OSSetMEM1ArenaLo(void* addr) {
    __OSArenaLo = addr;
}

void OSSetMEM2ArenaLo(void* addr) {
    s_mem2ArenaLo = addr;
}

void OSSetArenaLo(void* addr) {
    __OSArenaLo = addr;
}

#define OSRoundUp32B(x)   (((u32)(x) + 31) & ~(31))
#define OSRoundDown32B(x) (((u32)(x)) & ~(31))

void* OSAllocFromMEM1ArenaLo(u32 size, u32 align) {
    void* ptr;
    u8* arenaLo;

    ptr = (void*)((align + (u32)__OSArenaLo - 1) & ~(align - 1));
    arenaLo = (u8*)ptr + size;
    arenaLo = (u8*)(((u32)arenaLo + (align - 1)) & ~(align - 1));
    __OSArenaLo = arenaLo;
    return ptr;
}
