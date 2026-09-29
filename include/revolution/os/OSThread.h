#ifndef REVOLUTION_OS_OSTHREAD_H
#define REVOLUTION_OS_OSTHREAD_H

#include "types.h"
#include "revolution/os/OSContext.h"
#include "revolution/os/OSTime.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OSAlarm OSAlarm;

#define OS_THREAD_STATE_DEAD      0
#define OS_THREAD_STATE_READY     1
#define OS_THREAD_STATE_RUNNING   2
#define OS_THREAD_STATE_WAITING   4
#define OS_THREAD_STATE_MORIBUND  8

#define OS_THREAD_ATTR_DETACH     1

#define OS_PRIORITY_MIN           0
#define OS_PRIORITY_MAX           31

#define OS_STACK_MAGIC            0xDEADBABE

typedef s32 OSPriority;

typedef struct OSThread OSThread;
typedef struct OSThreadQueue OSThreadQueue;
typedef struct OSMutex OSMutex;
typedef struct OSMutexQueue OSMutexQueue;

typedef struct OSThreadLink {
    OSThread* next;
    OSThread* prev;
} OSThreadLink;

struct OSThreadQueue {
    OSThread* head;
    OSThread* tail;
};

struct OSMutexQueue {
    OSMutex* head;
    OSMutex* tail;
};

typedef struct OSMutexLink {
    OSMutex* next;
    OSMutex* prev;
} OSMutexLink;

struct OSMutex {
    OSThreadQueue queue;
    OSThread* thread;
    s32 count;
    OSMutexLink link;
};

void __OSUnlockAllMutex(OSThread* thread);

struct OSThread {
    OSContext context;          // 0x000
    u16 state;                  // 0x2C8
    u16 attr;                   // 0x2CA
    s32 suspend;                // 0x2CC
    OSPriority priority;        // 0x2D0
    OSPriority base;            // 0x2D4
    void* val;                  // 0x2D8
    OSThreadQueue* queue;       // 0x2DC
    OSThreadLink link;          // 0x2E0
    OSThreadQueue queueJoin;    // 0x2E8
    OSMutex* mutex;             // 0x2F0
    OSMutexQueue queueMutex;    // 0x2F4
    OSThreadLink linkActive;    // 0x2FC
    u8* stackBase;              // 0x304
    u32* stackEnd;              // 0x308
    u32* error;                 // 0x30C
    void* specific[2];          // 0x310
};

typedef void (*OSSwitchThreadCallback)(OSThread* from, OSThread* to);

void __OSThreadInit(void);
void OSInitThreadQueue(OSThreadQueue* queue);
OSThread* OSGetCurrentThread(void);
BOOL OSIsThreadSuspended(OSThread* thread);
BOOL OSIsThreadTerminated(OSThread* thread);
s32 OSDisableScheduler(void);
s32 OSEnableScheduler(void);
void OSYieldThread(void);
BOOL OSCreateThread(OSThread* thread, void* (*func)(void*), void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr);
void OSExitThread(void* val);
void OSCancelThread(OSThread* thread);
s32 OSResumeThread(OSThread* thread);
s32 OSSuspendThread(OSThread* thread);
void OSSleepThread(OSThreadQueue* queue);
void OSWakeupThread(OSThreadQueue* queue);
BOOL OSJoinThread(OSThread* thread, void** val);
void OSSleepTicks(OSTime ticks);
void __OSReschedule(void);
void __OSPromoteThread(OSThread* thread, OSPriority priority);

#ifdef __cplusplus
}
#endif

#endif // REVOLUTION_OS_OSTHREAD_H
