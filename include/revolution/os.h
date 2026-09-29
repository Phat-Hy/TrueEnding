#ifndef REVOLUTION_OS_H
#define REVOLUTION_OS_H

#include "revolution/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef s64 OSTime;
typedef u32 OSTick;

typedef struct OSCalendarTime {
    int sec;   // 0x00
    int min;   // 0x04
    int hour;  // 0x08
    int mday;  // 0x0C
    int mon;   // 0x10
    int year;  // 0x14
    int wday;  // 0x18
    int yday;  // 0x1C
    int msec;  // 0x20
    int usec;  // 0x24
} OSCalendarTime;

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

OSTime OSGetTime(void);
OSTick OSGetTick(void);
OSTime __OSGetSystemTime(void);
OSTime __OSTimeToSystemTime(OSTime time);
void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* td);
OSTime OSCalendarTimeToTicks(const OSCalendarTime* td);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_H
