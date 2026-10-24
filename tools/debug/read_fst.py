import struct

with open('orig/DATA/sys/fst.bin', 'rb') as f:
    d = f.read()

num_entries = struct.unpack('>I', d[8:12])[0]
str_tbl = num_entries * 12

for i in range(num_entries):
    type_b, hi, lo, file_off, file_len = struct.unpack('>BBHII', d[i*12:(i+1)*12])
    if file_len == 392104:
        name_off = (hi << 16) | lo
        name_end = d.find(b'\x00', str_tbl + name_off)
        name = d[str_tbl + name_off:name_end].decode('ascii', errors='ignore')
        print(f"Match Entry {i:3d}: len={file_len:8d} name='{name}'")
