#include "revolution/os.h"

static int YearDays[12] = {
    0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334
};

static int LeapYearDays[12] = {
    0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335
};

asm OSTime OSGetTime(void) {
    nofralloc
loop:
    mftbu r3
    mftb r4
    mftbu r5
    cmpw r3, r5
    bne loop
    blr
}

asm OSTick OSGetTick(void) {
    nofralloc
    mftb r3
    blr
}

OSTime __OSGetSystemTime(void) {
    BOOL enabled;
    OSTime time;

    enabled = OSDisableInterrupts();
    time = OSGetTime() + *(OSTime*)0x800030D8;
    OSRestoreInterrupts(enabled);
    return time;
}

OSTime __OSTimeToSystemTime(OSTime time) {
    BOOL enabled;
    OSTime sysTime;

    enabled = OSDisableInterrupts();
    sysTime = *(OSTime*)0x800030D8 + time;
    OSRestoreInterrupts(enabled);
    return sysTime;
}

static inline int __OSGetLeapDays(int year) {
    if (year < 1) {
        return 0;
    }
    return (year + 3) / 4 - (year - 1) / 100 + (year - 1) / 400;
}

void OSTicksToCalendarTime(OSTime ticks, OSCalendarTime* td) {
    int days;
    int year;
    int mon;
    int d;
    int yday;
    int secs;
    BOOL isleap;
    int* md;
    OSTime tr;

    tr = ticks % OS_TIMER_CLOCK;
    if (tr < 0) {
        tr += OS_TIMER_CLOCK;
    }

    td->usec = (int)(OSTicksToMicroseconds(tr) % 1000);
    td->msec = (int)(OSTicksToMilliseconds(tr) % 1000);

    days = ((ticks - tr) / OS_TIMER_CLOCK) / 86400 + 730485;
    secs = (int)(((ticks - tr) / OS_TIMER_CLOCK) % 86400);
    if (secs < 0) {
        secs += 86400;
        days -= 1;
    }

    td->wday = (days + 6) % 7;

    year = (int)(days / 365);
    while (days < (d = year * 365 + __OSGetLeapDays(year))) {
        year--;
    }

    td->year = year;
    yday = days - d;
    td->yday = yday;

    isleap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    md = isleap ? LeapYearDays : YearDays;

    for (mon = 12; yday < md[--mon]; ) {
    }
    td->mon = mon;
    td->mday = yday - md[mon] + 1;

    td->hour = (secs / 60) / 60;
    td->min = (secs / 60) % 60;
    td->sec = secs % 60;
}

OSTime OSCalendarTimeToTicks(const OSCalendarTime* td) {
    int mon, m, leap, year;
    const int* md;
    OSTime secs;

    m = td->mon / 12;
    mon = td->mon - m * 12;
    if (mon < 0) {
        mon += 12;
        m -= 1;
    }
    year = td->year + m;

    leap = __OSGetLeapDays(year);

    md = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? LeapYearDays : YearDays;

    secs = (OSTime)year * 31536000
         + (OSTime)(td->mday + leap + md[mon] - 1) * 86400
         + (OSTime)td->hour * 3600
         + (OSTime)td->min * 60
         + td->sec
         - 730485LL * 86400;

    return OSSecondsToTicks(secs)
         + OSMillisecondsToTicks(td->msec)
         + OSMicrosecondsToTicks(td->usec);
}
