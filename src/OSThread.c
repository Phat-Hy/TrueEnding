#include "revolution/os.h"

extern u8 _stack_addr[];
extern u8 _stack_end[];
extern void* __OSErrorTable[];
extern u32 __OSFpscrEnableBits;

static OSThread DefaultThread;
static OSThreadQueue RunQueue[32];
static OSContext IdleContext;

static volatile BOOL Reschedule;
static volatile BOOL RunQueueHint;
static volatile u32 RunQueueBits;

static void DefaultSwitchThreadCallback(OSThread* from, OSThread* to) {
}

static OSSwitchThreadCallback SwitchThreadCallback = DefaultSwitchThreadCallback;

#define __OSActiveThreadQueue (*(OSThreadQueue*)0x800000DC)
#define __OSCurrentThread     (*(OSThread**)0x800000E4)
#define __OSFPUContext        (*(OSContext**)0x800000D8)

static inline void OSClearStack(u8 val) {
    u32 sp = OSGetStackPointer();
    u32* p = (u32*)((u32)OSGetCurrentThread()->stackEnd + 4);
    if ((u32)p < sp) {
        memset(p, val, sp - (u32)p);
    }
}

#define OSInitThreadQueue(queue) ((queue)->head = (queue)->tail = NULL)

void __OSThreadInit(void) {
    OSThread* thread = &DefaultThread;
    OSPriority priority;

    thread->state = OS_THREAD_STATE_RUNNING;
    thread->attr = OS_THREAD_ATTR_DETACH;
    thread->base = 16;
    thread->priority = 16;
    thread->suspend = 0;
    thread->val = (void*)-1;
    thread->mutex = NULL;
    thread->queueJoin.head = thread->queueJoin.tail = NULL;
    thread->queueMutex.head = thread->queueMutex.tail = NULL;

    __OSFPUContext = &thread->context;
    OSClearContext(&thread->context);
    OSSetCurrentContext(&thread->context);
    thread->stackBase = _stack_addr;
    thread->stackEnd = (u32*)_stack_end;
    *(thread->stackEnd) = OS_STACK_MAGIC;
    SwitchThreadCallback(__OSCurrentThread, thread);
    __OSCurrentThread = thread;

    {
        u32* p;
        u32* sp = (u32*)OSGetStackPointer();
        for (p = __OSCurrentThread->stackEnd + 1; p < sp; ++p) {
            *p = 0;
        }
    }

    RunQueueBits = 0;
    RunQueueHint = FALSE;
    for (priority = 0; priority < 32; ++priority) {
        OSInitThreadQueue(&RunQueue[priority]);
    }

    OSInitThreadQueue(&__OSActiveThreadQueue);
    {
        OSThread* prev = __OSActiveThreadQueue.tail;
        if (prev == NULL) {
            __OSActiveThreadQueue.head = thread;
        } else {
            prev->linkActive.next = thread;
        }
        thread->linkActive.prev = prev;
        thread->linkActive.next = NULL;
        __OSActiveThreadQueue.tail = thread;
    }

    OSClearContext(&IdleContext);
    Reschedule = 0;
}

#undef OSInitThreadQueue

void OSInitThreadQueue(OSThreadQueue* queue) {
    queue->head = queue->tail = NULL;
}

OSThread* OSGetCurrentThread(void) {
    return *(OSThread**)0x800000E4;
}

BOOL OSIsThreadSuspended(OSThread* thread) {
    return (thread->suspend > 0) ? TRUE : FALSE;
}

BOOL OSIsThreadTerminated(OSThread* thread) {
    return (thread->state == OS_THREAD_STATE_MORIBUND || thread->state == OS_THREAD_STATE_DEAD) ? TRUE : FALSE;
}

s32 OSDisableScheduler(void) {
    BOOL enabled;
    s32 count;

    enabled = OSDisableInterrupts();
    count = Reschedule++;
    OSRestoreInterrupts(enabled);
    return count;
}

