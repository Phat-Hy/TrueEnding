#ifndef REVOLUTION_OS_OSINTERRUPT_H
#define REVOLUTION_OS_OSINTERRUPT_H

#include "revolution/types.h"
#include "revolution/os/OSContext.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef s16 OSInterrupt;
typedef void (*OSInterruptHandler)(OSInterrupt interrupt, OSContext* context);

#define OS_INTERRUPT_MAX 32
#define OS_INTERRUPTMASK(interrupt) (0x80000000u >> (interrupt))

typedef u32 OSInterruptMask;

BOOL OSDisableInterrupts(void);
BOOL OSEnableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);

OSInterruptHandler __OSSetInterruptHandler(OSInterrupt interrupt, OSInterruptHandler handler);
OSInterruptHandler __OSGetInterruptHandler(OSInterrupt interrupt);
void __OSInterruptInit(void);
OSInterruptMask __OSMaskInterrupts(OSInterruptMask mask);
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask mask);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSINTERRUPT_H
