#include "revolution/os.h"
#include "revolution/os/OSAlarm.h"

extern void PPCMtdec(u32 val);
extern BOOL fn_805FF4B0(OSAlarm* alarm);

static struct {
    OSAlarm* head;
    OSAlarm* tail;
} AlarmQueue;

static BOOL fn_805EC7E0(BOOL final);

static OSShutdownFunctionInfo ShutdownFunctionInfo = {
    fn_805EC7E0,
    0xFFFFFFFF,
    NULL,
    NULL
};

static asm void DecrementerExceptionHandler(register __OSException exception, register OSContext* context);

void __OSInitAlarm(void) {
    if (__OSGetExceptionHandler(__OS_EXCEPTION_DECREMENTER) != DecrementerExceptionHandler) {
        AlarmQueue.head = AlarmQueue.tail = NULL;
        __OSSetExceptionHandler(__OS_EXCEPTION_DECREMENTER, DecrementerExceptionHandler);
        OSRegisterShutdownFunction(&ShutdownFunctionInfo);
    }
}

void OSCreateAlarm(OSAlarm* alarm) {
    alarm->handler = NULL;
    alarm->tag = 0;
}

static inline void SetTimer(OSAlarm* alarm) {
    OSTime delta = alarm->fire - __OSGetSystemTime();
    if (delta < 0) {
        PPCMtdec(0);
    } else if (delta < 0x80000000LL) {
        PPCMtdec((u32)delta);
    } else {
        PPCMtdec(0x7FFFFFFF);
    }
}

static void InsertAlarm(OSAlarm* alarm, OSTime fire, OSAlarmHandler handler) {
    OSAlarm* next;
    OSAlarm* prev;

    if (alarm->period > 0) {
        OSTime time = __OSGetSystemTime();
        fire = alarm->start;
        if (alarm->start < time) {
            fire += (time - alarm->start) / alarm->period * alarm->period + alarm->period;
        }
    }

    alarm->handler = handler;
    alarm->fire = fire;

    for (next = AlarmQueue.head; next; next = next->next) {
        if (next->fire <= fire) {
            continue;
        }
        alarm->prev = next->prev;
        next->prev = alarm;
        alarm->next = next;
        if (alarm->prev) {
            alarm->prev->next = alarm;
        } else {
            AlarmQueue.head = alarm;
            SetTimer(alarm);
        }
        return;
    }

    alarm->next = NULL;
    prev = AlarmQueue.tail;
    AlarmQueue.tail = alarm;
    alarm->prev = prev;
    if (prev) {
        prev->next = alarm;
    } else {
        AlarmQueue.head = AlarmQueue.tail = alarm;
        SetTimer(alarm);
    }
}

void OSSetAlarm(OSAlarm* alarm, OSTime tick, OSAlarmHandler handler) {
    BOOL enabled = OSDisableInterrupts();
    alarm->period = 0;
    InsertAlarm(alarm, __OSGetSystemTime() + tick, handler);
    OSRestoreInterrupts(enabled);
}

void fn_805EC3B0(OSAlarm* alarm, OSTime start, OSTime period, OSAlarmHandler handler) {
    BOOL enabled = OSDisableInterrupts();
    alarm->period = period;
    alarm->start = __OSTimeToSystemTime(start);
    InsertAlarm(alarm, 0, handler);
    OSRestoreInterrupts(enabled);
}

void OSCancelAlarm(OSAlarm* alarm) {
    OSAlarm* next;
    BOOL enabled;

    enabled = OSDisableInterrupts();
    if (alarm->handler == NULL) {
        OSRestoreInterrupts(enabled);
        return;
    }

    next = alarm->next;
    if (next == NULL) {
        AlarmQueue.tail = alarm->prev;
    } else {
        next->prev = alarm->prev;
    }

    if (alarm->prev) {
        alarm->prev->next = next;
    } else {
        AlarmQueue.head = next;
        if (next) {
            SetTimer(next);
        }
    }

    alarm->handler = NULL;
    OSRestoreInterrupts(enabled);
}

static void DecrementerExceptionCallback(__OSException exception, OSContext* context) {
    OSAlarm* alarm;
    OSAlarmHandler handler;
    OSTime time;
    OSContext exceptionContext;

    time = __OSGetSystemTime();
    alarm = AlarmQueue.head;
    if (alarm == NULL) {
        OSLoadContext(context);
    }
    if (time < alarm->fire) {
        SetTimer(alarm);
        OSLoadContext(context);
    }

    AlarmQueue.head = alarm->next;
    if (AlarmQueue.head == NULL) {
        AlarmQueue.tail = NULL;
    } else {
        AlarmQueue.head->prev = NULL;
    }

    handler = alarm->handler;
    alarm->handler = NULL;

    if (alarm->period > 0) {
        InsertAlarm(alarm, 0, handler);
    }

    if (AlarmQueue.head) {
        SetTimer(AlarmQueue.head);
    }

    OSDisableScheduler();
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(&exceptionContext);
    handler(alarm, context);
    OSClearContext(&exceptionContext);
    OSSetCurrentContext(context);
    OSEnableScheduler();
    __OSReschedule();
    OSLoadContext(context);
}

static asm void DecrementerExceptionHandler(register __OSException exception, register OSContext* context) {
    nofralloc
    stw r0, 0(context)
    stw r1, 4(context)
    stw r2, 8(context)
    stmw r6, 24(context)
    mfspr r0, GQR1
    stw r0, 0x1a8(context)
    mfspr r0, GQR2
    stw r0, 0x1ac(context)
    mfspr r0, GQR3
    stw r0, 0x1b0(context)
    mfspr r0, GQR4
    stw r0, 0x1b4(context)
    mfspr r0, GQR5
    stw r0, 0x1b8(context)
    mfspr r0, GQR6
    stw r0, 0x1bc(context)
    mfspr r0, GQR7
    stw r0, 0x1c0(context)
    stwu r1, -8(r1)
    b DecrementerExceptionCallback
}

BOOL fn_805EC7E0(BOOL final) {
    OSAlarm* alarm;
    OSAlarm* next;

    if (final) {
        alarm = AlarmQueue.head;
        next = alarm ? alarm->next : NULL;
        while (alarm) {
            if (!fn_805FF4B0(alarm)) {
                OSCancelAlarm(alarm);
            }
            alarm = next;
            next = next ? next->next : NULL;
        }
    }
    return TRUE;
}

void fn_805EC870(OSAlarm* alarm, void* data) {
    alarm->userData = data;
}

void* OSGetAlarmUserData(const OSAlarm* alarm) {
    return alarm->userData;
}

void OSSetAlarmUserData(OSAlarm* alarm, void* userData) {
    alarm->userData = userData;
    alarm->tag = 0xFFFFFFFF;
}

void __OSCancelThreadAlarms(OSThread* thread) {
    BOOL enabled;
    OSAlarm* alarm;
    OSAlarm* next;

    enabled = OSDisableInterrupts();
    alarm = AlarmQueue.head;
    next = alarm ? alarm->next : NULL;
    while (alarm) {
        if (alarm->tag == 0xFFFFFFFF && alarm->userData == thread) {
            OSCancelAlarm(alarm);
        }
        alarm = next;
        next = next ? next->next : NULL;
    }
    OSRestoreInterrupts(enabled);
}