s32 OSEnableScheduler(void) {
    BOOL enabled;
    s32 count;

    enabled = OSDisableInterrupts();
    count = Reschedule--;
    OSRestoreInterrupts(enabled);
    return count;
}

#pragma dont_inline on
void UnsetRun(OSThread* thread) {
    OSThreadQueue* queue;
    OSThread* next;
    OSThread* prev;

    queue = thread->queue;
    next = thread->link.next;
    prev = thread->link.prev;

    if (!next) {
        queue->tail = prev;
    } else {
        next->link.prev = prev;
    }

    if (!prev) {
        queue->head = next;
    } else {
        prev->link.next = next;
    }

    if (queue->head == NULL) {
        RunQueueBits &= ~(1 << (31 - thread->priority));
    }

    thread->queue = NULL;
}
#pragma dont_inline reset

OSPriority __OSGetEffectivePriority(OSThread* thread) {
    OSPriority priority = thread->base;
    OSMutex* mutex;
    OSThread* head;

    for (mutex = thread->queueMutex.head; mutex; mutex = mutex->link.next) {
        head = mutex->queue.head;
        if (head && head->priority < priority) {
            priority = head->priority;
        }
    }

    return priority;
}

static inline OSPriority GetEffectivePriority(OSThread* thread) {
    OSThread* head;
    OSMutex* mutex;
    OSPriority priority = thread->base;

    for (mutex = thread->queueMutex.head; mutex; mutex = mutex->link.next) {
        head = mutex->queue.head;
        if (head && head->priority < priority) {
            priority = head->priority;
        }
    }

    return priority;
}

static inline void SetRun(OSThread* thread) {
    OSThread* tail;

    thread->queue = &RunQueue[thread->priority];
    tail = thread->queue->tail;
    if (!tail) {
        thread->queue->head = thread;
    } else {
        tail->link.next = thread;
    }
    thread->link.prev = tail;
    thread->link.next = NULL;
    thread->queue->tail = thread;

    RunQueueBits |= 1 << (31 - thread->priority);
    RunQueueHint = TRUE;
}

OSThread* SetPriority(OSThread* thread, OSPriority priority) {
    switch (thread->state) {
    case OS_THREAD_STATE_READY:
        UnsetRun(thread);
        thread->priority = priority;
        SetRun(thread);
        break;
    case OS_THREAD_STATE_WAITING:
        {
            OSThread* next = thread->link.next;
            OSThread* prev = thread->link.prev;
            if (!next) {
                thread->queue->tail = prev;
            } else {
                next->link.prev = prev;
            }
            if (!prev) {
                thread->queue->head = next;
            } else {
                prev->link.next = next;
            }
        }
        thread->priority = priority;
        {
            OSThread* t;
            for (t = thread->queue->head; t && t->priority <= thread->priority; t = t->link.next) {
            }
            if (!t) {
                OSThread* tail = thread->queue->tail;
                if (!tail) {
                    thread->queue->head = thread;
                } else {
                    tail->link.next = thread;
                }
                thread->link.prev = tail;
                thread->link.next = NULL;
                thread->queue->tail = thread;
            } else {
                OSThread* prev;
                thread->link.next = t;
                prev = t->link.prev;
                t->link.prev = thread;
                thread->link.prev = prev;
                if (!prev) {
                    thread->queue->head = thread;
                } else {
                    prev->link.next = thread;
                }
            }
        }
        if (thread->mutex) {
            return thread->mutex->thread;
        }
        break;
    case OS_THREAD_STATE_RUNNING:
        RunQueueHint = TRUE;
        thread->priority = priority;
        break;
    }
    return NULL;
}

void __OSPromoteThread(OSThread* thread, OSPriority priority) {
    do {
        if (thread->suspend > 0 || thread->priority <= priority) {
            break;
        }
        thread = SetPriority(thread, priority);
    } while (thread);
}

