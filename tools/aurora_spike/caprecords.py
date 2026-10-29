"""List the record stream of a .tlscap: frames, FIFO chunks and COPY records in file order.

AP-AM 6h suspected copies tagged `frame 0`; this prints the exact order so the claim is
checked instead of argued.
"""
import struct
import sys

path = sys.argv[1]
with open(path, 'rb') as f:
    data = f.read()

assert data[:8] == b'TLSGXCP2', data[:8]
frm, to = struct.unpack_from('<II', data, 8)
print(f'capture {path}: frames {frm}..{to}')
pos = 16
cur = None
copy_no = 0
fifo = 0
records = 0
while pos + 5 <= len(data):
    tag = data[pos]
    (ln,) = struct.unpack_from('<I', data, pos + 1)
    body = pos + 5
    if tag == 1:  # FRAME_BEGIN
        (fr,) = struct.unpack_from('<I', data, body)
        cur = fr
        print(f'  @{pos:10d} FRAME_BEGIN {fr}')
    elif tag == 2:  # FRAME_END
        (fr,) = struct.unpack_from('<I', data, body)
        print(f'  @{pos:10d} FRAME_END   {fr}')
        cur = None
    elif tag == 3:  # FIFO
        fifo += ln
        records += 1
    elif tag == 4:  # MEM
        base, size = struct.unpack_from('<II', data, body)
        print(f'  @{pos:10d} MEM 0x{base:08X} {size}')
    elif tag == 5:  # COPY
        dst, w, h, fmt, vmark, size = struct.unpack_from('<IIIIII', data, body)
        print(f'  @{pos:10d} COPY #{copy_no:<3d} under-frame={cur} dst=0x{dst:08X} {w}x{h} fmt={fmt} '
              f'vmark={vmark} {size} bytes')
        copy_no += 1
    elif tag == 6:  # NOTE
        print(f'  @{pos:10d} NOTE {data[body:body+ln]!r}')
    pos = body + ln
print(f'total FIFO {fifo} bytes in {records} chunk(s), {copy_no} copy record(s)')
