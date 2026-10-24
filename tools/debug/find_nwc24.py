import struct

dol = open('orig/main.dol', 'rb').read()
targets = {0x806A1564: 'NWC24SuspendScheduler', 0x806A20A4: 'NWC24iSynchronizeRtcCounter', 0x806A22AC: 'NWC24iPrepareShutdown'}
for i in range(0, len(dol) - 4, 4):
    w = struct.unpack('>I', dol[i:i+4])[0]
    if (w & 0xFC000003) == 0x48000001: # bl
        disp = w & 0x03FFFFFC
        if disp & 0x02000000:
            disp -= 0x04000000
        pc = 0x800081C0 + (i - 0x2820)
        target = pc + disp
        if target in targets:
            print(f"Caller of {targets[target]} ({hex(target)}) at {hex(pc)}")

# Also look for references to IOS_Open or /dev/net
# Let's find callers of 0x8061C6B0 (IOS_Open)
for i in range(0, len(dol) - 4, 4):
    w = struct.unpack('>I', dol[i:i+4])[0]
    if (w & 0xFC000003) == 0x48000001:
        disp = w & 0x03FFFFFC
        if disp & 0x02000000:
            disp -= 0x04000000
        pc = 0x800081C0 + (i - 0x2820)
        target = pc + disp
        if target == 0x8061C6B0:
            # check previous instructions for /dev/net
            print(f"IOS_Open caller at {hex(pc)}")
