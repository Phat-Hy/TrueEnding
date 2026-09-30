#include "revolution/os.h"

typedef struct NANDFileInfo {
    u8 _dummy[0x8c];
} NANDFileInfo;

extern const char lbl_807A9A10[];
extern u32 lbl_807CC320[8];

extern s32 fn_8061F8D0(const char* path, NANDFileInfo* info, u8 accType);
extern s32 fn_8061E850(NANDFileInfo* info, const void* buf, u32 length);
extern s32 fn_8061E760(NANDFileInfo* info, void* buf, u32 length);
extern s32 fn_8061FB70(NANDFileInfo* info);
extern s32 fn_8061E470(const char* path);

void __OSDefaultResetCallback(void) {
}

void __OSDefaultPowerCallback(void) {
}

static inline u32 Checksum(const u32* buf) {
    u32 sum = 0;
    int i;
    for (i = 1; i < 8; i++) {
        sum += buf[i];
    }
    return sum;
}

BOOL __OSWriteStateFlags(const void* flags) {
    NANDFileInfo info;

    memcpy(lbl_807CC320, flags, 0x20);
    lbl_807CC320[0] = Checksum(lbl_807CC320);

    if (fn_8061F8D0(lbl_807A9A10, &info, 2) == 0) {
        if ((u32)fn_8061E850(&info, lbl_807CC320, 0x20) == 0x20) {
            goto ok;
        }
        fn_8061FB70(&info);
        return 0;
ok:
        if (fn_8061FB70(&info) == 0) {
            goto success;
        }
        return 0;
success:
        return 1;
    }

    return 0;
}

BOOL __OSReadStateFlags(void* flags) {
    NANDFileInfo info;
    u32 len;

    if (fn_8061F8D0(lbl_807A9A10, &info, 1) != 0) {
        memset(flags, 0, 0x20);
        return FALSE;
    }

    len = fn_8061E760(&info, lbl_807CC320, 0x20);
    fn_8061FB70(&info);

    if (len != 0x20) {
        fn_8061E470(lbl_807A9A10);
        memset(flags, 0, 0x20);
        return FALSE;
    }

    if (lbl_807CC320[0] != lbl_807CC320[1] + lbl_807CC320[2] + lbl_807CC320[3] +
                           lbl_807CC320[4] + lbl_807CC320[5] + lbl_807CC320[6] +
                           lbl_807CC320[7]) {
        memset(flags, 0, 0x20);
        return FALSE;
    }

    memcpy(flags, lbl_807CC320, 0x20);
    return TRUE;
}