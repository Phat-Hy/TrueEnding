#ifndef REVOLUTION_OS_H
#define REVOLUTION_OS_H

#include "revolution/types.h"
#include "revolution/os/OSTime.h"
#include "revolution/os/OSContext.h"
#include "revolution/os/OSThread.h"
#include "revolution/os/OSAlarm.h"
#include "revolution/os/OSArena.h"
#include "revolution/os/OSInterrupt.h"
#include "revolution/os/OSError.h"
#include "revolution/os/OSCache.h"

#ifdef __cplusplus
extern "C" {
#endif

#define OS_BUS_CLOCK (*(u32*)0x800000F8)
#define OS_CORE_CLOCK (*(u32*)0x800000FC)
#define OS_TIMER_CLOCK (OS_BUS_CLOCK / 4)
#define __OSStartTime (*(volatile OSTime*)0x800030D8)

#define OSTicksToSeconds(ticks)      ((ticks) / OS_TIMER_CLOCK)
#define OSTicksToMilliseconds(ticks) ((ticks) / (OS_TIMER_CLOCK / 1000))
#define OSTicksToMicroseconds(ticks) (((ticks) * 8) / (OS_TIMER_CLOCK / 125000))
#define OSTicksToNanoseconds(ticks)  (((ticks) * 8000) / (OS_TIMER_CLOCK / 125000))

#define OSSecondsToTicks(sec)        ((OSTime)(sec) * OS_TIMER_CLOCK)
#define OSMillisecondsToTicks(msec)  ((OSTime)(msec) * (OS_TIMER_CLOCK / 1000))
#define OSMicrosecondsToTicks(usec)  (((OSTime)(usec) * (OS_TIMER_CLOCK / 125000)) / 8)
#define OSNanosecondsToTicks(nsec)   (((OSTime)(nsec) * (OS_TIMER_CLOCK / 125000)) / 8000)

BOOL OSDisableInterrupts(void);
BOOL OSEnableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL level);

void OSReport(const char* fmt, ...);
void OSPanic(const char* file, int line, const char* fmt, ...);

typedef u8 __OSException;
#define __OS_EXCEPTION_DECREMENTER 8

typedef void (*__OSExceptionHandler)(__OSException exception, OSContext* context);
__OSExceptionHandler __OSGetExceptionHandler(__OSException exception);
__OSExceptionHandler __OSSetExceptionHandler(__OSException exception, __OSExceptionHandler handler);

typedef BOOL (*OSShutdownFunction)(BOOL final);
typedef struct OSShutdownFunctionInfo OSShutdownFunctionInfo;
struct OSShutdownFunctionInfo {
    OSShutdownFunction func;
    u32 priority;
    OSShutdownFunctionInfo* next;
    OSShutdownFunctionInfo* prev;
};
void OSRegisterShutdownFunction(OSShutdownFunctionInfo* info);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_H
