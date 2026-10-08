#include "revolution/types.h"
#include "revolution/os.h"

BOOL __PADDisableRecalibration(BOOL disable) {
    BOOL enabled;
    BOOL prev;
    u8 val;

    enabled = OSDisableInterrupts();
    val = *(volatile u8*)0x800030E3;
    *(volatile u8*)0x800030E3 = (u8)(val & ~0x40);
    prev = (val >> 6) & 1;
    if (disable) {
        *(volatile u8*)0x800030E3 |= 0x40;
    }
    OSRestoreInterrupts(enabled);
    return prev;
}
