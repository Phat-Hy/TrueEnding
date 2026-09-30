#ifndef REVOLUTION_OS_OSARENA_H
#define REVOLUTION_OS_OSARENA_H

#include "revolution/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void* OSGetMEM1ArenaHi(void);
void* OSGetMEM2ArenaHi(void);
void* OSGetArenaHi(void);

void* OSGetMEM1ArenaLo(void);
void* OSGetMEM2ArenaLo(void);
void* OSGetArenaLo(void);

void OSSetMEM1ArenaHi(void* addr);
void OSSetMEM2ArenaHi(void* addr);
void OSSetArenaHi(void* addr);

void OSSetMEM1ArenaLo(void* addr);
void OSSetMEM2ArenaLo(void* addr);
void OSSetArenaLo(void* addr);

void* OSAllocFromMEM1ArenaLo(u32 size, u32 align);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSARENA_H
