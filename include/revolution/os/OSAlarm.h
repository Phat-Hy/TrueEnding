#ifndef REVOLUTION_OS_OSALARM_H
#define REVOLUTION_OS_OSALARM_H

#include "types.h"
#include "revolution/os/OSContext.h"
#include "revolution/os/OSTime.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef void (*OSAlarmHandler)(OSAlarm* alarm, OSContext* context);

struct OSAlarm {
    OSAlarmHandler handler;
    u32 tag;
    OSTime fire;
    OSAlarm* next;
    OSAlarm* prev;
    OSTime period;
    OSTime start;
    void* userData;
};

void OSCreateAlarm(OSAlarm* alarm);
void OSSetAlarm(OSAlarm* alarm, OSTime tick, OSAlarmHandler handler);
void OSCancelAlarm(OSAlarm* alarm);
void* OSGetAlarmUserData(const OSAlarm* alarm);
void OSSetAlarmUserData(OSAlarm* alarm, void* userData);
void __OSCancelThreadAlarms(OSThread* thread);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSALARM_H
