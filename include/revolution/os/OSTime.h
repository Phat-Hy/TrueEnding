#ifndef REVOLUTION_OS_OSTIME_H
#define REVOLUTION_OS_OSTIME_H

#include "types.h"

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

OSTime OSGetTime(void);
OSTick OSGetTick(void);
OSTime __OSGetSystemTime(void);
OSTime __OSTimeToSystemTime(OSTime time);
void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* td);
OSTime OSCalendarTimeToTicks(const OSCalendarTime* td);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSTIME_H