static OSThread* SelectThread(BOOL yield) {
    OSContext* context;
    OSThread* currentThread;
    OSThread* nextThread;
    OSPriority priority;

    if (Reschedule > 0) {
        return NULL;
    }

    context = OSGetCurrentContext();
    currentThread = __OSCurrentThread;
    if (context != (OSContext*)currentThread) {
        return NULL;
    }

    if (currentThread) {
        if (currentThread->state == OS_THREAD_STATE_RUNNING) {
            if (!yield) {
                priority = __cntlzw(RunQueueBits);
                if (currentThread->priority <= priority) {
                    return NULL;
                }
            }
            currentThread->state = OS_THREAD_STATE_READY;
            SetRun(currentThread);
        }
        if (!(currentThread->context.state & 2)) {
            if (OSSaveContext(&currentThread->context)) {
                return NULL;
            }
        }
    }

    if (RunQueueBits == 0) {
        SwitchThreadCallback(__OSCurrentThread, NULL);
        __OSCurrentThread = NULL;
        OSSetCurrentContext(&IdleContext);

        do {
            OSEnableInterrupts();
            while (RunQueueBits == 0) {
            }
            OSDisableInterrupts();
        } while (RunQueueBits == 0);

        OSClearContext(&IdleContext);
    }

    RunQueueHint = FALSE;
    priority = __cntlzw(RunQueueBits);
    nextThread = RunQueue[priority].head;

    {
        OSThread* next = nextThread->link.next;
        if (!next) {
            RunQueue[priority].tail = NULL;
        } else {
            next->link.prev = NULL;
        }
        RunQueue[priority].head = next;
        if (!next) {
            RunQueueBits &= ~(1 << (31 - priority));
        }
    }

    nextThread->queue = NULL;
    nextThread->state = OS_THREAD_STATE_RUNNING;
    SwitchThreadCallback(__OSCurrentThread, nextThread);
    __OSCurrentThread = nextThread;
    OSSetCurrentContext(&nextThread->context);
    OSLoadContext(&nextThread->context);
    return nextThread;
}

void __OSReschedule(void) {
    if (!RunQueueHint) {
        return;
    }
    SelectThread(FALSE);
}

BOOL OSCreateThread(OSThread* thread, void* (*func)(void*), void* param, void* stack, u32 stackSize, OSPriority priority, u16 attr) {
    BOOL enabled;
    u32 sp;

    if (priority < 0 || 31 < priority) {
        return FALSE;
    }

    thread->state = OS_THREAD_STATE_READY;
    thread->attr = attr & OS_THREAD_ATTR_DETACH;
    thread->base = priority;
    thread->priority = priority;
    thread->suspend = 1;
    thread->val = (void*)-1;
    thread->mutex = NULL;
    thread->queueJoin.head = thread->queueJoin.tail = NULL;
    thread->queueMutex.head = thread->queueMutex.tail = NULL;

    sp = (u32)stack & ~7;
    *(u32*)(sp - 8) = 0;
    *(u32*)(sp - 4) = 0;

    OSInitContext(&thread->context, (void*)func, (void*)(sp - 8));
    thread->context.lr = (u32)OSExitThread;
    thread->context.gpr[3] = (u32)param;
    thread->stackBase = stack;
    thread->stackEnd = (u32*)((u8*)stack - stackSize);
    *thread->stackEnd = OS_STACK_MAGIC;
    thread->error = NULL;
    thread->specific[0] = NULL;
    thread->specific[1] = NULL;

    enabled = OSDisableInterrupts();

    if (__OSErrorTable[16]) {
        int i;
        thread->context.srr1 |= 0x900;
        thread->context.state |= 1;
        thread->context.fpscr = (__OSFpscrEnableBits & 0xF8) | 4;
        for (i = 0; i < 32; ++i) {
            *((u32*)&thread->context.fpr[i] + 1) = (u32)-1;
            *(u32*)&thread->context.fpr[i] = (u32)-1;
            *((u32*)&thread->context.psf[i] + 1) = (u32)-1;
            *(u32*)&thread->context.psf[i] = (u32)-1;
        }
    }

    {
        OSThread* prev = __OSActiveThreadQueue.tail;
        if (prev == NULL) {
            __OSActiveThreadQueue.head = thread;
        } else {
            prev->linkActive.next = thread;
        }
        thread->linkActive.prev = prev;
        thread->linkActive.next = NULL;
        __OSActiveThreadQueue.tail = thread;
    }

    OSRestoreInterrupts(enabled);
    return TRUE;
}

void OSExitThread(void* val) {
    BOOL enabled = OSDisableInterrupts();
    OSThread* currentThread = OSGetCurrentThread();

    OSClearContext(&currentThread->context);

    if (currentThread->attr & OS_THREAD_ATTR_DETACH) {
        OSThread* next = currentThread->linkActive.next;
        OSThread* prev = currentThread->linkActive.prev;
        if (!next) {
            __OSActiveThreadQueue.tail = prev;
        } else {
            next->linkActive.prev = prev;
        }
        if (!prev) {
            __OSActiveThreadQueue.head = next;
        } else {
            prev->linkActive.next = next;
        }
        currentThread->state = OS_THREAD_STATE_DEAD;
    } else {
        currentThread->state = OS_THREAD_STATE_MORIBUND;
        currentThread->val = val;
    }

    __OSUnlockAllMutex(currentThread);
    OSWakeupThread(&currentThread->queueJoin);
    RunQueueHint = TRUE;
    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

void OSCancelThread(OSThread* thread) {
    BOOL enabled = OSDisableInterrupts();
    __OSCancelThreadAlarms(thread);

    switch (thread->state) {
    case OS_THREAD_STATE_READY:
        if (thread->suspend <= 0) {
            UnsetRun(thread);
        }
        break;
    case OS_THREAD_STATE_RUNNING:
        RunQueueHint = TRUE;
        break;
    case OS_THREAD_STATE_WAITING:
        {
            OSThread* next = thread->link.next;
            OSThread* prev = thread->link.prev;
            if (!next) {
                thread->queue->tail = prev;
            } else {
                next->link.prev = prev;
            }
            if (!prev) {
                thread->queue->head = next;
            } else {
                prev->link.next = next;
            }
        }
        thread->queue = NULL;
        if (thread->suspend <= 0 && thread->mutex) {
            OSPriority prio;
            OSThread* owner = thread->mutex->thread;
            do {
                if (owner->suspend > 0) {
                    break;
                }
                prio = GetEffectivePriority(owner);
                if (owner->priority == prio) {
                    break;
                }
            } while ((owner = SetPriority(owner, prio)));
        }
        break;
    default:
        OSRestoreInterrupts(enabled);
        return;
    }

    OSClearContext(&thread->context);

    if (thread->attr & OS_THREAD_ATTR_DETACH) {
        OSThread* next = thread->linkActive.next;
        OSThread* prev = thread->linkActive.prev;
        if (!next) {
            __OSActiveThreadQueue.tail = prev;
        } else {
            next->linkActive.prev = prev;
        }
        if (!prev) {
            __OSActiveThreadQueue.head = next;
        } else {
            prev->linkActive.next = next;
        }
        thread->state = OS_THREAD_STATE_DEAD;
    } else {
        thread->state = OS_THREAD_STATE_MORIBUND;
    }

    __OSUnlockAllMutex(thread);
    OSWakeupThread(&thread->queueJoin);
    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

BOOL OSJoinThread(OSThread* thread, void** val) {
    BOOL enabled = OSDisableInterrupts();

    if (!(thread->attr & OS_THREAD_ATTR_DETACH) &&
        thread->state != OS_THREAD_STATE_MORIBUND &&
        thread->queueJoin.head == NULL) {
        OSSleepThread(&thread->queueJoin);
        {
            BOOL found;
            if (thread->state == OS_THREAD_STATE_DEAD) {
                found = FALSE;
            } else {
                OSThread* t;
                for (t = __OSActiveThreadQueue.head; t; t = t->linkActive.next) {
                    if (thread == t) {
                        found = TRUE;
                        goto done;
                    }
                }
                found = FALSE;
            done:;
            }
            if (!found) {
                OSRestoreInterrupts(enabled);
                return FALSE;
            }
        }
    }

    if (thread->state == OS_THREAD_STATE_MORIBUND) {
        if (val) {
            *val = thread->val;
        }
        {
            OSThread* next = thread->linkActive.next;
            OSThread* prev = thread->linkActive.prev;
            if (!next) {
                __OSActiveThreadQueue.tail = prev;
            } else {
                next->linkActive.prev = prev;
            }
            if (!prev) {
                __OSActiveThreadQueue.head = next;
            } else {
                prev->linkActive.next = next;
            }
        }
        thread->state = OS_THREAD_STATE_DEAD;
        OSRestoreInterrupts(enabled);
        return TRUE;
    }

    OSRestoreInterrupts(enabled);
    return FALSE;
}

s32 OSResumeThread(OSThread* thread) {
    BOOL enabled;
    s32 suspend;
    OSPriority priority;

    enabled = OSDisableInterrupts();
    suspend = thread->suspend--;

    if (thread->suspend < 0) {
        thread->suspend = 0;
    } else if (thread->suspend == 0) {
        switch (thread->state) {
        case OS_THREAD_STATE_READY:
            priority = __OSGetEffectivePriority(thread);
            thread->priority = priority;
            SetRun(thread);
            break;
        case OS_THREAD_STATE_WAITING:
            {
                OSThread* next = thread->link.next;
                OSThread* prev = thread->link.prev;
                if (!next) {
                    thread->queue->tail = prev;
                } else {
                    next->link.prev = prev;
                }
                if (!prev) {
                    thread->queue->head = next;
                } else {
                    prev->link.next = next;
                }
            }
            priority = __OSGetEffectivePriority(thread);
            thread->priority = priority;
            {
                OSThread* t;
                for (t = thread->queue->head; t && t->priority <= thread->priority; t = t->link.next) {
                }
                if (!t) {
                    OSThread* tail = thread->queue->tail;
                    if (!tail) {
                        thread->queue->head = thread;
                    } else {
                        tail->link.next = thread;
                    }
                    thread->link.prev = tail;
                    thread->link.next = NULL;
                    thread->queue->tail = thread;
                } else {
                    OSThread* prev;
                    thread->link.next = t;
                    prev = t->link.prev;
                    t->link.prev = thread;
                    thread->link.prev = prev;
                    if (!prev) {
                        thread->queue->head = thread;
                    } else {
                        prev->link.next = thread;
                    }
                }
            }
            if (thread->mutex) {
                OSPriority prio;
                OSThread* owner = thread->mutex->thread;
                do {
                    if (owner->suspend > 0) {
                        break;
                    }
                    prio = GetEffectivePriority(owner);
                    if (owner->priority == prio) {
                        break;
                    }
                } while ((owner = SetPriority(owner, prio)));
            }
            break;
        }
        __OSReschedule();
    }

    OSRestoreInterrupts(enabled);
    return suspend;
}

s32 OSSuspendThread(OSThread* thread) {
    BOOL enabled = OSDisableInterrupts();
    s32 suspend = thread->suspend++;

    if (suspend == 0) {
        switch (thread->state) {
        case OS_THREAD_STATE_RUNNING:
            RunQueueHint = TRUE;
            thread->state = OS_THREAD_STATE_READY;
            break;
        case OS_THREAD_STATE_READY:
            UnsetRun(thread);
            break;
        case OS_THREAD_STATE_WAITING:
            {
                OSThread* next = thread->link.next;
                OSThread* prev = thread->link.prev;
                if (!next) {
                    thread->queue->tail = prev;
                } else {
                    next->link.prev = prev;
                }
                if (!prev) {
                    thread->queue->head = next;
                } else {
                    prev->link.next = next;
                }
            }
            thread->priority = 32;
            {
                OSThread* tail = thread->queue->tail;
                if (!tail) {
                    thread->queue->head = thread;
                } else {
                    tail->link.next = thread;
                }
                thread->link.prev = tail;
                thread->link.next = NULL;
                thread->queue->tail = thread;
            }
            if (thread->mutex) {
                OSPriority prio;
                OSThread* owner = thread->mutex->thread;
                do {
                    if (owner->suspend > 0) {
                        break;
                    }
                    prio = GetEffectivePriority(owner);
                    if (owner->priority == prio) {
                        break;
                    }
                } while ((owner = SetPriority(owner, prio)));
            }
            break;
        }
        __OSReschedule();
    }

    OSRestoreInterrupts(enabled);
    return suspend;
}

void OSSleepThread(OSThreadQueue* queue) {
    BOOL enabled = OSDisableInterrupts();
    OSThread* currentThread = OSGetCurrentThread();

    currentThread->state = OS_THREAD_STATE_WAITING;
    currentThread->queue = queue;

    {
        OSThread* t;
        for (t = queue->head; t && t->priority <= currentThread->priority; t = t->link.next) {
        }
        if (!t) {
            OSThread* tail = queue->tail;
            if (!tail) {
                queue->head = currentThread;
            } else {
                tail->link.next = currentThread;
            }
            currentThread->link.prev = tail;
            currentThread->link.next = NULL;
            queue->tail = currentThread;
        } else {
            OSThread* prev;
            currentThread->link.next = t;
            prev = t->link.prev;
            t->link.prev = currentThread;
            currentThread->link.prev = prev;
            if (!prev) {
                queue->head = currentThread;
            } else {
                prev->link.next = currentThread;
            }
        }
    }

    RunQueueHint = TRUE;
    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

void OSWakeupThread(OSThreadQueue* queue) {
    BOOL enabled;
    OSThread* thread;
    OSThread* next;

    enabled = OSDisableInterrupts();

    while (queue->head) {
        thread = queue->head;
        next = thread->link.next;
        if (!next) {
            queue->tail = NULL;
        } else {
            next->link.prev = NULL;
        }
        queue->head = next;

        thread->state = OS_THREAD_STATE_READY;
        if (thread->suspend <= 0) {
            SetRun(thread);
        }
    }

    __OSReschedule();
    OSRestoreInterrupts(enabled);
}

void SleepAlarmHandler(OSAlarm* alarm, OSContext* context) {
    OSThread* thread = (OSThread*)OSGetAlarmUserData(alarm);
    BOOL found;

    if (thread->state == OS_THREAD_STATE_DEAD) {
        found = FALSE;
    } else {
        OSThread* t;
        for (t = __OSActiveThreadQueue.head; t; t = t->linkActive.next) {
            if (thread == t) {
                found = TRUE;
                goto done;
            }
        }
        found = FALSE;
    done:;
    }

    if (found) {
        OSResumeThread((OSThread*)OSGetAlarmUserData(alarm));
    }
}

void OSSleepTicks(OSTime ticks) {
    BOOL enabled = OSDisableInterrupts();
    OSThread* thread = OSGetCurrentThread();

    if (!thread) {
        OSRestoreInterrupts(enabled);
        return;
    }

    {
        OSAlarm alarm;
        OSCreateAlarm(&alarm);
        OSSetAlarmUserData(&alarm, thread);
        OSSetAlarm(&alarm, ticks, SleepAlarmHandler);
        OSSuspendThread(thread);
        OSCancelAlarm(&alarm);
    }

    OSRestoreInterrupts(enabled);
}

