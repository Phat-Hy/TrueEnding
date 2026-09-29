.include "macros.inc"
.file "auto_07_807BADF8_data"

# 0x807BADF8..0x807C6684 | size: 0xB88C
.data
.balign 8

# .data:0x0 | 0x807BADF8 | size: 0x1D
.obj "@stringBase0_807BADF8", global
	.string "MetroTRK for Revolution v0.4"
.endobj "@stringBase0_807BADF8"

# .data:0x1D | 0x807BAE15 | size: 0x3
.obj gap_07_807BAE15_data, global
.hidden gap_07_807BAE15_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BAE15_data

# .data:0x20 | 0x807BAE18 | size: 0x48
.obj lbl_807BAE18, global
	.4byte 0x4D657472
	.4byte 0x6F54524B
	.4byte 0x202D2062
	.4byte 0x61642072
	.4byte 0x65706C79
	.4byte 0x2073697A
	.4byte 0x6520256C
	.4byte 0x640A004D
	.4byte 0x6574726F
	.4byte 0x54524B20
	.4byte 0x2D206661
	.4byte 0x696C6564
	.4byte 0x20696E20
	.4byte 0x52657175
	.4byte 0x65737453
	.4byte 0x656E640A
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BAE18

# .data:0x68 | 0x807BAE60 | size: 0x28
.obj lbl_807BAE60, global
	.string "MetroTRK - TRK_WriteUARTN returned %ld\n"
.endobj lbl_807BAE60

# .data:0x90 | 0x807BAE88 | size: 0x28
.obj lbl_807BAE88, global
	.string "MetroTRK - ERROR : No buffer available\n"
.endobj lbl_807BAE88

# .data:0xB8 | 0x807BAEB0 | size: 0x1C
.obj jumptable_807BAEB0, global
	.4byte fn_80677854+0x198
	.4byte fn_80677854+0x1B8
	.4byte fn_80677854+0x190
	.4byte fn_80677854+0x1B8
	.4byte fn_80677854+0x1A0
	.4byte fn_80677854+0x1A8
	.4byte fn_80677854+0x1B0
.endobj jumptable_807BAEB0

# .data:0xD4 | 0x807BAECC | size: 0x1C
.obj jumptable_807BAECC, global
	.4byte fn_80677A88+0x174
	.4byte fn_80677A88+0x194
	.4byte fn_80677A88+0x16C
	.4byte fn_80677A88+0x194
	.4byte fn_80677A88+0x17C
	.4byte fn_80677A88+0x184
	.4byte fn_80677A88+0x18C
.endobj jumptable_807BAECC

# .data:0xF0 | 0x807BAEE8 | size: 0x30
.obj lbl_807BAEE8, global
	.4byte 0x0A4D6574
	.4byte 0x726F5452
	.4byte 0x4B204F70
	.4byte 0x74696F6E
	.4byte 0x203A2053
	.4byte 0x65726961
	.4byte 0x6C494F20
	.4byte 0x2D200045
	.4byte 0x6E61626C
	.4byte 0x650A0044
	.4byte 0x69736162
	.4byte 0x6C650A00
.endobj lbl_807BAEE8

# .data:0x120 | 0x807BAF18 | size: 0x10
.obj gTRKExceptionStatus_807BAF18, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x01000000
.endobj gTRKExceptionStatus_807BAF18

# .data:0x130 | 0x807BAF28 | size: 0x140
.obj __files, global
	.4byte 0x00000000
	.4byte 0x0A800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte lbl_808326A0
	.4byte 0x00000100
	.4byte lbl_808326A0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80678600
	.4byte fn_80686DD4
	.4byte fn_806786D0
	.4byte 0x00000000
	.rel __files, .L_807BAF78
.L_807BAF78:
	.4byte 0x00000001
	.4byte 0x12800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte lbl_808325A0
	.4byte 0x00000100
	.4byte lbl_808325A0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80678600
	.4byte fn_80686DD4
	.4byte fn_806786D0
	.4byte 0x00000000
	.rel __files, .L_807BAFC8
.L_807BAFC8:
	.4byte 0x00000002
	.4byte 0x10800000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte lbl_808324A0
	.4byte 0x00000100
	.4byte lbl_808324A0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80678600
	.4byte fn_80686DD4
	.4byte fn_806786D0
	.4byte 0x00000000
	.rel __files, .L_807BB018
.L_807BB018:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj __files

# .data:0x270 | 0x807BB068 | size: 0x124
.obj jumptable_807BB068, global
	.4byte fn_8067BA50+0x40
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x54
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x6C
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x84
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x234
	.4byte fn_8067BA50+0x9C
	.4byte fn_8067BA50+0xB4
	.4byte fn_8067BA50+0xCC
	.4byte fn_8067BA50+0xE4
	.4byte fn_8067BA50+0xFC
	.4byte fn_8067BA50+0x114
	.4byte fn_8067BA50+0x12C
	.4byte fn_8067BA50+0x144
	.4byte fn_8067BA50+0x15C
	.4byte fn_8067BA50+0x174
	.4byte fn_8067BA50+0x18C
	.4byte fn_8067BA50+0x1A4
	.4byte fn_8067BA50+0x1BC
	.4byte fn_8067BA50+0x1D4
	.4byte fn_8067BA50+0x1EC
	.4byte fn_8067BA50+0x204
	.4byte fn_8067BA50+0x21C
.endobj jumptable_807BB068

# .data:0x394 | 0x807BB18C | size: 0x4
.obj gap_07_807BB18C_data, global
.hidden gap_07_807BB18C_data
	.4byte 0x00000000
.endobj gap_07_807BB18C_data

# .data:0x398 | 0x807BB190 | size: 0x40
.obj lbl_807BB190, global
	.4byte 0x40240000
	.4byte 0x00000000
	.4byte 0x40590000
	.4byte 0x00000000
	.4byte 0x408F4000
	.4byte 0x00000000
	.4byte 0x40C38800
	.4byte 0x00000000
	.4byte 0x40F86A00
	.4byte 0x00000000
	.4byte 0x412E8480
	.4byte 0x00000000
	.4byte 0x416312D0
	.4byte 0x00000000
	.4byte 0x4197D784
	.4byte 0x00000000
.endobj lbl_807BB190

# .data:0x3D8 | 0x807BB1D0 | size: 0x38
.obj lbl_807BB1D0, global
	.4byte lbl_80888A98
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
	.4byte lbl_80888A9C
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
.endobj lbl_807BB1D0

# .data:0x410 | 0x807BB208 | size: 0x28
.obj lbl_807BB208, global
	.4byte 0x43000000
	.4byte 0x00000000
	.4byte lbl_80765338
	.4byte lbl_80765638
	.4byte lbl_80765538
	.4byte lbl_807658A0
	.4byte lbl_80765CA0
	.4byte lbl_80765AA0
	.4byte fn_8067DF38
	.4byte fn_8067DF84
.endobj lbl_807BB208

# .data:0x438 | 0x807BB230 | size: 0xC0
.obj lbl_807BB230, global
	.4byte 0x00010002
	.4byte 0x00030004
	.4byte 0x00050006
	.4byte 0x00070008
	.4byte 0x0009000A
	.4byte 0x000B000C
	.4byte 0x000D000E
	.4byte 0x000F0010
	.4byte 0x00210022
	.4byte 0x00230024
	.4byte 0x00250026
	.4byte 0x00270028
	.4byte 0x0029002A
	.4byte 0x00110012
	.4byte 0x00130014
	.4byte 0x00150016
	.4byte 0x0017002B
	.4byte 0x002D002F
	.4byte 0x00310033
	.4byte 0x00350037
	.4byte 0x0039003B
	.4byte 0x003D003F
	.4byte 0x00410043
	.4byte 0x00450047
	.4byte 0x0049004B
	.4byte 0x004D004F
	.4byte 0x00510053
	.4byte 0x00550057
	.4byte 0x0059005B
	.4byte 0x005D0018
	.4byte 0x0019001A
	.4byte 0x001B001C
	.4byte 0x0000002C
	.4byte 0x002E0030
	.4byte 0x00320034
	.4byte 0x00360038
	.4byte 0x003A003C
	.4byte 0x003E0040
	.4byte 0x00420044
	.4byte 0x00460048
	.4byte 0x004A004C
	.4byte 0x004E0050
	.4byte 0x00520054
	.4byte 0x00560058
	.4byte 0x005A005C
	.4byte 0x005E001D
	.4byte 0x001E001F
	.4byte 0x00200000
.endobj lbl_807BB230

# .data:0x4F8 | 0x807BB2F0 | size: 0x1C
.obj lbl_807BB2F0, global
	.4byte 0x43000000
	.4byte 0x00000000
	.4byte 0x00000020
	.4byte 0x0000006E
	.4byte 0x00000000
	.4byte lbl_807BB230
	.4byte 0x00000000
.endobj lbl_807BB2F0

# .data:0x514 | 0x807BB30C | size: 0x34
.obj lbl_807BB30C, global
	.4byte 0x43000000
	.4byte 0x00000000
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
	.4byte lbl_80888A9C
	.4byte 0x7F7F7F7F
	.4byte 0x7F7F7F00
.endobj lbl_807BB30C

# .data:0x548 | 0x807BB340 | size: 0x18
.obj lbl_807BB340, global
	.4byte 0x43000000
	.4byte 0x00000000
	.4byte lbl_80888A98
	.4byte lbl_80888A9C
	.4byte lbl_80888A9C
	.4byte 0x00000000
.endobj lbl_807BB340

# .data:0x560 | 0x807BB358 | size: 0x28
.obj lbl_807BB358, global
	.4byte 0x43000000
	.4byte 0x00000000
	.4byte lbl_80888AA0
	.4byte lbl_80765738
	.4byte lbl_80765748
	.4byte lbl_80765754
	.4byte lbl_80888AA8
	.4byte lbl_80765760
	.4byte lbl_807657B8
	.4byte lbl_80888A9C
.endobj lbl_807BB358

# .data:0x588 | 0x807BB380 | size: 0x48
.obj lbl_807BB380, global
	.4byte 0x00000000
	.4byte 0x43000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte lbl_807BB2F0
	.4byte lbl_807BB208
	.4byte lbl_807BB30C
	.4byte lbl_807BB340
	.4byte lbl_807BB358
.endobj lbl_807BB380

# .data:0x5D0 | 0x807BB3C8 | size: 0xE0
.obj jumptable_807BB3C8, global
	.4byte parse_format_8067E5FC+0x424
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x484
	.4byte parse_format_8067E5FC+0x3DC
	.4byte parse_format_8067E5FC+0x470
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x394
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x424
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x4F8
	.4byte parse_format_8067E5FC+0x394
	.4byte parse_format_8067E5FC+0x484
	.4byte parse_format_8067E5FC+0x3DC
	.4byte parse_format_8067E5FC+0x470
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x394
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x55C
	.4byte parse_format_8067E5FC+0x394
	.4byte parse_format_8067E5FC+0x4D4
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x530
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x394
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x574
	.4byte parse_format_8067E5FC+0x394
.endobj jumptable_807BB3C8

# .data:0x6B0 | 0x807BB4A8 | size: 0x150
.obj "@2934_807BB4A8", global
	.4byte __pformatter_8067FD34+0x698
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x42C
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x3BC
	.4byte __pformatter_8067FD34+0x3BC
	.4byte __pformatter_8067FD34+0x3BC
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x260
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x42C
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x678
	.4byte __pformatter_8067FD34+0x104
	.4byte __pformatter_8067FD34+0x3BC
	.4byte __pformatter_8067FD34+0x3BC
	.4byte __pformatter_8067FD34+0x3BC
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x104
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x5C0
	.4byte __pformatter_8067FD34+0x260
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x49C
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x260
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x6A8
	.4byte __pformatter_8067FD34+0x260
.endobj "@2934_807BB4A8"

# .data:0x800 | 0x807BB5F8 | size: 0xE0
.obj jumptable_807BB5F8, global
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x2D8
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x430
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x34C
	.4byte fn_80680D20+0x2D8
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x2F0
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x2D8
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x630
	.4byte fn_80680D20+0x2D8
	.4byte fn_80680D20+0x338
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x378
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x2D8
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x628
	.4byte fn_80680D20+0x2D8
.endobj jumptable_807BB5F8

# .data:0x8E0 | 0x807BB6D8 | size: 0x20
.obj jumptable_807BB6D8, global
	.4byte fn_806813B4+0x56C
	.4byte fn_806813B4+0x574
	.4byte fn_806813B4+0x57C
	.4byte fn_806813B4+0x584
	.4byte fn_806813B4+0x58C
	.4byte fn_806813B4+0x5A0
	.4byte fn_806813B4+0x5A8
	.4byte fn_806813B4+0x5B0
.endobj jumptable_807BB6D8

# .data:0x900 | 0x807BB6F8 | size: 0x20
.obj jumptable_807BB6F8, global
	.4byte fn_806813B4+0x3D4
	.4byte fn_806813B4+0x3DC
	.4byte fn_806813B4+0x3E4
	.4byte fn_806813B4+0x3EC
	.4byte fn_806813B4+0x3F4
	.4byte fn_806813B4+0x408
	.4byte fn_806813B4+0x410
	.4byte fn_806813B4+0x418
.endobj jumptable_807BB6F8

# .data:0x920 | 0x807BB718 | size: 0x150
.obj jumptable_807BB718, global
	.4byte fn_806813B4+0x828
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x44C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x974
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x67C
	.4byte fn_806813B4+0x288
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0x5D4
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x290
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xBDC
	.4byte fn_806813B4+0x43C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x8D0
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x444
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0xC4C
	.4byte fn_806813B4+0x44C
.endobj jumptable_807BB718

# .data:0xA70 | 0x807BB868 | size: 0xE0
.obj jumptable_807BB868, global
	.4byte fn_80684730+0x3E4
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x448
	.4byte fn_80684730+0x398
	.4byte fn_80684730+0x434
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x354
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x3E4
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x4C0
	.4byte fn_80684730+0x354
	.4byte fn_80684730+0x448
	.4byte fn_80684730+0x398
	.4byte fn_80684730+0x434
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x354
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x52C
	.4byte fn_80684730+0x354
	.4byte fn_80684730+0x49C
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x4FC
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x354
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x544
	.4byte fn_80684730+0x354
.endobj jumptable_807BB868

# .data:0xB50 | 0x807BB948 | size: 0x150
.obj jumptable_807BB948, global
	.4byte fn_80685ECC+0x780
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x448
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x3CC
	.4byte fn_80685ECC+0x3CC
	.4byte fn_80685ECC+0x3CC
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x270
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x448
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x728
	.4byte fn_80685ECC+0x114
	.4byte fn_80685ECC+0x3CC
	.4byte fn_80685ECC+0x3CC
	.4byte fn_80685ECC+0x3CC
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x114
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x670
	.4byte fn_80685ECC+0x270
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x4C4
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x270
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x790
	.4byte fn_80685ECC+0x270
.endobj jumptable_807BB948

# .data:0xCA0 | 0x807BBA98 | size: 0x70
.obj lbl_807BBA98, global
	.4byte 0x002D0030
	.4byte 0x00580030
	.4byte 0x0000002D
	.4byte 0x00300078
	.4byte 0x00300000
	.4byte 0x00300058
	.4byte 0x00300000
	.4byte 0x00300078
	.4byte 0x00300000
	.4byte 0x002D0049
	.4byte 0x004E0046
	.4byte 0x0000002D
	.4byte 0x0069006E
	.4byte 0x00660000
	.4byte 0x0049004E
	.4byte 0x00460000
	.4byte 0x0069006E
	.4byte 0x00660000
	.4byte 0x002D004E
	.4byte 0x0041004E
	.4byte 0x0000002D
	.4byte 0x006E0061
	.4byte 0x006E0000
	.4byte 0x004E0041
	.4byte 0x004E0000
	.4byte 0x006E0061
	.4byte 0x006E0000
	.4byte 0x00000000
.endobj lbl_807BBA98

# .data:0xD10 | 0x807BBB08 | size: 0x10
.obj lbl_807BBB08, global
	.4byte lbl_8087EC18
	.4byte 0x00000000
	.4byte fn_8068B47C
	.4byte fn_8068B728
.endobj lbl_807BBB08

# .data:0xD20 | 0x807BBB18 | size: 0xC
.obj lbl_807BBB18, global
	.4byte lbl_80775B90
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBB18

# .data:0xD2C | 0x807BBB24 | size: 0xC
.obj lbl_807BBB24, global
	.4byte lbl_80779A00
	.4byte 0x00000000
	.4byte fn_8068B50C
.endobj lbl_807BBB24

# .data:0xD38 | 0x807BBB30 | size: 0x48
.obj lbl_807BBB30, global
	.4byte lbl_8087EC28
	.4byte 0x00000000
	.4byte fn_8068C164
	.4byte fn_80690630
	.4byte fn_8068D170
	.4byte fn_806903A8
	.4byte fn_80690524
	.4byte fn_8068EA70
	.4byte fn_80690078
	.4byte fn_80691B80
	.4byte fn_80690094
	.4byte fn_80691C9C
	.4byte fn_806901D0
	.4byte fn_80691D08
	.4byte fn_80690230
	.4byte fn_8068EAF8
	.4byte fn_8068EB0C
	.4byte fn_8068EB14
.endobj lbl_807BBB30

# .data:0xD80 | 0x807BBB78 | size: 0x18
.obj lbl_807BBB78, global
	.4byte lbl_8087EC40
	.4byte 0x00000000
	.4byte lbl_8087EC30
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBB78

# .data:0xD98 | 0x807BBB90 | size: 0x48
.obj lbl_807BBB90, global
	.4byte lbl_8087EC30
	.4byte 0x00000000
	.4byte fn_8068D0B8
	.4byte fn_80690630
	.4byte fn_8068D170
	.4byte fn_806903A8
	.4byte fn_80690524
	.4byte fn_8068D3A0
	.4byte fn_80690078
	.4byte fn_80691B80
	.4byte fn_80690094
	.4byte fn_80691C9C
	.4byte fn_806901D0
	.4byte fn_80691D08
	.4byte fn_80690230
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBB90

# .data:0xDE0 | 0x807BBBD8 | size: 0xC
.obj lbl_807BBBD8, global
	.4byte lbl_8087EC40
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBBD8

# .data:0xDEC | 0x807BBBE4 | size: 0x3C
.obj lbl_807BBBE4, global
	.4byte lbl_8087EC38
	.4byte 0x00000000
	.4byte fn_8068C040
	.4byte fn_8068F138
	.4byte fn_8068EF6C
	.4byte fn_80691B48
	.4byte fn_80691B60
	.4byte fn_8068EFFC
	.4byte fn_8068EBD0
	.4byte fn_80691B80
	.4byte fn_8068EBF8
	.4byte fn_8068EC74
	.4byte fn_8068ECF4
	.4byte fn_80691D08
	.4byte fn_80691E1C
.endobj lbl_807BBBE4

# .data:0xE28 | 0x807BBC20 | size: 0xC
.obj lbl_807BBC20, global
	.4byte lbl_8087EC40
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBC20

# .data:0xE34 | 0x807BBC2C | size: 0x3C
.obj lbl_807BBC2C, global
	.4byte lbl_8087EC40
	.4byte 0x00000000
	.4byte dtor_8068C0D4
	.4byte fn_80691B44
	.4byte fn_8068B60C
	.4byte fn_80691B48
	.4byte fn_80691B60
	.4byte fn_8068EA38
	.4byte fn_80691B78
	.4byte fn_80691B80
	.4byte fn_80691C90
	.4byte fn_80691C9C
	.4byte fn_80691CFC
	.4byte fn_80691D08
	.4byte fn_80691E1C
.endobj lbl_807BBC2C

# .data:0xE70 | 0x807BBC68 | size: 0x48
.obj lbl_807BBC68, global
	.4byte lbl_8087EC48
	.4byte 0x00000000
	.4byte fn_8068BB54
	.4byte fn_806912D8
	.4byte fn_8068DA74
	.4byte fn_80691050
	.4byte fn_806911CC
	.4byte fn_8068EB20
	.4byte fn_80690D60
	.4byte fn_800E250C
	.4byte fn_80690D70
	.4byte fn_800E2610
	.4byte fn_80690E9C
	.4byte fn_800E2670
	.4byte fn_80690EF4
	.4byte fn_8068EBA8
	.4byte fn_8068EBBC
	.4byte fn_8068EBC4
.endobj lbl_807BBC68

# .data:0xEB8 | 0x807BBCB0 | size: 0x18
.obj lbl_807BBCB0, global
	.4byte lbl_80779A98
	.4byte 0x00000000
	.4byte lbl_8087EC50
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBCB0

# .data:0xED0 | 0x807BBCC8 | size: 0x48
.obj lbl_807BBCC8, global
	.4byte lbl_8087EC50
	.4byte 0x00000000
	.4byte fn_8068D9BC
	.4byte fn_806912D8
	.4byte fn_8068DA74
	.4byte fn_80691050
	.4byte fn_806911CC
	.4byte fn_8068DC84
	.4byte fn_80690D60
	.4byte fn_800E250C
	.4byte fn_80690D70
	.4byte fn_800E2610
	.4byte fn_80690E9C
	.4byte fn_800E2670
	.4byte fn_80690EF4
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBCC8

# .data:0xF18 | 0x807BBD10 | size: 0xC
.obj lbl_807BBD10, global
	.4byte lbl_80779A98
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBD10

# .data:0xF24 | 0x807BBD1C | size: 0x3C
.obj lbl_807BBD1C, global
	.4byte lbl_8087EC58
	.4byte 0x00000000
	.4byte fn_8068BAC0
	.4byte fn_8068FB84
	.4byte fn_8068F9B8
	.4byte fn_800E24D4
	.4byte fn_800E24EC
	.4byte fn_8068FA48
	.4byte fn_8068F630
	.4byte fn_800E250C
	.4byte fn_8068F658
	.4byte fn_8068F6D0
	.4byte fn_8068F74C
	.4byte fn_800E2670
	.4byte fn_800E1D54
.endobj lbl_807BBD1C

# .data:0xF60 | 0x807BBD58 | size: 0x10
.obj lbl_807BBD58, global
	.4byte lbl_80779A98
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBD58

# .data:0xF70 | 0x807BBD68 | size: 0x18
.obj lbl_807BBD68, global
	.4byte lbl_8087EC60
	.4byte 0x00000000
	.4byte fn_8068C370
	.4byte lbl_8087EC60
	.4byte 0xFFFFFFF8
	.4byte fn_80691E3C
.endobj lbl_807BBD68

# .data:0xF88 | 0x807BBD80 | size: 0x18
.obj lbl_807BBD80, global
	.4byte lbl_80779A00
	.4byte 0x00000008
	.4byte lbl_8087EC70
	.4byte 0x00000008
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBD80

# .data:0xFA0 | 0x807BBD98 | size: 0x18
.obj lbl_807BBD98, global
	.4byte lbl_8087EC68
	.4byte 0x00000000
	.4byte fn_8068C440
	.4byte lbl_8087EC68
	.4byte 0xFFFFFFF4
	.4byte fn_80691E28
.endobj lbl_807BBD98

# .data:0xFB8 | 0x807BBDB0 | size: 0x14
.obj lbl_807BBDB0, global
	.4byte lbl_80779A00
	.4byte 0x0000000C
	.4byte lbl_8087EC70
	.4byte 0x0000000C
	.4byte 0x00000000
.endobj lbl_807BBDB0

# .data:0xFCC | 0x807BBDC4 | size: 0xC
.obj lbl_807BBDC4, global
	.4byte lbl_8087EC70
	.4byte 0x00000000
	.4byte dtor_8068C3E8
.endobj lbl_807BBDC4

# .data:0xFD8 | 0x807BBDD0 | size: 0x10
.obj lbl_807BBDD0, global
	.4byte lbl_80779A00
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBDD0

# .data:0xFE8 | 0x807BBDE0 | size: 0x14
.obj lbl_807BBDE0, global
	.4byte lbl_8087ECD0
	.4byte 0x00000000
	.4byte fn_80695230
	.4byte fn_806950E0
	.4byte fn_8069512C
.endobj lbl_807BBDE0

# .data:0xFFC | 0x807BBDF4 | size: 0xC
.obj lbl_807BBDF4, global
	.4byte lbl_80775B88
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBDF4

# .data:0x1008 | 0x807BBE00 | size: 0x28
.obj lbl_807BBE00, global
	.4byte lbl_8087ECD8
	.4byte 0x00000000
	.4byte fn_80694008
	.4byte fn_806937AC
	.4byte fn_80693818
	.4byte fn_8068D7AC
	.4byte fn_8068CD24
	.4byte fn_8068CD1C
	.4byte fn_80694048
	.4byte fn_8068D40C
.endobj lbl_807BBE00

# .data:0x1030 | 0x807BBE28 | size: 0x18
.obj lbl_807BBE28, global
	.4byte lbl_8087ECE8
	.4byte 0x00000008
	.4byte lbl_80783BB0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBE28

# .data:0x1048 | 0x807BBE40 | size: 0x28
.obj lbl_807BBE40, global
	.4byte lbl_8087ECE0
	.4byte 0x00000000
	.4byte fn_80693758
	.4byte fn_8068E080
	.4byte fn_80690068
	.4byte fn_8068E090
	.4byte fn_8068D0B0
	.4byte fn_8068D0A8
	.4byte fn_8069407C
	.4byte fn_8068DCF0
.endobj lbl_807BBE40

# .data:0x1070 | 0x807BBE68 | size: 0x14
.obj lbl_807BBE68, global
	.4byte lbl_8087ECE8
	.4byte 0x00000008
	.4byte lbl_80783BB0
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBE68

# .data:0x1084 | 0x807BBE7C | size: 0x3C
.obj lbl_807BBE7C, global
	.4byte lbl_8087ECF0
	.4byte 0x00000000
	.4byte fn_80692FF4
	.4byte fn_806940A8
	.4byte fn_806930D4
	.4byte fn_806931E0
	.4byte fn_806932F0
	.4byte fn_80694188
	.4byte fn_80693400
	.4byte fn_80694254
	.4byte fn_80693508
	.4byte fn_8068EA68
	.4byte fn_80693610
	.4byte fn_80693730
	.4byte fn_806936C0
.endobj lbl_807BBE7C

# .data:0x10C0 | 0x807BBEB8 | size: 0x14
.obj lbl_807BBEB8, global
	.4byte lbl_8087ED00
	.4byte 0x00000008
	.4byte lbl_80783BB0
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBEB8

# .data:0x10D4 | 0x807BBECC | size: 0x2C
.obj lbl_807BBECC, global
	.4byte lbl_8087ECF8
	.4byte 0x00000000
	.4byte fn_8069298C
	.4byte fn_806929FC
	.4byte fn_80692A10
	.4byte fn_80692ADC
	.4byte fn_80692AF0
	.4byte fn_80692BBC
	.4byte fn_80692BC4
	.4byte fn_80692BFC
	.4byte fn_80692C04
.endobj lbl_807BBECC

# .data:0x1100 | 0x807BBEF8 | size: 0x18
.obj lbl_807BBEF8, global
	.4byte lbl_8087ED00
	.4byte 0x00000008
	.4byte lbl_80783BB0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBEF8

# .data:0x1118 | 0x807BBF10 | size: 0x10
.obj lbl_807BBF10, global
	.4byte lbl_8087ED08
	.4byte 0x00000000
	.4byte fn_8069519C
	.4byte fn_80694320
.endobj lbl_807BBF10

# .data:0x1128 | 0x807BBF20 | size: 0x18
.obj lbl_807BBF20, global
	.4byte lbl_80775B90
	.4byte 0x00000000
	.4byte lbl_8087ED10
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBF20

# .data:0x1140 | 0x807BBF38 | size: 0x10
.obj lbl_807BBF38, global
	.4byte lbl_8087ED10
	.4byte 0x00000000
	.4byte fn_80694328
	.4byte fn_80694320
.endobj lbl_807BBF38

# .data:0x1150 | 0x807BBF48 | size: 0x10
.obj lbl_807BBF48, global
	.4byte lbl_80775B90
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBF48

# .data:0x1160 | 0x807BBF58 | size: 0x44
.obj jumptable_807BBF58, global
	.4byte fn_806968A4+0x168
	.4byte fn_806968A4+0x168
	.4byte fn_806968A4+0xC0
	.4byte fn_806968A4+0xCC
	.4byte fn_806968A4+0xD8
	.4byte fn_806968A4+0xE4
	.4byte fn_806968A4+0xF0
	.4byte fn_806968A4+0xF0
	.4byte fn_806968A4+0xFC
	.4byte fn_806968A4+0x108
	.4byte fn_806968A4+0x114
	.4byte fn_806968A4+0x120
	.4byte fn_806968A4+0x12C
	.4byte fn_806968A4+0x144
	.4byte fn_806968A4+0x168
	.4byte fn_806968A4+0x150
	.4byte fn_806968A4+0x138
.endobj jumptable_807BBF58

# .data:0x11A4 | 0x807BBF9C | size: 0x44
.obj jumptable_807BBF9C, global
	.4byte fn_80696FA8+0x4E4
	.4byte fn_80696FA8+0x9C
	.4byte fn_80696FA8+0xB0
	.4byte fn_80696FA8+0xDC
	.4byte fn_80696FA8+0x140
	.4byte fn_80696FA8+0x18C
	.4byte fn_80696FA8+0x1E0
	.4byte fn_80696FA8+0x234
	.4byte fn_80696FA8+0x288
	.4byte fn_80696FA8+0x310
	.4byte fn_80696FA8+0x38C
	.4byte fn_80696FA8+0x3D4
	.4byte fn_80696FA8+0x450
	.4byte fn_80696FA8+0x478
	.4byte fn_80696FA8+0x4E4
	.4byte fn_80696FA8+0x4C4
	.4byte fn_80696FA8+0x464
.endobj jumptable_807BBF9C

# .data:0x11E8 | 0x807BBFE0 | size: 0x10
.obj lbl_807BBFE0, global
	.4byte lbl_8087ED30
	.4byte 0x00000000
	.4byte fn_8069766C
	.4byte fn_80697D28
.endobj lbl_807BBFE0

# .data:0x11F8 | 0x807BBFF0 | size: 0xC
.obj lbl_807BBFF0, global
	.4byte lbl_80775B90
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BBFF0

# .data:0x1204 | 0x807BBFFC | size: 0xE
.obj lbl_807BBFFC, global
	.string "bad_exception"
.endobj lbl_807BBFFC

# .data:0x1212 | 0x807BC00A | size: 0x6
.obj gap_07_807BC00A_data, global
.hidden gap_07_807BC00A_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BC00A_data

# .data:0x1218 | 0x807BC010 | size: 0x48
.obj lbl_807BC010, global
	.string "<< RVL_SDK - NCD \trelease build: Jun  9 2009 11:59:48 (0x4199_60831) >>"
.endobj lbl_807BC010

# .data:0x1260 | 0x807BC058 | size: 0x16
.obj lbl_807BC058, global
	.string "NCDGetCurrentIfConfig"
.endobj lbl_807BC058

# .data:0x1276 | 0x807BC06E | size: 0x2
.obj gap_07_807BC06E_data, global
.hidden gap_07_807BC06E_data
	.2byte 0x0000
.endobj gap_07_807BC06E_data

# .data:0x1278 | 0x807BC070 | size: 0x16
.obj lbl_807BC070, global
	.string "NCDGetCurrentIpConfig"
.endobj lbl_807BC070

# .data:0x128E | 0x807BC086 | size: 0x2
.obj gap_07_807BC086_data, global
.hidden gap_07_807BC086_data
	.2byte 0x0000
.endobj gap_07_807BC086_data

# .data:0x1290 | 0x807BC088 | size: 0x14
.obj lbl_807BC088, global
	.string "/dev/net/ncd/manage"
.endobj lbl_807BC088

# .data:0x12A4 | 0x807BC09C | size: 0x19
.obj lbl_807BC09C, global
	.string "NCDiGetEnabledConfigList"
.endobj lbl_807BC09C

# .data:0x12BD | 0x807BC0B5 | size: 0x3
.obj gap_07_807BC0B5_data, global
.hidden gap_07_807BC0B5_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC0B5_data

# .data:0x12C0 | 0x807BC0B8 | size: 0xC
.obj lbl_807BC0B8, global
	.string "ncdsystem.c"
.endobj lbl_807BC0B8

# .data:0x12CC | 0x807BC0C4 | size: 0x36
.obj lbl_807BC0C4, global
	.string "Could not reserve heap for NCD library from IPC arena"
.endobj lbl_807BC0C4

# .data:0x1302 | 0x807BC0FA | size: 0x6
.obj gap_07_807BC0FA_data, global
.hidden gap_07_807BC0FA_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BC0FA_data

# .data:0x1308 | 0x807BC100 | size: 0x1D
.obj lbl_807BC100, global
	.string "Unknown SOStartup Error: %d\n"
.endobj lbl_807BC100

# .data:0x1325 | 0x807BC11D | size: 0x3
.obj gap_07_807BC11D_data, global
.hidden gap_07_807BC11D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC11D_data

# .data:0x1328 | 0x807BC120 | size: 0x36
.obj lbl_807BC120, global
	.string "<< REX-PPC 2.4.255.0 (RevoEX-2.4) REL 090609111526 >>"
.endobj lbl_807BC120

# .data:0x135E | 0x807BC156 | size: 0x2
.obj gap_07_807BC156_data, global
.hidden gap_07_807BC156_data
	.2byte 0x0000
.endobj gap_07_807BC156_data

# .data:0x1360 | 0x807BC158 | size: 0x100
.obj lbl_807BC158, global
	.4byte 0xD76AA478
	.4byte 0xE8C7B756
	.4byte 0x242070DB
	.4byte 0xC1BDCEEE
	.4byte 0xF57C0FAF
	.4byte 0x4787C62A
	.4byte 0xA8304613
	.4byte 0xFD469501
	.4byte 0x698098D8
	.4byte 0x8B44F7AF
	.4byte 0xFFFF5BB1
	.4byte 0x895CD7BE
	.4byte 0x6B901122
	.4byte 0xFD987193
	.4byte 0xA679438E
	.4byte 0x49B40821
	.4byte 0xF61E2562
	.4byte 0xC040B340
	.4byte 0x265E5A51
	.4byte 0xE9B6C7AA
	.4byte 0xD62F105D
	.4byte 0x02441453
	.4byte 0xD8A1E681
	.4byte 0xE7D3FBC8
	.4byte 0x21E1CDE6
	.4byte 0xC33707D6
	.4byte 0xF4D50D87
	.4byte 0x455A14ED
	.4byte 0xA9E3E905
	.4byte 0xFCEFA3F8
	.4byte 0x676F02D9
	.4byte 0x8D2A4C8A
	.4byte 0xFFFA3942
	.4byte 0x8771F681
	.4byte 0x6D9D6122
	.4byte 0xFDE5380C
	.4byte 0xA4BEEA44
	.4byte 0x4BDECFA9
	.4byte 0xF6BB4B60
	.4byte 0xBEBFBC70
	.4byte 0x289B7EC6
	.4byte 0xEAA127FA
	.4byte 0xD4EF3085
	.4byte 0x04881D05
	.4byte 0xD9D4D039
	.4byte 0xE6DB99E5
	.4byte 0x1FA27CF8
	.4byte 0xC4AC5665
	.4byte 0xF4292244
	.4byte 0x432AFF97
	.4byte 0xAB9423A7
	.4byte 0xFC93A039
	.4byte 0x655B59C3
	.4byte 0x8F0CCC92
	.4byte 0xFFEFF47D
	.4byte 0x85845DD1
	.4byte 0x6FA87E4F
	.4byte 0xFE2CE6E0
	.4byte 0xA3014314
	.4byte 0x4E0811A1
	.4byte 0xF7537E82
	.4byte 0xBD3AF235
	.4byte 0x2AD7D2BB
	.4byte 0xEB86D391
.endobj lbl_807BC158

# .data:0x1460 | 0x807BC258 | size: 0xC0
.obj lbl_807BC258, global
	.4byte 0x00000001
	.4byte 0x00000006
	.4byte 0x0000000B
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte 0x0000000A
	.4byte 0x0000000F
	.4byte 0x00000004
	.4byte 0x00000009
	.4byte 0x0000000E
	.4byte 0x00000003
	.4byte 0x00000008
	.4byte 0x0000000D
	.4byte 0x00000002
	.4byte 0x00000007
	.4byte 0x0000000C
	.4byte 0x00000005
	.4byte 0x00000008
	.4byte 0x0000000B
	.4byte 0x0000000E
	.4byte 0x00000001
	.4byte 0x00000004
	.4byte 0x00000007
	.4byte 0x0000000A
	.4byte 0x0000000D
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte 0x00000006
	.4byte 0x00000009
	.4byte 0x0000000C
	.4byte 0x0000000F
	.4byte 0x00000002
	.4byte 0x00000000
	.4byte 0x00000007
	.4byte 0x0000000E
	.4byte 0x00000005
	.4byte 0x0000000C
	.4byte 0x00000003
	.4byte 0x0000000A
	.4byte 0x00000001
	.4byte 0x00000008
	.4byte 0x0000000F
	.4byte 0x00000006
	.4byte 0x0000000D
	.4byte 0x00000004
	.4byte 0x0000000B
	.4byte 0x00000002
	.4byte 0x00000009
.endobj lbl_807BC258

# .data:0x1520 | 0x807BC318 | size: 0x47
.obj lbl_807BC318, global
	.string "NETAESCreateEx() failed! (key-length is allowed only 16, 20, 24 BYTEs)"
.endobj lbl_807BC318

# .data:0x1567 | 0x807BC35F | size: 0x1
.obj gap_07_807BC35F_data, global
.hidden gap_07_807BC35F_data
	.byte 0x00
.endobj gap_07_807BC35F_data

# .data:0x1568 | 0x807BC360 | size: 0x25
.obj lbl_807BC360, global
	.string "this mode cannot support encryption!"
.endobj lbl_807BC360

# .data:0x158D | 0x807BC385 | size: 0x3
.obj gap_07_807BC385_data, global
.hidden gap_07_807BC385_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC385_data

# .data:0x1590 | 0x807BC388 | size: 0x2E
.obj lbl_807BC388, global
	.string "length has not suited to AES block alignment!"
.endobj lbl_807BC388

# .data:0x15BE | 0x807BC3B6 | size: 0x2
.obj gap_07_807BC3B6_data, global
.hidden gap_07_807BC3B6_data
	.2byte 0x0000
.endobj gap_07_807BC3B6_data

# .data:0x15C0 | 0x807BC3B8 | size: 0x25
.obj lbl_807BC3B8, global
	.string "this mode cannot support decryption!"
.endobj lbl_807BC3B8

# .data:0x15E5 | 0x807BC3DD | size: 0x3
.obj gap_07_807BC3DD_data, global
.hidden gap_07_807BC3DD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC3DD_data

# .data:0x15E8 | 0x807BC3E0 | size: 0x48
.obj lbl_807BC3E0, global
	.4byte 0x4E434447
	.4byte 0x65744375
	.4byte 0x7272656E
	.4byte 0x74497043
	.4byte 0x6F6E6669
	.4byte 0x67206572
	.4byte 0x72203D20
	.4byte 0x25640A00
	.4byte 0x4E485454
	.4byte 0x505F6267
	.4byte 0x6E656E64
	.4byte 0x2E630000
	.4byte 0x4E434447
	.4byte 0x65744375
	.4byte 0x7272656E
	.4byte 0x74497043
	.4byte 0x6F6E6669
	.4byte 0x67000000
.endobj lbl_807BC3E0

# .data:0x1630 | 0x807BC428 | size: 0x3A
.obj lbl_807BC428, global
	.string "*warning: %d connections rests! Please free connections.\n"
.endobj lbl_807BC428

# .data:0x166A | 0x807BC462 | size: 0x6
.obj gap_07_807BC462_data, global
.hidden gap_07_807BC462_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BC462_data

# .data:0x1670 | 0x807BC468 | size: 0x1B
.obj lbl_807BC468, global
	.string "failed to allocate memory\n"
.endobj lbl_807BC468

# .data:0x168B | 0x807BC483 | size: 0x1
.obj gap_07_807BC483_data, global
.hidden gap_07_807BC483_data
	.byte 0x00
.endobj gap_07_807BC483_data

# .data:0x168C | 0x807BC484 | size: 0x39
.obj lbl_807BC484, global
	.string "already called NHTTPAddPostDataRaw (exclusive fucntion)\n"
.endobj lbl_807BC484

# .data:0x16C5 | 0x807BC4BD | size: 0x3
.obj gap_07_807BC4BD_data, global
.hidden gap_07_807BC4BD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC4BD_data

# .data:0x16C8 | 0x807BC4C0 | size: 0x40
.obj lbl_807BC4C0, global
	.4byte 0x4E485454
	.4byte 0x50695F43
	.4byte 0x6865636B
	.4byte 0x43757272
	.4byte 0x656E7454
	.4byte 0x68726561
	.4byte 0x64000000
	.4byte 0x25733A69
	.4byte 0x6C6C6567
	.4byte 0x616C2074
	.4byte 0x68726561
	.4byte 0x640A0000
	.4byte 0x4E485454
	.4byte 0x505F6F73
	.4byte 0x5F52564C
	.4byte 0x2E630000
.endobj lbl_807BC4C0

# .data:0x1708 | 0x807BC500 | size: 0x9
.obj lbl_807BC500, global
	.string "https://"
.endobj lbl_807BC500

# .data:0x1711 | 0x807BC509 | size: 0x7
.obj gap_07_807BC509_data, global
.hidden gap_07_807BC509_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC509_data

# .data:0x1718 | 0x807BC510 | size: 0x41
.obj lbl_807BC510, global
	.string "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
.endobj lbl_807BC510

# .data:0x1759 | 0x807BC551 | size: 0x7
.obj gap_07_807BC551_data, global
.hidden gap_07_807BC551_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BC551_data

# .data:0x1760 | 0x807BC558 | size: 0x5C
.obj lbl_807BC558, global
	.4byte 0x434F4E4E
	.4byte 0x45435420
	.4byte 0x00000000
	.4byte 0x20485454
	.4byte 0x502F312E
	.4byte 0x310D0A00
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x4C656E67
	.4byte 0x74683A20
	.4byte 0x300D0A50
	.4byte 0x7261676D
	.4byte 0x613A206E
	.4byte 0x6F2D6361
	.4byte 0x6368650D
	.4byte 0x0A000000
	.4byte 0x50726F78
	.4byte 0x792D4175
	.4byte 0x74686F72
	.4byte 0x697A6174
	.4byte 0x696F6E3A
	.4byte 0x20426173
	.4byte 0x69632000
.endobj lbl_807BC558

# .data:0x17BC | 0x807BC5B4 | size: 0x74
.obj lbl_807BC5B4, global
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x4C656E67
	.4byte 0x74683A20
	.4byte 0x00000000
	.4byte 0x41757468
	.4byte 0x6F72697A
	.4byte 0x6174696F
	.4byte 0x6E3A2042
	.4byte 0x61736963
	.4byte 0x20000000
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x4C656E67
	.4byte 0x74680000
	.4byte 0x436F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E0000
	.4byte 0x48545450
	.4byte 0x2F312E31
	.4byte 0x00000000
	.4byte 0x4B656570
	.4byte 0x2D416C69
	.4byte 0x76650000
	.4byte 0x5472616E
	.4byte 0x73666572
	.4byte 0x2D456E63
	.4byte 0x6F64696E
	.4byte 0x67000000
.endobj lbl_807BC5B4

# .data:0x1830 | 0x807BC628 | size: 0xA8
.obj lbl_807BC628, global
	.4byte 0x3C3C2052
	.4byte 0x564C5F53
	.4byte 0x444B202D
	.4byte 0x204E4854
	.4byte 0x54502009
	.4byte 0x72656C65
	.4byte 0x61736520
	.4byte 0x6275696C
	.4byte 0x643A204D
	.4byte 0x61792031
	.4byte 0x32203230
	.4byte 0x30392031
	.4byte 0x313A3031
	.4byte 0x3A303020
	.4byte 0x28307834
	.4byte 0x3139395F
	.4byte 0x36303833
	.4byte 0x3129203E
	.4byte 0x3E000000
	.4byte 0x3C3C2052
	.4byte 0x564C5F53
	.4byte 0x444B202D
	.4byte 0x204E4854
	.4byte 0x54502009
	.4byte 0x72656C65
	.4byte 0x61736520
	.4byte 0x6275696C
	.4byte 0x643A204D
	.4byte 0x61792031
	.4byte 0x32203230
	.4byte 0x30392031
	.4byte 0x313A3031
	.4byte 0x3A303020
	.4byte 0x28307834
	.4byte 0x3139395F
	.4byte 0x36303833
	.4byte 0x31292055
	.4byte 0x4E4F4646
	.4byte 0x49434941
	.4byte 0x4C203E3E
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BC628

# .data:0x18D8 | 0x807BC6D0 | size: 0x50
.obj lbl_807BC6D0, global
	.string "<< RVL_SDK - NHTTPCREATE \trelease build: May 12 2009 11:01:00 (0x4199_60831) >>"
.endobj lbl_807BC6D0

# .data:0x1928 | 0x807BC720 | size: 0x14
.obj lbl_807BC720, global
	.string "NHTTPAddHeaderField"
.endobj lbl_807BC720

# .data:0x193C | 0x807BC734 | size: 0x4
.obj gap_07_807BC734_data, global
.hidden gap_07_807BC734_data
	.4byte 0x00000000
.endobj gap_07_807BC734_data

# .data:0x1940 | 0x807BC738 | size: 0x30
.obj lbl_807BC738, global
	.string "%s can be called before NHTTPStartConnection()\n"
.endobj lbl_807BC738

# .data:0x1970 | 0x807BC768 | size: 0x1B8
.obj lbl_807BC768, global
	.4byte 0x4E485454
	.4byte 0x50416464
	.4byte 0x506F7374
	.4byte 0x44617461
	.4byte 0x41736369
	.4byte 0x69000000
	.4byte 0x4E485454
	.4byte 0x50416464
	.4byte 0x506F7374
	.4byte 0x44617461
	.4byte 0x42696E61
	.4byte 0x72790000
	.4byte 0x4E485454
	.4byte 0x50416464
	.4byte 0x506F7374
	.4byte 0x44617461
	.4byte 0x52617700
	.4byte 0x616C7265
	.4byte 0x61647920
	.4byte 0x63616C6C
	.4byte 0x6564204E
	.4byte 0x48545450
	.4byte 0x41646450
	.4byte 0x6F737444
	.4byte 0x61746141
	.4byte 0x73636969
	.4byte 0x206F7220
	.4byte 0x4E485454
	.4byte 0x50416464
	.4byte 0x506F7374
	.4byte 0x44617461
	.4byte 0x42696E61
	.4byte 0x72792028
	.4byte 0x6578636C
	.4byte 0x75736976
	.4byte 0x65206675
	.4byte 0x636E7469
	.4byte 0x6F6E290A
	.4byte 0x00000000
	.4byte 0x4E485454
	.4byte 0x50536574
	.4byte 0x506F7374
	.4byte 0x44617461
	.4byte 0x456E636F
	.4byte 0x64696E67
	.4byte 0x00000000
	.4byte 0x70726F78
	.4byte 0x792D6164
	.4byte 0x64726573
	.4byte 0x73206578
	.4byte 0x63656564
	.4byte 0x65642032
	.4byte 0x35362063
	.4byte 0x68617261
	.4byte 0x63746572
	.4byte 0x730A0000
	.4byte 0x75736572
	.4byte 0x6E616D65
	.4byte 0x20657863
	.4byte 0x65656465
	.4byte 0x64203332
	.4byte 0x20636861
	.4byte 0x72616374
	.4byte 0x6572730A
	.4byte 0x00000000
	.4byte 0x70617373
	.4byte 0x776F7264
	.4byte 0x20657863
	.4byte 0x65656465
	.4byte 0x64203332
	.4byte 0x20636861
	.4byte 0x72616374
	.4byte 0x6572730A
	.4byte 0x00000000
	.4byte 0x5B6E6F2D
	.4byte 0x61757468
	.4byte 0x5D000000
	.4byte 0x5573696E
	.4byte 0x67207072
	.4byte 0x6F787920
	.4byte 0x73657276
	.4byte 0x65722025
	.4byte 0x733A2564
	.4byte 0x20282573
	.4byte 0x2F257329
	.4byte 0x2E0A0000
	.4byte 0x4E485454
	.4byte 0x50536574
	.4byte 0x50726F78
	.4byte 0x79206661
	.4byte 0x696C6564
	.4byte 0x2E282564
	.4byte 0x290A0000
	.4byte 0x645F6E68
	.4byte 0x7474702E
	.4byte 0x63000000
	.4byte 0x4E485454
	.4byte 0x50536574
	.4byte 0x50726F78
	.4byte 0x79000000
	.4byte 0x4E485454
	.4byte 0x50446973
	.4byte 0x61626C65
	.4byte 0x56657269
	.4byte 0x66794F70
	.4byte 0x74696F6E
	.4byte 0x466F7244
	.4byte 0x65627567
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807BC768

# .data:0x1B28 | 0x807BC920 | size: 0x3A
.obj lbl_807BC920, global
	.string "*warning: %d connections rests! Please free connections.\n"
.endobj lbl_807BC920

# .data:0x1B62 | 0x807BC95A | size: 0x6
.obj gap_07_807BC95A_data, global
.hidden gap_07_807BC95A_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BC95A_data

# .data:0x1B68 | 0x807BC960 | size: 0x4A
.obj lbl_807BC960, global
	.string "<< RVL_SDK - NWC24 \trelease build: Jun  9 2009 11:59:51 (0x4199_60831) >>"
.endobj lbl_807BC960

# .data:0x1BB2 | 0x807BC9AA | size: 0x6
.obj gap_07_807BC9AA_data, global
.hidden gap_07_807BC9AA_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BC9AA_data

# .data:0x1BB8 | 0x807BC9B0 | size: 0x14
.obj lbl_807BC9B0, global
	.string "/dev/net/kd/request"
.endobj lbl_807BC9B0

# .data:0x1BCC | 0x807BC9C4 | size: 0x14
.obj lbl_807BC9C4, global
	.string "NWC24iSetScriptMode"
.endobj lbl_807BC9C4

# .data:0x1BE0 | 0x807BC9D8 | size: 0x1C
.obj lbl_807BC9D8, global
	.string "NWC24iRequestGenerateUserId"
.endobj lbl_807BC9D8

# .data:0x1BFC | 0x807BC9F4 | size: 0x4
.obj gap_07_807BC9F4_data, global
.hidden gap_07_807BC9F4_data
	.4byte 0x00000000
.endobj gap_07_807BC9F4_data

# .data:0x1C00 | 0x807BC9F8 | size: 0x11
.obj lbl_807BC9F8, global
	.string "/dev/net/kd/time"
.endobj lbl_807BC9F8

# .data:0x1C11 | 0x807BCA09 | size: 0x3
.obj gap_07_807BCA09_data, global
.hidden gap_07_807BCA09_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BCA09_data

# .data:0x1C14 | 0x807BCA0C | size: 0x14
.obj lbl_807BCA0C, global
	.string "NWC24iSetRtcCounter"
.endobj lbl_807BCA0C

# .data:0x1C28 | 0x807BCA20 | size: 0x16
.obj lbl_807BCA20, global
	.string "NWC24iPrepareShutdown"
.endobj lbl_807BCA20

# .data:0x1C3E | 0x807BCA36 | size: 0x2
.obj gap_07_807BCA36_data, global
.hidden gap_07_807BCA36_data
	.2byte 0x0000
.endobj gap_07_807BCA36_data

# .data:0x1C40 | 0x807BCA38 | size: 0x14
.obj lbl_807BCA38, global
	.string "/dev/net/kd/request"
.endobj lbl_807BCA38

# .data:0x1C54 | 0x807BCA4C | size: 0x16
.obj lbl_807BCA4C, global
	.string "NWC24iRequestShutdown"
.endobj lbl_807BCA4C

# .data:0x1C6A | 0x807BCA62 | size: 0x6
.obj gap_07_807BCA62_data, global
.hidden gap_07_807BCA62_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BCA62_data

# .data:0x1C70 | 0x807BCA68 | size: 0x47
.obj lbl_807BCA68, global
	.string "<< RVL_SDK - SO \trelease build: Jun  9 2009 12:00:00 (0x4199_60831) >>"
.endobj lbl_807BCA68

# .data:0x1CB7 | 0x807BCAAF | size: 0x1
.obj gap_07_807BCAAF_data, global
.hidden gap_07_807BCAAF_data
	.byte 0x00
.endobj gap_07_807BCAAF_data

# .data:0x1CB8 | 0x807BCAB0 | size: 0x10
.obj lbl_807BCAB0, global
	.string "/dev/net/ip/top"
.endobj lbl_807BCAB0

# .data:0x1CC8 | 0x807BCAC0 | size: 0x88
.obj jumptable_807BCAC0, global
	.4byte fn_806A2A64+0x2CC
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2DC
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2C4
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2C4
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2E0
	.4byte fn_806A2A64+0x2CC
	.4byte fn_806A2A64+0x2D4
	.4byte fn_806A2A64+0x2BC
.endobj jumptable_807BCAC0

# .data:0x1D50 | 0x807BCB48 | size: 0x88
.obj jumptable_807BCB48, global
	.4byte fn_806A2E8C+0xDC
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xEC
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xD4
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xD4
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xF0
	.4byte fn_806A2E8C+0xDC
	.4byte fn_806A2E8C+0xE4
	.4byte fn_806A2E8C+0xCC
.endobj jumptable_807BCB48

# .data:0x1DD8 | 0x807BCBD0 | size: 0x74
.obj jumptable_807BCBD0, global
	.4byte fn_806A3300+0x1EC
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x1FC
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x204
	.4byte fn_806A3300+0x1F4
	.4byte fn_806A3300+0x204
.endobj jumptable_807BCBD0

# .data:0x1E4C | 0x807BCC44 | size: 0x4
.obj gap_07_807BCC44_data, global
.hidden gap_07_807BCC44_data
	.4byte 0x00000000
.endobj gap_07_807BCC44_data

# .data:0x1E50 | 0x807BCC48 | size: 0x4B
.obj lbl_807BCC48, global
	.string "<< RVL_SDK - SOCKET \trelease build: Jun  9 2009 12:00:01 (0x4199_60831) >>"
.endobj lbl_807BCC48

# .data:0x1E9B | 0x807BCC93 | size: 0x1
.obj gap_07_807BCC93_data, global
.hidden gap_07_807BCC93_data
	.byte 0x00
.endobj gap_07_807BCC93_data

# .data:0x1E9C | 0x807BCC94 | size: 0xC
.obj lbl_807BCC94, global
	.string "%d.%d.%d.%d"
.endobj lbl_807BCC94

# .data:0x1EA8 | 0x807BCCA0 | size: 0x48
.obj lbl_807BCCA0, global
	.string "<< RVL_SDK - SSL \trelease build: May 12 2009 09:12:41 (0x4199_60831) >>"
.endobj lbl_807BCCA0

# .data:0x1EF0 | 0x807BCCE8 | size: 0xD
.obj lbl_807BCCE8, global
	.string "/dev/net/ssl"
.endobj lbl_807BCCE8

# .data:0x1EFD | 0x807BCCF5 | size: 0x3
.obj gap_07_807BCCF5_data, global
.hidden gap_07_807BCCF5_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BCCF5_data

# .data:0x1F00 | 0x807BCCF8 | size: 0x41
.obj lbl_807BCCF8, global
	.string "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789.-"
.endobj lbl_807BCCF8

# .data:0x1F41 | 0x807BCD39 | size: 0x3
.obj gap_07_807BCD39_data, global
.hidden gap_07_807BCD39_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BCD39_data

# .data:0x1F44 | 0x807BCD3C | size: 0x4
.obj lbl_807BCD3C, global
	.4byte lbl_807BCCF8
.endobj lbl_807BCD3C

# .data:0x1F48 | 0x807BCD40 | size: 0x68
.obj jumptable_807BCD40, global
	.4byte fn_806A7020+0xA4
	.4byte fn_806A7020+0x98
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x50
	.4byte fn_806A7020+0x5C
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x98
	.4byte fn_806A7020+0x80
	.4byte fn_806A7020+0x80
	.4byte fn_806A7020+0x80
	.4byte fn_806A7020+0x68
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x8C
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x8C
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x8C
	.4byte fn_806A7020+0x8C
	.4byte fn_806A7020+0x44
	.4byte fn_806A7020+0x74
	.4byte fn_806A7020+0x8C
	.4byte fn_806A7020+0x80
	.4byte fn_806A7020+0x8C
.endobj jumptable_807BCD40

# .data:0x1FB0 | 0x807BCDA8 | size: 0xA4
.obj lbl_807BCDA8, global
	.4byte 0x3C3C2052
	.4byte 0x564C5F53
	.4byte 0x444B202D
	.4byte 0x20445743
	.4byte 0x20097265
	.4byte 0x6C656173
	.4byte 0x65206275
	.4byte 0x696C643A
	.4byte 0x20417567
	.4byte 0x20323720
	.4byte 0x32303130
	.4byte 0x2031393A
	.4byte 0x30313A31
	.4byte 0x34202830
	.4byte 0x78343330
	.4byte 0x325F3137
	.4byte 0x3229203E
	.4byte 0x3E000000
	.4byte 0x4661696C
	.4byte 0x65642074
	.4byte 0x6F20696E
	.4byte 0x69746961
	.4byte 0x6C697A65
	.4byte 0x20617574
	.4byte 0x6820696E
	.4byte 0x74657266
	.4byte 0x6163652E
	.4byte 0x0A000000
	.4byte 0x73646B64
	.4byte 0x65762E67
	.4byte 0x616D6573
	.4byte 0x70792E63
	.4byte 0x6F6D0000
	.4byte 0x67616D65
	.4byte 0x73746174
	.4byte 0x732E6773
	.4byte 0x2E6E696E
	.4byte 0x74656E64
	.4byte 0x6F776966
	.4byte 0x692E6E65
	.4byte 0x74000000
.endobj lbl_807BCDA8

# .data:0x2054 | 0x807BCE4C | size: 0x6
.obj lbl_807BCE4C, global
	.string "clear"
.endobj lbl_807BCE4C

# .data:0x205A | 0x807BCE52 | size: 0x6
.obj gap_07_807BCE52_data, global
.hidden gap_07_807BCE52_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BCE52_data

# .data:0x2060 | 0x807BCE58 | size: 0x54
.obj lbl_807BCE58, global
	.string "Failed to alloc memory. Original requested size: %d, Required size: %d, align: %d.\n"
.endobj lbl_807BCE58

# .data:0x20B4 | 0x807BCEAC | size: 0x4
.obj gap_07_807BCEAC_data, global
.hidden gap_07_807BCEAC_data
	.4byte 0x00000000
.endobj gap_07_807BCEAC_data

# .data:0x20B8 | 0x807BCEB0 | size: 0x180
.obj lbl_807BCEB0, global
	.4byte 0x4457435F
	.4byte 0x494E464F
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x2B2B4457
	.4byte 0x435F4552
	.4byte 0x524F5220
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x44454255
	.4byte 0x47202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x5741524E
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x41434845
	.4byte 0x434B2020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x4C4F4749
	.4byte 0x4E202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x4D415443
	.4byte 0x485F4E4E
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x4D415443
	.4byte 0x485F4754
	.4byte 0x323A0000
	.4byte 0x4457435F
	.4byte 0x5452414E
	.4byte 0x53504F52
	.4byte 0x543A0000
	.4byte 0x4457435F
	.4byte 0x5152325F
	.4byte 0x52455120
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x53425F55
	.4byte 0x50444154
	.4byte 0x453A0000
	.4byte 0x4457435F
	.4byte 0x53454E44
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x52454356
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x55504441
	.4byte 0x54455F53
	.4byte 0x563A0000
	.4byte 0x4457435F
	.4byte 0x434F4E4E
	.4byte 0x45435449
	.4byte 0x4E45543A
	.4byte 0x00000000
	.4byte 0x4457435F
	.4byte 0x41555448
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x41432020
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x424D2020
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x5554494C
	.4byte 0x20202020
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x4F505449
	.4byte 0x4F4E5F43
	.4byte 0x463A0000
	.4byte 0x4457435F
	.4byte 0x4F505449
	.4byte 0x4F4E5F43
	.4byte 0x4F4E4E54
	.4byte 0x4553543A
	.4byte 0x00000000
	.4byte 0x4457435F
	.4byte 0x47414D45
	.4byte 0x53505920
	.4byte 0x203A0000
	.4byte 0x4457435F
	.4byte 0x554E4B4E
	.4byte 0x4F574E20
	.4byte 0x203A0000
	.4byte 0x00000000
.endobj lbl_807BCEB0

# .data:0x2238 | 0x807BD030 | size: 0xF
.obj lbl_807BD030, global
	.string "DWC_InitGHTTP\n"
.endobj lbl_807BD030

# .data:0x2247 | 0x807BD03F | size: 0x1
.obj gap_07_807BD03F_data, global
.hidden gap_07_807BD03F_data
	.byte 0x00
.endobj gap_07_807BD03F_data

# .data:0x2248 | 0x807BD040 | size: 0x13
.obj lbl_807BD040, global
	.string "DWC_ShutdownGHTTP\n"
.endobj lbl_807BD040

# .data:0x225B | 0x807BD053 | size: 0x1
.obj gap_07_807BD053_data, global
.hidden gap_07_807BD053_data
	.byte 0x00
.endobj gap_07_807BD053_data

# .data:0x225C | 0x807BD054 | size: 0x23
.obj lbl_807BD054, global
	.string "GHTTPCompleteCallback result : %d\n"
.endobj lbl_807BD054

# .data:0x227F | 0x807BD077 | size: 0x1
.obj gap_07_807BD077_data, global
.hidden gap_07_807BD077_data
	.byte 0x00
.endobj gap_07_807BD077_data

# .data:0x2280 | 0x807BD078 | size: 0x12
.obj lbl_807BD078, global
	.string "Callback is NULL\n"
.endobj lbl_807BD078

# .data:0x2292 | 0x807BD08A | size: 0x2
.obj gap_07_807BD08A_data, global
.hidden gap_07_807BD08A_data
	.2byte 0x0000
.endobj gap_07_807BD08A_data

# .data:0x2294 | 0x807BD08C | size: 0x11
.obj lbl_807BD08C, global
	.string "DWC_Alloc Error\n"
.endobj lbl_807BD08C

# .data:0x22A5 | 0x807BD09D | size: 0x3
.obj gap_07_807BD09D_data, global
.hidden gap_07_807BD09D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD09D_data

# .data:0x22A8 | 0x807BD0A0 | size: 0x14
.obj lbl_807BD0A0, global
	.string "DWC_GetGHTTPDataEx\n"
.endobj lbl_807BD0A0

# .data:0x22BC | 0x807BD0B4 | size: 0x19
.obj lbl_807BD0B4, global
	.string "Main, DWCGHTTP error %d\n"
.endobj lbl_807BD0B4

# .data:0x22D5 | 0x807BD0CD | size: 0x3
.obj gap_07_807BD0CD_data, global
.hidden gap_07_807BD0CD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD0CD_data

# .data:0x22D8 | 0x807BD0D0 | size: 0x70
.obj jumptable_807BD0D0, global
	.4byte fn_806A8030+0x74
	.4byte fn_806A8030+0x7C
	.4byte fn_806A8030+0x84
	.4byte fn_806A8030+0x8C
	.4byte fn_806A8030+0x8C
	.4byte fn_806A8030+0x8C
	.4byte fn_806A8030+0x94
	.4byte fn_806A8030+0xFC
	.4byte fn_806A8030+0x9C
	.4byte fn_806A8030+0xA8
	.4byte fn_806A8030+0xB0
	.4byte fn_806A8030+0xB8
	.4byte fn_806A8030+0xC0
	.4byte fn_806A8030+0xC8
	.4byte fn_806A8030+0xD0
	.4byte fn_806A8030+0xD8
	.4byte fn_806A8030+0xD8
	.4byte fn_806A8030+0xD8
	.4byte fn_806A8030+0xC8
	.4byte fn_806A8030+0xC8
	.4byte fn_806A8030+0xE0
	.4byte fn_806A8030+0xE0
	.4byte fn_806A8030+0xE8
	.4byte fn_806A8030+0xF0
	.4byte fn_806A8030+0xF8
	.4byte fn_806A8030+0xFC
	.4byte fn_806A8030+0xFC
	.4byte fn_806A8030+0x9C
.endobj jumptable_807BD0D0

# .data:0x2348 | 0x807BD140 | size: 0x8
.obj lbl_807BD140, global
	.string "dwctest"
.endobj lbl_807BD140

# .data:0x2350 | 0x807BD148 | size: 0x7
.obj lbl_807BD148, global
	.string "d4q9GZ"
.endobj lbl_807BD148

# .data:0x2357 | 0x807BD14F | size: 0x1
.obj gap_07_807BD14F_data, global
.hidden gap_07_807BD14F_data
	.byte 0x00
.endobj gap_07_807BD14F_data

# .data:0x2358 | 0x807BD150 | size: 0x14
.obj lbl_807BD150, global
	.string "spCntl->mAddr = %s\n"
.endobj lbl_807BD150

# .data:0x236C | 0x807BD164 | size: 0xF
.obj lbl_807BD164, global
	.string "dwc_lanmatch.c"
.endobj lbl_807BD164

# .data:0x237B | 0x807BD173 | size: 0x1
.obj gap_07_807BD173_data, global
.hidden gap_07_807BD173_data
	.byte 0x00
.endobj gap_07_807BD173_data

# .data:0x237C | 0x807BD174 | size: 0xE
.obj lbl_807BD174, global
	.string "cn_sockerror\n"
.endobj lbl_807BD174

# .data:0x238A | 0x807BD182 | size: 0x2
.obj gap_07_807BD182_data, global
.hidden gap_07_807BD182_data
	.2byte 0x0000
.endobj gap_07_807BD182_data

# .data:0x238C | 0x807BD184 | size: 0x17
.obj lbl_807BD184, global
	.string "CBServerBrowsing:(%d)\n"
.endobj lbl_807BD184

# .data:0x23A3 | 0x807BD19B | size: 0x1
.obj gap_07_807BD19B_data, global
.hidden gap_07_807BD19B_data
	.byte 0x00
.endobj gap_07_807BD19B_data

# .data:0x23A4 | 0x807BD19C | size: 0x14
.obj lbl_807BD19C, global
	.string "connect to %s (%d)\n"
.endobj lbl_807BD19C

# .data:0x23B8 | 0x807BD1B0 | size: 0xD
.obj lbl_807BD1B0, global
	.string "%d complete\n"
.endobj lbl_807BD1B0

# .data:0x23C5 | 0x807BD1BD | size: 0x3
.obj gap_07_807BD1BD_data, global
.hidden gap_07_807BD1BD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD1BD_data

# .data:0x23C8 | 0x807BD1C0 | size: 0x30
.obj lbl_807BD1C0, global
	.4byte 0x636E5F63
	.4byte 0x6C6F7365
	.4byte 0x64202825
	.4byte 0x64290A00
	.4byte 0x61636365
	.4byte 0x70740000
	.4byte 0x72656A65
	.4byte 0x63740000
	.4byte 0x25732025
	.4byte 0x73202825
	.4byte 0x64290A00
	.4byte 0x00000000
.endobj lbl_807BD1C0

# .data:0x23F8 | 0x807BD1F0 | size: 0x40
.obj jumptable_807BD1F0, global
	.4byte fn_806A9CA0+0x474
	.4byte fn_806A9CA0+0x464
	.4byte fn_806A9CA0+0x454
	.4byte fn_806A9CA0+0x444
	.4byte fn_806A9CA0+0x434
	.4byte fn_806A9CA0+0x424
	.4byte fn_806A9CA0+0x414
	.4byte fn_806A9CA0+0x404
	.4byte fn_806A9CA0+0x3F4
	.4byte fn_806A9CA0+0x3E4
	.4byte fn_806A9CA0+0x3D4
	.4byte fn_806A9CA0+0x3C4
	.4byte fn_806A9CA0+0x3B4
	.4byte fn_806A9CA0+0x3A4
	.4byte fn_806A9CA0+0x394
	.4byte fn_806A9CA0+0x384
.endobj jumptable_807BD1F0

# .data:0x2438 | 0x807BD230 | size: 0x24
.obj lbl_807BD230, global
	.string " get console friend code = %016lld\n"
.endobj lbl_807BD230

# .data:0x245C | 0x807BD254 | size: 0x25
.obj lbl_807BD254, global
	.string " failed to get console friend code.\n"
.endobj lbl_807BD254

# .data:0x2481 | 0x807BD279 | size: 0x3
.obj gap_07_807BD279_data, global
.hidden gap_07_807BD279_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD279_data

# .data:0x2484 | 0x807BD27C | size: 0x4
.obj lbl_807BD27C, global
	.string "Wii"
.endobj lbl_807BD27C

# .data:0x2488 | 0x807BD280 | size: 0x9
.obj lbl_807BD280, global
	.string "%c%s%c%s"
.endobj lbl_807BD280

# .data:0x2491 | 0x807BD289 | size: 0x7
.obj gap_07_807BD289_data, global
.hidden gap_07_807BD289_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD289_data

# .data:0x2498 | 0x807BD290 | size: 0x4
.obj lbl_807BD290, global
	.string "SCM"
.endobj lbl_807BD290

# .data:0x249C | 0x807BD294 | size: 0x4
.obj lbl_807BD294, global
	.string "SCN"
.endobj lbl_807BD294

# .data:0x24A0 | 0x807BD298 | size: 0x2C
.obj lbl_807BD298, global
	.string "DWC_DeleteBuddyFriendData : Deleted buddy.\n"
.endobj lbl_807BD298

# .data:0x24CC | 0x807BD2C4 | size: 0x2E
.obj lbl_807BD2C4, global
	.string "DWC_DeleteBuddyFriendData : Only clear data.\n"
.endobj lbl_807BD2C4

# .data:0x24FA | 0x807BD2F2 | size: 0x2
.obj gap_07_807BD2F2_data, global
.hidden gap_07_807BD2F2_data
	.2byte 0x0000
.endobj gap_07_807BD2F2_data

# .data:0x24FC | 0x807BD2F4 | size: 0x29
.obj lbl_807BD2F4, global
	.string "Connection to the stats server was lost\n"
.endobj lbl_807BD2F4

# .data:0x2525 | 0x807BD31D | size: 0x3
.obj gap_07_807BD31D_data, global
.hidden gap_07_807BD31D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD31D_data

# .data:0x2528 | 0x807BD320 | size: 0x11
.obj lbl_807BD320, global
	.string "DWC_Alloc Error\n"
.endobj lbl_807BD320

# .data:0x2539 | 0x807BD331 | size: 0x7
.obj gap_07_807BD331_data, global
.hidden gap_07_807BD331_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD331_data

# .data:0x2540 | 0x807BD338 | size: 0x20
.obj lbl_807BD338, global
	.string "Received buddy request from %u\n"
.endobj lbl_807BD338

# .data:0x2560 | 0x807BD358 | size: 0x19
.obj lbl_807BD358, global
	.string "Begin to search gpInfo.\n"
.endobj lbl_807BD358

# .data:0x2579 | 0x807BD371 | size: 0x3
.obj gap_07_807BD371_data, global
.hidden gap_07_807BD371_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD371_data

# .data:0x257C | 0x807BD374 | size: 0x164
.obj lbl_807BD374, global
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20627564
	.4byte 0x64792061
	.4byte 0x75746865
	.4byte 0x6E746963
	.4byte 0x61746564
	.4byte 0x206D6573
	.4byte 0x73616765
	.4byte 0x2066726F
	.4byte 0x6D202575
	.4byte 0x2E0A0000
	.4byte 0x52454356
	.4byte 0x20757064
	.4byte 0x61746520
	.4byte 0x66726965
	.4byte 0x6E642073
	.4byte 0x74617475
	.4byte 0x732E2070
	.4byte 0x3A25640A
	.4byte 0x00000000
	.4byte 0x20427574
	.4byte 0x2066726F
	.4byte 0x6D20616C
	.4byte 0x72656164
	.4byte 0x79206465
	.4byte 0x6C657465
	.4byte 0x64206672
	.4byte 0x69656E64
	.4byte 0x2E0A0000
	.4byte 0x2064656C
	.4byte 0x65746520
	.4byte 0x66726965
	.4byte 0x6E642061
	.4byte 0x6761696E
	.4byte 0x2E0A0000
	.4byte 0x4368616E
	.4byte 0x67652047
	.4byte 0x50207374
	.4byte 0x61747573
	.4byte 0x2D3E7374
	.4byte 0x61747573
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x4368616E
	.4byte 0x67652047
	.4byte 0x50207374
	.4byte 0x61747573
	.4byte 0x2D3E7374
	.4byte 0x61747573
	.4byte 0x53747269
	.4byte 0x6E672025
	.4byte 0x730A0000
	.4byte 0x4368616E
	.4byte 0x67652047
	.4byte 0x50207374
	.4byte 0x61747573
	.4byte 0x2D3E6C6F
	.4byte 0x63617469
	.4byte 0x6F6E5374
	.4byte 0x72696E67
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x67704765
	.4byte 0x744E756D
	.4byte 0x42756464
	.4byte 0x69657320
	.4byte 0x2D3E2025
	.4byte 0x640A0000
	.4byte 0x44656C65
	.4byte 0x74656420
	.4byte 0x62756464
	.4byte 0x79202575
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x53656E64
	.4byte 0x20627564
	.4byte 0x64792072
	.4byte 0x65717565
	.4byte 0x73742074
	.4byte 0x6F202575
	.4byte 0x0A000000
	.4byte 0x43616C6C
	.4byte 0x65642067
	.4byte 0x7050726F
	.4byte 0x66696C65
	.4byte 0x53656172
	.4byte 0x63682829
	.4byte 0x2E0A0000
.endobj lbl_807BD374

# .data:0x26E0 | 0x807BD4D8 | size: 0x2F
.obj lbl_807BD4D8, global
	.string "Found same friend in the list [%d] & [%d], %d\n"
.endobj lbl_807BD4D8

# .data:0x270F | 0x807BD507 | size: 0x1
.obj gap_07_807BD507_data, global
.hidden gap_07_807BD507_data
	.byte 0x00
.endobj gap_07_807BD507_data

# .data:0x2710 | 0x807BD508 | size: 0x2B0
.obj lbl_807BD508, global
	.4byte 0x46726965
	.4byte 0x6E642C20
	.4byte 0x47502065
	.4byte 0x72726F72
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x46726965
	.4byte 0x6E642C20
	.4byte 0x70657273
	.4byte 0x69737465
	.4byte 0x6E742065
	.4byte 0x72726F72
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x50726F66
	.4byte 0x696C6553
	.4byte 0x65617263
	.4byte 0x683A206E
	.4byte 0x756D3A25
	.4byte 0x64206D3A
	.4byte 0x25780A00
	.4byte 0x48617070
	.4byte 0x6E656420
	.4byte 0x746F2066
	.4byte 0x696E6420
	.4byte 0x25642070
	.4byte 0x726F6669
	.4byte 0x6C65732E
	.4byte 0x0A000000
	.4byte 0x6D6F7265
	.4byte 0x2070726F
	.4byte 0x66696C65
	.4byte 0x73207769
	.4byte 0x6C6C2063
	.4byte 0x6F6D652E
	.4byte 0x2E2E0A00
	.4byte 0x20455252
	.4byte 0x4F523A20
	.4byte 0x47657449
	.4byte 0x6E666F20
	.4byte 0x5265712E
	.4byte 0x20776879
	.4byte 0x3F3F3F20
	.4byte 0x3A202564
	.4byte 0x0A000000
	.4byte 0x47657449
	.4byte 0x6E666F20
	.4byte 0x5265713A
	.4byte 0x2070726F
	.4byte 0x66696C65
	.4byte 0x49442025
	.4byte 0x752C206C
	.4byte 0x6173746E
	.4byte 0x616D6520
	.4byte 0x27257327
	.4byte 0x2E0A0000
	.4byte 0x41757468
	.4byte 0x20627564
	.4byte 0x64792072
	.4byte 0x65717565
	.4byte 0x73742066
	.4byte 0x726F6D20
	.4byte 0x25752C20
	.4byte 0x66726965
	.4byte 0x6E645B25
	.4byte 0x645D6D70
	.4byte 0x2E0A0000
	.4byte 0x25632563
	.4byte 0x25632563
	.4byte 0x00000000
	.4byte 0x41757468
	.4byte 0x20627564
	.4byte 0x64792072
	.4byte 0x65717565
	.4byte 0x73742066
	.4byte 0x726F6D20
	.4byte 0x25752C20
	.4byte 0x66726965
	.4byte 0x6E645B25
	.4byte 0x645D6773
	.4byte 0x2E0A0000
	.4byte 0x44656E69
	.4byte 0x65642062
	.4byte 0x75646479
	.4byte 0x20726571
	.4byte 0x75657374
	.4byte 0x2066726F
	.4byte 0x6D202575
	.4byte 0x2E0A0000
	.4byte 0x20455252
	.4byte 0x4F523A20
	.4byte 0x47657449
	.4byte 0x6E666F20
	.4byte 0x41757468
	.4byte 0x2E207768
	.4byte 0x793F3F3F
	.4byte 0x203A2025
	.4byte 0x640A0000
	.4byte 0x47657449
	.4byte 0x6E666F20
	.4byte 0x41757468
	.4byte 0x3A207072
	.4byte 0x6F66696C
	.4byte 0x65494420
	.4byte 0x25752C20
	.4byte 0x6C617374
	.4byte 0x6E616D65
	.4byte 0x20272573
	.4byte 0x272E0A00
	.4byte 0x45737461
	.4byte 0x626C6973
	.4byte 0x68656420
	.4byte 0x62756464
	.4byte 0x79207769
	.4byte 0x74682025
	.4byte 0x752C2066
	.4byte 0x7269656E
	.4byte 0x645B2564
	.4byte 0x5D6D702E
	.4byte 0x0A000000
	.4byte 0x54686973
	.4byte 0x2070726F
	.4byte 0x66696C65
	.4byte 0x20697320
	.4byte 0x616C7265
	.4byte 0x61647920
	.4byte 0x6D792066
	.4byte 0x7269656E
	.4byte 0x645B2564
	.4byte 0x5D2E0A00
	.4byte 0x45737461
	.4byte 0x626C6973
	.4byte 0x68656420
	.4byte 0x62756464
	.4byte 0x79207769
	.4byte 0x74682025
	.4byte 0x752C2066
	.4byte 0x7269656E
	.4byte 0x645B2564
	.4byte 0x5D67732E
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x4E6F7420
	.4byte 0x45737461
	.4byte 0x626C6973
	.4byte 0x68656420
	.4byte 0x62756464
	.4byte 0x79207769
	.4byte 0x74682025
	.4byte 0x752E0A00
	.4byte 0x53746174
	.4byte 0x73207365
	.4byte 0x72766572
	.4byte 0x20617574
	.4byte 0x68656E74
	.4byte 0x69636174
	.4byte 0x696F6E20
	.4byte 0x6661696C
	.4byte 0x65642E0A
	.4byte 0x00000000
	.4byte 0x25730A00
	.4byte 0x00000000
	.4byte 0x53746174
	.4byte 0x73207365
	.4byte 0x72766572
	.4byte 0x20617574
	.4byte 0x68656E74
	.4byte 0x69636174
	.4byte 0x696F6E20
	.4byte 0x73756363
	.4byte 0x65656465
	.4byte 0x642E0A00
.endobj lbl_807BD508

# .data:0x29C0 | 0x807BD7B8 | size: 0x22
.obj lbl_807BD7B8, global
	.string "Saved data to persistent server.\n"
.endobj lbl_807BD7B8

# .data:0x29E2 | 0x807BD7DA | size: 0x2
.obj gap_07_807BD7DA_data, global
.hidden gap_07_807BD7DA_data
	.2byte 0x0000
.endobj gap_07_807BD7DA_data

# .data:0x29E4 | 0x807BD7DC | size: 0x21
.obj lbl_807BD7DC, global
	.string "Failed to save persistent data.\n"
.endobj lbl_807BD7DC

# .data:0x2A05 | 0x807BD7FD | size: 0x3
.obj gap_07_807BD7FD_data, global
.hidden gap_07_807BD7FD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD7FD_data

# .data:0x2A08 | 0x807BD800 | size: 0x2C
.obj lbl_807BD800, global
	.string " ERROR: GetReverseBuddies Req. why??? : %d\n"
.endobj lbl_807BD800

# .data:0x2A34 | 0x807BD82C | size: 0x25
.obj lbl_807BD82C, global
	.string "GetReverseBuddies   profileID = %u \n"
.endobj lbl_807BD82C

# .data:0x2A59 | 0x807BD851 | size: 0x7
.obj gap_07_807BD851_data, global
.hidden gap_07_807BD851_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD851_data

# .data:0x2A60 | 0x807BD858 | size: 0xD4
.obj lbl_807BD858, global
	.4byte 0x4C6F6769
	.4byte 0x6E20496E
	.4byte 0x69740A00
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A0A00
	.4byte 0x75736572
	.4byte 0x64617461
	.4byte 0x3A3A0A00
	.4byte 0x00000000
	.4byte 0x20207073
	.4byte 0x6575646F
	.4byte 0x20202020
	.4byte 0x55736572
	.4byte 0x49442020
	.4byte 0x203A2025
	.4byte 0x3031366C
	.4byte 0x6C780A00
	.4byte 0x20207073
	.4byte 0x6575646F
	.4byte 0x20202020
	.4byte 0x506C6179
	.4byte 0x65724944
	.4byte 0x203A2025
	.4byte 0x3038780A
	.4byte 0x00000000
	.4byte 0x20206175
	.4byte 0x7468656E
	.4byte 0x74696320
	.4byte 0x55736572
	.4byte 0x49442020
	.4byte 0x203A2025
	.4byte 0x3031366C
	.4byte 0x6C780A00
	.4byte 0x20206175
	.4byte 0x7468656E
	.4byte 0x74696320
	.4byte 0x506C6179
	.4byte 0x65724944
	.4byte 0x203A2025
	.4byte 0x3038780A
	.4byte 0x00000000
	.4byte 0x636F6E73
	.4byte 0x6F6C653A
	.4byte 0x3A0A0000
.endobj lbl_807BD858

# .data:0x2B34 | 0x807BD92C | size: 0x1D
.obj lbl_807BD92C, global
	.string "Ignore invalid login state.\n"
.endobj lbl_807BD92C

# .data:0x2B51 | 0x807BD949 | size: 0x3
.obj gap_07_807BD949_data, global
.hidden gap_07_807BD949_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BD949_data

# .data:0x2B54 | 0x807BD94C | size: 0x384
.obj lbl_807BD94C, global
	.4byte 0x4C6F6769
	.4byte 0x6E2C2047
	.4byte 0x50206572
	.4byte 0x726F7220
	.4byte 0x25640A00
	.4byte 0x46696E69
	.4byte 0x73686564
	.4byte 0x20636F6E
	.4byte 0x6E656374
	.4byte 0x696E6720
	.4byte 0x746F2047
	.4byte 0x50207365
	.4byte 0x72766572
	.4byte 0x2C207265
	.4byte 0x73756C74
	.4byte 0x203D2025
	.4byte 0x640A0000
	.4byte 0x25733A25
	.4byte 0x3031366C
	.4byte 0x6C750000
	.4byte 0x20206773
	.4byte 0x2070726F
	.4byte 0x66696C65
	.4byte 0x20696420
	.4byte 0x69732076
	.4byte 0x616C6964
	.4byte 0x2E0A0000
	.4byte 0x20206773
	.4byte 0x2070726F
	.4byte 0x66696C65
	.4byte 0x20696420
	.4byte 0x69732069
	.4byte 0x6E76616C
	.4byte 0x69642E0A
	.4byte 0x00000000
	.4byte 0x2020596F
	.4byte 0x75206361
	.4byte 0x6E277420
	.4byte 0x75736520
	.4byte 0x636F7069
	.4byte 0x65642075
	.4byte 0x73657264
	.4byte 0x6174612E
	.4byte 0x0A000000
	.4byte 0x2020506C
	.4byte 0x65617365
	.4byte 0x2066696E
	.4byte 0x64204457
	.4byte 0x435F416C
	.4byte 0x6C6F774D
	.4byte 0x6F766564
	.4byte 0x55736572
	.4byte 0x44617461
	.4byte 0x28292E0A
	.4byte 0x00000000
	.4byte 0x53746172
	.4byte 0x74205265
	.4byte 0x6D6F7465
	.4byte 0x20417574
	.4byte 0x680A0000
	.4byte 0x2020486D
	.4byte 0x6D2E2E20
	.4byte 0x796F7520
	.4byte 0x616C7265
	.4byte 0x61647920
	.4byte 0x68617665
	.4byte 0x20617574
	.4byte 0x68656E74
	.4byte 0x6963206C
	.4byte 0x6F67696E
	.4byte 0x2069642E
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x2020486D
	.4byte 0x6D2E2E20
	.4byte 0x796F7520
	.4byte 0x6E656564
	.4byte 0x20746F20
	.4byte 0x63726561
	.4byte 0x74652061
	.4byte 0x75746865
	.4byte 0x6E746963
	.4byte 0x206C6F67
	.4byte 0x696E2069
	.4byte 0x642E0A00
	.4byte 0x20202020
	.4byte 0x486D6D2E
	.4byte 0x2E20796F
	.4byte 0x75206172
	.4byte 0x65207468
	.4byte 0x65206669
	.4byte 0x72737420
	.4byte 0x74696D65
	.4byte 0x20746F20
	.4byte 0x67657420
	.4byte 0x61757468
	.4byte 0x656E7469
	.4byte 0x63206C6F
	.4byte 0x67696E20
	.4byte 0x69642E00
	.4byte 0x2D20636F
	.4byte 0x70792074
	.4byte 0x656D7020
	.4byte 0x6C6F6769
	.4byte 0x6E696420
	.4byte 0x66726F6D
	.4byte 0x20707365
	.4byte 0x75646F20
	.4byte 0x6C6F6769
	.4byte 0x6E206964
	.4byte 0x0A000000
	.4byte 0x2D206372
	.4byte 0x65617465
	.4byte 0x2074656D
	.4byte 0x70206C6F
	.4byte 0x67696E69
	.4byte 0x64206672
	.4byte 0x6F6D2063
	.4byte 0x6F6E736F
	.4byte 0x6C652075
	.4byte 0x73657220
	.4byte 0x69640A00
	.4byte 0x20202020
	.4byte 0x486D6D2E
	.4byte 0x2E20796F
	.4byte 0x75206172
	.4byte 0x65204E4F
	.4byte 0x54207468
	.4byte 0x65206669
	.4byte 0x72737420
	.4byte 0x74696D65
	.4byte 0x7320746F
	.4byte 0x20676574
	.4byte 0x20617574
	.4byte 0x68656E74
	.4byte 0x6963206C
	.4byte 0x6F67696E
	.4byte 0x2069642E
	.4byte 0x0A000000
	.4byte 0x202A2A2A
	.4byte 0x20417574
	.4byte 0x6820446F
	.4byte 0x6E650A00
	.4byte 0x53756363
	.4byte 0x65656465
	.4byte 0x6420746F
	.4byte 0x2072656D
	.4byte 0x6F746520
	.4byte 0x61757468
	.4byte 0x656E7469
	.4byte 0x63617469
	.4byte 0x6F6E2E0A
	.4byte 0x00000000
	.4byte 0x202A2A2A
	.4byte 0x20417574
	.4byte 0x68204572
	.4byte 0x726F7220
	.4byte 0x5B25645D
	.4byte 0x0A000000
	.4byte 0x20202020
	.4byte 0x6C6F6769
	.4byte 0x6E206964
	.4byte 0x20697320
	.4byte 0x61757468
	.4byte 0x656E7469
	.4byte 0x63617465
	.4byte 0x642E2073
	.4byte 0x6574206C
	.4byte 0x6173746E
	.4byte 0x616D6520
	.4byte 0x6669656C
	.4byte 0x642E0A00
	.4byte 0x20202020
	.4byte 0x63616C6C
	.4byte 0x20677053
	.4byte 0x6574496E
	.4byte 0x666F730A
	.4byte 0x00000000
	.4byte 0x20202020
	.4byte 0x74686973
	.4byte 0x206C6F67
	.4byte 0x696E2069
	.4byte 0x64206973
	.4byte 0x20757365
	.4byte 0x64206279
	.4byte 0x20616E79
	.4byte 0x626F6479
	.4byte 0x2E2E2E2E
	.4byte 0x20726574
	.4byte 0x72792E0A
	.4byte 0x00000000
	.4byte 0x20202020
	.4byte 0x4163636F
	.4byte 0x756E7420
	.4byte 0x69732063
	.4byte 0x72656174
	.4byte 0x6564203A
	.4byte 0x20257328
	.4byte 0x25732920
	.4byte 0x2D202564
	.4byte 0x2E0A0000
	.4byte 0x20202020
	.4byte 0x4C6F6769
	.4byte 0x6E206275
	.4byte 0x74206770
	.4byte 0x53657449
	.4byte 0x6E666F20
	.4byte 0x6661696C
	.4byte 0x65642E2E
	.4byte 0x2E202573
	.4byte 0x203A2025
	.4byte 0x64207265
	.4byte 0x74727920
	.4byte 0x67704765
	.4byte 0x74496E66
	.4byte 0x6F2E0A00
	.4byte 0x00000000
	.4byte 0x20455252
	.4byte 0x4F523A20
	.4byte 0x67704765
	.4byte 0x74496E66
	.4byte 0x6F2E2077
	.4byte 0x68793F3F
	.4byte 0x3F203A20
	.4byte 0x25640A00
.endobj lbl_807BD94C

# .data:0x2ED8 | 0x807BDCD0 | size: 0x27
.obj lbl_807BDCD0, global
	.string "!!DWC_InitFriendsMatch() was called!!\n"
.endobj lbl_807BDCD0

# .data:0x2EFF | 0x807BDCF7 | size: 0x1
.obj gap_07_807BDCF7_data, global
.hidden gap_07_807BDCF7_data
	.byte 0x00
.endobj gap_07_807BDCF7_data

# .data:0x2F00 | 0x807BDCF8 | size: 0x3C
.obj lbl_807BDCF8, global
	.string "!!DWC_ShutdownFriendsMatch() was called!! stpDwcCnt = 0x%x\n"
.endobj lbl_807BDCF8

# .data:0x2F3C | 0x807BDD34 | size: 0x2A
.obj lbl_807BDD34, global
	.string "Confirmed the backend of GameSpy server.\n"
.endobj lbl_807BDD34

# .data:0x2F66 | 0x807BDD5E | size: 0x2
.obj gap_07_807BDD5E_data, global
.hidden gap_07_807BDD5E_data
	.2byte 0x0000
.endobj gap_07_807BDD5E_data

# .data:0x2F68 | 0x807BDD60 | size: 0x54
.obj lbl_807BDD60, global
	.4byte 0x64776320
	.4byte 0x73746174
	.4byte 0x65206368
	.4byte 0x616E6765
	.4byte 0x64202573
	.4byte 0x202D3E20
	.4byte 0x25730A00
	.4byte 0x21214457
	.4byte 0x435F4C6F
	.4byte 0x67696E41
	.4byte 0x73796E63
	.4byte 0x28292077
	.4byte 0x61732063
	.4byte 0x616C6C65
	.4byte 0x6421210A
	.4byte 0x00000000
	.4byte 0x696E6761
	.4byte 0x6D65736E
	.4byte 0x20697320
	.4byte 0x4E554C4C
	.4byte 0x21210A00
.endobj lbl_807BDD60

# .data:0x2FBC | 0x807BDDB4 | size: 0x1AC
.obj lbl_807BDDB4, global
	.4byte 0x42757420
	.4byte 0x69676E6F
	.4byte 0x7265642E
	.4byte 0x0A000000
	.4byte 0x6770636D
	.4byte 0x2E67732E
	.4byte 0x6E696E74
	.4byte 0x656E646F
	.4byte 0x77696669
	.4byte 0x2E6E6574
	.4byte 0x00000000
	.4byte 0x67707370
	.4byte 0x2E67732E
	.4byte 0x6E696E74
	.4byte 0x656E646F
	.4byte 0x77696669
	.4byte 0x2E6E6574
	.4byte 0x00000000
	.4byte 0x67616D65
	.4byte 0x73746174
	.4byte 0x732E6773
	.4byte 0x2E6E696E
	.4byte 0x74656E64
	.4byte 0x6F776966
	.4byte 0x692E6E65
	.4byte 0x74000000
	.4byte 0x67616D65
	.4byte 0x73746174
	.4byte 0x73322E67
	.4byte 0x732E6E69
	.4byte 0x6E74656E
	.4byte 0x646F7769
	.4byte 0x66692E6E
	.4byte 0x65740000
	.4byte 0x25732E61
	.4byte 0x7661696C
	.4byte 0x61626C65
	.4byte 0x2E67732E
	.4byte 0x6E696E74
	.4byte 0x656E646F
	.4byte 0x77696669
	.4byte 0x2E6E6574
	.4byte 0x00000000
	.4byte 0x25732E6E
	.4byte 0x61746E65
	.4byte 0x67312E67
	.4byte 0x732E6E69
	.4byte 0x6E74656E
	.4byte 0x646F7769
	.4byte 0x66692E6E
	.4byte 0x65740000
	.4byte 0x25732E6E
	.4byte 0x61746E65
	.4byte 0x67322E67
	.4byte 0x732E6E69
	.4byte 0x6E74656E
	.4byte 0x646F7769
	.4byte 0x66692E6E
	.4byte 0x65740000
	.4byte 0x25732E6E
	.4byte 0x61746E65
	.4byte 0x67332E67
	.4byte 0x732E6E69
	.4byte 0x6E74656E
	.4byte 0x646F7769
	.4byte 0x66692E6E
	.4byte 0x65740000
	.4byte 0x25732E6D
	.4byte 0x61737465
	.4byte 0x722E6773
	.4byte 0x2E6E696E
	.4byte 0x74656E64
	.4byte 0x6F776966
	.4byte 0x692E6E65
	.4byte 0x74000000
	.4byte 0x25732E67
	.4byte 0x616D6573
	.4byte 0x74617473
	.4byte 0x2E67732E
	.4byte 0x6E696E74
	.4byte 0x656E646F
	.4byte 0x77696669
	.4byte 0x2E6E6574
	.4byte 0x00000000
	.4byte 0x25732E67
	.4byte 0x616D6573
	.4byte 0x74617473
	.4byte 0x322E6773
	.4byte 0x2E6E696E
	.4byte 0x74656E64
	.4byte 0x6F776966
	.4byte 0x692E6E65
	.4byte 0x74000000
	.4byte 0x25732E6D
	.4byte 0x7325642E
	.4byte 0x67732E6E
	.4byte 0x696E7465
	.4byte 0x6E646F77
	.4byte 0x6966692E
	.4byte 0x6E657400
	.4byte 0x4661696C
	.4byte 0x65642074
	.4byte 0x6F206361
	.4byte 0x63686520
	.4byte 0x444E5320
	.4byte 0x71756572
	.4byte 0x792E0A00
.endobj lbl_807BDDB4

# .data:0x3168 | 0x807BDF60 | size: 0x1C8
.obj lbl_807BDF60, global
	.4byte 0x21214457
	.4byte 0x435F5570
	.4byte 0x64617465
	.4byte 0x53657276
	.4byte 0x65727341
	.4byte 0x73796E63
	.4byte 0x28292077
	.4byte 0x61732063
	.4byte 0x616C6C65
	.4byte 0x6421210A
	.4byte 0x00000000
	.4byte 0x21214457
	.4byte 0x435F436F
	.4byte 0x6E6E6563
	.4byte 0x74546F41
	.4byte 0x6E79626F
	.4byte 0x64794173
	.4byte 0x796E6328
	.4byte 0x29207761
	.4byte 0x73206361
	.4byte 0x6C6C6564
	.4byte 0x21210A00
	.4byte 0x21214457
	.4byte 0x435F436F
	.4byte 0x6E6E6563
	.4byte 0x74546F46
	.4byte 0x7269656E
	.4byte 0x64734173
	.4byte 0x796E6328
	.4byte 0x29207761
	.4byte 0x73206361
	.4byte 0x6C6C6564
	.4byte 0x21210A00
	.4byte 0x21214457
	.4byte 0x435F5365
	.4byte 0x74757047
	.4byte 0x616D6553
	.4byte 0x65727665
	.4byte 0x72282920
	.4byte 0x77617320
	.4byte 0x63616C6C
	.4byte 0x65642121
	.4byte 0x0A000000
	.4byte 0x21214457
	.4byte 0x435F436F
	.4byte 0x6E6E6563
	.4byte 0x74546F47
	.4byte 0x616D6553
	.4byte 0x65727665
	.4byte 0x72417379
	.4byte 0x6E632829
	.4byte 0x20776173
	.4byte 0x2063616C
	.4byte 0x6C656421
	.4byte 0x210A0000
	.4byte 0x70696420
	.4byte 0x25642069
	.4byte 0x73206E6F
	.4byte 0x74206275
	.4byte 0x6464792E
	.4byte 0x0A000000
	.4byte 0x70696420
	.4byte 0x25642069
	.4byte 0x73206E6F
	.4byte 0x74206761
	.4byte 0x6D652073
	.4byte 0x65727665
	.4byte 0x722E0A00
	.4byte 0x70696420
	.4byte 0x25642069
	.4byte 0x73206C6F
	.4byte 0x636B6564
	.4byte 0x2E0A0000
	.4byte 0x53434D00
	.4byte 0x53434E00
	.4byte 0x70696420
	.4byte 0x25642069
	.4byte 0x73206675
	.4byte 0x6C6C7920
	.4byte 0x6F636375
	.4byte 0x70696564
	.4byte 0x2E0A0000
	.4byte 0x21214457
	.4byte 0x435F436F
	.4byte 0x6E6E6563
	.4byte 0x74546F47
	.4byte 0x616D6553
	.4byte 0x65727665
	.4byte 0x72427947
	.4byte 0x726F7570
	.4byte 0x49442829
	.4byte 0x20776173
	.4byte 0x2063616C
	.4byte 0x6C656421
	.4byte 0x210A0000
	.4byte 0x21214457
	.4byte 0x435F436C
	.4byte 0x6F736541
	.4byte 0x6C6C436F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x73486172
	.4byte 0x64282920
	.4byte 0x77617320
	.4byte 0x63616C6C
	.4byte 0x65642121
	.4byte 0x0A000000
	.4byte 0x436C6F73
	.4byte 0x65642030
	.4byte 0x20636F6E
	.4byte 0x6E656374
	.4byte 0x696F6E2E
	.4byte 0x0A000000
	.4byte 0x00000000
.endobj lbl_807BDF60

# .data:0x3330 | 0x807BE128 | size: 0x30
.obj lbl_807BE128, global
	.string "*** DWC_GetServerAID first node is NULL!!! ***\n"
.endobj lbl_807BE128

# .data:0x3360 | 0x807BE158 | size: 0x1C
.obj lbl_807BE158, global
	.string "gt2Socket is already made.\n"
.endobj lbl_807BE158

# .data:0x337C | 0x807BE174 | size: 0x1B
.obj lbl_807BE174, global
	.string "--- Private port = %d ---\n"
.endobj lbl_807BE174

# .data:0x3397 | 0x807BE18F | size: 0x1
.obj gap_07_807BE18F_data, global
.hidden gap_07_807BE18F_data
	.byte 0x00
.endobj gap_07_807BE18F_data

# .data:0x3398 | 0x807BE190 | size: 0xF
.obj lbl_807BE190, global
	.string "DWC_STATE_INIT"
.endobj lbl_807BE190

# .data:0x33A7 | 0x807BE19F | size: 0x1
.obj gap_07_807BE19F_data, global
.hidden gap_07_807BE19F_data
	.byte 0x00
.endobj gap_07_807BE19F_data

# .data:0x33A8 | 0x807BE1A0 | size: 0x1A
.obj lbl_807BE1A0, global
	.string "DWC_STATE_AVAILABLE_CHECK"
.endobj lbl_807BE1A0

# .data:0x33C2 | 0x807BE1BA | size: 0x6
.obj gap_07_807BE1BA_data, global
.hidden gap_07_807BE1BA_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807BE1BA_data

# .data:0x33C8 | 0x807BE1C0 | size: 0x10
.obj lbl_807BE1C0, global
	.string "DWC_STATE_LOGIN"
.endobj lbl_807BE1C0

# .data:0x33D8 | 0x807BE1D0 | size: 0x11
.obj lbl_807BE1D0, global
	.string "DWC_STATE_ONLINE"
.endobj lbl_807BE1D0

# .data:0x33E9 | 0x807BE1E1 | size: 0x3
.obj gap_07_807BE1E1_data, global
.hidden gap_07_807BE1E1_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BE1E1_data

# .data:0x33EC | 0x807BE1E4 | size: 0x13
.obj lbl_807BE1E4, global
	.string "DWC_STATE_MATCHING"
.endobj lbl_807BE1E4

# .data:0x33FF | 0x807BE1F7 | size: 0x1
.obj gap_07_807BE1F7_data, global
.hidden gap_07_807BE1F7_data
	.byte 0x00
.endobj gap_07_807BE1F7_data

# .data:0x3400 | 0x807BE1F8 | size: 0x14
.obj lbl_807BE1F8, global
	.string "DWC_STATE_CONNECTED"
.endobj lbl_807BE1F8

# .data:0x3414 | 0x807BE20C | size: 0x13
.obj lbl_807BE20C, global
	.string "Main, GP error %d\n"
.endobj lbl_807BE20C

# .data:0x3427 | 0x807BE21F | size: 0x1
.obj gap_07_807BE21F_data, global
.hidden gap_07_807BE21F_data
	.byte 0x00
.endobj gap_07_807BE21F_data

# .data:0x3428 | 0x807BE220 | size: 0x1B
.obj lbl_807BE220, global
	.string "Not handle an error here.\n"
.endobj lbl_807BE220

# .data:0x3443 | 0x807BE23B | size: 0x1
.obj gap_07_807BE23B_data, global
.hidden gap_07_807BE23B_data
	.byte 0x00
.endobj gap_07_807BE23B_data

# .data:0x3444 | 0x807BE23C | size: 0x76C
.obj lbl_807BE23C, global
	.4byte 0x4D61696E
	.4byte 0x2C204754
	.4byte 0x32206572
	.4byte 0x726F7220
	.4byte 0x25640A00
	.4byte 0x21214457
	.4byte 0x43695F43
	.4byte 0x6C6F7365
	.4byte 0x436F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E4861
	.4byte 0x72642829
	.4byte 0x20776173
	.4byte 0x2063616C
	.4byte 0x6C656421
	.4byte 0x21206169
	.4byte 0x64203D20
	.4byte 0x25642E0A
	.4byte 0x00000000
	.4byte 0x4E6F2063
	.4byte 0x6F6E6E65
	.4byte 0x6374696F
	.4byte 0x6E210A00
	.4byte 0x21214457
	.4byte 0x43695F43
	.4byte 0x6C6F7365
	.4byte 0x436F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E4861
	.4byte 0x72644269
	.4byte 0x746D6170
	.4byte 0x28292077
	.4byte 0x61732063
	.4byte 0x616C6C65
	.4byte 0x64212120
	.4byte 0x41494420
	.4byte 0x6269746D
	.4byte 0x6170203D
	.4byte 0x20307825
	.4byte 0x780A0000
	.4byte 0x5B2A2A6E
	.4byte 0x6F646520
	.4byte 0x696E666F
	.4byte 0x5D0A0000
	.4byte 0x5B253032
	.4byte 0x645D2061
	.4byte 0x6964203D
	.4byte 0x2025642C
	.4byte 0x20706964
	.4byte 0x203D2025
	.4byte 0x752C2071
	.4byte 0x72322070
	.4byte 0x75622061
	.4byte 0x64723D25
	.4byte 0x730A0000
	.4byte 0x5B2A2A75
	.4byte 0x73657220
	.4byte 0x64617461
	.4byte 0x5D0A0000
	.4byte 0x5B253032
	.4byte 0x645D2061
	.4byte 0x6964203D
	.4byte 0x20256420
	.4byte 0x20627566
	.4byte 0x5B20303D
	.4byte 0x25642031
	.4byte 0x3D256420
	.4byte 0x323D2564
	.4byte 0x20333D25
	.4byte 0x64205D0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652047
	.4byte 0x5020414C
	.4byte 0x4C524541
	.4byte 0x44595F42
	.4byte 0x55444459
	.4byte 0x206F7220
	.4byte 0x4E4F545F
	.4byte 0x42554444
	.4byte 0x59202564
	.4byte 0x2E0A0000
	.4byte 0x47505F4E
	.4byte 0x4F5F4552
	.4byte 0x524F5200
	.4byte 0x47505F4D
	.4byte 0x454D4F52
	.4byte 0x595F4552
	.4byte 0x524F5200
	.4byte 0x47505F50
	.4byte 0x4152414D
	.4byte 0x45544552
	.4byte 0x5F455252
	.4byte 0x4F520000
	.4byte 0x47505F4E
	.4byte 0x4554574F
	.4byte 0x524B5F45
	.4byte 0x52524F52
	.4byte 0x00000000
	.4byte 0x47505F53
	.4byte 0x45525645
	.4byte 0x525F4552
	.4byte 0x524F5200
	.4byte 0x556E6B6E
	.4byte 0x6F776E20
	.4byte 0x72657375
	.4byte 0x6C74210A
	.4byte 0x00000000
	.4byte 0x47505F47
	.4byte 0x454E4552
	.4byte 0x414C0000
	.4byte 0x47505F50
	.4byte 0x41525345
	.4byte 0x00000000
	.4byte 0x47505F4E
	.4byte 0x4F545F4C
	.4byte 0x4F474745
	.4byte 0x445F494E
	.4byte 0x00000000
	.4byte 0x47505F42
	.4byte 0x41445F53
	.4byte 0x4553534B
	.4byte 0x45590000
	.4byte 0x47505F44
	.4byte 0x41544142
	.4byte 0x41534500
	.4byte 0x47505F4E
	.4byte 0x4554574F
	.4byte 0x524B0000
	.4byte 0x47505F46
	.4byte 0x4F524345
	.4byte 0x445F4449
	.4byte 0x53434F4E
	.4byte 0x4E454354
	.4byte 0x00000000
	.4byte 0x47505F43
	.4byte 0x4F4E4E45
	.4byte 0x4354494F
	.4byte 0x4E5F434C
	.4byte 0x4F534544
	.4byte 0x00000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x00000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F54494D
	.4byte 0x454F5554
	.4byte 0x00000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F424144
	.4byte 0x5F4E4943
	.4byte 0x4B000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F424144
	.4byte 0x5F454D41
	.4byte 0x494C0000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F424144
	.4byte 0x5F504153
	.4byte 0x53574F52
	.4byte 0x44000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F424144
	.4byte 0x5F50524F
	.4byte 0x46494C45
	.4byte 0x00000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F50524F
	.4byte 0x46494C45
	.4byte 0x5F44454C
	.4byte 0x45544544
	.4byte 0x00000000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F434F4E
	.4byte 0x4E454354
	.4byte 0x494F4E5F
	.4byte 0x4641494C
	.4byte 0x45440000
	.4byte 0x47505F4C
	.4byte 0x4F47494E
	.4byte 0x5F534552
	.4byte 0x5645525F
	.4byte 0x41555448
	.4byte 0x5F464149
	.4byte 0x4C454400
	.4byte 0x47505F4E
	.4byte 0x45575553
	.4byte 0x45520000
	.4byte 0x47505F4E
	.4byte 0x45575553
	.4byte 0x45525F42
	.4byte 0x41445F4E
	.4byte 0x49434B00
	.4byte 0x00000000
	.4byte 0x47505F4E
	.4byte 0x45575553
	.4byte 0x45525F42
	.4byte 0x41445F50
	.4byte 0x41535357
	.4byte 0x4F524400
	.4byte 0x47505F55
	.4byte 0x50444154
	.4byte 0x45554900
	.4byte 0x47505F55
	.4byte 0x50444154
	.4byte 0x4555495F
	.4byte 0x4241445F
	.4byte 0x454D4149
	.4byte 0x4C000000
	.4byte 0x47505F4E
	.4byte 0x45575052
	.4byte 0x4F46494C
	.4byte 0x45000000
	.4byte 0x47505F4E
	.4byte 0x45575052
	.4byte 0x4F46494C
	.4byte 0x455F4241
	.4byte 0x445F4E49
	.4byte 0x434B0000
	.4byte 0x47505F4E
	.4byte 0x45575052
	.4byte 0x4F46494C
	.4byte 0x455F4241
	.4byte 0x445F4F4C
	.4byte 0x445F4E49
	.4byte 0x434B0000
	.4byte 0x47505F55
	.4byte 0x50444154
	.4byte 0x4550524F
	.4byte 0x00000000
	.4byte 0x47505F55
	.4byte 0x50444154
	.4byte 0x4550524F
	.4byte 0x5F424144
	.4byte 0x5F4E4943
	.4byte 0x4B000000
	.4byte 0x47505F41
	.4byte 0x44444255
	.4byte 0x44445900
	.4byte 0x47505F41
	.4byte 0x44444255
	.4byte 0x4444595F
	.4byte 0x4241445F
	.4byte 0x46524F4D
	.4byte 0x00000000
	.4byte 0x47505F41
	.4byte 0x44444255
	.4byte 0x4444595F
	.4byte 0x4241445F
	.4byte 0x4E455700
	.4byte 0x47505F41
	.4byte 0x44444255
	.4byte 0x4444595F
	.4byte 0x414C5245
	.4byte 0x4144595F
	.4byte 0x42554444
	.4byte 0x59000000
	.4byte 0x47505F41
	.4byte 0x55544841
	.4byte 0x44440000
	.4byte 0x47505F41
	.4byte 0x55544841
	.4byte 0x44445F42
	.4byte 0x41445F46
	.4byte 0x524F4D00
	.4byte 0x47505F41
	.4byte 0x55544841
	.4byte 0x44445F42
	.4byte 0x41445F53
	.4byte 0x49470000
	.4byte 0x47505F53
	.4byte 0x54415455
	.4byte 0x53000000
	.4byte 0x47505F42
	.4byte 0x4D000000
	.4byte 0x00000000
	.4byte 0x47505F42
	.4byte 0x4D5F4E4F
	.4byte 0x545F4255
	.4byte 0x44445900
	.4byte 0x47505F47
	.4byte 0x45545052
	.4byte 0x4F46494C
	.4byte 0x45000000
	.4byte 0x47505F47
	.4byte 0x45545052
	.4byte 0x4F46494C
	.4byte 0x455F4241
	.4byte 0x445F5052
	.4byte 0x4F46494C
	.4byte 0x45000000
	.4byte 0x47505F44
	.4byte 0x454C4255
	.4byte 0x44445900
	.4byte 0x47505F44
	.4byte 0x454C4255
	.4byte 0x4444595F
	.4byte 0x4E4F545F
	.4byte 0x42554444
	.4byte 0x59000000
	.4byte 0x47505F44
	.4byte 0x454C5052
	.4byte 0x4F46494C
	.4byte 0x45000000
	.4byte 0x47505F44
	.4byte 0x454C5052
	.4byte 0x4F46494C
	.4byte 0x455F4C41
	.4byte 0x53545F50
	.4byte 0x524F4649
	.4byte 0x4C450000
	.4byte 0x47505F53
	.4byte 0x45415243
	.4byte 0x48000000
	.4byte 0x47505F53
	.4byte 0x45415243
	.4byte 0x485F434F
	.4byte 0x4E4E4543
	.4byte 0x54494F4E
	.4byte 0x5F464149
	.4byte 0x4C454400
	.4byte 0x556E6B6E
	.4byte 0x6F776E20
	.4byte 0x6572726F
	.4byte 0x7220636F
	.4byte 0x6465210A
	.4byte 0x00000000
	.4byte 0x46415441
	.4byte 0x4C204552
	.4byte 0x524F520A
	.4byte 0x00000000
	.4byte 0x4552524F
	.4byte 0x520A0000
	.4byte 0x52455355
	.4byte 0x4C543A20
	.4byte 0x25732028
	.4byte 0x2564290A
	.4byte 0x00000000
	.4byte 0x4552524F
	.4byte 0x5220434F
	.4byte 0x44453A20
	.4byte 0x25732028
	.4byte 0x30782558
	.4byte 0x290A0000
	.4byte 0x4552524F
	.4byte 0x52205354
	.4byte 0x52494E47
	.4byte 0x3A202573
	.4byte 0x0A000000
	.4byte 0x4750434D
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20756E64
	.4byte 0x6566696E
	.4byte 0x65642062
	.4byte 0x75646479
	.4byte 0x206D6573
	.4byte 0x73616765
	.4byte 0x2E202725
	.4byte 0x73270A00
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20646966
	.4byte 0x66657265
	.4byte 0x6E742076
	.4byte 0x65727369
	.4byte 0x6F6E2062
	.4byte 0x75646479
	.4byte 0x206D6573
	.4byte 0x73616765
	.4byte 0x20636F6D
	.4byte 0x6D616E64
	.4byte 0x2E202725
	.4byte 0x73270A00
	.4byte 0x4D415400
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x65642047
	.4byte 0x50206D61
	.4byte 0x74636869
	.4byte 0x6E672063
	.4byte 0x6F6D6D61
	.4byte 0x6E642E0A
	.4byte 0x00000000
	.4byte 0x43616C6C
	.4byte 0x65642044
	.4byte 0x57435F53
	.4byte 0x68757464
	.4byte 0x6F776E46
	.4byte 0x7269656E
	.4byte 0x64734D61
	.4byte 0x74636828
	.4byte 0x29207769
	.4byte 0x74682075
	.4byte 0x6E657870
	.4byte 0x65637465
	.4byte 0x64207374
	.4byte 0x61747573
	.4byte 0x2E0A0000
	.4byte 0x436F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E2077
	.4byte 0x61732063
	.4byte 0x6C6F7365
	.4byte 0x64202872
	.4byte 0x6561736F
	.4byte 0x6E202564
	.4byte 0x29207073
	.4byte 0x65756428
	.4byte 0x2564292E
	.4byte 0x0A000000
	.4byte 0x61696420
	.4byte 0x3D202564
	.4byte 0x20287661
	.4byte 0x6C696469
	.4byte 0x74792025
	.4byte 0x64292E0A
	.4byte 0x00000000
	.4byte 0x2A2A2A2A
	.4byte 0x20534320
	.4byte 0x73657276
	.4byte 0x65722077
	.4byte 0x61732064
	.4byte 0x6561642E
	.4byte 0x2E2E2E2A
	.4byte 0x2A2A2A0A
	.4byte 0x00000000
	.4byte 0x2A2A2A2A
	.4byte 0x20706964
	.4byte 0x28257529
	.4byte 0x20697320
	.4byte 0x6E6F7420
	.4byte 0x696E206E
	.4byte 0x6F646520
	.4byte 0x696E666F
	.4byte 0x2E2A2A2A
	.4byte 0x2A0A0000
	.4byte 0x5B6E6578
	.4byte 0x74207365
	.4byte 0x72766572
	.4byte 0x5D207365
	.4byte 0x72766572
	.4byte 0x446F776E
	.4byte 0x42617365
	.4byte 0x20626974
	.4byte 0x6D617020
	.4byte 0x3D203078
	.4byte 0x25780A00
	.4byte 0x436C6F73
	.4byte 0x696E6720
	.4byte 0x70726F63
	.4byte 0x65737320
	.4byte 0x6279206D
	.4byte 0x61746368
	.4byte 0x696E6720
	.4byte 0x53432E0A
	.4byte 0x00000000
	.4byte 0x436C6F73
	.4byte 0x696E6720
	.4byte 0x70726F63
	.4byte 0x65737320
	.4byte 0x6279206D
	.4byte 0x61746368
	.4byte 0x696E672E
	.4byte 0x0A000000
.endobj lbl_807BE23C

# .data:0x3BB0 | 0x807BE9A8 | size: 0xC
.obj lbl_807BE9A8, global
	.string "Ping: %dms\n"
.endobj lbl_807BE9A8

# .data:0x3BBC | 0x807BE9B4 | size: 0x1A
.obj lbl_807BE9B4, global
	.string "Socket fatal error! (%d)\n"
.endobj lbl_807BE9B4

# .data:0x3BD6 | 0x807BE9CE | size: 0x2
.obj gap_07_807BE9CE_data, global
.hidden gap_07_807BE9CE_data
	.2byte 0x0000
.endobj gap_07_807BE9CE_data

# .data:0x3BD8 | 0x807BE9D0 | size: 0x44
.obj lbl_807BE9D0, global
	.4byte 0x00000005
	.4byte 0xFFFFFFFE
	.4byte 0x21214457
	.4byte 0x435F5265
	.4byte 0x67697374
	.4byte 0x65724D61
	.4byte 0x74636853
	.4byte 0x74617475
	.4byte 0x73282920
	.4byte 0x77617320
	.4byte 0x63616C6C
	.4byte 0x65642121
	.4byte 0x0A000000
	.4byte 0x42757420
	.4byte 0x69676E6F
	.4byte 0x7265642E
	.4byte 0x0A000000
.endobj lbl_807BE9D0

# .data:0x3C1C | 0x807BEA14 | size: 0x28
.obj lbl_807BEA14, global
	.4byte 0x4E6F7720
	.4byte 0x756E6162
	.4byte 0x6C652074
	.4byte 0x6F206361
	.4byte 0x6E63656C
	.4byte 0x2E0A0000
	.4byte 0x25750000
	.4byte 0x53434D00
	.4byte 0x53434E00
	.4byte 0x56455200
.endobj lbl_807BEA14

# .data:0x3C44 | 0x807BEA3C | size: 0xAC
.obj lbl_807BEA3C, global
	.4byte 0x4C434B00
	.4byte 0x4457435F
	.4byte 0x4164644D
	.4byte 0x61746368
	.4byte 0x4B657949
	.4byte 0x6E743A20
	.4byte 0x6B65793D
	.4byte 0x27257327
	.4byte 0x2C207661
	.4byte 0x6C75653D
	.4byte 0x25640A00
	.4byte 0x4457435F
	.4byte 0x4164644D
	.4byte 0x61746368
	.4byte 0x4B657953
	.4byte 0x7472696E
	.4byte 0x673A206B
	.4byte 0x65793D27
	.4byte 0x25732720
	.4byte 0x76616C75
	.4byte 0x653D2725
	.4byte 0x73270A00
	.4byte 0x21214457
	.4byte 0x435F5265
	.4byte 0x71756573
	.4byte 0x74537573
	.4byte 0x70656E64
	.4byte 0x4D617463
	.4byte 0x68417379
	.4byte 0x6E632825
	.4byte 0x73292077
	.4byte 0x61732063
	.4byte 0x616C6C65
	.4byte 0x6421210A
	.4byte 0x00000000
	.4byte 0x54525545
	.4byte 0x00000000
	.4byte 0x46414C53
	.4byte 0x45000000
	.4byte 0x44574369
	.4byte 0x5F4D6174
	.4byte 0x6368496E
	.4byte 0x69740000
.endobj lbl_807BEA3C

# .data:0x3CF0 | 0x807BEAE8 | size: 0x90
.obj lbl_807BEAE8, global
	.4byte 0x73746174
	.4byte 0x75732063
	.4byte 0x68616E67
	.4byte 0x65642025
	.4byte 0x73282564
	.4byte 0x2E256420
	.4byte 0x73656329
	.4byte 0x202D3E20
	.4byte 0x25730A00
	.4byte 0x53657276
	.4byte 0x65724272
	.4byte 0x6F777365
	.4byte 0x724C696D
	.4byte 0x69745570
	.4byte 0x64617465
	.4byte 0x2074696D
	.4byte 0x656F7574
	.4byte 0x20726573
	.4byte 0x65742E28
	.4byte 0x2573290A
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x51523220
	.4byte 0x69732061
	.4byte 0x6C726561
	.4byte 0x64792073
	.4byte 0x65742075
	.4byte 0x702E0A00
	.4byte 0x6477635F
	.4byte 0x70696400
	.4byte 0x6477635F
	.4byte 0x6D747970
	.4byte 0x65000000
	.4byte 0x6477635F
	.4byte 0x6D766572
	.4byte 0x00000000
.endobj lbl_807BEAE8

# .data:0x3D80 | 0x807BEB78 | size: 0x2A8
.obj lbl_807BEB78, global
	.4byte 0x6477635F
	.4byte 0x6576616C
	.4byte 0x00000000
	.4byte 0x6477635F
	.4byte 0x67726F75
	.4byte 0x70696400
	.4byte 0x6477635F
	.4byte 0x686F7374
	.4byte 0x73746174
	.4byte 0x65000000
	.4byte 0x6477635F
	.4byte 0x73757370
	.4byte 0x656E6400
	.4byte 0x28257320
	.4byte 0x3D202575
	.4byte 0x206F7220
	.4byte 0x2573203D
	.4byte 0x20257529
	.4byte 0x00000000
	.4byte 0x2573203D
	.4byte 0x20256420
	.4byte 0x616E6420
	.4byte 0x25732021
	.4byte 0x3D202575
	.4byte 0x20616E64
	.4byte 0x206D6178
	.4byte 0x706C6179
	.4byte 0x65727320
	.4byte 0x3D202564
	.4byte 0x20616E64
	.4byte 0x206E756D
	.4byte 0x706C6179
	.4byte 0x65727320
	.4byte 0x3C202564
	.4byte 0x20616E64
	.4byte 0x20257320
	.4byte 0x3D202564
	.4byte 0x20616E64
	.4byte 0x20257320
	.4byte 0x3D202575
	.4byte 0x20616E64
	.4byte 0x20257300
	.4byte 0x20616E64
	.4byte 0x20282900
	.4byte 0x43726561
	.4byte 0x7465204E
	.4byte 0x65772047
	.4byte 0x726F7570
	.4byte 0x2049443A
	.4byte 0x25750A00
	.4byte 0x47726F75
	.4byte 0x70494420
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x20776169
	.4byte 0x74207365
	.4byte 0x72766572
	.4byte 0x20726573
	.4byte 0x706F6E73
	.4byte 0x65202564
	.4byte 0x2F25642E
	.4byte 0x0A000000
	.4byte 0x4D657368
	.4byte 0x204E4E20
	.4byte 0x72657376
	.4byte 0x2074696D
	.4byte 0x6564206F
	.4byte 0x75742E0A
	.4byte 0x00000000
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x20776169
	.4byte 0x74207365
	.4byte 0x72766572
	.4byte 0x20726573
	.4byte 0x706F6E73
	.4byte 0x65202564
	.4byte 0x2F25642E
	.4byte 0x0A000000
	.4byte 0x3C465249
	.4byte 0x454E443E
	.4byte 0x204E4E20
	.4byte 0x72657376
	.4byte 0x28776974
	.4byte 0x68202575
	.4byte 0x29207469
	.4byte 0x6D656420
	.4byte 0x6F75742E
	.4byte 0x20547279
	.4byte 0x206E6578
	.4byte 0x74207365
	.4byte 0x72766572
	.4byte 0x2E0A0000
	.4byte 0x4E4E2072
	.4byte 0x65737628
	.4byte 0x77697468
	.4byte 0x20257529
	.4byte 0x2074696D
	.4byte 0x6564206F
	.4byte 0x75742E20
	.4byte 0x54727920
	.4byte 0x6E657874
	.4byte 0x20736572
	.4byte 0x7665722E
	.4byte 0x0A000000
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x20776169
	.4byte 0x74206774
	.4byte 0x32436F6E
	.4byte 0x6E656374
	.4byte 0x28292E0A
	.4byte 0x00000000
	.4byte 0x52545420
	.4byte 0x54696D65
	.4byte 0x6F757420
	.4byte 0x77697468
	.4byte 0x20445743
	.4byte 0x5F4D4154
	.4byte 0x43485F53
	.4byte 0x54415445
	.4byte 0x5F434C5F
	.4byte 0x4754322E
	.4byte 0x0A000000
	.4byte 0x53746F70
	.4byte 0x20726573
	.4byte 0x656E6469
	.4byte 0x6E672063
	.4byte 0x6F6D6D61
	.4byte 0x6E642025
	.4byte 0x642E0A00
	.4byte 0x52657365
	.4byte 0x72766174
	.4byte 0x696F6E20
	.4byte 0x74696D65
	.4byte 0x6F75742E
	.4byte 0x2043616E
	.4byte 0x63656C20
	.4byte 0x72657365
	.4byte 0x72766174
	.4byte 0x696F6E2E
	.4byte 0x0A000000
	.4byte 0x57616974
	.4byte 0x20636C69
	.4byte 0x656E7473
	.4byte 0x20636F6E
	.4byte 0x6E656374
	.4byte 0x696E6720
	.4byte 0x74696D65
	.4byte 0x6F75742E
	.4byte 0x0A000000
	.4byte 0x4E6F2064
	.4byte 0x61746120
	.4byte 0x66726F6D
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x25642F25
	.4byte 0x642E0A00
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x20436F6E
	.4byte 0x6E656374
	.4byte 0x696F6E20
	.4byte 0x746F2073
	.4byte 0x65727665
	.4byte 0x72207761
	.4byte 0x73207368
	.4byte 0x75742064
	.4byte 0x6F776E2E
	.4byte 0x0A000000
.endobj lbl_807BEB78

# .data:0x4028 | 0x807BEE20 | size: 0x224
.obj lbl_807BEE20, global
	.4byte 0x2A2A2A20
	.4byte 0x44574369
	.4byte 0x5F497342
	.4byte 0x61636B75
	.4byte 0x704D696E
	.4byte 0x652E2069
	.4byte 0x676E6F72
	.4byte 0x65642873
	.4byte 0x74617465
	.4byte 0x3D256429
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x5B736875
	.4byte 0x74646F77
	.4byte 0x6E206D79
	.4byte 0x73656C66
	.4byte 0x5D204974
	.4byte 0x20646F65
	.4byte 0x736E2774
	.4byte 0x20686176
	.4byte 0x65207468
	.4byte 0x65204754
	.4byte 0x3220636F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x20776974
	.4byte 0x68206E65
	.4byte 0x78742073
	.4byte 0x65727665
	.4byte 0x722E0A00
	.4byte 0x52657365
	.4byte 0x7276653A
	.4byte 0x20492061
	.4byte 0x6D204E65
	.4byte 0x78742053
	.4byte 0x65727665
	.4byte 0x7221210A
	.4byte 0x00000000
	.4byte 0x2A2A2A2A
	.4byte 0x205B5356
	.4byte 0x20436861
	.4byte 0x6E67696E
	.4byte 0x675D2073
	.4byte 0x68757464
	.4byte 0x6F776E20
	.4byte 0x6E6F2072
	.4byte 0x6573706F
	.4byte 0x6E736520
	.4byte 0x686F7374
	.4byte 0x28504944
	.4byte 0x3A257520
	.4byte 0x6169643A
	.4byte 0x2564290A
	.4byte 0x00000000
	.4byte 0x4261636B
	.4byte 0x7570206D
	.4byte 0x65737361
	.4byte 0x67652074
	.4byte 0x696D6564
	.4byte 0x206F7574
	.4byte 0x2E0A0000
	.4byte 0x00000000
	.4byte 0x53657276
	.4byte 0x65722044
	.4byte 0x6F776E20
	.4byte 0x44657465
	.4byte 0x63746564
	.4byte 0x21210A00
	.4byte 0x4920616D
	.4byte 0x204E6577
	.4byte 0x20536572
	.4byte 0x76657221
	.4byte 0x210A0000
	.4byte 0x44574369
	.4byte 0x5F417574
	.4byte 0x6F537573
	.4byte 0x70656E64
	.4byte 0x436F6D70
	.4byte 0x6C657465
	.4byte 0x202D2073
	.4byte 0x75737065
	.4byte 0x6E642069
	.4byte 0x73202573
	.4byte 0x2E0A0000
	.4byte 0x52657472
	.4byte 0x79207365
	.4byte 0x61726368
	.4byte 0x20686F73
	.4byte 0x74206279
	.4byte 0x2067726F
	.4byte 0x75704944
	.4byte 0x5B25642F
	.4byte 0x25645D2E
	.4byte 0x0A000000
	.4byte 0x54696D65
	.4byte 0x6F757420
	.4byte 0x3A207761
	.4byte 0x6974204E
	.4byte 0x4E207265
	.4byte 0x7472792E
	.4byte 0x0A000000
	.4byte 0x2A2A2A20
	.4byte 0x54525920
	.4byte 0x6D657368
	.4byte 0x20637265
	.4byte 0x6174653A
	.4byte 0x20616964
	.4byte 0x28256429
	.4byte 0x0A000000
	.4byte 0x53657276
	.4byte 0x65724272
	.4byte 0x6F777365
	.4byte 0x724C696D
	.4byte 0x69745570
	.4byte 0x64617465
	.4byte 0x2074696D
	.4byte 0x656F7574
	.4byte 0x2E0A0000
	.4byte 0x52545420
	.4byte 0x54696D65
	.4byte 0x6F757420
	.4byte 0x77697468
	.4byte 0x20445743
	.4byte 0x695F4D61
	.4byte 0x74636850
	.4byte 0x726F6365
	.4byte 0x73732E0A
	.4byte 0x00000000
	.4byte 0x54696D65
	.4byte 0x6F757420
	.4byte 0x3A205761
	.4byte 0x69742070
	.4byte 0x72696F72
	.4byte 0x2070726F
	.4byte 0x66696C65
	.4byte 0x49442E0A
	.4byte 0x00000000
.endobj lbl_807BEE20

# .data:0x424C | 0x807BF044 | size: 0x5C
.obj jumptable_807BF044, global
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0xF64
	.4byte fn_806B5860+0x7D0
	.4byte fn_806B5860+0xB4
	.4byte fn_806B5860+0x7D0
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x8A8
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x10C4
	.4byte fn_806B5860+0x1838
	.4byte fn_806B5860+0x1CD4
	.4byte fn_806B5860+0x2180
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0xC58
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0xE78
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x241C
	.4byte fn_806B5860+0x7D0
.endobj jumptable_807BF044

# .data:0x42A8 | 0x807BF0A0 | size: 0x418
.obj lbl_807BF0A0, global
	.4byte 0x47543220
	.4byte 0x556E7265
	.4byte 0x636F676E
	.4byte 0x697A6564
	.4byte 0x203A2052
	.4byte 0x65636569
	.4byte 0x76656420
	.4byte 0x51523220
	.4byte 0x64617461
	.4byte 0x2E0A0000
	.4byte 0x20206967
	.4byte 0x6E6F7265
	.4byte 0x20717232
	.4byte 0x206D6573
	.4byte 0x73616765
	.4byte 0x2E0A0000
	.4byte 0x47543220
	.4byte 0x556E7265
	.4byte 0x636F676E
	.4byte 0x697A6564
	.4byte 0x203A2052
	.4byte 0x65636569
	.4byte 0x76656420
	.4byte 0x4E4E2064
	.4byte 0x6174612E
	.4byte 0x0A000000
	.4byte 0x47543220
	.4byte 0x556E7265
	.4byte 0x636F676E
	.4byte 0x697A6564
	.4byte 0x203A204E
	.4byte 0x6F742043
	.4byte 0x6F6E6E65
	.4byte 0x63746564
	.4byte 0x20677432
	.4byte 0x20646174
	.4byte 0x612E0A00
	.4byte 0x00000000
	.4byte 0x47543220
	.4byte 0x556E7265
	.4byte 0x636F676E
	.4byte 0x697A6564
	.4byte 0x203A2052
	.4byte 0x65636569
	.4byte 0x76656420
	.4byte 0x756E7265
	.4byte 0x636F676E
	.4byte 0x697A6564
	.4byte 0x20646174
	.4byte 0x612E0A00
	.4byte 0x44574369
	.4byte 0x5F475432
	.4byte 0x436F6E6E
	.4byte 0x65637441
	.4byte 0x7474656D
	.4byte 0x70744361
	.4byte 0x6C6C6261
	.4byte 0x636B2069
	.4byte 0x6E204457
	.4byte 0x435F4D41
	.4byte 0x5443485F
	.4byte 0x53544154
	.4byte 0x455F434C
	.4byte 0x5F4E4E0A
	.4byte 0x00000000
	.4byte 0x496E6974
	.4byte 0x20737461
	.4byte 0x74650000
	.4byte 0x67743252
	.4byte 0x656A6563
	.4byte 0x74207761
	.4byte 0x73206361
	.4byte 0x6C6C6564
	.4byte 0x203A2049
	.4byte 0x6E697420
	.4byte 0x73746174
	.4byte 0x650A0000
	.4byte 0x00000000
	.4byte 0x476F7420
	.4byte 0x44574369
	.4byte 0x5F475432
	.4byte 0x436F6E6E
	.4byte 0x65637441
	.4byte 0x7474656D
	.4byte 0x70744361
	.4byte 0x6C6C6261
	.4byte 0x636B206C
	.4byte 0x6174656E
	.4byte 0x63792825
	.4byte 0x6429206D
	.4byte 0x73672825
	.4byte 0x73290A00
	.4byte 0x72656D6F
	.4byte 0x74652050
	.4byte 0x4944203D
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x53657276
	.4byte 0x65722066
	.4byte 0x756C6C00
	.4byte 0x67743252
	.4byte 0x656A6563
	.4byte 0x74207761
	.4byte 0x73206361
	.4byte 0x6C6C6564
	.4byte 0x203A2053
	.4byte 0x65727665
	.4byte 0x72206675
	.4byte 0x6C6C0A00
	.4byte 0x4D657368
	.4byte 0x2073746F
	.4byte 0x702E0A00
	.4byte 0x67743243
	.4byte 0x6F6E6E65
	.4byte 0x63742829
	.4byte 0x2063616D
	.4byte 0x65206265
	.4byte 0x666F7265
	.4byte 0x204E4E20
	.4byte 0x636F6D70
	.4byte 0x6C657465
	.4byte 0x2E0A0000
	.4byte 0x556E6B6E
	.4byte 0x6F776E20
	.4byte 0x636F6E6E
	.4byte 0x65637420
	.4byte 0x61747465
	.4byte 0x6D707400
	.4byte 0x67743252
	.4byte 0x656A6563
	.4byte 0x74207761
	.4byte 0x73206361
	.4byte 0x6C6C6564
	.4byte 0x203A2055
	.4byte 0x6E6B6E6F
	.4byte 0x776E2063
	.4byte 0x6F6E6E65
	.4byte 0x63742061
	.4byte 0x7474656D
	.4byte 0x70742066
	.4byte 0x726F6D20
	.4byte 0x25730A00
	.4byte 0x556E6578
	.4byte 0x70656374
	.4byte 0x65642066
	.4byte 0x61696C75
	.4byte 0x72652074
	.4byte 0x6F206774
	.4byte 0x32416363
	.4byte 0x6570742E
	.4byte 0x0A000000
	.4byte 0x41636365
	.4byte 0x70746564
	.4byte 0x20636F6E
	.4byte 0x6E656374
	.4byte 0x696F6E20
	.4byte 0x66726F6D
	.4byte 0x20257320
	.4byte 0x286C6174
	.4byte 0x656E6379
	.4byte 0x20256429
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x44574369
	.4byte 0x5F475432
	.4byte 0x436F6E6E
	.4byte 0x65637465
	.4byte 0x6443616C
	.4byte 0x6C626163
	.4byte 0x6B28706F
	.4byte 0x72743D25
	.4byte 0x642C7265
	.4byte 0x73756C74
	.4byte 0x3D25642C
	.4byte 0x6D73673D
	.4byte 0x5B25735D
	.4byte 0x290A0000
	.4byte 0x67743243
	.4byte 0x6F6E6E65
	.4byte 0x63746564
	.4byte 0x43616C6C
	.4byte 0x6261636B
	.4byte 0x3A20416C
	.4byte 0x72656164
	.4byte 0x79206361
	.4byte 0x6E63656C
	.4byte 0x28706F72
	.4byte 0x743D2564
	.4byte 0x2C726573
	.4byte 0x756C743D
	.4byte 0x25642C6D
	.4byte 0x73673D5B
	.4byte 0x25735D29
	.4byte 0x2E0A0000
	.4byte 0x67743243
	.4byte 0x6F6E6E65
	.4byte 0x63746564
	.4byte 0x43616C6C
	.4byte 0x6261636B
	.4byte 0x3A206D65
	.4byte 0x73682063
	.4byte 0x72656174
	.4byte 0x696E672E
	.4byte 0x2E20676F
	.4byte 0x206E6578
	.4byte 0x74207072
	.4byte 0x6F636573
	.4byte 0x732E0A00
	.4byte 0x40404040
	.4byte 0x40206774
	.4byte 0x32436F6E
	.4byte 0x6E656374
	.4byte 0x65644361
	.4byte 0x6C6C6261
	.4byte 0x636B3A20
	.4byte 0x62757420
	.4byte 0x69676E6F
	.4byte 0x7265642E
	.4byte 0x0A000000
	.4byte 0x47543220
	.4byte 0x636F6E6E
	.4byte 0x65637420
	.4byte 0x6661696C
	.4byte 0x65642025
	.4byte 0x643A2025
	.4byte 0x730A0000
	.4byte 0x4D657368
	.4byte 0x20677432
	.4byte 0x20666169
	.4byte 0x6C65642E
	.4byte 0x0A000000
	.4byte 0x67743243
	.4byte 0x6F6E6E65
	.4byte 0x63742829
	.4byte 0x20726574
	.4byte 0x7279206F
	.4byte 0x7665722E
	.4byte 0x0A000000
	.4byte 0x52657472
	.4byte 0x7920746F
	.4byte 0x20677432
	.4byte 0x436F6E6E
	.4byte 0x6563742E
	.4byte 0x0A000000
	.4byte 0x47543220
	.4byte 0x636F6E6E
	.4byte 0x65637465
	.4byte 0x642E0A00
	.4byte 0x446F6E27
	.4byte 0x7420636F
	.4byte 0x6E74696E
	.4byte 0x7565206D
	.4byte 0x61746368
	.4byte 0x696E6720
	.4byte 0x77697468
	.4byte 0x6F757420
	.4byte 0x636C6F73
	.4byte 0x696E6720
	.4byte 0x636F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E7321
	.4byte 0x210A0000
.endobj lbl_807BF0A0

# .data:0x46C0 | 0x807BF4B8 | size: 0x2F
.obj lbl_807BF4B8, global
	.string "<GP> RECV-0x%02x <- [--------:-----] [pid=%u]\n"
.endobj lbl_807BF4B8

# .data:0x46EF | 0x807BF4E7 | size: 0x1
.obj gap_07_807BF4E7_data, global
.hidden gap_07_807BF4E7_data
	.byte 0x00
.endobj gap_07_807BF4E7_data

# .data:0x46F0 | 0x807BF4E8 | size: 0x1D
.obj lbl_807BF4E8, global
	.string "Ignore illegal data(%d,%d).\n"
.endobj lbl_807BF4E8

# .data:0x470D | 0x807BF505 | size: 0x3
.obj gap_07_807BF505_data, global
.hidden gap_07_807BF505_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807BF505_data

# .data:0x4710 | 0x807BF508 | size: 0x1B
.obj lbl_807BF508, global
	.string "DWCi_ClearQR2Key ignored.\n"
.endobj lbl_807BF508

# .data:0x472B | 0x807BF523 | size: 0x1
.obj gap_07_807BF523_data, global
.hidden gap_07_807BF523_data
	.byte 0x00
.endobj gap_07_807BF523_data

# .data:0x472C | 0x807BF524 | size: 0x198
.obj lbl_807BF524, global
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x2053594E
	.4byte 0x20256420
	.4byte 0x7061636B
	.4byte 0x65742066
	.4byte 0x726F6D20
	.4byte 0x61696420
	.4byte 0x25642E0A
	.4byte 0x00000000
	.4byte 0x53594E20
	.4byte 0x77616974
	.4byte 0x2074696D
	.4byte 0x65203D20
	.4byte 0x25640A00
	.4byte 0x5B574152
	.4byte 0x4E5D2044
	.4byte 0x5743695F
	.4byte 0x53656E64
	.4byte 0x54797065
	.4byte 0x4D617463
	.4byte 0x6841636B
	.4byte 0x3A204927
	.4byte 0x6D206E6F
	.4byte 0x74207365
	.4byte 0x72766572
	.4byte 0x21210A00
	.4byte 0x57616974
	.4byte 0x206D6178
	.4byte 0x206C6174
	.4byte 0x656E6379
	.4byte 0x20256420
	.4byte 0x6D736563
	.4byte 0x2E0A0000
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20506F6C
	.4byte 0x6C696E67
	.4byte 0x20706163
	.4byte 0x6B657420
	.4byte 0x66726F6D
	.4byte 0x20706964
	.4byte 0x20256428
	.4byte 0x25303878
	.4byte 0x292E0A00
	.4byte 0x49276D20
	.4byte 0x61207365
	.4byte 0x72766572
	.4byte 0x2E206967
	.4byte 0x6E6F7265
	.4byte 0x2E0A0000
	.4byte 0x69676E6F
	.4byte 0x72652073
	.4byte 0x65727665
	.4byte 0x72506F6C
	.4byte 0x6C696E67
	.4byte 0x55494428
	.4byte 0x2564292E
	.4byte 0x0A000000
	.4byte 0x636F6D6D
	.4byte 0x616E6420
	.4byte 0x66726F6D
	.4byte 0x2077726F
	.4byte 0x6E672073
	.4byte 0x65727665
	.4byte 0x722E2069
	.4byte 0x676E6F72
	.4byte 0x652E0A00
	.4byte 0x63686563
	.4byte 0x6B206465
	.4byte 0x61642061
	.4byte 0x69643A20
	.4byte 0x64656164
	.4byte 0x20616964
	.4byte 0x4269746D
	.4byte 0x61702069
	.4byte 0x73202530
	.4byte 0x38782E0A
	.4byte 0x00000000
	.4byte 0x44574369
	.4byte 0x5F50726F
	.4byte 0x63657373
	.4byte 0x4D617463
	.4byte 0x68436C6F
	.4byte 0x73696E67
	.4byte 0x3A205343
	.4byte 0x5F53562E
	.4byte 0x0A000000
	.4byte 0x57616974
	.4byte 0x20707269
	.4byte 0x6F722070
	.4byte 0x726F6669
	.4byte 0x6C654944
	.4byte 0x2E0A0000
	.4byte 0x52657374
	.4byte 0x61727420
	.4byte 0x6D617463
	.4byte 0x68696E67
	.4byte 0x20696D6D
	.4byte 0x65646961
	.4byte 0x74656C79
	.4byte 0x2E0A0000
.endobj lbl_807BF524

# .data:0x48C4 | 0x807BF6BC | size: 0x7AC
.obj lbl_807BF6BC, global
	.4byte 0x44574369
	.4byte 0x5F526573
	.4byte 0x65744D61
	.4byte 0x74636850
	.4byte 0x6172616D
	.4byte 0x3A20486F
	.4byte 0x73742069
	.4byte 0x73204672
	.4byte 0x6565210A
	.4byte 0x00000000
	.4byte 0x20436C6F
	.4byte 0x7365204D
	.4byte 0x61746368
	.4byte 0x2E2E2E2E
	.4byte 0x0A000000
	.4byte 0x44574369
	.4byte 0x5F534255
	.4byte 0x70646174
	.4byte 0x65417379
	.4byte 0x6E630000
	.4byte 0x53657276
	.4byte 0x65725365
	.4byte 0x61726368
	.4byte 0x52617469
	.4byte 0x6F3D2564
	.4byte 0x20252520
	.4byte 0x286E6578
	.4byte 0x74207365
	.4byte 0x61726368
	.4byte 0x2D3E2564
	.4byte 0x290A0000
	.4byte 0x2573203D
	.4byte 0x20257500
	.4byte 0x20616E64
	.4byte 0x20282573
	.4byte 0x29000000
	.4byte 0x28257320
	.4byte 0x3D202575
	.4byte 0x2920616E
	.4byte 0x64202825
	.4byte 0x73203D20
	.4byte 0x25752920
	.4byte 0x616E6420
	.4byte 0x28257320
	.4byte 0x213D2025
	.4byte 0x75290000
	.4byte 0x2D2D2D44
	.4byte 0x5743695F
	.4byte 0x53425570
	.4byte 0x64617465
	.4byte 0x4173796E
	.4byte 0x63282920
	.4byte 0x696C6C65
	.4byte 0x67616C20
	.4byte 0x73746174
	.4byte 0x65202564
	.4byte 0x2E0A0000
	.4byte 0x53657276
	.4byte 0x65724272
	.4byte 0x6F777365
	.4byte 0x7246696C
	.4byte 0x74657220
	.4byte 0x3A202573
	.4byte 0x0A000000
	.4byte 0x52657472
	.4byte 0x790A0000
	.4byte 0x53657276
	.4byte 0x65724272
	.4byte 0x6F777365
	.4byte 0x724C696D
	.4byte 0x69745570
	.4byte 0x64617465
	.4byte 0x2074696D
	.4byte 0x656F7574
	.4byte 0x20736574
	.4byte 0x2E282573
	.4byte 0x290A0000
	.4byte 0x53657276
	.4byte 0x65725B25
	.4byte 0x755D2069
	.4byte 0x73206265
	.4byte 0x68696E64
	.4byte 0x2073616D
	.4byte 0x65204E41
	.4byte 0x54206173
	.4byte 0x206D652E
	.4byte 0x0A000000
	.4byte 0x53657276
	.4byte 0x65725B25
	.4byte 0x755D2069
	.4byte 0x73206265
	.4byte 0x68696E64
	.4byte 0x204E4154
	.4byte 0x2E0A0000
	.4byte 0x53657276
	.4byte 0x65725B25
	.4byte 0x755D2069
	.4byte 0x73206E6F
	.4byte 0x74206265
	.4byte 0x68696E64
	.4byte 0x204E4154
	.4byte 0x2E204275
	.4byte 0x74204927
	.4byte 0x6D206265
	.4byte 0x68696E64
	.4byte 0x204E4154
	.4byte 0x2E0A0000
	.4byte 0x426F7468
	.4byte 0x20492061
	.4byte 0x6E642053
	.4byte 0x65727665
	.4byte 0x725B2575
	.4byte 0x5D206172
	.4byte 0x65206E6F
	.4byte 0x74206265
	.4byte 0x68696E64
	.4byte 0x204E4154
	.4byte 0x2E0A0000
	.4byte 0x53656E64
	.4byte 0x204E4E20
	.4byte 0x636F6F6B
	.4byte 0x6965203D
	.4byte 0x2025782E
	.4byte 0x0A000000
	.4byte 0x20646E73
	.4byte 0x20657272
	.4byte 0x6F72206F
	.4byte 0x63637572
	.4byte 0x73207768
	.4byte 0x656E204E
	.4byte 0x61744E65
	.4byte 0x676F7469
	.4byte 0x6174696F
	.4byte 0x6E206265
	.4byte 0x67696E2E
	.4byte 0x2E2E2072
	.4byte 0x65747279
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x53454E44
	.4byte 0x20475432
	.4byte 0x204D5347
	.4byte 0x20544F20
	.4byte 0x5049443A
	.4byte 0x25750A00
	.4byte 0xBB49CC4D
	.4byte 0x00000000
	.4byte 0x3C475432
	.4byte 0x3E205345
	.4byte 0x4E442D30
	.4byte 0x78253032
	.4byte 0x78202D3E
	.4byte 0x205B2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D3A2D
	.4byte 0x2D2D2D2D
	.4byte 0x5D205B70
	.4byte 0x69643D25
	.4byte 0x755D0A00
	.4byte 0x53454E44
	.4byte 0x20425544
	.4byte 0x4459204D
	.4byte 0x53472054
	.4byte 0x4F205049
	.4byte 0x443A2575
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x25732564
	.4byte 0x76257300
	.4byte 0x4750434D
	.4byte 0x00000000
	.4byte 0x4D415400
	.4byte 0x3C47503E
	.4byte 0x2053454E
	.4byte 0x442D3078
	.4byte 0x25303278
	.4byte 0x202D3E20
	.4byte 0x5B2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D3A2D2D
	.4byte 0x2D2D2D5D
	.4byte 0x205B7069
	.4byte 0x643D2575
	.4byte 0x5D0A0000
	.4byte 0x00000000
	.4byte 0x46524F4D
	.4byte 0x20424D20
	.4byte 0x62757420
	.4byte 0x70656572
	.4byte 0x20697320
	.4byte 0x6E6F7420
	.4byte 0x62756464
	.4byte 0x792E0A00
	.4byte 0x53454E44
	.4byte 0x20534220
	.4byte 0x4D534720
	.4byte 0x544F2049
	.4byte 0x502F504F
	.4byte 0x52543A28
	.4byte 0x25303878
	.4byte 0x3A256429
	.4byte 0x0A000000
	.4byte 0x3C53423E
	.4byte 0x2053454E
	.4byte 0x442D3078
	.4byte 0x25303278
	.4byte 0x202D3E20
	.4byte 0x5B253038
	.4byte 0x783A2564
	.4byte 0x5D205B70
	.4byte 0x69643D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D5D
	.4byte 0x0A000000
	.4byte 0x53656E64
	.4byte 0x203C4457
	.4byte 0x435F4D41
	.4byte 0x5443485F
	.4byte 0x434F4D4D
	.4byte 0x414E445F
	.4byte 0x52455356
	.4byte 0x5F4F4B3E
	.4byte 0x20746F3A
	.4byte 0x205B2575
	.4byte 0x5D0A0000
	.4byte 0x53656E64
	.4byte 0x20536572
	.4byte 0x76657220
	.4byte 0x41494428
	.4byte 0x2564290A
	.4byte 0x00000000
	.4byte 0x53656E64
	.4byte 0x2047726F
	.4byte 0x75702049
	.4byte 0x44282564
	.4byte 0x290A0000
	.4byte 0x53656E64
	.4byte 0x204D6178
	.4byte 0x20456E74
	.4byte 0x72792825
	.4byte 0x64290A00
	.4byte 0x6E657720
	.4byte 0x636C6965
	.4byte 0x6E742061
	.4byte 0x69643A20
	.4byte 0x5B25755D
	.4byte 0x0A000000
	.4byte 0x47616D65
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x69732066
	.4byte 0x756C6C79
	.4byte 0x206F6363
	.4byte 0x75706965
	.4byte 0x642E0000
	.4byte 0x54686973
	.4byte 0x20446F6D
	.4byte 0x61696E20
	.4byte 0x69732061
	.4byte 0x6C726561
	.4byte 0x64792063
	.4byte 0x6C6F7365
	.4byte 0x642E0000
	.4byte 0x54686520
	.4byte 0x636F6E64
	.4byte 0x6974696F
	.4byte 0x6E207761
	.4byte 0x73206E6F
	.4byte 0x74207361
	.4byte 0x74697366
	.4byte 0x6965642E
	.4byte 0x00000000
	.4byte 0x54686973
	.4byte 0x20446F6D
	.4byte 0x61696E20
	.4byte 0x69732061
	.4byte 0x6C726561
	.4byte 0x6479206C
	.4byte 0x6F636B65
	.4byte 0x642E0000
	.4byte 0x49742074
	.4byte 0x72696564
	.4byte 0x20746F20
	.4byte 0x676F2074
	.4byte 0x6F207468
	.4byte 0x6520636C
	.4byte 0x69656E74
	.4byte 0x20666F72
	.4byte 0x20746865
	.4byte 0x20726573
	.4byte 0x65727661
	.4byte 0x74696F6E
	.4byte 0x2E000000
	.4byte 0x49742069
	.4byte 0x73206120
	.4byte 0x72657365
	.4byte 0x72766174
	.4byte 0x696F6E20
	.4byte 0x746F2074
	.4byte 0x68652066
	.4byte 0x7269656E
	.4byte 0x64207768
	.4byte 0x6F20646F
	.4byte 0x65736E27
	.4byte 0x74206578
	.4byte 0x69737420
	.4byte 0x696E2074
	.4byte 0x6865206C
	.4byte 0x6973742E
	.4byte 0x00000000
	.4byte 0x49742077
	.4byte 0x61732072
	.4byte 0x656A6563
	.4byte 0x74656420
	.4byte 0x62792074
	.4byte 0x68652061
	.4byte 0x7474656D
	.4byte 0x70742063
	.4byte 0x616C6C62
	.4byte 0x61636B2E
	.4byte 0x00000000
	.4byte 0x54686520
	.4byte 0x72657365
	.4byte 0x72766174
	.4byte 0x696F6E20
	.4byte 0x63616D65
	.4byte 0x2066726F
	.4byte 0x6D206120
	.4byte 0x64696666
	.4byte 0x6572656E
	.4byte 0x74206F74
	.4byte 0x68657220
	.4byte 0x686F7374
	.4byte 0x2E000000
	.4byte 0x496C6C65
	.4byte 0x67616C20
	.4byte 0x6D657368
	.4byte 0x20726573
	.4byte 0x65727661
	.4byte 0x74696F6E
	.4byte 0x2E000000
	.4byte 0x73656E64
	.4byte 0x20524553
	.4byte 0x565F4445
	.4byte 0x4E592E20
	.4byte 0x25730A00
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2049
	.4byte 0x676E6F72
	.4byte 0x65204E4E
	.4byte 0x20726573
	.4byte 0x65727661
	.4byte 0x74696F6E
	.4byte 0x202A2A2A
	.4byte 0x2A2A2A20
	.4byte 0x0A000000
	.4byte 0x53756363
	.4byte 0x65656465
	.4byte 0x64204E4E
	.4byte 0x20726573
	.4byte 0x65727661
	.4byte 0x74696F6E
	.4byte 0x2E0A0000
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2049
	.4byte 0x676E6F72
	.4byte 0x65205245
	.4byte 0x53565F4F
	.4byte 0x4B2E2066
	.4byte 0x726F6D20
	.4byte 0x77726F6E
	.4byte 0x67207365
	.4byte 0x72766572
	.4byte 0x28256429
	.4byte 0x2E202A2A
	.4byte 0x2A2A2A2A
	.4byte 0x200A0000
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2049
	.4byte 0x676E6F72
	.4byte 0x65205245
	.4byte 0x53565F4F
	.4byte 0x4B2E2077
	.4byte 0x726F6E67
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x696E666F
	.4byte 0x2E202A2A
	.4byte 0x2A2A2A2A
	.4byte 0x200A0000
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2049
	.4byte 0x676E6F72
	.4byte 0x65205245
	.4byte 0x53565F4F
	.4byte 0x4B2E2077
	.4byte 0x726F6E67
	.4byte 0x20726573
	.4byte 0x76436865
	.4byte 0x636B5661
	.4byte 0x6C75652E
	.4byte 0x202A2A2A
	.4byte 0x2A2A2A20
	.4byte 0x0A000000
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A206D
	.4byte 0x7976616C
	.4byte 0x75653A25
	.4byte 0x75202077
	.4byte 0x726F6E67
	.4byte 0x2076616C
	.4byte 0x75653A25
	.4byte 0x752E202A
	.4byte 0x2A2A2A2A
	.4byte 0x2A200A00
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2049
	.4byte 0x676E6F72
	.4byte 0x65205245
	.4byte 0x53565F4F
	.4byte 0x4B2E2077
	.4byte 0x726F6E67
	.4byte 0x206D6573
	.4byte 0x68526573
	.4byte 0x65727665
	.4byte 0x2E202A2A
	.4byte 0x2A2A2A2A
	.4byte 0x200A0000
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A206D
	.4byte 0x79282575
	.4byte 0x29207265
	.4byte 0x73657276
	.4byte 0x65643A25
	.4byte 0x73207461
	.4byte 0x72676574
	.4byte 0x28257529
	.4byte 0x20726573
	.4byte 0x65727665
	.4byte 0x643A2573
	.4byte 0x2E202A2A
	.4byte 0x2A2A2A2A
	.4byte 0x200A0000
	.4byte 0x53657276
	.4byte 0x65722049
	.4byte 0x503A2578
	.4byte 0x2C20706F
	.4byte 0x72743A25
	.4byte 0x640A0000
	.4byte 0x52656376
	.4byte 0x20536572
	.4byte 0x76657220
	.4byte 0x4149443A
	.4byte 0x25640A00
	.4byte 0x52656376
	.4byte 0x2047726F
	.4byte 0x75704944
	.4byte 0x3A25752E
	.4byte 0x0A000000
	.4byte 0x52656376
	.4byte 0x204D6178
	.4byte 0x20456E74
	.4byte 0x72793A25
	.4byte 0x642E0A00
	.4byte 0x52656376
	.4byte 0x20557365
	.4byte 0x72204461
	.4byte 0x74613A20
	.4byte 0x305B2564
	.4byte 0x5D20315B
	.4byte 0x25645D20
	.4byte 0x325B2564
	.4byte 0x5D20335B
	.4byte 0x25645D2E
	.4byte 0x0A000000
	.4byte 0x4D792041
	.4byte 0x49443A25
	.4byte 0x642E0A00
	.4byte 0x4D617463
	.4byte 0x682C204E
	.4byte 0x4E206572
	.4byte 0x726F7220
	.4byte 0x25640A00
	.4byte 0x52657365
	.4byte 0x72766174
	.4byte 0x696F6E20
	.4byte 0x77617320
	.4byte 0x64656E69
	.4byte 0x65642062
	.4byte 0x79202575
	.4byte 0x2E0A0000
.endobj lbl_807BF6BC

# .data:0x5070 | 0x807BFE68 | size: 0x5E0
.obj lbl_807BFE68, global
	.4byte 0x25730A00
	.4byte 0x44574369
	.4byte 0x5F54656D
	.4byte 0x704E6577
	.4byte 0x4E6F6465
	.4byte 0x496E666F
	.4byte 0x5F436C65
	.4byte 0x61722829
	.4byte 0x0A000000
	.4byte 0x6E657720
	.4byte 0x6E6F6465
	.4byte 0x20696E66
	.4byte 0x6F206973
	.4byte 0x20696E76
	.4byte 0x61696C64
	.4byte 0x2E206967
	.4byte 0x6E6F7265
	.4byte 0x2E0A0000
	.4byte 0x4E4E2070
	.4byte 0x6172656E
	.4byte 0x74206973
	.4byte 0x20626568
	.4byte 0x696E6420
	.4byte 0x73616D65
	.4byte 0x204E4154
	.4byte 0x20617320
	.4byte 0x6D652E20
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20495020
	.4byte 0x25782026
	.4byte 0x20706F72
	.4byte 0x74202564
	.4byte 0x0A000000
	.4byte 0x49276D20
	.4byte 0x636C6965
	.4byte 0x6E742E20
	.4byte 0x6E6F7420
	.4byte 0x696E206D
	.4byte 0x65736820
	.4byte 0x6D616B69
	.4byte 0x6E672E2E
	.4byte 0x69676E6F
	.4byte 0x72652E0A
	.4byte 0x00000000
	.4byte 0x42757420
	.4byte 0x616C7265
	.4byte 0x61647920
	.4byte 0x63616E63
	.4byte 0x656C6564
	.4byte 0x20726573
	.4byte 0x65727661
	.4byte 0x74696F6E
	.4byte 0x2E0A0000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x6564204E
	.4byte 0x45575F50
	.4byte 0x49445F41
	.4byte 0x49442063
	.4byte 0x6F6D6D61
	.4byte 0x6E642E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x7570204E
	.4byte 0x45575F50
	.4byte 0x49445F41
	.4byte 0x49442063
	.4byte 0x6F6D6D61
	.4byte 0x6E642E20
	.4byte 0x49276D20
	.4byte 0x77616974
	.4byte 0x696E6720
	.4byte 0x70696428
	.4byte 0x2575292E
	.4byte 0x2E0A0000
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x206E6577
	.4byte 0x20636C69
	.4byte 0x656E7427
	.4byte 0x73207072
	.4byte 0x6F66696C
	.4byte 0x65494420
	.4byte 0x3D202575
	.4byte 0x20262061
	.4byte 0x6964203D
	.4byte 0x2025642E
	.4byte 0x0A000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x6564204C
	.4byte 0x494E4B5F
	.4byte 0x434C535F
	.4byte 0x53554320
	.4byte 0x636F6D6D
	.4byte 0x616E6420
	.4byte 0x25642E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x6564204C
	.4byte 0x494E4B5F
	.4byte 0x434C535F
	.4byte 0x52455120
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x52657365
	.4byte 0x6E642063
	.4byte 0x6F6D6D61
	.4byte 0x6E642025
	.4byte 0x6420666F
	.4byte 0x72206465
	.4byte 0x6C617965
	.4byte 0x6420636F
	.4byte 0x6D6D616E
	.4byte 0x64202564
	.4byte 0x2E0A0000
	.4byte 0x436C6965
	.4byte 0x6E742049
	.4byte 0x503A2573
	.4byte 0x2C20706F
	.4byte 0x72743A25
	.4byte 0x640A0000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x6564204C
	.4byte 0x494E4B5F
	.4byte 0x434C535F
	.4byte 0x52455020
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x4C494E4B
	.4byte 0x5F434C53
	.4byte 0x5F524550
	.4byte 0x3A207265
	.4byte 0x636F7665
	.4byte 0x72792061
	.4byte 0x69642825
	.4byte 0x642D3E25
	.4byte 0x64292061
	.4byte 0x6E642070
	.4byte 0x726F6669
	.4byte 0x6C656964
	.4byte 0x2825642D
	.4byte 0x3E256429
	.4byte 0x2E0A0000
	.4byte 0x4C494E4B
	.4byte 0x5F434C53
	.4byte 0x5F524550
	.4byte 0x3A20636C
	.4byte 0x69656E74
	.4byte 0x20696E66
	.4byte 0x6F206973
	.4byte 0x2076616C
	.4byte 0x69642E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x65642043
	.4byte 0x414E4345
	.4byte 0x4C20636F
	.4byte 0x6D6D616E
	.4byte 0x642E0A00
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x2063616E
	.4byte 0x63656C20
	.4byte 0x636F6D6D
	.4byte 0x616E6420
	.4byte 0x66726F6D
	.4byte 0x20257520
	.4byte 0x64617461
	.4byte 0x5B305D20
	.4byte 0x3D202564
	.4byte 0x2E0A0000
	.4byte 0x73657276
	.4byte 0x6572206E
	.4byte 0x6F646520
	.4byte 0x6973204E
	.4byte 0x554C4C21
	.4byte 0x210A0000
	.4byte 0x436C6F73
	.4byte 0x65207368
	.4byte 0x7574646F
	.4byte 0x776E2063
	.4byte 0x6C69656E
	.4byte 0x742E0A00
	.4byte 0x5741524E
	.4byte 0x21212053
	.4byte 0x56444F57
	.4byte 0x4E515545
	.4byte 0x52592074
	.4byte 0x6F204E65
	.4byte 0x78742073
	.4byte 0x65727665
	.4byte 0x7221210A
	.4byte 0x00000000
	.4byte 0x616C7265
	.4byte 0x61647920
	.4byte 0x6E657874
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x646F776E
	.4byte 0x65645B25
	.4byte 0x755D2E0A
	.4byte 0x00000000
	.4byte 0x53656E64
	.4byte 0x20536572
	.4byte 0x76657244
	.4byte 0x6F776E20
	.4byte 0x69732025
	.4byte 0x733A2575
	.4byte 0x2E0A0000
	.4byte 0x646F776E
	.4byte 0x00000000
	.4byte 0x616C6976
	.4byte 0x65000000
	.4byte 0x5741524E
	.4byte 0x21212069
	.4byte 0x6478206F
	.4byte 0x66205049
	.4byte 0x44202575
	.4byte 0x20697320
	.4byte 0x30786666
	.4byte 0x2E0A0000
	.4byte 0x52656376
	.4byte 0x20536572
	.4byte 0x76657244
	.4byte 0x6F776E20
	.4byte 0x53746174
	.4byte 0x653A2041
	.4byte 0x434B3A25
	.4byte 0x752E0A00
	.4byte 0x53656E64
	.4byte 0x2041434B
	.4byte 0x20746F20
	.4byte 0x5B25755D
	.4byte 0x3A204950
	.4byte 0x3A256420
	.4byte 0x506F7274
	.4byte 0x3A25640A
	.4byte 0x00000000
	.4byte 0x53656E64
	.4byte 0x20466169
	.4byte 0x6C656421
	.4byte 0x0A000000
	.4byte 0x52656376
	.4byte 0x2041434B
	.4byte 0x2046726F
	.4byte 0x6D204261
	.4byte 0x636B7570
	.4byte 0x2E0A0000
	.4byte 0x00000000
	.4byte 0x52656376
	.4byte 0x20536572
	.4byte 0x76657244
	.4byte 0x6F776E20
	.4byte 0x53746174
	.4byte 0x653A204E
	.4byte 0x414B3A25
	.4byte 0x752E0A00
	.4byte 0x72656376
	.4byte 0x20535644
	.4byte 0x4F574E5F
	.4byte 0x4B454550
	.4byte 0x2E0A0000
	.4byte 0x52657472
	.4byte 0x79205342
	.4byte 0x20536561
	.4byte 0x7263682E
	.4byte 0x0A000000
	.4byte 0x49676E6F
	.4byte 0x72652073
	.4byte 0x75737065
	.4byte 0x6E642063
	.4byte 0x6D642866
	.4byte 0x726F6D20
	.4byte 0x5B25755D
	.4byte 0x2077686F
	.4byte 0x2069736E
	.4byte 0x27742069
	.4byte 0x6E206C69
	.4byte 0x7374292E
	.4byte 0x0A000000
	.4byte 0x49676E6F
	.4byte 0x72652073
	.4byte 0x75737065
	.4byte 0x6E642063
	.4byte 0x6D642866
	.4byte 0x726F6D20
	.4byte 0x53565B25
	.4byte 0x755D2C49
	.4byte 0x276D2053
	.4byte 0x56292E0A
	.4byte 0x00000000
	.4byte 0x53657276
	.4byte 0x65723A20
	.4byte 0x41494428
	.4byte 0x25752920
	.4byte 0x73757370
	.4byte 0x656E6428
	.4byte 0x2575292E
	.4byte 0x0A000000
	.4byte 0x49676E6F
	.4byte 0x72652073
	.4byte 0x75737065
	.4byte 0x6E642063
	.4byte 0x6D642866
	.4byte 0x726F6D20
	.4byte 0x434C5B25
	.4byte 0x755D2C49
	.4byte 0x276D2043
	.4byte 0x4C292E0A
	.4byte 0x00000000
	.4byte 0x2A2A2A20
	.4byte 0x4457435F
	.4byte 0x4D415443
	.4byte 0x485F434F
	.4byte 0x4D4D414E
	.4byte 0x445F5355
	.4byte 0x5350454E
	.4byte 0x445F4D41
	.4byte 0x5443483A
	.4byte 0x20676574
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x72657370
	.4byte 0x6F6E6365
	.4byte 0x2E0A0000
	.4byte 0x2A2A2A20
	.4byte 0x4457435F
	.4byte 0x4D415443
	.4byte 0x485F434F
	.4byte 0x4D4D414E
	.4byte 0x445F5355
	.4byte 0x5350454E
	.4byte 0x445F4D41
	.4byte 0x5443483A
	.4byte 0x20497420
	.4byte 0x68617320
	.4byte 0x6E6F7420
	.4byte 0x636F6D70
	.4byte 0x6C657465
	.4byte 0x64206974
	.4byte 0x20796574
	.4byte 0x2E0A0000
	.4byte 0x436C6965
	.4byte 0x6E743A20
	.4byte 0x73757370
	.4byte 0x656E6428
	.4byte 0x2575292E
	.4byte 0x20426974
	.4byte 0x6D617028
	.4byte 0x2575290A
	.4byte 0x00000000
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20756E65
	.4byte 0x78706563
	.4byte 0x74656420
	.4byte 0x6D617463
	.4byte 0x68696E67
	.4byte 0x20636F6D
	.4byte 0x6D616E64
	.4byte 0x20307825
	.4byte 0x3032782E
	.4byte 0x0A000000
.endobj lbl_807BFE68

# .data:0x5650 | 0x807C0448 | size: 0x24
.obj jumptable_807C0448, global
	.4byte fn_806BCD40+0x1254
	.4byte fn_806BCD40+0x125C
	.4byte fn_806BCD40+0x1264
	.4byte fn_806BCD40+0x126C
	.4byte fn_806BCD40+0x1274
	.4byte fn_806BCD40+0x127C
	.4byte fn_806BCD40+0x1284
	.4byte fn_806BCD40+0x128C
	.4byte fn_806BCD40+0x1294
.endobj jumptable_807C0448

# .data:0x5674 | 0x807C046C | size: 0x24
.obj jumptable_807C046C, global
	.4byte fn_806BCD40+0x83C
	.4byte fn_806BCD40+0x844
	.4byte fn_806BCD40+0x84C
	.4byte fn_806BCD40+0x854
	.4byte fn_806BCD40+0x85C
	.4byte fn_806BCD40+0x864
	.4byte fn_806BCD40+0x86C
	.4byte fn_806BCD40+0x874
	.4byte fn_806BCD40+0x87C
.endobj jumptable_807C046C

# .data:0x5698 | 0x807C0490 | size: 0x174
.obj lbl_807C0490, global
	.4byte 0x2A2A2A20
	.4byte 0x312D410A
	.4byte 0x00000000
	.4byte 0x2A2A2A20
	.4byte 0x312D420A
	.4byte 0x00000000
	.4byte 0x2A2A2A20
	.4byte 0x320A0000
	.4byte 0x2A2A2A20
	.4byte 0x330A0000
	.4byte 0x2A2A2A20
	.4byte 0x340A0000
	.4byte 0x2A2A2A20
	.4byte 0x350A0000
	.4byte 0x2A2A2A20
	.4byte 0x360A0000
	.4byte 0x2A2A2A20
	.4byte 0x74686973
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x6973206C
	.4byte 0x6F636B65
	.4byte 0x64212121
	.4byte 0x0A000000
	.4byte 0x2A2A2A20
	.4byte 0x696C6C65
	.4byte 0x67616C20
	.4byte 0x6D657368
	.4byte 0x20726573
	.4byte 0x65727665
	.4byte 0x20636F6D
	.4byte 0x6D616E64
	.4byte 0x28257529
	.4byte 0x2E0A0000
	.4byte 0x2A2A2A20
	.4byte 0x6D79206D
	.4byte 0x61746368
	.4byte 0x20747970
	.4byte 0x65282564
	.4byte 0x29207265
	.4byte 0x7376206D
	.4byte 0x61746368
	.4byte 0x20747970
	.4byte 0x65282564
	.4byte 0x292E0A00
	.4byte 0x54686973
	.4byte 0x20667269
	.4byte 0x656E6420
	.4byte 0x646F6573
	.4byte 0x6E277420
	.4byte 0x65786973
	.4byte 0x7420696E
	.4byte 0x20667269
	.4byte 0x656E6449
	.4byte 0x64784C69
	.4byte 0x73742E0A
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x2A2A2A20
	.4byte 0x6D792074
	.4byte 0x6F706F6C
	.4byte 0x6F677928
	.4byte 0x25642920
	.4byte 0x72657376
	.4byte 0x20746F70
	.4byte 0x6F6C6F67
	.4byte 0x79282564
	.4byte 0x292E0A00
	.4byte 0x2A2A2A20
	.4byte 0x70696428
	.4byte 0x25752920
	.4byte 0x68617320
	.4byte 0x616C7265
	.4byte 0x61647920
	.4byte 0x6265656E
	.4byte 0x20696E20
	.4byte 0x6C697374
	.4byte 0x2E0A0000
	.4byte 0x706C6561
	.4byte 0x73652077
	.4byte 0x6169743A
	.4byte 0x20717232
	.4byte 0x49503A25
	.4byte 0x75207172
	.4byte 0x32506F72
	.4byte 0x743A2575
	.4byte 0x20717232
	.4byte 0x49504D3A
	.4byte 0x25752071
	.4byte 0x7232506F
	.4byte 0x72744D3A
	.4byte 0x2025750A
	.4byte 0x00000000
.endobj lbl_807C0490

# .data:0x580C | 0x807C0604 | size: 0x2A
.obj lbl_807C0604, global
	.string "Delay ResvCommand - qr2IP & qr2Port = 0.\n"
.endobj lbl_807C0604

# .data:0x5836 | 0x807C062E | size: 0x2
.obj gap_07_807C062E_data, global
.hidden gap_07_807C062E_data
	.2byte 0x0000
.endobj gap_07_807C062E_data

# .data:0x5838 | 0x807C0630 | size: 0x218
.obj lbl_807C0630, global
	.4byte 0x74686973
	.4byte 0x20627564
	.4byte 0x64792069
	.4byte 0x73206C6F
	.4byte 0x636B6564
	.4byte 0x2E207365
	.4byte 0x61726368
	.4byte 0x206E6578
	.4byte 0x74206275
	.4byte 0x6464792E
	.4byte 0x2E2E0A00
	.4byte 0x44574369
	.4byte 0x5F43616E
	.4byte 0x63656C50
	.4byte 0x7265436F
	.4byte 0x6E6E6563
	.4byte 0x74656453
	.4byte 0x65727665
	.4byte 0x7250726F
	.4byte 0x63657373
	.4byte 0x203A2073
	.4byte 0x65727665
	.4byte 0x720A0000
	.4byte 0x53656E74
	.4byte 0x2043414E
	.4byte 0x43454C20
	.4byte 0x53594E20
	.4byte 0x25642063
	.4byte 0x6F6D6D61
	.4byte 0x6E642074
	.4byte 0x6F202575
	.4byte 0x2E0A0000
	.4byte 0x44574369
	.4byte 0x5F4E6F64
	.4byte 0x65496E66
	.4byte 0x6F4C6973
	.4byte 0x745F4765
	.4byte 0x744E6F64
	.4byte 0x65496E66
	.4byte 0x6F466F72
	.4byte 0x50726F66
	.4byte 0x696C6549
	.4byte 0x44206973
	.4byte 0x204E554C
	.4byte 0x4C0A0000
	.4byte 0x44574369
	.4byte 0x5F43616E
	.4byte 0x63656C50
	.4byte 0x7265436F
	.4byte 0x6E6E6563
	.4byte 0x74656453
	.4byte 0x65727665
	.4byte 0x7250726F
	.4byte 0x63657373
	.4byte 0x203A2063
	.4byte 0x6C69656E
	.4byte 0x740A0000
	.4byte 0x436C6561
	.4byte 0x72207465
	.4byte 0x6D70206E
	.4byte 0x65772063
	.4byte 0x6C69656E
	.4byte 0x7420696E
	.4byte 0x666F2E0A
	.4byte 0x00000000
	.4byte 0x436C6F73
	.4byte 0x6520616C
	.4byte 0x6C20636F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x20616E64
	.4byte 0x20726573
	.4byte 0x74617274
	.4byte 0x206D6174
	.4byte 0x6368696E
	.4byte 0x672E0A00
	.4byte 0x44574369
	.4byte 0x5F526573
	.4byte 0x74617274
	.4byte 0x46726F6D
	.4byte 0x54696D65
	.4byte 0x6F757428
	.4byte 0x29207368
	.4byte 0x6F756C64
	.4byte 0x6E277420
	.4byte 0x62652063
	.4byte 0x616C6C65
	.4byte 0x642E0A00
	.4byte 0x436C6F73
	.4byte 0x65642061
	.4byte 0x6C6C2063
	.4byte 0x6F6E6E65
	.4byte 0x6374696F
	.4byte 0x6E732061
	.4byte 0x6E642072
	.4byte 0x65737461
	.4byte 0x7274206D
	.4byte 0x61746368
	.4byte 0x696E672E
	.4byte 0x0A000000
	.4byte 0x43616E63
	.4byte 0x656C2061
	.4byte 0x6E642072
	.4byte 0x65737461
	.4byte 0x72742063
	.4byte 0x6C69656E
	.4byte 0x74207072
	.4byte 0x6F636573
	.4byte 0x732E0A00
	.4byte 0x43616E63
	.4byte 0x656C2061
	.4byte 0x6E642072
	.4byte 0x65747279
	.4byte 0x20746F20
	.4byte 0x72657365
	.4byte 0x7276652E
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x4D657368
	.4byte 0x20637265
	.4byte 0x61746520
	.4byte 0x636F6D70
	.4byte 0x6C657465
	.4byte 0x642E0A00
	.4byte 0x41636365
	.4byte 0x70746564
	.4byte 0x20636F6E
	.4byte 0x6E656374
	.4byte 0x696F6E43
	.4byte 0x6F6D706C
	.4byte 0x65746564
	.4byte 0x206D6174
	.4byte 0x6368696E
	.4byte 0x67210A00
.endobj lbl_807C0630

# .data:0x5A50 | 0x807C0848 | size: 0x60
.obj lbl_807C0848, global
	.4byte 0x2A2A2A20
	.4byte 0x5741524E
	.4byte 0x494E4720
	.4byte 0x2A2A2A20
	.4byte 0x70696428
	.4byte 0x25752920
	.4byte 0x61696428
	.4byte 0x25642920
	.4byte 0x69732069
	.4byte 0x6E206C69
	.4byte 0x73742E2E
	.4byte 0x636C6F73
	.4byte 0x650A0000
	.4byte 0x54656C6C
	.4byte 0x206E6577
	.4byte 0x20636C69
	.4byte 0x656E7420
	.4byte 0x636F6D70
	.4byte 0x6C657469
	.4byte 0x6F6E206F
	.4byte 0x66206D61
	.4byte 0x74636869
	.4byte 0x6E672E0A
	.4byte 0x00000000
.endobj lbl_807C0848

# .data:0x5AB0 | 0x807C08A8 | size: 0x84
.obj lbl_807C08A8, global
	.4byte 0x53656E64
	.4byte 0x20636C69
	.4byte 0x656E742D
	.4byte 0x636C6965
	.4byte 0x6E74206C
	.4byte 0x696E6B20
	.4byte 0x72657175
	.4byte 0x65737428
	.4byte 0x2564292E
	.4byte 0x0A000000
	.4byte 0x43414E43
	.4byte 0x454C2120
	.4byte 0x73746174
	.4byte 0x65202564
	.4byte 0x2C206E75
	.4byte 0x6D486F73
	.4byte 0x743D2564
	.4byte 0x2E0A0000
	.4byte 0x4552524F
	.4byte 0x52202D20
	.4byte 0x44574369
	.4byte 0x5F526573
	.4byte 0x74617274
	.4byte 0x46726F6D
	.4byte 0x43616E63
	.4byte 0x656C203A
	.4byte 0x206D6174
	.4byte 0x63685479
	.4byte 0x70652025
	.4byte 0x642C206C
	.4byte 0x6576656C
	.4byte 0x2025640A
	.4byte 0x00000000
.endobj lbl_807C08A8

# .data:0x5B34 | 0x807C092C | size: 0x5A4
.obj lbl_807C092C, global
	.4byte 0x53656E74
	.4byte 0x2053594E
	.4byte 0x20256420
	.4byte 0x7061636B
	.4byte 0x65742074
	.4byte 0x6F206169
	.4byte 0x64202564
	.4byte 0x2E0A0000
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x205B5359
	.4byte 0x4E5D2043
	.4byte 0x6F6E6E65
	.4byte 0x6374696F
	.4byte 0x6E20746F
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x77617320
	.4byte 0x73687574
	.4byte 0x20646F77
	.4byte 0x6E2E0A00
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x20776169
	.4byte 0x74205359
	.4byte 0x4E2D4143
	.4byte 0x4B202861
	.4byte 0x69646269
	.4byte 0x746D6170
	.4byte 0x20307825
	.4byte 0x78292E20
	.4byte 0x52657374
	.4byte 0x61727420
	.4byte 0x6D617463
	.4byte 0x68696E67
	.4byte 0x2E0A0000
	.4byte 0x44574369
	.4byte 0x5F536572
	.4byte 0x76657253
	.4byte 0x796E5469
	.4byte 0x6D656F75
	.4byte 0x74457865
	.4byte 0x633A2043
	.4byte 0x6F6E7469
	.4byte 0x6E756520
	.4byte 0x53796E20
	.4byte 0x65786563
	.4byte 0x2E0A0000
	.4byte 0x44574369
	.4byte 0x5F536572
	.4byte 0x76657253
	.4byte 0x796E5469
	.4byte 0x6D656F75
	.4byte 0x74457865
	.4byte 0x633A2052
	.4byte 0x65737461
	.4byte 0x7274206D
	.4byte 0x61746368
	.4byte 0x2E0A0000
	.4byte 0x2A2A2054
	.4byte 0x696D656F
	.4byte 0x75743A20
	.4byte 0x72657365
	.4byte 0x6E742053
	.4byte 0x594E2D41
	.4byte 0x434B2E2E
	.4byte 0x2E282564
	.4byte 0x2F256429
	.4byte 0x0A000000
	.4byte 0x72657365
	.4byte 0x6E742053
	.4byte 0x594E2D41
	.4byte 0x434B2074
	.4byte 0x6F206169
	.4byte 0x64282564
	.4byte 0x292E0A00
	.4byte 0x00000000
	.4byte 0x72657365
	.4byte 0x6E742053
	.4byte 0x594E2D41
	.4byte 0x434B2074
	.4byte 0x6F206169
	.4byte 0x64282564
	.4byte 0x29286E65
	.4byte 0x7720636C
	.4byte 0x69656E74
	.4byte 0x292E0A00
	.4byte 0x4457435F
	.4byte 0x4D415443
	.4byte 0x485F5354
	.4byte 0x4154455F
	.4byte 0x53565F53
	.4byte 0x594E5F43
	.4byte 0x4C4F5345
	.4byte 0x5F574149
	.4byte 0x543A2073
	.4byte 0x656E6420
	.4byte 0x61636B20
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x2043414E
	.4byte 0x43454C20
	.4byte 0x53594E20
	.4byte 0x25642063
	.4byte 0x6F6D6D61
	.4byte 0x6E642066
	.4byte 0x726F6D20
	.4byte 0x25752E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x65642043
	.4byte 0x414E4345
	.4byte 0x4C205359
	.4byte 0x4E2E0A00
	.4byte 0x54696D65
	.4byte 0x6F75743A
	.4byte 0x20776169
	.4byte 0x74206361
	.4byte 0x6E63656C
	.4byte 0x2053594E
	.4byte 0x2D41434B
	.4byte 0x20286169
	.4byte 0x64626974
	.4byte 0x6D617020
	.4byte 0x30782578
	.4byte 0x292E0A00
	.4byte 0x4D617463
	.4byte 0x682C2047
	.4byte 0x50206572
	.4byte 0x726F7220
	.4byte 0x25640A00
	.4byte 0x4D617463
	.4byte 0x682C2053
	.4byte 0x42206572
	.4byte 0x726F7220
	.4byte 0x25640A00
	.4byte 0x4D617463
	.4byte 0x682C2051
	.4byte 0x52322065
	.4byte 0x72726F72
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x4D617463
	.4byte 0x682C2047
	.4byte 0x54322065
	.4byte 0x72726F72
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x44574369
	.4byte 0x5F534243
	.4byte 0x616C6C62
	.4byte 0x61636B00
	.4byte 0x53424361
	.4byte 0x6C6C6261
	.4byte 0x636B203A
	.4byte 0x20726561
	.4byte 0x736F6E20
	.4byte 0x25642028
	.4byte 0x73746174
	.4byte 0x65203D20
	.4byte 0x2564290A
	.4byte 0x00000000
	.4byte 0x53657276
	.4byte 0x65724272
	.4byte 0x6F777365
	.4byte 0x724C696D
	.4byte 0x69745570
	.4byte 0x64617465
	.4byte 0x2074696D
	.4byte 0x656F7574
	.4byte 0x20757064
	.4byte 0x6174652E
	.4byte 0x28257329
	.4byte 0x0A000000
	.4byte 0x6E756D70
	.4byte 0x6C617965
	.4byte 0x72730000
	.4byte 0x6D617870
	.4byte 0x6C617965
	.4byte 0x72730000
	.4byte 0x44656C65
	.4byte 0x74656420
	.4byte 0x73657276
	.4byte 0x6572205B
	.4byte 0x25645D2E
	.4byte 0x0A000000
	.4byte 0x73656172
	.4byte 0x63684950
	.4byte 0x3A202573
	.4byte 0x2C207365
	.4byte 0x61726368
	.4byte 0x506F7274
	.4byte 0x3A202564
	.4byte 0x0A000000
	.4byte 0x40404040
	.4byte 0x20404040
	.4byte 0x20424144
	.4byte 0x202A2A2A
	.4byte 0x2A207072
	.4byte 0x6F66696C
	.4byte 0x65494420
	.4byte 0x213D2044
	.4byte 0x5743695F
	.4byte 0x4765744D
	.4byte 0x61746368
	.4byte 0x436E7428
	.4byte 0x292D3E72
	.4byte 0x65715072
	.4byte 0x6F66696C
	.4byte 0x65494420
	.4byte 0x2A2A2A2A
	.4byte 0x2E0A0000
	.4byte 0x2A2A2A20
	.4byte 0x67726F75
	.4byte 0x70494420
	.4byte 0x73656172
	.4byte 0x6368202A
	.4byte 0x2A2A2067
	.4byte 0x726F7570
	.4byte 0x49443A20
	.4byte 0x66696E64
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x6E756D70
	.4byte 0x6C617965
	.4byte 0x72733A20
	.4byte 0x25642E0A
	.4byte 0x00000000
	.4byte 0x2A2A2A20
	.4byte 0x67726F75
	.4byte 0x70494420
	.4byte 0x73656172
	.4byte 0x6368202A
	.4byte 0x2A2A2073
	.4byte 0x656C6563
	.4byte 0x74207468
	.4byte 0x69732073
	.4byte 0x65727665
	.4byte 0x72282564
	.4byte 0x292E0A00
	.4byte 0x46696E64
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x6E756D20
	.4byte 0x62792067
	.4byte 0x726F7570
	.4byte 0x49443A20
	.4byte 0x25642E0A
	.4byte 0x00000000
	.4byte 0x46696E64
	.4byte 0x20736572
	.4byte 0x7665723A
	.4byte 0x20686F73
	.4byte 0x74206E6F
	.4byte 0x7420666F
	.4byte 0x756E642E
	.4byte 0x0A000000
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x47657450
	.4byte 0x72697661
	.4byte 0x74654164
	.4byte 0x64726573
	.4byte 0x73202020
	.4byte 0x20203D20
	.4byte 0x25730A00
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x47657450
	.4byte 0x72697661
	.4byte 0x7465496E
	.4byte 0x65744164
	.4byte 0x64726573
	.4byte 0x73203D20
	.4byte 0x25780A00
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x47657450
	.4byte 0x72697661
	.4byte 0x74655175
	.4byte 0x65727950
	.4byte 0x6F727420
	.4byte 0x20203D20
	.4byte 0x25640A00
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x47657450
	.4byte 0x75626C69
	.4byte 0x63416464
	.4byte 0x72657373
	.4byte 0x20202020
	.4byte 0x20203D20
	.4byte 0x25730A00
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x47657450
	.4byte 0x75626C69
	.4byte 0x63496E65
	.4byte 0x74416464
	.4byte 0x72657320
	.4byte 0x20203D20
	.4byte 0x25780A00
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x47657450
	.4byte 0x75626C69
	.4byte 0x63517565
	.4byte 0x7279506F
	.4byte 0x72742020
	.4byte 0x20203D20
	.4byte 0x25640A00
	.4byte 0x53425365
	.4byte 0x72766572
	.4byte 0x48617350
	.4byte 0x72697661
	.4byte 0x74654164
	.4byte 0x64726573
	.4byte 0x73202020
	.4byte 0x20203D20
	.4byte 0x25640A00
	.4byte 0x6E756D70
	.4byte 0x6C617965
	.4byte 0x72732020
	.4byte 0x3D202564
	.4byte 0x0A000000
	.4byte 0x6D617870
	.4byte 0x6C617965
	.4byte 0x72732020
	.4byte 0x3D202564
	.4byte 0x0A000000
	.4byte 0x25732020
	.4byte 0x2020203D
	.4byte 0x2025750A
	.4byte 0x00000000
	.4byte 0x25732020
	.4byte 0x203D2025
	.4byte 0x640A0000
	.4byte 0x25732020
	.4byte 0x3D202573
	.4byte 0x0A000000
	.4byte 0x4E4F4E45
	.4byte 0x00000000
	.4byte 0x25732020
	.4byte 0x3D202564
	.4byte 0x0A000000
	.4byte 0x44656C65
	.4byte 0x74656420
	.4byte 0x73657276
	.4byte 0x6572205B
	.4byte 0x25645D20
	.4byte 0x28657661
	.4byte 0x6C20706F
	.4byte 0x696E7420
	.4byte 0x69732025
	.4byte 0x64292E0A
	.4byte 0x00000000
.endobj lbl_807C092C

# .data:0x60D8 | 0x807C0ED0 | size: 0xA8
.obj lbl_807C0ED0, global
	.4byte 0x53657276
	.4byte 0x65725B25
	.4byte 0x645D2069
	.4byte 0x73207365
	.4byte 0x6C656374
	.4byte 0x65642028
	.4byte 0x25642F31
	.4byte 0x30303A20
	.4byte 0x72616E64
	.4byte 0x20256429
	.4byte 0x0A000000
	.4byte 0x4E554D50
	.4byte 0x4C415945
	.4byte 0x52530000
	.4byte 0x4D415850
	.4byte 0x4C415945
	.4byte 0x52530000
	.4byte 0x50494400
	.4byte 0x54595045
	.4byte 0x00000000
	.4byte 0x4556414C
	.4byte 0x00000000
	.4byte 0x47524F55
	.4byte 0x50494400
	.4byte 0x484F5354
	.4byte 0x00000000
	.4byte 0x53555350
	.4byte 0x454E4400
	.4byte 0x556E6B6E
	.4byte 0x6F776E00
	.4byte 0x5152322C
	.4byte 0x20526563
	.4byte 0x65697665
	.4byte 0x64205365
	.4byte 0x72766572
	.4byte 0x4B657952
	.4byte 0x6571203A
	.4byte 0x206B6579
	.4byte 0x49442025
	.4byte 0x64282573
	.4byte 0x29202D20
	.4byte 0x25640A00
.endobj lbl_807C0ED0

# .data:0x6180 | 0x807C0F78 | size: 0x27
.obj lbl_807C0F78, global
	.string "QR2, Received KeyListReq : keytype %d\n"
.endobj lbl_807C0F78

# .data:0x61A7 | 0x807C0F9F | size: 0x1
.obj gap_07_807C0F9F_data, global
.hidden gap_07_807C0F9F_data
	.byte 0x00
.endobj gap_07_807C0F9F_data

# .data:0x61A8 | 0x807C0FA0 | size: 0x2F
.obj lbl_807C0FA0, global
	.string "QR2 Failed query addition to master server %d\n"
.endobj lbl_807C0FA0

# .data:0x61D7 | 0x807C0FCF | size: 0x1
.obj gap_07_807C0FCF_data, global
.hidden gap_07_807C0FCF_data
	.byte 0x00
.endobj gap_07_807C0FCF_data

# .data:0x61D8 | 0x807C0FD0 | size: 0x1B8
.obj lbl_807C0FD0, global
	.4byte 0x476F7420
	.4byte 0x6D792071
	.4byte 0x75657279
	.4byte 0x20495020
	.4byte 0x25732026
	.4byte 0x20706F72
	.4byte 0x74202564
	.4byte 0x2E0A0000
	.4byte 0x476F7420
	.4byte 0x4E4E2072
	.4byte 0x65717565
	.4byte 0x73742C20
	.4byte 0x636F6F6B
	.4byte 0x6965203D
	.4byte 0x2025782E
	.4byte 0x0A000000
	.4byte 0x42757420
	.4byte 0x49276D20
	.4byte 0x77616974
	.4byte 0x696E6720
	.4byte 0x6E657720
	.4byte 0x636C6965
	.4byte 0x6E742E2E
	.4byte 0x2E0A0000
	.4byte 0x49276D20
	.4byte 0x696E2043
	.4byte 0x4C5F5741
	.4byte 0x4954494E
	.4byte 0x47207374
	.4byte 0x61742E2E
	.4byte 0x69676E6F
	.4byte 0x72652E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x65642047
	.4byte 0x5432206D
	.4byte 0x61746368
	.4byte 0x696E6720
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x476F7420
	.4byte 0x64696666
	.4byte 0x6572656E
	.4byte 0x74207665
	.4byte 0x7273696F
	.4byte 0x6E204754
	.4byte 0x3220636F
	.4byte 0x6D6D616E
	.4byte 0x642E0A00
	.4byte 0x476F7420
	.4byte 0x77726F6E
	.4byte 0x67206461
	.4byte 0x74612073
	.4byte 0x697A6520
	.4byte 0x47543220
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x00000000
	.4byte 0x3C475432
	.4byte 0x3E205245
	.4byte 0x43562D30
	.4byte 0x78253032
	.4byte 0x78203C2D
	.4byte 0x205B2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D3A2D
	.4byte 0x2D2D2D2D
	.4byte 0x5D205B70
	.4byte 0x69643D25
	.4byte 0x755D0A00
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x65642053
	.4byte 0x42206D61
	.4byte 0x74636869
	.4byte 0x6E672063
	.4byte 0x6F6D6D61
	.4byte 0x6E642E0A
	.4byte 0x00000000
	.4byte 0x476F7420
	.4byte 0x756E6465
	.4byte 0x66696E65
	.4byte 0x64205342
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x476F7420
	.4byte 0x64696666
	.4byte 0x6572656E
	.4byte 0x74207665
	.4byte 0x7273696F
	.4byte 0x6E205342
	.4byte 0x636F6D6D
	.4byte 0x616E642E
	.4byte 0x0A000000
	.4byte 0x3C53423E
	.4byte 0x20524543
	.4byte 0x562D3078
	.4byte 0x25303278
	.4byte 0x203C2D20
	.4byte 0x5B253038
	.4byte 0x783A2564
	.4byte 0x5D205B70
	.4byte 0x69643D25
	.4byte 0x755D0A00
.endobj lbl_807C0FD0

# .data:0x6390 | 0x807C1188 | size: 0x2A0
.obj lbl_807C1188, global
	.4byte 0x4E4E2C20
	.4byte 0x476F7420
	.4byte 0x73746174
	.4byte 0x65207570
	.4byte 0x64617465
	.4byte 0x3A202564
	.4byte 0x0A000000
	.4byte 0x4E4E2C20
	.4byte 0x436F6D70
	.4byte 0x6C657465
	.4byte 0x204E4154
	.4byte 0x204E6567
	.4byte 0x6F746961
	.4byte 0x74696F6E
	.4byte 0x2E207265
	.4byte 0x73756C74
	.4byte 0x203A2025
	.4byte 0x640A0000
	.4byte 0x4E4E2063
	.4byte 0x6F6F6B69
	.4byte 0x65203D20
	.4byte 0x25782E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x6564204E
	.4byte 0x4E206166
	.4byte 0x74657220
	.4byte 0x63616E63
	.4byte 0x656C2E0A
	.4byte 0x00000000
	.4byte 0x4E4E2C20
	.4byte 0x72656D6F
	.4byte 0x74652061
	.4byte 0x64647265
	.4byte 0x7373203A
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x4E4E2063
	.4byte 0x68696C64
	.4byte 0x2066696E
	.4byte 0x69736865
	.4byte 0x64204E61
	.4byte 0x74204E65
	.4byte 0x676F7469
	.4byte 0x6174696F
	.4byte 0x6E2E0A00
	.4byte 0x67743243
	.4byte 0x6F6E6E65
	.4byte 0x63742829
	.4byte 0x20746F20
	.4byte 0x28257329
	.4byte 0x0A000000
	.4byte 0x4D657368
	.4byte 0x204E4E20
	.4byte 0x436F756E
	.4byte 0x742B2B2E
	.4byte 0x0A000000
	.4byte 0x4E4E2070
	.4byte 0x6172656E
	.4byte 0x74206669
	.4byte 0x6E697368
	.4byte 0x6564204E
	.4byte 0x6174204E
	.4byte 0x65676F74
	.4byte 0x69617469
	.4byte 0x6F6E2E0A
	.4byte 0x00000000
	.4byte 0x49676E6F
	.4byte 0x72652064
	.4byte 0x656C6179
	.4byte 0x6564204E
	.4byte 0x4E206572
	.4byte 0x726F7220
	.4byte 0x61667465
	.4byte 0x72206361
	.4byte 0x6E63656C
	.4byte 0x2E0A0000
	.4byte 0x4D617463
	.4byte 0x682C204E
	.4byte 0x4E207265
	.4byte 0x73756C74
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x4661696C
	.4byte 0x65642025
	.4byte 0x642F2564
	.4byte 0x204E4E20
	.4byte 0x73656E64
	.4byte 0x2E0A0000
	.4byte 0x41626F72
	.4byte 0x74204E4E
	.4byte 0x2E0A0000
	.4byte 0x4E4E2066
	.4byte 0x61696C75
	.4byte 0x72652025
	.4byte 0x642F2564
	.4byte 0x2E0A0000
	.4byte 0x4661696C
	.4byte 0x65642025
	.4byte 0x642F2564
	.4byte 0x204E4E20
	.4byte 0x72656376
	.4byte 0x2E0A0000
	.4byte 0x00000000
	.4byte 0x2A2A5365
	.4byte 0x72766572
	.4byte 0x2A2A2041
	.4byte 0x49442825
	.4byte 0x75292073
	.4byte 0x75737065
	.4byte 0x6E642825
	.4byte 0x75292062
	.4byte 0x69746D61
	.4byte 0x70282575
	.4byte 0x2D3E2575
	.4byte 0x292E0A00
	.4byte 0x62757420
	.4byte 0x69676E6F
	.4byte 0x7265642E
	.4byte 0x0A000000
	.4byte 0x2A2A2A3C
	.4byte 0x53555350
	.4byte 0x454E443E
	.4byte 0x20737573
	.4byte 0x70656E64
	.4byte 0x2070726F
	.4byte 0x63657373
	.4byte 0x28257329
	.4byte 0x20686173
	.4byte 0x206E6F74
	.4byte 0x20656E64
	.4byte 0x65642079
	.4byte 0x6574210A
	.4byte 0x00000000
	.4byte 0x73757370
	.4byte 0x656E6420
	.4byte 0x4D617463
	.4byte 0x68282573
	.4byte 0x2920636F
	.4byte 0x6D706C65
	.4byte 0x74656421
	.4byte 0x0A000000
	.4byte 0x6D657368
	.4byte 0x206D616B
	.4byte 0x696E6720
	.4byte 0x73746174
	.4byte 0x28256429
	.4byte 0x0A000000
	.4byte 0x74656D70
	.4byte 0x206E6577
	.4byte 0x206E6F64
	.4byte 0x6520696E
	.4byte 0x666F2076
	.4byte 0x616C6964
	.4byte 0x69747928
	.4byte 0x2564290A
	.4byte 0x00000000
	.4byte 0x73746F70
	.4byte 0x206D6573
	.4byte 0x68206372
	.4byte 0x65617465
	.4byte 0x2E286169
	.4byte 0x643A2532
	.4byte 0x64207069
	.4byte 0x643A2575
	.4byte 0x290A0000
.endobj lbl_807C1188

# .data:0x6630 | 0x807C1428 | size: 0x15
.obj lbl_807C1428, global
	.string "DWC_MATCH_STATE_INIT"
.endobj lbl_807C1428

# .data:0x6645 | 0x807C143D | size: 0x3
.obj gap_07_807C143D_data, global
.hidden gap_07_807C143D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C143D_data

# .data:0x6648 | 0x807C1440 | size: 0x1B
.obj lbl_807C1440, global
	.string "DWC_MATCH_STATE_CL_WAITING"
.endobj lbl_807C1440

# .data:0x6663 | 0x807C145B | size: 0x1
.obj gap_07_807C145B_data, global
.hidden gap_07_807C145B_data
	.byte 0x00
.endobj gap_07_807C145B_data

# .data:0x6664 | 0x807C145C | size: 0x1F
.obj lbl_807C145C, global
	.string "DWC_MATCH_STATE_CL_SEARCH_HOST"
.endobj lbl_807C145C

# .data:0x6683 | 0x807C147B | size: 0x1
.obj gap_07_807C147B_data, global
.hidden gap_07_807C147B_data
	.byte 0x00
.endobj gap_07_807C147B_data

# .data:0x6684 | 0x807C147C | size: 0x1D
.obj lbl_807C147C, global
	.string "DWC_MATCH_STATE_CL_WAIT_RESV"
.endobj lbl_807C147C

# .data:0x66A1 | 0x807C1499 | size: 0x3
.obj gap_07_807C1499_data, global
.hidden gap_07_807C1499_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C1499_data

# .data:0x66A4 | 0x807C149C | size: 0x24
.obj lbl_807C149C, global
	.string "DWC_MATCH_STATE_CL_SEARCH_EVAL_HOST"
.endobj lbl_807C149C

# .data:0x66C8 | 0x807C14C0 | size: 0x16
.obj lbl_807C14C0, global
	.string "DWC_MATCH_STATE_CL_NN"
.endobj lbl_807C14C0

# .data:0x66DE | 0x807C14D6 | size: 0x2
.obj gap_07_807C14D6_data, global
.hidden gap_07_807C14D6_data
	.2byte 0x0000
.endobj gap_07_807C14D6_data

# .data:0x66E0 | 0x807C14D8 | size: 0x17
.obj lbl_807C14D8, global
	.string "DWC_MATCH_STATE_CL_GT2"
.endobj lbl_807C14D8

# .data:0x66F7 | 0x807C14EF | size: 0x1
.obj gap_07_807C14EF_data, global
.hidden gap_07_807C14EF_data
	.byte 0x00
.endobj gap_07_807C14EF_data

# .data:0x66F8 | 0x807C14F0 | size: 0x1E
.obj lbl_807C14F0, global
	.string "DWC_MATCH_STATE_CL_CANCEL_SYN"
.endobj lbl_807C14F0

# .data:0x6716 | 0x807C150E | size: 0x2
.obj gap_07_807C150E_data, global
.hidden gap_07_807C150E_data
	.2byte 0x0000
.endobj gap_07_807C150E_data

# .data:0x6718 | 0x807C1510 | size: 0x17
.obj lbl_807C1510, global
	.string "DWC_MATCH_STATE_CL_SYN"
.endobj lbl_807C1510

# .data:0x672F | 0x807C1527 | size: 0x1
.obj gap_07_807C1527_data, global
.hidden gap_07_807C1527_data
	.byte 0x00
.endobj gap_07_807C1527_data

# .data:0x6730 | 0x807C1528 | size: 0x1C
.obj lbl_807C1528, global
	.string "DWC_MATCH_STATE_CL_SVDOWN_1"
.endobj lbl_807C1528

# .data:0x674C | 0x807C1544 | size: 0x1C
.obj lbl_807C1544, global
	.string "DWC_MATCH_STATE_CL_SVDOWN_2"
.endobj lbl_807C1544

# .data:0x6768 | 0x807C1560 | size: 0x1C
.obj lbl_807C1560, global
	.string "DWC_MATCH_STATE_CL_SVDOWN_3"
.endobj lbl_807C1560

# .data:0x6784 | 0x807C157C | size: 0x27
.obj lbl_807C157C, global
	.string "DWC_MATCH_STATE_CL_SEARCH_GROUPID_HOST"
.endobj lbl_807C157C

# .data:0x67AB | 0x807C15A3 | size: 0x1
.obj gap_07_807C15A3_data, global
.hidden gap_07_807C15A3_data
	.byte 0x00
.endobj gap_07_807C15A3_data

# .data:0x67AC | 0x807C15A4 | size: 0x1B
.obj lbl_807C15A4, global
	.string "DWC_MATCH_STATE_SV_WAITING"
.endobj lbl_807C15A4

# .data:0x67C7 | 0x807C15BF | size: 0x1
.obj gap_07_807C15BF_data, global
.hidden gap_07_807C15BF_data
	.byte 0x00
.endobj gap_07_807C15BF_data

# .data:0x67C8 | 0x807C15C0 | size: 0x1A
.obj lbl_807C15C0, global
	.string "DWC_MATCH_STATE_SV_OWN_NN"
.endobj lbl_807C15C0

# .data:0x67E2 | 0x807C15DA | size: 0x2
.obj gap_07_807C15DA_data, global
.hidden gap_07_807C15DA_data
	.2byte 0x0000
.endobj gap_07_807C15DA_data

# .data:0x67E4 | 0x807C15DC | size: 0x1B
.obj lbl_807C15DC, global
	.string "DWC_MATCH_STATE_SV_OWN_GT2"
.endobj lbl_807C15DC

# .data:0x67FF | 0x807C15F7 | size: 0x1
.obj gap_07_807C15F7_data, global
.hidden gap_07_807C15F7_data
	.byte 0x00
.endobj gap_07_807C15F7_data

# .data:0x6800 | 0x807C15F8 | size: 0x20
.obj lbl_807C15F8, global
	.string "DWC_MATCH_STATE_SV_WAIT_CL_LINK"
.endobj lbl_807C15F8

# .data:0x6820 | 0x807C1618 | size: 0x1E
.obj lbl_807C1618, global
	.string "DWC_MATCH_STATE_SV_CANCEL_SYN"
.endobj lbl_807C1618

# .data:0x683E | 0x807C1636 | size: 0x2
.obj gap_07_807C1636_data, global
.hidden gap_07_807C1636_data
	.2byte 0x0000
.endobj gap_07_807C1636_data

# .data:0x6840 | 0x807C1638 | size: 0x23
.obj lbl_807C1638, global
	.string "DWC_MATCH_STATE_SV_CANCEL_SYN_WAIT"
.endobj lbl_807C1638

# .data:0x6863 | 0x807C165B | size: 0x1
.obj gap_07_807C165B_data, global
.hidden gap_07_807C165B_data
	.byte 0x00
.endobj gap_07_807C165B_data

# .data:0x6864 | 0x807C165C | size: 0x17
.obj lbl_807C165C, global
	.string "DWC_MATCH_STATE_SV_SYN"
.endobj lbl_807C165C

# .data:0x687B | 0x807C1673 | size: 0x1
.obj gap_07_807C1673_data, global
.hidden gap_07_807C1673_data
	.byte 0x00
.endobj gap_07_807C1673_data

# .data:0x687C | 0x807C1674 | size: 0x1C
.obj lbl_807C1674, global
	.string "DWC_MATCH_STATE_SV_SYN_WAIT"
.endobj lbl_807C1674

# .data:0x6898 | 0x807C1690 | size: 0x1B
.obj lbl_807C1690, global
	.string "DWC_MATCH_STATE_WAIT_CLOSE"
.endobj lbl_807C1690

# .data:0x68B3 | 0x807C16AB | size: 0x1
.obj gap_07_807C16AB_data, global
.hidden gap_07_807C16AB_data
	.byte 0x00
.endobj gap_07_807C16AB_data

# .data:0x68B4 | 0x807C16AC | size: 0x1B
.obj lbl_807C16AC, global
	.string "DWC_MATCH_STATE_SEARCH_OWN"
.endobj lbl_807C16AC

# .data:0x68CF | 0x807C16C7 | size: 0x1
.obj gap_07_807C16C7_data, global
.hidden gap_07_807C16C7_data
	.byte 0x00
.endobj gap_07_807C16C7_data

# .data:0x68D0 | 0x807C16C8 | size: 0x22
.obj lbl_807C16C8, global
	.string "DWC_MATCH_STATE_SV_SYN_CLOSE_WAIT"
.endobj lbl_807C16C8

# .data:0x68F2 | 0x807C16EA | size: 0x6
.obj gap_07_807C16EA_data, global
.hidden gap_07_807C16EA_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807C16EA_data

# .data:0x68F8 | 0x807C16F0 | size: 0x60
.obj lbl_807C16F0, global
	.4byte lbl_807C1428
	.4byte lbl_807C1440
	.4byte lbl_807C145C
	.4byte lbl_807C147C
	.4byte lbl_807C149C
	.4byte lbl_807C14C0
	.4byte lbl_807C14D8
	.4byte lbl_807C14F0
	.4byte lbl_807C1510
	.4byte lbl_807C1528
	.4byte lbl_807C1544
	.4byte lbl_807C1560
	.4byte lbl_807C157C
	.4byte lbl_807C15A4
	.4byte lbl_807C15C0
	.4byte lbl_807C15DC
	.4byte lbl_807C15F8
	.4byte lbl_807C1618
	.4byte lbl_807C1638
	.4byte lbl_807C165C
	.4byte lbl_807C1674
	.4byte lbl_807C1690
	.4byte lbl_807C16AC
	.4byte lbl_807C16C8
.endobj lbl_807C16F0

# .data:0x6958 | 0x807C1750 | size: 0x33
.obj lbl_807C1750, global
	.string "DWCi_ProcessReliableQueue() retry count exceeded!\n"
.endobj lbl_807C1750

# .data:0x698B | 0x807C1783 | size: 0x5
.obj gap_07_807C1783_data, global
.hidden gap_07_807C1783_data
	.4byte 0x00000000
	.byte 0x00
.endobj gap_07_807C1783_data

# .data:0x6990 | 0x807C1788 | size: 0xB0
.obj lbl_807C1788, global
	.4byte 0x61696420
	.4byte 0x25642069
	.4byte 0x7320756E
	.4byte 0x61766169
	.4byte 0x6C61626C
	.4byte 0x652E0A00
	.4byte 0x61696420
	.4byte 0x25642064
	.4byte 0x6F65736E
	.4byte 0x27742068
	.4byte 0x61766520
	.4byte 0x47543220
	.4byte 0x636F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E2E0A
	.4byte 0x00000000
	.4byte 0x2B2B2B20
	.4byte 0x43616E6E
	.4byte 0x6F742073
	.4byte 0x656E6420
	.4byte 0x746F2025
	.4byte 0x64206672
	.4byte 0x6F6D2025
	.4byte 0x64202862
	.4byte 0x75737929
	.4byte 0x0A000000
	.4byte 0x2B2B2B20
	.4byte 0x43616E6E
	.4byte 0x6F742073
	.4byte 0x656E6420
	.4byte 0x746F2025
	.4byte 0x64206672
	.4byte 0x6F6D2025
	.4byte 0x6420286F
	.4byte 0x7574676F
	.4byte 0x696E6720
	.4byte 0x62756666
	.4byte 0x65722069
	.4byte 0x73206E6F
	.4byte 0x7420656E
	.4byte 0x6F756768
	.4byte 0x29202564
	.4byte 0x203C2025
	.4byte 0x640A0000
.endobj lbl_807C1788

# .data:0x6A40 | 0x807C1838 | size: 0x3
.obj lbl_807C1838, global
	.string "DT"
.endobj lbl_807C1838

# .data:0x6A43 | 0x807C183B | size: 0x1
.obj gap_07_807C183B_data, global
.hidden gap_07_807C183B_data
	.byte 0x00
.endobj gap_07_807C183B_data

# .data:0x6A44 | 0x807C183C | size: 0x1A
.obj lbl_807C183C, global
	.string "gt2Send() Failed code:%d\n"
.endobj lbl_807C183C

# .data:0x6A5E | 0x807C1856 | size: 0x2
.obj gap_07_807C1856_data, global
.hidden gap_07_807C1856_data
	.2byte 0x0000
.endobj gap_07_807C1856_data

# .data:0x6A60 | 0x807C1858 | size: 0x1C
.obj lbl_807C1858, global
	.string "aid %d is now unavailable.\n"
.endobj lbl_807C1858

# .data:0x6A7C | 0x807C1874 | size: 0x32
.obj lbl_807C1874, global
	.string "+++ SendUnreliable size is too large ( %d > %d )\n"
.endobj lbl_807C1874

# .data:0x6AAE | 0x807C18A6 | size: 0x2
.obj gap_07_807C18A6_data, global
.hidden gap_07_807C18A6_data
	.2byte 0x0000
.endobj gap_07_807C18A6_data

# .data:0x6AB0 | 0x807C18A8 | size: 0x1C
.obj lbl_807C18A8, global
	.string "+++ Cannot set recv buffer\n"
.endobj lbl_807C18A8

# .data:0x6ACC | 0x807C18C4 | size: 0x1F
.obj lbl_807C18C4, global
	.string "DWC_Ping:not connected yet:%d\n"
.endobj lbl_807C18C4

# .data:0x6AEB | 0x807C18E3 | size: 0x1
.obj gap_07_807C18E3_data, global
.hidden gap_07_807C18E3_data
	.byte 0x00
.endobj gap_07_807C18E3_data

# .data:0x6AEC | 0x807C18E4 | size: 0x384
.obj lbl_807C18E4, global
	.4byte 0x52656376
	.4byte 0x204E554C
	.4byte 0x4C206D65
	.4byte 0x73736167
	.4byte 0x65202578
	.4byte 0x2C207369
	.4byte 0x7A65203D
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x73687574
	.4byte 0x646F776E
	.4byte 0x20636C69
	.4byte 0x656E743A
	.4byte 0x20445743
	.4byte 0x695F5472
	.4byte 0x616E7370
	.4byte 0x6F727450
	.4byte 0x726F6365
	.4byte 0x73733A74
	.4byte 0x696D656F
	.4byte 0x75742061
	.4byte 0x69643D25
	.4byte 0x642C7469
	.4byte 0x6D653D25
	.4byte 0x645B6D73
	.4byte 0x5D2C7469
	.4byte 0x6D656F75
	.4byte 0x74207469
	.4byte 0x6D653D25
	.4byte 0x645B6D73
	.4byte 0x5D0A0000
	.4byte 0x73687574
	.4byte 0x646F776E
	.4byte 0x20736572
	.4byte 0x7665723A
	.4byte 0x20445743
	.4byte 0x695F5472
	.4byte 0x616E7370
	.4byte 0x6F727450
	.4byte 0x726F6365
	.4byte 0x73733A74
	.4byte 0x696D656F
	.4byte 0x75742061
	.4byte 0x69643D25
	.4byte 0x642C7469
	.4byte 0x6D653D25
	.4byte 0x645B6D73
	.4byte 0x5D2C7469
	.4byte 0x6D656F75
	.4byte 0x74207469
	.4byte 0x6D653D25
	.4byte 0x645B6D73
	.4byte 0x5D0A0000
	.4byte 0x44574369
	.4byte 0x5F547261
	.4byte 0x6E73706F
	.4byte 0x72745072
	.4byte 0x6F636573
	.4byte 0x733A7469
	.4byte 0x6D656F75
	.4byte 0x74206169
	.4byte 0x643D2564
	.4byte 0x2C74696D
	.4byte 0x653D2564
	.4byte 0x5B6D735D
	.4byte 0x2C74696D
	.4byte 0x656F7574
	.4byte 0x2074696D
	.4byte 0x653D2564
	.4byte 0x5B6D735D
	.4byte 0x0A000000
	.4byte 0x44574369
	.4byte 0x5F547261
	.4byte 0x6E73706F
	.4byte 0x72745072
	.4byte 0x6F636573
	.4byte 0x733A6672
	.4byte 0x65655370
	.4byte 0x61636520
	.4byte 0x3C207365
	.4byte 0x6E645369
	.4byte 0x7A653A61
	.4byte 0x69643A25
	.4byte 0x642C2025
	.4byte 0x64203C20
	.4byte 0x25640A00
	.4byte 0x2B2B2B20
	.4byte 0x64726F70
	.4byte 0x2072656C
	.4byte 0x61792075
	.4byte 0x6E72656C
	.4byte 0x6961626C
	.4byte 0x65206461
	.4byte 0x74612E20
	.4byte 0x28616964
	.4byte 0x2025642D
	.4byte 0x3E256429
	.4byte 0x0A000000
	.4byte 0x2B2B2B20
	.4byte 0x73762067
	.4byte 0x7432436F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x20697320
	.4byte 0x4E554C4C
	.4byte 0x2E287376
	.4byte 0x20616964
	.4byte 0x3A256420
	.4byte 0x6D796169
	.4byte 0x643A2564
	.4byte 0x290A0000
	.4byte 0x2B2B2B20
	.4byte 0x666F7277
	.4byte 0x61726420
	.4byte 0x756E7265
	.4byte 0x6C696162
	.4byte 0x6C652E20
	.4byte 0x73656E74
	.4byte 0x28616964
	.4byte 0x2025642D
	.4byte 0x3E256429
	.4byte 0x0A000000
	.4byte 0x46FC5700
	.4byte 0x73657276
	.4byte 0x65722069
	.4byte 0x73206E6F
	.4byte 0x7720756E
	.4byte 0x61766169
	.4byte 0x6C61626C
	.4byte 0x652E0A00
	.4byte 0x2B2B2B20
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x636F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E2E20
	.4byte 0x68617320
	.4byte 0x6E6F2044
	.4byte 0x5743436F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x496E666F
	.4byte 0x0A000000
	.4byte 0x2B2B2B20
	.4byte 0x52656376
	.4byte 0x20627566
	.4byte 0x66657220
	.4byte 0x6973206E
	.4byte 0x6F742073
	.4byte 0x65740A00
	.4byte 0x2B2B2B20
	.4byte 0x52656376
	.4byte 0x2073697A
	.4byte 0x65206973
	.4byte 0x20746F6F
	.4byte 0x206C6172
	.4byte 0x67652028
	.4byte 0x20627566
	.4byte 0x66657220
	.4byte 0x73697A65
	.4byte 0x203D2025
	.4byte 0x64203C20
	.4byte 0x25642029
	.4byte 0x0A000000
	.4byte 0x52656376
	.4byte 0x20657272
	.4byte 0x6F722028
	.4byte 0x73746174
	.4byte 0x65206973
	.4byte 0x20256429
	.4byte 0x2E0A0000
	.4byte 0xBB49CC4D
	.4byte 0x00000000
	.4byte 0x2B2B2B20
	.4byte 0x66776420
	.4byte 0x72656365
	.4byte 0x69766564
	.4byte 0x20756E72
	.4byte 0x656C6961
	.4byte 0x626C652E
	.4byte 0x2073656E
	.4byte 0x74286169
	.4byte 0x64202564
	.4byte 0x2D3E2530
	.4byte 0x3878290A
	.4byte 0x00000000
	.4byte 0x52656376
	.4byte 0x20646174
	.4byte 0x61207369
	.4byte 0x7A652069
	.4byte 0x7320746F
	.4byte 0x6F206C61
	.4byte 0x72676520
	.4byte 0x28256420
	.4byte 0x3E202564
	.4byte 0x290A0000
	.4byte 0x00000000
	.4byte 0x2B2B2B20
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x68656164
	.4byte 0x65722066
	.4byte 0x726F6D20
	.4byte 0x61696420
	.4byte 0x25640A00
	.4byte 0x52656365
	.4byte 0x69766564
	.4byte 0x20737973
	.4byte 0x74656D20
	.4byte 0x68656164
	.4byte 0x65722825
	.4byte 0x64292E0A
	.4byte 0x00000000
	.4byte 0x2B2B2B20
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x68656164
	.4byte 0x65722066
	.4byte 0x726F6D20
	.4byte 0x61696420
	.4byte 0x25642028
	.4byte 0x74797065
	.4byte 0x3A256429
	.4byte 0x0A000000
	.4byte 0x00000000
.endobj lbl_807C18E4

# .data:0x6E70 | 0x807C1C68 | size: 0x18
.obj lbl_807C1C68, global
	.string "Recv buffer over flow.\n"
.endobj lbl_807C1C68

# .data:0x6E88 | 0x807C1C80 | size: 0x37
.obj lbl_807C1C80, global
	.string "aid = %d size = %d/%d state = %d incoming buffer = %d\n"
.endobj lbl_807C1C80

# .data:0x6EBF | 0x807C1CB7 | size: 0x1
.obj gap_07_807C1CB7_data, global
.hidden gap_07_807C1CB7_data
	.byte 0x00
.endobj gap_07_807C1CB7_data

# .data:0x6EC0 | 0x807C1CB8 | size: 0x8
.obj lbl_807C1CB8, global
	.string "%012llu"
.endobj lbl_807C1CB8

# .data:0x6EC8 | 0x807C1CC0 | size: 0x21
.obj lbl_807C1CC0, global
	.string "0123456789abcdefghijklmnopqrstuv"
.endobj lbl_807C1CC0

# .data:0x6EE9 | 0x807C1CE1 | size: 0x3
.obj gap_07_807C1CE1_data, global
.hidden gap_07_807C1CE1_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C1CE1_data

# .data:0x6EEC | 0x807C1CE4 | size: 0xF4
.obj lbl_807C1CE4, global
	.4byte 0x25732563
	.4byte 0x25632563
	.4byte 0x25632573
	.4byte 0x00000000
	.4byte 0x25303878
	.4byte 0x3A202530
	.4byte 0x38780A00
	.4byte 0x76616C69
	.4byte 0x640A0000
	.4byte 0x696E7661
	.4byte 0x6C69640A
	.4byte 0x00000000
	.4byte 0x2047535F
	.4byte 0x4944203A
	.4byte 0x20256420
	.4byte 0x286F6B29
	.4byte 0x0A000000
	.4byte 0x2047535F
	.4byte 0x4944203A
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x20465F4B
	.4byte 0x4559203A
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x204C4E5F
	.4byte 0x4944203A
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x204E4F5F
	.4byte 0x44415441
	.4byte 0x200A0000
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A2A
	.4byte 0x2A2A2A0A
	.4byte 0x00000000
	.4byte 0x205B7073
	.4byte 0x6575646F
	.4byte 0x206C6F67
	.4byte 0x696E2069
	.4byte 0x645D0A00
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B2B
	.4byte 0x2B2B2B0A
	.4byte 0x00000000
	.4byte 0x205B6175
	.4byte 0x7468656E
	.4byte 0x74696320
	.4byte 0x6C6F6769
	.4byte 0x6E206964
	.4byte 0x5D0A0000
.endobj lbl_807C1CE4

# .data:0x6FE0 | 0x807C1DD8 | size: 0x20
.obj lbl_807C1DD8, global
	.4byte 0x2F736861
	.4byte 0x72656432
	.4byte 0x2F445743
	.4byte 0x5F415554
	.4byte 0x48444154
	.4byte 0x41000000
	.4byte lbl_807C1DD8
	.4byte 0x00000000
.endobj lbl_807C1DD8

# .data:0x7000 | 0x807C1DF8 | size: 0x28
.obj lbl_807C1DF8, global
	.string "https://naswii.test.nintendowifi.net/ac"
.endobj lbl_807C1DF8

# .data:0x7028 | 0x807C1E20 | size: 0x23
.obj lbl_807C1E20, global
	.string "https://naswii.nintendowifi.net/ac"
.endobj lbl_807C1E20

# .data:0x704B | 0x807C1E43 | size: 0x1
.obj gap_07_807C1E43_data, global
.hidden gap_07_807C1E43_data
	.byte 0x00
.endobj gap_07_807C1E43_data

# .data:0x704C | 0x807C1E44 | size: 0x34
.obj lbl_807C1E44, global
	.4byte 0x68747470
	.4byte 0x733A2F2F
	.4byte 0x6E617377
	.4byte 0x69692E64
	.4byte 0x65762E6E
	.4byte 0x696E7465
	.4byte 0x6E646F77
	.4byte 0x6966692E
	.4byte 0x6E65742F
	.4byte 0x61630000
	.4byte lbl_807C1DF8
	.4byte lbl_807C1E20
	.4byte lbl_807C1E44
.endobj lbl_807C1E44

# .data:0x7080 | 0x807C1E78 | size: 0x28
.obj lbl_807C1E78, global
	.string "https://naswii.test.nintendowifi.net/pr"
.endobj lbl_807C1E78

# .data:0x70A8 | 0x807C1EA0 | size: 0x23
.obj lbl_807C1EA0, global
	.string "https://naswii.nintendowifi.net/pr"
.endobj lbl_807C1EA0

# .data:0x70CB | 0x807C1EC3 | size: 0x1
.obj gap_07_807C1EC3_data, global
.hidden gap_07_807C1EC3_data
	.byte 0x00
.endobj gap_07_807C1EC3_data

# .data:0x70CC | 0x807C1EC4 | size: 0x9C
.obj lbl_807C1EC4, global
	.4byte 0x68747470
	.4byte 0x733A2F2F
	.4byte 0x6E617377
	.4byte 0x69692E64
	.4byte 0x65762E6E
	.4byte 0x696E7465
	.4byte 0x6E646F77
	.4byte 0x6966692E
	.4byte 0x6E65742F
	.4byte 0x70720000
	.4byte lbl_807C1E78
	.4byte lbl_807C1EA0
	.4byte lbl_807C1EC4
	.4byte 0x20617574
	.4byte 0x68206973
	.4byte 0x2070726F
	.4byte 0x63657373
	.4byte 0x696E670A
	.4byte 0x00000000
	.4byte 0x206D656D
	.4byte 0x6F727920
	.4byte 0x73686F72
	.4byte 0x74616765
	.4byte 0x0A000000
	.4byte 0x204E4344
	.4byte 0x47657443
	.4byte 0x75727265
	.4byte 0x6E744966
	.4byte 0x436F6E66
	.4byte 0x69672066
	.4byte 0x61696C65
	.4byte 0x642E5B25
	.4byte 0x645D0A00
	.4byte 0x20666169
	.4byte 0x6C656420
	.4byte 0x746F2073
	.4byte 0x74617274
	.4byte 0x204E4854
	.4byte 0x54500A00
.endobj lbl_807C1EC4

# .data:0x7168 | 0x807C1F60 | size: 0x4
.obj lbl_807C1F60, global
	.4byte 0x00000000
.endobj lbl_807C1F60

# .data:0x716C | 0x807C1F64 | size: 0x4
.obj lbl_807C1F64, global
	.4byte 0x00000000
.endobj lbl_807C1F64

# .data:0x7170 | 0x807C1F68 | size: 0x8
.obj lbl_807C1F68, global
	.string "wait()\n"
.endobj lbl_807C1F68

# .data:0x7178 | 0x807C1F70 | size: 0xBC
.obj lbl_807C1F70, global
	.4byte 0x4E485454
	.4byte 0x50446573
	.4byte 0x74726F79
	.4byte 0x52657370
	.4byte 0x6F6E7365
	.4byte 0x28290A00
	.4byte 0x20726561
	.4byte 0x64207573
	.4byte 0x65726964
	.4byte 0x203D2025
	.4byte 0x6C6C750A
	.4byte 0x00000000
	.4byte 0x20696C6C
	.4byte 0x6567616C
	.4byte 0x2073697A
	.4byte 0x65207573
	.4byte 0x65726964
	.4byte 0x20726561
	.4byte 0x64203D20
	.4byte 0x25640A00
	.4byte 0x2064656C
	.4byte 0x65746520
	.4byte 0x696C6C65
	.4byte 0x67616C20
	.4byte 0x75736572
	.4byte 0x69642E0A
	.4byte 0x00000000
	.4byte 0x20616363
	.4byte 0x74637265
	.4byte 0x61746520
	.4byte 0x74696D65
	.4byte 0x6F75742E
	.4byte 0x0A000000
	.4byte 0x20696C6C
	.4byte 0x6567616C
	.4byte 0x2073697A
	.4byte 0x65207573
	.4byte 0x65726964
	.4byte 0x20777269
	.4byte 0x7465203D
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x206C6F67
	.4byte 0x696E2074
	.4byte 0x696D656F
	.4byte 0x75742E0A
	.4byte 0x00000000
.endobj lbl_807C1F70

# .data:0x7234 | 0x807C202C | size: 0x6C
.obj jumptable_807C202C, global
	.4byte fn_806D0EA0+0x6CC
	.4byte fn_806D0EA0+0x50
	.4byte fn_806D0EA0+0xB4
	.4byte fn_806D0EA0+0xDC
	.4byte fn_806D0EA0+0x108
	.4byte fn_806D0EA0+0x18C
	.4byte fn_806D0EA0+0x1B0
	.4byte fn_806D0EA0+0x1D8
	.4byte fn_806D0EA0+0x1FC
	.4byte fn_806D0EA0+0x240
	.4byte fn_806D0EA0+0x274
	.4byte fn_806D0EA0+0x370
	.4byte fn_806D0EA0+0x39C
	.4byte fn_806D0EA0+0x3C4
	.4byte fn_806D0EA0+0x3F0
	.4byte fn_806D0EA0+0x418
	.4byte fn_806D0EA0+0x444
	.4byte fn_806D0EA0+0x4A0
	.4byte fn_806D0EA0+0x4C4
	.4byte fn_806D0EA0+0x4EC
	.4byte fn_806D0EA0+0x554
	.4byte fn_806D0EA0+0x650
	.4byte fn_806D0EA0+0x668
	.4byte fn_806D0EA0+0x688
	.4byte fn_806D0EA0+0x6CC
	.4byte fn_806D0EA0+0x6CC
	.4byte fn_806D0EA0+0x6CC
.endobj jumptable_807C202C

# .data:0x72A0 | 0x807C2098 | size: 0x640
.obj lbl_807C2098, global
	.4byte 0x2075726C
	.4byte 0x203D2025
	.4byte 0x730A0000
	.4byte 0x6477635F
	.4byte 0x61757468
	.4byte 0x5F696E74
	.4byte 0x65726661
	.4byte 0x63652E63
	.4byte 0x00000000
	.4byte 0x09445743
	.4byte 0x20417574
	.4byte 0x683A2066
	.4byte 0x61696C65
	.4byte 0x6420746F
	.4byte 0x20736574
	.4byte 0x20526F6F
	.4byte 0x7443410A
	.4byte 0x00000000
	.4byte 0x09445743
	.4byte 0x20417574
	.4byte 0x683A2066
	.4byte 0x61696C65
	.4byte 0x6420746F
	.4byte 0x20736574
	.4byte 0x20436C69
	.4byte 0x656E7443
	.4byte 0x6572740A
	.4byte 0x00000000
	.4byte 0x55736572
	.4byte 0x2D416765
	.4byte 0x6E740000
	.4byte 0x52564C20
	.4byte 0x53444B2F
	.4byte 0x312E3000
	.4byte 0x2F2F0000
	.4byte 0x2F000000
	.4byte 0x486F7374
	.4byte 0x00000000
	.4byte 0x48545450
	.4byte 0x5F585F47
	.4byte 0x414D4543
	.4byte 0x44000000
	.4byte 0x20485454
	.4byte 0x505F585F
	.4byte 0x47414D45
	.4byte 0x4344203D
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x61636374
	.4byte 0x63726561
	.4byte 0x74650000
	.4byte 0x61637469
	.4byte 0x6F6E0000
	.4byte 0x20616374
	.4byte 0x696F6E20
	.4byte 0x3D206163
	.4byte 0x63746372
	.4byte 0x65617465
	.4byte 0x0A000000
	.4byte 0x6C6F6769
	.4byte 0x6E000000
	.4byte 0x67736272
	.4byte 0x63640000
	.4byte 0x20616374
	.4byte 0x696F6E20
	.4byte 0x3D206C6F
	.4byte 0x67696E0A
	.4byte 0x00000000
	.4byte 0x20677362
	.4byte 0x72636420
	.4byte 0x3D202573
	.4byte 0x0A000000
	.4byte 0x25303133
	.4byte 0x6C6C7500
	.4byte 0x75736572
	.4byte 0x69640000
	.4byte 0x20757365
	.4byte 0x72696420
	.4byte 0x3D203078
	.4byte 0x25303136
	.4byte 0x6C6C780A
	.4byte 0x00000000
	.4byte 0x696E6761
	.4byte 0x6D65736E
	.4byte 0x00000000
	.4byte 0x7376636C
	.4byte 0x6F630000
	.4byte 0x20616374
	.4byte 0x696F6E20
	.4byte 0x3D207376
	.4byte 0x636C6F63
	.4byte 0x0A000000
	.4byte 0x73766300
	.4byte 0x20737663
	.4byte 0x203D2025
	.4byte 0x730A0000
	.4byte 0x77726567
	.4byte 0x696F6E00
	.4byte 0x20777265
	.4byte 0x67696F6E
	.4byte 0x203D2025
	.4byte 0x730A0000
	.4byte 0x77747970
	.4byte 0x65000000
	.4byte 0x20777479
	.4byte 0x7065203D
	.4byte 0x200A0000
	.4byte 0x5554462D
	.4byte 0x31364245
	.4byte 0x00000000
	.4byte 0x77656E63
	.4byte 0x00000000
	.4byte 0x2077656E
	.4byte 0x63203D20
	.4byte 0x5554462D
	.4byte 0x31364245
	.4byte 0x0A000000
	.4byte 0x776F7264
	.4byte 0x73000000
	.4byte 0x30303130
	.4byte 0x30300000
	.4byte 0x73646B76
	.4byte 0x65720000
	.4byte 0x67616D65
	.4byte 0x63640000
	.4byte 0x30320000
	.4byte 0x25632563
	.4byte 0x00000000
	.4byte 0x204E414E
	.4byte 0x44476574
	.4byte 0x53746174
	.4byte 0x75732066
	.4byte 0x61696C65
	.4byte 0x642E5B25
	.4byte 0x645D0A00
	.4byte 0x30300000
	.4byte 0x204E414E
	.4byte 0x44476574
	.4byte 0x486F6D65
	.4byte 0x44697220
	.4byte 0x6661696C
	.4byte 0x65642E5B
	.4byte 0x25645D0A
	.4byte 0x00000000
	.4byte 0x6D616B65
	.4byte 0x72636400
	.4byte 0x206D616B
	.4byte 0x65726364
	.4byte 0x203D2025
	.4byte 0x730A0000
	.4byte 0x31000000
	.4byte 0x756E6974
	.4byte 0x63640000
	.4byte 0x25303278
	.4byte 0x25303278
	.4byte 0x25303278
	.4byte 0x25303278
	.4byte 0x25303278
	.4byte 0x25303278
	.4byte 0x00000000
	.4byte 0x6D616361
	.4byte 0x64720000
	.4byte 0x206D6163
	.4byte 0x61647220
	.4byte 0x3D202573
	.4byte 0x0A000000
	.4byte 0x25303264
	.4byte 0x00000000
	.4byte 0x206C616E
	.4byte 0x67203D20
	.4byte 0x25730A00
	.4byte 0x6C616E67
	.4byte 0x00000000
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x00000000
	.4byte 0x64657674
	.4byte 0x696D6500
	.4byte 0x2043616C
	.4byte 0x656E6461
	.4byte 0x7254696D
	.4byte 0x65203D20
	.4byte 0x25730A00
	.4byte 0x20636F6E
	.4byte 0x666D6574
	.4byte 0x686F6420
	.4byte 0x3D202573
	.4byte 0x0A000000
	.4byte 0x636F6E66
	.4byte 0x6D657468
	.4byte 0x6F640000
	.4byte 0x25732530
	.4byte 0x39640000
	.4byte 0x2063736E
	.4byte 0x756D203D
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x63736E75
	.4byte 0x6D000000
	.4byte 0x00000000
	.4byte 0x25303136
	.4byte 0x6C6C6400
	.4byte 0x20636663
	.4byte 0x203D2025
	.4byte 0x730A0000
	.4byte 0x63666300
	.4byte 0x20726567
	.4byte 0x696F6E20
	.4byte 0x3D202573
	.4byte 0x0A000000
	.4byte 0x72656769
	.4byte 0x6F6E0000
	.4byte 0x20726571
	.4byte 0x75657374
	.4byte 0x5F63616C
	.4byte 0x6C626163
	.4byte 0x6B203D20
	.4byte 0x25640A00
	.4byte 0x206E6874
	.4byte 0x74702063
	.4byte 0x616E6365
	.4byte 0x6C656428
	.4byte 0x2564290A
	.4byte 0x00000000
	.4byte 0x2073736C
	.4byte 0x20657272
	.4byte 0x6F722825
	.4byte 0x64290A00
	.4byte 0x206E6874
	.4byte 0x74702065
	.4byte 0x72726F72
	.4byte 0x28256429
	.4byte 0x0A000000
	.4byte 0x20737461
	.4byte 0x74757320
	.4byte 0x636F6465
	.4byte 0x20697320
	.4byte 0x6E6F7420
	.4byte 0x3230302C
	.4byte 0x20627574
	.4byte 0x2025640A
	.4byte 0x00000000
	.4byte 0x25730A00
	.4byte 0x6E6F2062
	.4byte 0x6F64790A
	.4byte 0x00000000
	.4byte 0x260D0A00
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x72657472
	.4byte 0x793D0000
	.4byte 0x00000000
	.4byte 0x20282564
	.4byte 0x29207265
	.4byte 0x7472793D
	.4byte 0x25730A00
	.4byte 0x72657475
	.4byte 0x726E6364
	.4byte 0x3D000000
	.4byte 0x20282564
	.4byte 0x29207265
	.4byte 0x7475726E
	.4byte 0x63643D25
	.4byte 0x730A0000
	.4byte 0x64617465
	.4byte 0x74696D65
	.4byte 0x3D000000
	.4byte 0x25303464
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x25303264
	.4byte 0x00000000
	.4byte 0x2063616E
	.4byte 0x6E6F7420
	.4byte 0x70617273
	.4byte 0x65206461
	.4byte 0x74657469
	.4byte 0x6D653A20
	.4byte 0x25730A00
	.4byte 0x20282564
	.4byte 0x29206461
	.4byte 0x74657469
	.4byte 0x6D653D25
	.4byte 0x730A0000
	.4byte 0x6C6F6361
	.4byte 0x746F723D
	.4byte 0x00000000
	.4byte 0x20282564
	.4byte 0x29206C6F
	.4byte 0x6361746F
	.4byte 0x723D2573
	.4byte 0x0A000000
	.4byte 0x746F6B65
	.4byte 0x6E3D0000
	.4byte 0x20282564
	.4byte 0x2920746F
	.4byte 0x6B656E3D
	.4byte 0x25730A00
	.4byte 0x6368616C
	.4byte 0x6C656E67
	.4byte 0x653D0000
	.4byte 0x20282564
	.4byte 0x29206368
	.4byte 0x616C6C65
	.4byte 0x6E67653D
	.4byte 0x25730A00
	.4byte 0x75736572
	.4byte 0x69643D00
	.4byte 0x256C6C75
	.4byte 0x00000000
	.4byte 0x20282564
	.4byte 0x29207573
	.4byte 0x65726964
	.4byte 0x3D256C6C
	.4byte 0x750A0000
	.4byte 0x73766368
	.4byte 0x6F73743D
	.4byte 0x00000000
	.4byte 0x20282564
	.4byte 0x29207376
	.4byte 0x6C686F73
	.4byte 0x743D2573
	.4byte 0x0A000000
	.4byte 0x73657276
	.4byte 0x69636574
	.4byte 0x6F6B656E
	.4byte 0x3D000000
	.4byte 0x20282564
	.4byte 0x29207365
	.4byte 0x72766963
	.4byte 0x65746F6B
	.4byte 0x656E3D25
	.4byte 0x730A0000
	.4byte 0x73746174
	.4byte 0x75736461
	.4byte 0x74613D00
	.4byte 0x20282564
	.4byte 0x29207374
	.4byte 0x61747573
	.4byte 0x64617461
	.4byte 0x3D25730A
	.4byte 0x00000000
	.4byte 0x7072776F
	.4byte 0x7264733D
	.4byte 0x00000000
	.4byte 0x20756E6B
	.4byte 0x6E6F776E
	.4byte 0x20746F6B
	.4byte 0x656E203A
	.4byte 0x2025730A
	.4byte 0x00000000
	.4byte 0x2063616E
	.4byte 0x6E6F7420
	.4byte 0x70617273
	.4byte 0x65207265
	.4byte 0x7475726E
	.4byte 0x63642825
	.4byte 0x73290A00
	.4byte 0x2070726F
	.4byte 0x66207365
	.4byte 0x72766572
	.4byte 0x206D6169
	.4byte 0x6E74656E
	.4byte 0x616E6365
	.4byte 0x28257329
	.4byte 0x0A000000
	.4byte 0x2070726F
	.4byte 0x66207365
	.4byte 0x72766572
	.4byte 0x20726574
	.4byte 0x72756E73
	.4byte 0x20657272
	.4byte 0x6F722028
	.4byte 0x25642920
	.4byte 0x62757420
	.4byte 0x69676E6F
	.4byte 0x72656420
	.4byte 0x62792044
	.4byte 0x5743206C
	.4byte 0x69627261
	.4byte 0x72790A00
	.4byte 0x20736572
	.4byte 0x76657220
	.4byte 0x72657472
	.4byte 0x756E7320
	.4byte 0x6572726F
	.4byte 0x72202825
	.4byte 0x64290A00
	.4byte 0x206E6F20
	.4byte 0x72657475
	.4byte 0x726E2063
	.4byte 0x6F64652E
	.4byte 0x0A000000
	.4byte 0x00000000
.endobj lbl_807C2098

# .data:0x78E0 | 0x807C26D8 | size: 0x18
.obj lbl_807C26D8, global
	.string "DWCi_Auth_EndProcess()\n"
.endobj lbl_807C26D8

# .data:0x78F8 | 0x807C26F0 | size: 0x1A
.obj lbl_807C26F0, global
	.string " NAND access failed.[%d]\n"
.endobj lbl_807C26F0

# .data:0x7912 | 0x807C270A | size: 0x6
.obj gap_07_807C270A_data, global
.hidden gap_07_807C270A_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807C270A_data

# .data:0x7918 | 0x807C2710 | size: 0x1F8
.obj lbl_807C2710, global
	.4byte 0x00000002
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x72657370
	.4byte 0x6F6E7365
	.4byte 0x20746F6F
	.4byte 0x2073686F
	.4byte 0x72740A00
	.4byte 0x6E6F2065
	.4byte 0x6E6F7567
	.4byte 0x68206D65
	.4byte 0x6D6F7279
	.4byte 0x0A000000
	.4byte 0x696E7661
	.4byte 0x6C696420
	.4byte 0x484D4143
	.4byte 0x0A000000
	.4byte 0x26686173
	.4byte 0x683D0000
	.4byte 0x696E7661
	.4byte 0x6C696420
	.4byte 0x72657370
	.4byte 0x6F6E7365
	.4byte 0x206C656E
	.4byte 0x67746820
	.4byte 0x3A202564
	.4byte 0x0A000000
	.4byte 0x6572726F
	.4byte 0x723A0000
	.4byte 0x696E7661
	.4byte 0x6C696420
	.4byte 0x72657370
	.4byte 0x6F6E7365
	.4byte 0x203A2028
	.4byte 0x2573290A
	.4byte 0x00000000
	.4byte 0x68747470
	.4byte 0x3A2F2F67
	.4byte 0x616D6573
	.4byte 0x74617473
	.4byte 0x322E6773
	.4byte 0x2E6E696E
	.4byte 0x74656E64
	.4byte 0x6F776966
	.4byte 0x692E6E65
	.4byte 0x742F0000
	.4byte 0x68747470
	.4byte 0x3A2F2F73
	.4byte 0x646B6465
	.4byte 0x762E6761
	.4byte 0x6D657370
	.4byte 0x792E636F
	.4byte 0x6D2F6761
	.4byte 0x6D65732F
	.4byte 0x00000000
	.4byte 0x68747470
	.4byte 0x3A2F2F69
	.4byte 0x7368696B
	.4byte 0x6177612E
	.4byte 0x73657276
	.4byte 0x65626565
	.4byte 0x722E636F
	.4byte 0x6D2F6761
	.4byte 0x6D65732F
	.4byte 0x00000000
	.4byte 0x26646174
	.4byte 0x613D0000
	.4byte 0x25640000
	.4byte 0x3F706964
	.4byte 0x3D000000
	.4byte 0x25732573
	.4byte 0x25733F70
	.4byte 0x69643D25
	.4byte 0x64266861
	.4byte 0x73683D25
	.4byte 0x73266461
	.4byte 0x74613D00
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x30303030
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C2710

# .data:0x7B10 | 0x807C2908 | size: 0xB0
.obj lbl_807C2908, global
	.4byte 0x746F6F20
	.4byte 0x6D616E79
	.4byte 0x20636861
	.4byte 0x72616374
	.4byte 0x65727320
	.4byte 0x2564283E
	.4byte 0x20353030
	.4byte 0x290A0000
	.4byte 0x20616C6C
	.4byte 0x20776F72
	.4byte 0x64732061
	.4byte 0x72652065
	.4byte 0x6D707479
	.4byte 0x2E207072
	.4byte 0x6F666368
	.4byte 0x65636B20
	.4byte 0x73756363
	.4byte 0x65737365
	.4byte 0x6420756E
	.4byte 0x636F6E64
	.4byte 0x6974696F
	.4byte 0x6E616C6C
	.4byte 0x790A0000
	.4byte 0x20417574
	.4byte 0x6820636F
	.4byte 0x6D706C65
	.4byte 0x7465640A
	.4byte 0x00000000
	.4byte 0x2070726F
	.4byte 0x66636865
	.4byte 0x636B2073
	.4byte 0x75636365
	.4byte 0x73736564
	.4byte 0x0A000000
	.4byte 0x2070726F
	.4byte 0x66636865
	.4byte 0x636B2066
	.4byte 0x61696C65
	.4byte 0x64202825
	.4byte 0x64290A00
	.4byte 0x74696D65
	.4byte 0x6F757420
	.4byte 0x6869740A
	.4byte 0x00000000
.endobj lbl_807C2908

# .data:0x7BC0 | 0x807C29B8 | size: 0x21
.obj lbl_807C29B8, global
	.string "Timeout counter has been reset.\n"
.endobj lbl_807C29B8

# .data:0x7BE1 | 0x807C29D9 | size: 0x3
.obj gap_07_807C29D9_data, global
.hidden gap_07_807C29D9_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C29D9_data

# .data:0x7BE4 | 0x807C29DC | size: 0xA
.obj lbl_807C29DC, global
	.string "Timeout!!"
.endobj lbl_807C29DC

# .data:0x7BEE | 0x807C29E6 | size: 0x2
.obj gap_07_807C29E6_data, global
.hidden gap_07_807C29E6_data
	.2byte 0x0000
.endobj gap_07_807C29E6_data

# .data:0x7BF0 | 0x807C29E8 | size: 0x15
.obj lbl_807C29E8, global
	.string "/web/client/put2.asp"
.endobj lbl_807C29E8

# .data:0x7C05 | 0x807C29FD | size: 0x3
.obj gap_07_807C29FD_data, global
.hidden gap_07_807C29FD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C29FD_data

# .data:0x7C08 | 0x807C2A00 | size: 0x15
.obj lbl_807C2A00, global
	.string "/web/client/get2.asp"
.endobj lbl_807C2A00

# .data:0x7C1D | 0x807C2A15 | size: 0x3
.obj gap_07_807C2A15_data, global
.hidden gap_07_807C2A15_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C2A15_data

# .data:0x7C20 | 0x807C2A18 | size: 0x14
.obj lbl_807C2A18, global
	.string "memory access over\n"
.endobj lbl_807C2A18

# .data:0x7C34 | 0x807C2A2C | size: 0x1B
.obj lbl_807C2A2C, global
	.string "Invalid RNK_GET mode : %d\n"
.endobj lbl_807C2A2C

# .data:0x7C4F | 0x807C2A47 | size: 0x1
.obj gap_07_807C2A47_data, global
.hidden gap_07_807C2A47_data
	.byte 0x00
.endobj gap_07_807C2A47_data

# .data:0x7C50 | 0x807C2A48 | size: 0x40
.obj lbl_807C2A48, global
	.4byte 0x80000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C2A48

# .data:0x7C90 | 0x807C2A88 | size: 0x21
.obj lbl_807C2A88, global
	.string "%s.available.gs.nintendowifi.net"
.endobj lbl_807C2A88

# .data:0x7CB1 | 0x807C2AA9 | size: 0x3
.obj gap_07_807C2AA9_data, global
.hidden gap_07_807C2AA9_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C2AA9_data

# .data:0x7CB4 | 0x807C2AAC | size: 0x4
.obj lbl_807C2AAC, global
	.4byte 0xFEFD0900
.endobj lbl_807C2AAC

# .data:0x7CB8 | 0x807C2AB0 | size: 0x10
.obj lbl_807C2AB0, global
	.4byte fn_806D7A30
	.4byte fn_806D7A40
	.4byte fn_806D7A50
	.4byte fn_806D7A60
.endobj lbl_807C2AB0

# .data:0x7CC8 | 0x807C2AC0 | size: 0x6
.obj lbl_807C2AC0, global
	.string "clear"
.endobj lbl_807C2AC0

# .data:0x7CCE | 0x807C2AC6 | size: 0x2
.obj gap_07_807C2AC6_data, global
.hidden gap_07_807C2AC6_data
	.2byte 0x0000
.endobj gap_07_807C2AC6_data

# .data:0x7CD0 | 0x807C2AC8 | size: 0xA
.obj lbl_807C2AC8, global
	.string "localhost"
.endobj lbl_807C2AC8

# .data:0x7CDA | 0x807C2AD2 | size: 0x6
.obj gap_07_807C2AD2_data, global
.hidden gap_07_807C2AD2_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807C2AD2_data

# .data:0x7CE0 | 0x807C2AD8 | size: 0x8
.obj lbl_807C2AD8, global
	.4byte 0x00000001
	.4byte 0x00000000
.endobj lbl_807C2AD8

# .data:0x7CE8 | 0x807C2AE0 | size: 0xE
.obj lbl_807C2AE0, global
	.string "Invalid func."
.endobj lbl_807C2AE0

# .data:0x7CF6 | 0x807C2AEE | size: 0x2
.obj gap_07_807C2AEE_data, global
.hidden gap_07_807C2AEE_data
	.2byte 0x0000
.endobj gap_07_807C2AEE_data

# .data:0x7CF8 | 0x807C2AF0 | size: 0xD
.obj lbl_807C2AF0, global
	.string "No callback."
.endobj lbl_807C2AF0

# .data:0x7D05 | 0x807C2AFD | size: 0x3
.obj gap_07_807C2AFD_data, global
.hidden gap_07_807C2AFD_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C2AFD_data

# .data:0x7D08 | 0x807C2B00 | size: 0x6C
.obj lbl_807C2B00, global
	.4byte 0x00000000
	.4byte 0x4E69636B
	.4byte 0x20746F6F
	.4byte 0x206C6F6E
	.4byte 0x672E0000
	.4byte 0x556E6971
	.4byte 0x75656E69
	.4byte 0x636B2074
	.4byte 0x6F6F206C
	.4byte 0x6F6E672E
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x456D6169
	.4byte 0x6C20746F
	.4byte 0x6F206C6F
	.4byte 0x6E672E00
	.4byte 0x50617373
	.4byte 0x776F7264
	.4byte 0x20746F6F
	.4byte 0x206C6F6E
	.4byte 0x672E0000
	.4byte 0x44657369
	.4byte 0x7265646E
	.4byte 0x69636B20
	.4byte 0x746F6F20
	.4byte 0x6C6F6E67
	.4byte 0x2E000000
.endobj lbl_807C2B00

# .data:0x7D74 | 0x807C2B6C | size: 0xA4
.obj lbl_807C2B6C, global
	.4byte 0x54686520
	.4byte 0x636F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E2068
	.4byte 0x61732061
	.4byte 0x6C726561
	.4byte 0x64792062
	.4byte 0x65656E20
	.4byte 0x64697363
	.4byte 0x6F6E6E65
	.4byte 0x63746564
	.4byte 0x2E000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x6E69636B
	.4byte 0x2E000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x70726F66
	.4byte 0x696C652E
	.4byte 0x00000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x72656173
	.4byte 0x6F6E2E00
	.4byte 0x5C616464
	.4byte 0x62756464
	.4byte 0x795C0000
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x5C6E6577
	.4byte 0x70726F66
	.4byte 0x696C6569
	.4byte 0x645C0000
	.4byte 0x5C726561
	.4byte 0x736F6E5C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
.endobj lbl_807C2B6C

# .data:0x7E18 | 0x807C2C10 | size: 0x10
.obj lbl_807C2C10, global
	.string "Invalid status."
.endobj lbl_807C2C10

# .data:0x7E28 | 0x807C2C20 | size: 0x88
.obj lbl_807C2C20, global
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x696E6465
	.4byte 0x782E0000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x70726F66
	.4byte 0x696C6520
	.4byte 0x636F6E74
	.4byte 0x61696E65
	.4byte 0x72000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x73746174
	.4byte 0x75735374
	.4byte 0x72696E67
	.4byte 0x2E000000
	.4byte 0x00000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x6C6F6361
	.4byte 0x74696F6E
	.4byte 0x53747269
	.4byte 0x6E672E00
	.4byte 0x5C737461
	.4byte 0x7475735C
	.4byte 0x00000000
	.4byte 0x5C737461
	.4byte 0x74737472
	.4byte 0x696E675C
	.4byte 0x00000000
	.4byte 0x5C6C6F63
	.4byte 0x73747269
	.4byte 0x6E675C00
.endobj lbl_807C2C20

# .data:0x7EB0 | 0x807C2CA8 | size: 0x58
.obj lbl_807C2CA8, global
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x6D657373
	.4byte 0x6167652E
	.4byte 0x00000000
	.4byte 0x5C70696E
	.4byte 0x76697465
	.4byte 0x5C000000
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x69645C00
	.4byte 0x5C70726F
	.4byte 0x64756374
	.4byte 0x69645C00
	.4byte 0x5C6C6F63
	.4byte 0x6174696F
	.4byte 0x6E5C0000
	.4byte 0x5C726576
	.4byte 0x6F6B655C
	.4byte 0x00000000
	.4byte 0x5C717569
	.4byte 0x65745C00
.endobj lbl_807C2CA8

# .data:0x7F08 | 0x807C2D00 | size: 0xD0
.obj lbl_807C2D00, global
	.4byte 0x434D0000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722072
	.4byte 0x65616469
	.4byte 0x6E672066
	.4byte 0x726F6D20
	.4byte 0x74686520
	.4byte 0x73657276
	.4byte 0x65722E00
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x5C69645C
	.4byte 0x00000000
	.4byte 0x5C626D5C
	.4byte 0x00000000
	.4byte 0x5C6B615C
	.4byte 0x00000000
	.4byte 0x5C6C745C
	.4byte 0x00000000
	.4byte 0x5C627369
	.4byte 0x5C000000
	.4byte 0x5C626479
	.4byte 0x5C000000
	.4byte 0x5C626C6B
	.4byte 0x5C000000
	.4byte 0x5C726172
	.4byte 0x5C000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x54686520
	.4byte 0x73657276
	.4byte 0x65722068
	.4byte 0x61732063
	.4byte 0x6C6F7365
	.4byte 0x64207468
	.4byte 0x6520636F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x2E000000
	.4byte 0x5C6B615C
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x73746174
	.4byte 0x652E0000
	.4byte 0x00000000
.endobj lbl_807C2D00

# .data:0x7FD8 | 0x807C2DD0 | size: 0x154
.obj lbl_807C2DD0, global
	.4byte 0x5C626D5C
	.4byte 0x00000000
	.4byte 0x556E6578
	.4byte 0x70656374
	.4byte 0x65642064
	.4byte 0x61746120
	.4byte 0x77617320
	.4byte 0x72656365
	.4byte 0x69766564
	.4byte 0x2066726F
	.4byte 0x6D207468
	.4byte 0x65207365
	.4byte 0x72766572
	.4byte 0x2E000000
	.4byte 0x5C665C00
	.4byte 0x5C646174
	.4byte 0x655C0000
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x5C6D7367
	.4byte 0x5C000000
	.4byte 0x7C736967
	.4byte 0x6E65647C
	.4byte 0x00000000
	.4byte 0x7C737C00
	.4byte 0x7C73737C
	.4byte 0x00000000
	.4byte 0x7C6C737C
	.4byte 0x00000000
	.4byte 0x7C69707C
	.4byte 0x00000000
	.4byte 0x7C707C00
	.4byte 0x7C716D7C
	.4byte 0x00000000
	.4byte 0x7C6C7C00
	.4byte 0x31000000
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x5C000000
	.4byte 0x00000000
	.4byte 0x5C737461
	.4byte 0x74655C00
	.4byte 0x5C626970
	.4byte 0x5C000000
	.4byte 0x5C62706F
	.4byte 0x72745C00
	.4byte 0x5C686F73
	.4byte 0x7469705C
	.4byte 0x00000000
	.4byte 0x5C687072
	.4byte 0x69766970
	.4byte 0x5C000000
	.4byte 0x5C71706F
	.4byte 0x72745C00
	.4byte 0x5C68706F
	.4byte 0x72745C00
	.4byte 0x5C736573
	.4byte 0x73666C61
	.4byte 0x67735C00
	.4byte 0x5C727374
	.4byte 0x61747573
	.4byte 0x5C000000
	.4byte 0x5C67616D
	.4byte 0x65547970
	.4byte 0x655C0000
	.4byte 0x5C67616D
	.4byte 0x65566E74
	.4byte 0x5C000000
	.4byte 0x5C67616D
	.4byte 0x654D6E5C
	.4byte 0x00000000
	.4byte 0x5C70726F
	.4byte 0x64756374
	.4byte 0x5C000000
	.4byte 0x5C716D6F
	.4byte 0x6465666C
	.4byte 0x6167735C
	.4byte 0x00000000
	.4byte 0x5C626479
	.4byte 0x5C000000
	.4byte 0x5C6C6973
	.4byte 0x745C0000
	.4byte 0x2C000000
.endobj lbl_807C2DD0

# .data:0x812C | 0x807C2F24 | size: 0x2C
.obj lbl_807C2F24, global
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x70726F66
	.4byte 0x696C652E
	.4byte 0x00000000
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x5C745C00
	.4byte 0x5C66696E
	.4byte 0x616C5C00
.endobj lbl_807C2F24

# .data:0x8158 | 0x807C2F50 | size: 0x78
.obj lbl_807C2F50, global
	.4byte 0x00000000
	.4byte 0x6B657973
	.4byte 0x00000000
	.4byte 0x4572726F
	.4byte 0x72207265
	.4byte 0x6164696E
	.4byte 0x67206B65
	.4byte 0x79732072
	.4byte 0x65706C79
	.4byte 0x206D6573
	.4byte 0x73616765
	.4byte 0x00000000
	.4byte 0x5C617574
	.4byte 0x68616464
	.4byte 0x5C000000
	.4byte 0x00000000
	.4byte 0x5C66726F
	.4byte 0x6D70726F
	.4byte 0x66696C65
	.4byte 0x69645C00
	.4byte 0x5C736967
	.4byte 0x5C000000
	.4byte 0x5C64656C
	.4byte 0x62756464
	.4byte 0x795C0000
	.4byte 0x5C64656C
	.4byte 0x70726F66
	.4byte 0x696C6569
	.4byte 0x645C0000
	.4byte 0x00000000
.endobj lbl_807C2F50

# .data:0x81D0 | 0x807C2FC8 | size: 0xF
.obj lbl_807C2FC8, global
	.string "Out of memory."
.endobj lbl_807C2FC8

# .data:0x81DF | 0x807C2FD7 | size: 0x1
.obj gap_07_807C2FD7_data, global
.hidden gap_07_807C2FD7_data
	.byte 0x00
.endobj gap_07_807C2FD7_data

# .data:0x81E0 | 0x807C2FD8 | size: 0x8
.obj lbl_807C2FD8, global
	.4byte 0x25640000
	.4byte 0x25750000
.endobj lbl_807C2FD8

# .data:0x81E8 | 0x807C2FE0 | size: 0x28
.obj lbl_807C2FE0, global
	.string "There was an error sending on a socket."
.endobj lbl_807C2FE0

# .data:0x8210 | 0x807C3008 | size: 0x40
.obj lbl_807C3008, global
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722072
	.4byte 0x65616469
	.4byte 0x6E672066
	.4byte 0x726F6D20
	.4byte 0x6120736F
	.4byte 0x636B6574
	.4byte 0x2E000000
	.4byte 0x5C6D7367
	.4byte 0x5C000000
	.4byte 0x5C6D5C00
	.4byte 0x5C6C656E
	.4byte 0x5C000000
.endobj lbl_807C3008

# .data:0x8250 | 0x807C3048 | size: 0xF
.obj lbl_807C3048, global
	.string "Out of memory."
.endobj lbl_807C3048

# .data:0x825F | 0x807C3057 | size: 0x1
.obj gap_07_807C3057_data, global
.hidden gap_07_807C3057_data
	.byte 0x00
.endobj gap_07_807C3057_data

# .data:0x8260 | 0x807C3058 | size: 0x40
.obj jumptable_807C3058, global
	.4byte fn_806DEF10+0x274
	.4byte fn_806DEF10+0x274
	.4byte fn_806DEF10+0x54
	.4byte fn_806DEF10+0x8C
	.4byte fn_806DEF10+0xFC
	.4byte fn_806DEF10+0x274
	.4byte fn_806DEF10+0x274
	.4byte fn_806DEF10+0x114
	.4byte fn_806DEF10+0x134
	.4byte fn_806DEF10+0x154
	.4byte fn_806DEF10+0x274
	.4byte fn_806DEF10+0x70
	.4byte fn_806DEF10+0x1A4
	.4byte fn_806DEF10+0x1BC
	.4byte fn_806DEF10+0x1DC
	.4byte fn_806DEF10+0x258
.endobj jumptable_807C3058

# .data:0x82A0 | 0x807C3098 | size: 0x400
.obj lbl_807C3098, global
	.4byte 0x6770636D
	.4byte 0x2E67732E
	.4byte 0x6E696E74
	.4byte 0x656E646F
	.4byte 0x77696669
	.4byte 0x2E6E6574
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x67616D65
	.4byte 0x73707967
	.4byte 0x70000000
	.4byte 0x00000000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x73206572
	.4byte 0x726F7220
	.4byte 0x73746172
	.4byte 0x74696E67
	.4byte 0x20746865
	.4byte 0x20554450
	.4byte 0x206C6179
	.4byte 0x65722E00
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722073
	.4byte 0x74617274
	.4byte 0x696E6720
	.4byte 0x74686520
	.4byte 0x55445020
	.4byte 0x4C617965
	.4byte 0x722E0000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722063
	.4byte 0x72656174
	.4byte 0x696E6720
	.4byte 0x6120736F
	.4byte 0x636B6574
	.4byte 0x2E000000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F72206D
	.4byte 0x616B696E
	.4byte 0x67206120
	.4byte 0x736F636B
	.4byte 0x6574206E
	.4byte 0x6F6E2D62
	.4byte 0x6C6F636B
	.4byte 0x696E672E
	.4byte 0x00000000
	.4byte 0x436F756C
	.4byte 0x64206E6F
	.4byte 0x74207265
	.4byte 0x736F6C76
	.4byte 0x6520636F
	.4byte 0x6E6E6563
	.4byte 0x74696F6E
	.4byte 0x206D616E
	.4byte 0x616E6765
	.4byte 0x7220686F
	.4byte 0x7374206E
	.4byte 0x616D652E
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722063
	.4byte 0x6F6E6E65
	.4byte 0x6374696E
	.4byte 0x67206120
	.4byte 0x736F636B
	.4byte 0x65742E00
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x636F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E2E00
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x66697265
	.4byte 0x77616C6C
	.4byte 0x2E000000
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x41424344
	.4byte 0x45464748
	.4byte 0x494A4B4C
	.4byte 0x4D4E4F50
	.4byte 0x51525354
	.4byte 0x55565758
	.4byte 0x595A6162
	.4byte 0x63646566
	.4byte 0x6768696A
	.4byte 0x6B6C6D6E
	.4byte 0x6F707172
	.4byte 0x73747576
	.4byte 0x7778797A
	.4byte 0x30313233
	.4byte 0x34353637
	.4byte 0x38390000
	.4byte 0x25644000
	.4byte 0x25732573
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x25732573
	.4byte 0x40257300
	.4byte 0x25732573
	.4byte 0x25732573
	.4byte 0x25732573
	.4byte 0x00000000
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x20202020
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C6C6F67
	.4byte 0x696E5C00
	.4byte 0x5C636861
	.4byte 0x6C6C656E
	.4byte 0x67655C00
	.4byte 0x5C617574
	.4byte 0x68746F6B
	.4byte 0x656E5C00
	.4byte 0x5C756E69
	.4byte 0x7175656E
	.4byte 0x69636B5C
	.4byte 0x00000000
	.4byte 0x5C757365
	.4byte 0x725C0000
	.4byte 0x40000000
	.4byte 0x5C757365
	.4byte 0x7269645C
	.4byte 0x00000000
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x69645C00
	.4byte 0x5C706172
	.4byte 0x746E6572
	.4byte 0x69645C00
	.4byte 0x5C726573
	.4byte 0x706F6E73
	.4byte 0x655C0000
	.4byte 0x5C666972
	.4byte 0x6577616C
	.4byte 0x6C5C3100
	.4byte 0x5C706F72
	.4byte 0x745C0000
	.4byte 0x5C70726F
	.4byte 0x64756374
	.4byte 0x69645C00
	.4byte 0x5C67616D
	.4byte 0x656E616D
	.4byte 0x655C0000
	.4byte 0x5C6E616D
	.4byte 0x65737061
	.4byte 0x63656964
	.4byte 0x5C000000
	.4byte 0x5C73646B
	.4byte 0x72657669
	.4byte 0x73696F6E
	.4byte 0x5C000000
	.4byte 0x5C717569
	.4byte 0x65745C00
	.4byte 0x5C69645C
	.4byte 0x31000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x5C6E6577
	.4byte 0x75736572
	.4byte 0x5C000000
	.4byte 0x00000000
	.4byte 0x5C656D61
	.4byte 0x696C5C00
	.4byte 0x5C6E6963
	.4byte 0x6B5C0000
	.4byte 0x5C706173
	.4byte 0x73776F72
	.4byte 0x64656E63
	.4byte 0x5C000000
	.4byte 0x5C63646B
	.4byte 0x6579656E
	.4byte 0x635C0000
	.4byte 0x5C706964
	.4byte 0x5C000000
	.4byte 0x5C6C635C
	.4byte 0x31000000
	.4byte 0x556E6578
	.4byte 0x70656374
	.4byte 0x65642064
	.4byte 0x61746120
	.4byte 0x77617320
	.4byte 0x72656365
	.4byte 0x69766564
	.4byte 0x2066726F
	.4byte 0x6D207468
	.4byte 0x65207365
	.4byte 0x72766572
	.4byte 0x2E000000
	.4byte 0x5C6E7572
	.4byte 0x5C000000
	.4byte 0x556E6578
	.4byte 0x65706563
	.4byte 0x74656420
	.4byte 0x64617461
	.4byte 0x20776173
	.4byte 0x20726563
	.4byte 0x65697665
	.4byte 0x64206672
	.4byte 0x6F6D2074
	.4byte 0x68652073
	.4byte 0x65727665
	.4byte 0x722E0000
	.4byte 0x5C6C635C
	.4byte 0x32000000
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x5C6C745C
	.4byte 0x00000000
	.4byte 0x5C70726F
	.4byte 0x6F665C00
	.4byte 0x436F756C
	.4byte 0x64206E6F
	.4byte 0x74206175
	.4byte 0x7468656E
	.4byte 0x74696361
	.4byte 0x74652073
	.4byte 0x65727665
	.4byte 0x722E0000
.endobj lbl_807C3098

# .data:0x86A0 | 0x807C3498 | size: 0x40
.obj lbl_807C3498, global
	.4byte 0x54686520
	.4byte 0x73657276
	.4byte 0x65722068
	.4byte 0x61732072
	.4byte 0x65667573
	.4byte 0x65642074
	.4byte 0x68652063
	.4byte 0x6F6E6E65
	.4byte 0x6374696F
	.4byte 0x6E2E0000
	.4byte 0x5C6C6F67
	.4byte 0x6F75745C
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x434D0000
.endobj lbl_807C3498

# .data:0x86E0 | 0x807C34D8 | size: 0x34
.obj jumptable_807C34D8, global
	.4byte fn_806E0A30+0x60
	.4byte fn_806E0A30+0x6C
	.4byte fn_806E0A30+0x8C
	.4byte fn_806E0A30+0x6C
	.4byte fn_806E0A30+0x7C
	.4byte fn_806E0A30+0x6C
	.4byte fn_806E0A30+0x7C
	.4byte fn_806E0A30+0x6C
	.4byte fn_806E0A30+0x6C
	.4byte fn_806E0A30+0x7C
	.4byte fn_806E0A30+0x6C
	.4byte fn_806E0A30+0x7C
	.4byte fn_806E0A30+0x6C
.endobj jumptable_807C34D8

# .data:0x8714 | 0x807C350C | size: 0x260
.obj lbl_807C350C, global
	.4byte 0x5C70695C
	.4byte 0x00000000
	.4byte 0x556E6578
	.4byte 0x70656374
	.4byte 0x65642064
	.4byte 0x61746120
	.4byte 0x77617320
	.4byte 0x72656365
	.4byte 0x69766564
	.4byte 0x2066726F
	.4byte 0x6D207468
	.4byte 0x65207365
	.4byte 0x72766572
	.4byte 0x2E000000
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x69645C00
	.4byte 0x5C6E6963
	.4byte 0x6B5C0000
	.4byte 0x5C756E69
	.4byte 0x7175656E
	.4byte 0x69636B5C
	.4byte 0x00000000
	.4byte 0x5C656D61
	.4byte 0x696C5C00
	.4byte 0x5C666972
	.4byte 0x73746E61
	.4byte 0x6D655C00
	.4byte 0x5C6C6173
	.4byte 0x746E616D
	.4byte 0x655C0000
	.4byte 0x5C696371
	.4byte 0x75696E5C
	.4byte 0x00000000
	.4byte 0x5C686F6D
	.4byte 0x65706167
	.4byte 0x655C0000
	.4byte 0x5C7A6970
	.4byte 0x636F6465
	.4byte 0x5C000000
	.4byte 0x5C636F75
	.4byte 0x6E747279
	.4byte 0x636F6465
	.4byte 0x5C000000
	.4byte 0x5C6C6F6E
	.4byte 0x5C000000
	.4byte 0x5C6C6174
	.4byte 0x5C000000
	.4byte 0x5C6C6F63
	.4byte 0x5C000000
	.4byte 0x5C626972
	.4byte 0x74686461
	.4byte 0x795C0000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x64617465
	.4byte 0x2E000000
	.4byte 0x5C736578
	.4byte 0x5C000000
	.4byte 0x5C706D61
	.4byte 0x736B5C00
	.4byte 0x5C61696D
	.4byte 0x5C000000
	.4byte 0x5C706963
	.4byte 0x5C000000
	.4byte 0x5C6F6363
	.4byte 0x5C000000
	.4byte 0x5C696E64
	.4byte 0x5C000000
	.4byte 0x5C696E63
	.4byte 0x5C000000
	.4byte 0x5C6D6172
	.4byte 0x5C000000
	.4byte 0x5C636863
	.4byte 0x5C000000
	.4byte 0x5C69315C
	.4byte 0x00000000
	.4byte 0x5C6F315C
	.4byte 0x00000000
	.4byte 0x5C636F6E
	.4byte 0x6E5C0000
	.4byte 0x5C736967
	.4byte 0x5C000000
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x5C757064
	.4byte 0x61746570
	.4byte 0x726F5C5C
	.4byte 0x73657373
	.4byte 0x6B65795C
	.4byte 0x00000000
	.4byte 0x5C706172
	.4byte 0x746E6572
	.4byte 0x69645C00
	.4byte 0x00000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x5C757064
	.4byte 0x61746575
	.4byte 0x695C5C73
	.4byte 0x6573736B
	.4byte 0x65795C00
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x7A697063
	.4byte 0x6F64652E
	.4byte 0x00000000
	.4byte 0x25640000
	.4byte 0x30000000
	.4byte 0x31000000
	.4byte 0x32000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x7365782E
	.4byte 0x00000000
	.4byte 0x5C637075
	.4byte 0x6272616E
	.4byte 0x6469645C
	.4byte 0x00000000
	.4byte 0x5C637075
	.4byte 0x73706565
	.4byte 0x645C0000
	.4byte 0x5C6D656D
	.4byte 0x6F72795C
	.4byte 0x00000000
	.4byte 0x5C766964
	.4byte 0x656F6361
	.4byte 0x72643172
	.4byte 0x616D5C00
	.4byte 0x5C766964
	.4byte 0x656F6361
	.4byte 0x72643272
	.4byte 0x616D5C00
	.4byte 0x5C636F6E
	.4byte 0x6E656374
	.4byte 0x696F6E69
	.4byte 0x645C0000
	.4byte 0x5C636F6E
	.4byte 0x6E656374
	.4byte 0x696F6E73
	.4byte 0x70656564
	.4byte 0x5C000000
	.4byte 0x5C686173
	.4byte 0x6E657477
	.4byte 0x6F726B5C
	.4byte 0x00000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x696E666F
	.4byte 0x2E000000
.endobj lbl_807C350C

# .data:0x8974 | 0x807C376C | size: 0x64
.obj jumptable_807C376C, global
	.4byte fn_806E17D0+0x1E0
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0x4C
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0xC4
	.4byte fn_806E17D0+0x240
	.4byte fn_806E17D0+0x2A0
	.4byte fn_806E17D0+0x300
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0x368
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0x3D0
	.4byte fn_806E17D0+0x438
	.4byte fn_806E17D0+0x498
	.4byte fn_806E17D0+0x4F8
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0x804
	.4byte fn_806E17D0+0x564
	.4byte fn_806E17D0+0x5C4
	.4byte fn_806E17D0+0x624
	.4byte fn_806E17D0+0x684
	.4byte fn_806E17D0+0x6E4
	.4byte fn_806E17D0+0x744
	.4byte fn_806E17D0+0x7A4
.endobj jumptable_807C376C

# .data:0x89D8 | 0x807C37D0 | size: 0x6C
.obj lbl_807C37D0, global
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x76616C75
	.4byte 0x652E0000
	.4byte 0x5C706173
	.4byte 0x73776F72
	.4byte 0x64656E63
	.4byte 0x5C000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x636F756E
	.4byte 0x74727963
	.4byte 0x6F64652E
	.4byte 0x00000000
	.4byte 0x5C766964
	.4byte 0x656F6361
	.4byte 0x72643173
	.4byte 0x7472696E
	.4byte 0x675C0000
	.4byte 0x5C766964
	.4byte 0x656F6361
	.4byte 0x72643273
	.4byte 0x7472696E
	.4byte 0x675C0000
	.4byte 0x5C6F7373
	.4byte 0x7472696E
	.4byte 0x675C0000
.endobj lbl_807C37D0

# .data:0x8A44 | 0x807C383C | size: 0x7C
.obj jumptable_807C383C, global
	.4byte fn_806E2010+0x6C
	.4byte fn_806E2010+0xF8
	.4byte fn_806E2010+0x184
	.4byte fn_806E2010+0x218
	.4byte fn_806E2010+0x2B0
	.4byte fn_806E2010+0x310
	.4byte fn_806E2010+0x570
	.4byte fn_806E2010+0x370
	.4byte fn_806E2010+0x3D0
	.4byte fn_806E2010+0x430
	.4byte fn_806E2010+0xAC8
	.4byte fn_806E2010+0x4B4
	.4byte fn_806E2010+0xAC8
	.4byte fn_806E2010+0x5D0
	.4byte fn_806E2010+0x5F4
	.4byte fn_806E2010+0x618
	.4byte fn_806E2010+0x678
	.4byte fn_806E2010+0x69C
	.4byte fn_806E2010+0x6FC
	.4byte fn_806E2010+0xAC8
	.4byte fn_806E2010+0x720
	.4byte fn_806E2010+0x744
	.4byte fn_806E2010+0x768
	.4byte fn_806E2010+0x7C8
	.4byte fn_806E2010+0x828
	.4byte fn_806E2010+0x888
	.4byte fn_806E2010+0x8E8
	.4byte fn_806E2010+0x948
	.4byte fn_806E2010+0x9A8
	.4byte fn_806E2010+0xA08
	.4byte fn_806E2010+0xA68
.endobj jumptable_807C383C

# .data:0x8AC0 | 0x807C38B8 | size: 0x30
.obj lbl_807C38B8, global
	.4byte 0x5C707562
	.4byte 0x6C69636D
	.4byte 0x61736B5C
	.4byte 0x00000000
	.4byte 0x5C676574
	.4byte 0x70726F66
	.4byte 0x696C655C
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x5C69645C
	.4byte 0x00000000
.endobj lbl_807C38B8

# .data:0x8AF0 | 0x807C38E8 | size: 0xF
.obj lbl_807C38E8, global
	.string "Out of memory."
.endobj lbl_807C38E8

# .data:0x8AFF | 0x807C38F7 | size: 0x1
.obj gap_07_807C38F7_data, global
.hidden gap_07_807C38F7_data
	.byte 0x00
.endobj gap_07_807C38F7_data

# .data:0x8B00 | 0x807C38F8 | size: 0x11
.obj lbl_807C38F8, global
	.string "Invalid key name"
.endobj lbl_807C38F8

# .data:0x8B11 | 0x807C3909 | size: 0x3
.obj gap_07_807C3909_data, global
.hidden gap_07_807C3909_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C3909_data

# .data:0x8B14 | 0x807C390C | size: 0x2C
.obj lbl_807C390C, global
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x6B657920
	.4byte 0x76616C75
	.4byte 0x65000000
	.4byte 0x5C6B6579
	.4byte 0x735C2564
	.4byte 0x00000000
	.4byte 0x25730000
	.4byte 0x5C000000
	.4byte 0x00000000
.endobj lbl_807C390C

# .data:0x8B40 | 0x807C3938 | size: 0xF
.obj lbl_807C3938, global
	.string "Out of memory."
.endobj lbl_807C3938

# .data:0x8B4F | 0x807C3947 | size: 0x1
.obj gap_07_807C3947_data, global
.hidden gap_07_807C3947_data
	.byte 0x00
.endobj gap_07_807C3947_data

# .data:0x8B50 | 0x807C3948 | size: 0xA4
.obj lbl_807C3948, global
	.4byte 0x4572726F
	.4byte 0x7220636F
	.4byte 0x6E6E6563
	.4byte 0x74696E67
	.4byte 0x20746F20
	.4byte 0x61207065
	.4byte 0x65722E00
	.4byte 0x5C617574
	.4byte 0x685C0000
	.4byte 0x5C706964
	.4byte 0x5C000000
	.4byte 0x5C6E6963
	.4byte 0x6B5C0000
	.4byte 0x5C736967
	.4byte 0x5C000000
	.4byte 0x00000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x5C616E61
	.4byte 0x636B5C00
	.4byte 0x4572726F
	.4byte 0x72206765
	.4byte 0x7474696E
	.4byte 0x67206275
	.4byte 0x64647920
	.4byte 0x61757468
	.4byte 0x6F72697A
	.4byte 0x6174696F
	.4byte 0x6E2E0000
	.4byte 0x5C616163
	.4byte 0x6B5C0000
	.4byte 0x4572726F
	.4byte 0x72207061
	.4byte 0x7273696E
	.4byte 0x67206275
	.4byte 0x64647920
	.4byte 0x6D657373
	.4byte 0x6167652E
	.4byte 0x00000000
	.4byte 0x25732564
	.4byte 0x25640000
.endobj lbl_807C3948

# .data:0x8BF4 | 0x807C39EC | size: 0xF
.obj lbl_807C39EC, global
	.string "Out of memory."
.endobj lbl_807C39EC

# .data:0x8C03 | 0x807C39FB | size: 0x1
.obj gap_07_807C39FB_data, global
.hidden gap_07_807C39FB_data
	.byte 0x00
.endobj gap_07_807C39FB_data

# .data:0x8C04 | 0x807C39FC | size: 0x2
.obj lbl_807C39FC, global
	.string "1"
.endobj lbl_807C39FC

# .data:0x8C06 | 0x807C39FE | size: 0x2
.obj gap_07_807C39FE_data, global
.hidden gap_07_807C39FE_data
	.2byte 0x0000
.endobj gap_07_807C39FE_data

# .data:0x8C08 | 0x807C3A00 | size: 0x4C
.obj lbl_807C3A00, global
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722073
	.4byte 0x74617274
	.4byte 0x696E6720
	.4byte 0x636F6D6D
	.4byte 0x756E6963
	.4byte 0x6174696F
	.4byte 0x6E207769
	.4byte 0x74682061
	.4byte 0x20706565
	.4byte 0x722E0000
	.4byte 0x5C6D5C00
	.4byte 0x5C6C656E
	.4byte 0x5C000000
	.4byte 0x5C6D7367
	.4byte 0x5C0A0000
.endobj lbl_807C3A00

# .data:0x8C54 | 0x807C3A4C | size: 0x14
.obj lbl_807C3A4C, global
	.string "\\m\\%d\\xfer\\%d %u %u"
.endobj lbl_807C3A4C

# .data:0x8C68 | 0x807C3A60 | size: 0x4
.obj lbl_807C3A60, global
	.4byte 0x00000000
.endobj lbl_807C3A60

# .data:0x8C6C | 0x807C3A64 | size: 0xE
.obj lbl_807C3A64, global
	.string "\\len\\%d\\msg\\\n"
.endobj lbl_807C3A64

# .data:0x8C7A | 0x807C3A72 | size: 0x6
.obj gap_07_807C3A72_data, global
.hidden gap_07_807C3A72_data
	.4byte 0x00000000
	.2byte 0x0000
.endobj gap_07_807C3A72_data

# .data:0x8C80 | 0x807C3A78 | size: 0x220
.obj lbl_807C3A78, global
	.4byte 0x67702E69
	.4byte 0x6E666F00
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C6E7072
	.4byte 0x5C000000
	.4byte 0x556E6578
	.4byte 0x70656374
	.4byte 0x65642064
	.4byte 0x61746120
	.4byte 0x77617320
	.4byte 0x72656365
	.4byte 0x69766564
	.4byte 0x2066726F
	.4byte 0x6D207468
	.4byte 0x65207365
	.4byte 0x72766572
	.4byte 0x2E000000
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x69645C00
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x6E69636B
	.4byte 0x2E000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x7265706C
	.4byte 0x6163652E
	.4byte 0x00000000
	.4byte 0x5C6E6577
	.4byte 0x70726F66
	.4byte 0x696C655C
	.4byte 0x00000000
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x5C6E6963
	.4byte 0x6B5C0000
	.4byte 0x5C726570
	.4byte 0x6C616365
	.4byte 0x5C000000
	.4byte 0x5C6F6C64
	.4byte 0x6E69636B
	.4byte 0x5C000000
	.4byte 0x5C69645C
	.4byte 0x00000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x5C647072
	.4byte 0x5C000000
	.4byte 0x5C64656C
	.4byte 0x70726F66
	.4byte 0x696C655C
	.4byte 0x00000000
	.4byte 0x5C616464
	.4byte 0x626C6F63
	.4byte 0x6B5C5C73
	.4byte 0x6573736B
	.4byte 0x65795C00
	.4byte 0x5C72656D
	.4byte 0x6F766562
	.4byte 0x6C6F636B
	.4byte 0x5C5C7365
	.4byte 0x73736B65
	.4byte 0x795C0000
	.4byte 0x5C626C6B
	.4byte 0x5C000000
	.4byte 0x5C6C6973
	.4byte 0x745C0000
	.4byte 0x2C000000
.endobj lbl_807C3A78

# .data:0x8EA0 | 0x807C3C98 | size: 0x19
.obj lbl_807C3C98, global
	.string "gpsp.gs.nintendowifi.net"
.endobj lbl_807C3C98

# .data:0x8EB9 | 0x807C3CB1 | size: 0x27
.obj gap_07_807C3CB1_data, global
.hidden gap_07_807C3CB1_data
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C3CB1_data

# .data:0x8EE0 | 0x807C3CD8 | size: 0xC8
.obj lbl_807C3CD8, global
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722063
	.4byte 0x72656174
	.4byte 0x696E6720
	.4byte 0x6120736F
	.4byte 0x636B6574
	.4byte 0x2E000000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F72206D
	.4byte 0x616B696E
	.4byte 0x67206120
	.4byte 0x736F636B
	.4byte 0x6574206E
	.4byte 0x6F6E2D62
	.4byte 0x6C6F636B
	.4byte 0x696E672E
	.4byte 0x00000000
	.4byte 0x436F756C
	.4byte 0x64206E6F
	.4byte 0x74207265
	.4byte 0x736F6C76
	.4byte 0x65207365
	.4byte 0x61726368
	.4byte 0x206D616E
	.4byte 0x616E6765
	.4byte 0x7220686F
	.4byte 0x7374206E
	.4byte 0x616D652E
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722063
	.4byte 0x6F6E6E65
	.4byte 0x6374696E
	.4byte 0x67206120
	.4byte 0x736F636B
	.4byte 0x65742E00
.endobj lbl_807C3CD8

# .data:0x8FA8 | 0x807C3DA0 | size: 0x390
.obj lbl_807C3DA0, global
	.4byte 0x4E6F2073
	.4byte 0x65617263
	.4byte 0x68206372
	.4byte 0x69746572
	.4byte 0x69612E00
	.4byte 0x00000000
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x652D6D61
	.4byte 0x696C2E00
	.4byte 0x496E7661
	.4byte 0x6C696420
	.4byte 0x70617373
	.4byte 0x776F7264
	.4byte 0x2E000000
	.4byte 0x54686520
	.4byte 0x73656172
	.4byte 0x63682074
	.4byte 0x696D6564
	.4byte 0x206F7574
	.4byte 0x00000000
	.4byte 0x534D0000
	.4byte 0x436F756C
	.4byte 0x64206E6F
	.4byte 0x7420636F
	.4byte 0x6E6E6563
	.4byte 0x7420746F
	.4byte 0x20746865
	.4byte 0x20736561
	.4byte 0x72636820
	.4byte 0x6D616E61
	.4byte 0x6765722E
	.4byte 0x00000000
	.4byte 0x5C736561
	.4byte 0x7263685C
	.4byte 0x00000000
	.4byte 0x5C736573
	.4byte 0x736B6579
	.4byte 0x5C000000
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x69645C00
	.4byte 0x5C6E616D
	.4byte 0x65737061
	.4byte 0x63656964
	.4byte 0x5C000000
	.4byte 0x5C706172
	.4byte 0x746E6572
	.4byte 0x69645C00
	.4byte 0x5C6E6963
	.4byte 0x6B5C0000
	.4byte 0x5C756E69
	.4byte 0x7175656E
	.4byte 0x69636B5C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C656D61
	.4byte 0x696C5C00
	.4byte 0x5C666972
	.4byte 0x73746E61
	.4byte 0x6D655C00
	.4byte 0x5C6C6173
	.4byte 0x746E616D
	.4byte 0x655C0000
	.4byte 0x5C696371
	.4byte 0x75696E5C
	.4byte 0x00000000
	.4byte 0x5C736B69
	.4byte 0x705C0000
	.4byte 0x5C736561
	.4byte 0x72636875
	.4byte 0x6E697175
	.4byte 0x655C0000
	.4byte 0x5C6E616D
	.4byte 0x65737061
	.4byte 0x6365735C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C76616C
	.4byte 0x69645C00
	.4byte 0x5C6E6963
	.4byte 0x6B735C00
	.4byte 0x5C706173
	.4byte 0x73656E63
	.4byte 0x5C000000
	.4byte 0x5C706D61
	.4byte 0x7463685C
	.4byte 0x00000000
	.4byte 0x5C70726F
	.4byte 0x64756374
	.4byte 0x69645C00
	.4byte 0x00000000
	.4byte 0x5C636865
	.4byte 0x636B5C00
	.4byte 0x5C6E6577
	.4byte 0x75736572
	.4byte 0x5C000000
	.4byte 0x5C70726F
	.4byte 0x64756374
	.4byte 0x49445C00
	.4byte 0x5C63646B
	.4byte 0x65795C00
	.4byte 0x5C6F7468
	.4byte 0x6572735C
	.4byte 0x00000000
	.4byte 0x5C6F7468
	.4byte 0x6572736C
	.4byte 0x6973745C
	.4byte 0x00000000
	.4byte 0x5C6E756D
	.4byte 0x6F706964
	.4byte 0x735C0000
	.4byte 0x5C6F7069
	.4byte 0x64735C00
	.4byte 0x7C000000
	.4byte 0x5C756E69
	.4byte 0x71756573
	.4byte 0x65617263
	.4byte 0x685C0000
	.4byte 0x00000000
	.4byte 0x5C707265
	.4byte 0x66657272
	.4byte 0x65646E69
	.4byte 0x636B5C00
	.4byte 0x5C70726F
	.4byte 0x66696C65
	.4byte 0x6C697374
	.4byte 0x5C000000
	.4byte 0x5C736561
	.4byte 0x72636870
	.4byte 0x726F6669
	.4byte 0x6C656964
	.4byte 0x5C000000
	.4byte 0x5C6D6178
	.4byte 0x72657375
	.4byte 0x6C74735C
	.4byte 0x00000000
	.4byte 0x5C67616D
	.4byte 0x656E616D
	.4byte 0x655C0000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x54686572
	.4byte 0x65207761
	.4byte 0x7320616E
	.4byte 0x20657272
	.4byte 0x6F722072
	.4byte 0x65616469
	.4byte 0x6E672066
	.4byte 0x726F6D20
	.4byte 0x74686520
	.4byte 0x73657276
	.4byte 0x65722E00
	.4byte 0x00000000
	.4byte 0x62737264
	.4byte 0x6F6E6500
	.4byte 0x6D6F7265
	.4byte 0x00000000
	.4byte 0x30000000
	.4byte 0x62737200
	.4byte 0x6E69636B
	.4byte 0x00000000
	.4byte 0x756E6971
	.4byte 0x75656E69
	.4byte 0x636B0000
	.4byte 0x6E616D65
	.4byte 0x73706163
	.4byte 0x65696400
	.4byte 0x66697273
	.4byte 0x746E616D
	.4byte 0x65000000
	.4byte 0x6C617374
	.4byte 0x6E616D65
	.4byte 0x00000000
	.4byte 0x656D6169
	.4byte 0x6C000000
	.4byte 0x4572726F
	.4byte 0x72207265
	.4byte 0x6164696E
	.4byte 0x67206672
	.4byte 0x6F6D2074
	.4byte 0x68652073
	.4byte 0x65617263
	.4byte 0x68207365
	.4byte 0x72766572
	.4byte 0x2E000000
	.4byte 0x76720000
	.4byte 0x6E720000
	.4byte 0x6E646F6E
	.4byte 0x65000000
	.4byte 0x70737264
	.4byte 0x6F6E6500
	.4byte 0x70737200
	.4byte 0x73746174
	.4byte 0x75730000
	.4byte 0x73746174
	.4byte 0x7573636F
	.4byte 0x64650000
	.4byte 0x63757200
	.4byte 0x5C706964
	.4byte 0x5C000000
	.4byte 0x6E757200
	.4byte 0x6F746865
	.4byte 0x72730000
	.4byte 0x6F646F6E
	.4byte 0x65000000
	.4byte 0x6F000000
	.4byte 0x66697273
	.4byte 0x74000000
	.4byte 0x6C617374
	.4byte 0x00000000
	.4byte 0x6F746865
	.4byte 0x72736C69
	.4byte 0x73740000
	.4byte 0x6F6C646F
	.4byte 0x6E650000
	.4byte 0x75730000
	.4byte 0x7573646F
	.4byte 0x6E650000
	.4byte 0x70726F66
	.4byte 0x696C656C
	.4byte 0x69737400
	.4byte 0x706C646F
	.4byte 0x6E650000
	.4byte 0x68696464
	.4byte 0x656E0000
	.4byte 0x636F756E
	.4byte 0x74000000
.endobj lbl_807C3DA0

# .data:0x9338 | 0x807C4130 | size: 0x30
.obj jumptable_807C4130, global
	.4byte fn_806E65E0+0x202C
	.4byte fn_806E65E0+0xAE4
	.4byte fn_806E65E0+0xE28
	.4byte fn_806E65E0+0xF28
	.4byte fn_806E65E0+0x11E0
	.4byte fn_806E65E0+0x1430
	.4byte fn_806E65E0+0x1578
	.4byte fn_806E65E0+0x16C8
	.4byte fn_806E65E0+0x1C28
	.4byte fn_806E65E0+0x19C8
	.4byte fn_806E65E0+0xAE4
	.4byte fn_806E65E0+0x1E1C
.endobj jumptable_807C4130

# .data:0x9368 | 0x807C4160 | size: 0x30
.obj jumptable_807C4160, global
	.4byte fn_806E65E0+0x998
	.4byte fn_806E65E0+0x154
	.4byte fn_806E65E0+0x408
	.4byte fn_806E65E0+0x45C
	.4byte fn_806E65E0+0x4FC
	.4byte fn_806E65E0+0x570
	.4byte fn_806E65E0+0x610
	.4byte fn_806E65E0+0x73C
	.4byte fn_806E65E0+0x8B4
	.4byte fn_806E65E0+0x7B0
	.4byte fn_806E65E0+0x31C
	.4byte fn_806E65E0+0x908
.endobj jumptable_807C4160

# .data:0x9398 | 0x807C4190 | size: 0x30
.obj lbl_807C4190, global
	.4byte 0x00000000
	.4byte 0x5C766572
	.4byte 0x73696F6E
	.4byte 0x5C25645C
	.4byte 0x72657375
	.4byte 0x6C745C25
	.4byte 0x64000000
	.4byte 0x5C786665
	.4byte 0x725C0000
	.4byte 0x25642025
	.4byte 0x75202575
	.4byte 0x00000000
.endobj lbl_807C4190

# .data:0x93C8 | 0x807C41C0 | size: 0xD8
.obj lbl_807C41C0, global
	.4byte 0x5C726567
	.4byte 0x69737465
	.4byte 0x726E6963
	.4byte 0x6B5C5C73
	.4byte 0x6573736B
	.4byte 0x65795C00
	.4byte 0x5C756E69
	.4byte 0x7175656E
	.4byte 0x69636B5C
	.4byte 0x00000000
	.4byte 0x5C63646B
	.4byte 0x65795C00
	.4byte 0x5C706172
	.4byte 0x746E6572
	.4byte 0x69645C00
	.4byte 0x5C69645C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C66696E
	.4byte 0x616C5C00
	.4byte 0x5C726E5C
	.4byte 0x00000000
	.4byte 0x556E6578
	.4byte 0x70656374
	.4byte 0x65642064
	.4byte 0x61746120
	.4byte 0x77617320
	.4byte 0x72656365
	.4byte 0x69766564
	.4byte 0x2066726F
	.4byte 0x6D207468
	.4byte 0x65207365
	.4byte 0x72766572
	.4byte 0x2E000000
	.4byte 0x4F757420
	.4byte 0x6F66206D
	.4byte 0x656D6F72
	.4byte 0x792E0000
	.4byte 0x5C726567
	.4byte 0x69737465
	.4byte 0x7263646B
	.4byte 0x65795C5C
	.4byte 0x73657373
	.4byte 0x6B65795C
	.4byte 0x00000000
	.4byte 0x5C63646B
	.4byte 0x6579656E
	.4byte 0x635C0000
	.4byte 0x5C67616D
	.4byte 0x6569645C
	.4byte 0x00000000
	.4byte 0x5C72635C
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C41C0

# .data:0x94A0 | 0x807C4298 | size: 0x28
.obj lbl_807C4298, global
	.4byte 0x5C657272
	.4byte 0x6F725C00
	.4byte 0x5C657272
	.4byte 0x5C000000
	.4byte 0x5C657272
	.4byte 0x6D73675C
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x5C666174
	.4byte 0x616C5C00
.endobj lbl_807C4298

# .data:0x94C8 | 0x807C42C0 | size: 0x38
.obj lbl_807C42C0, global
	.string "There was an error checking for a completed connection."
.endobj lbl_807C42C0

# .data:0x9500 | 0x807C42F8 | size: 0xD
.obj lbl_807C42F8, global
	.string "Parse Error."
.endobj lbl_807C42F8

# .data:0x950D | 0x807C4305 | size: 0x3
.obj gap_07_807C4305_data, global
.hidden gap_07_807C4305_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C4305_data

# .data:0x9510 | 0x807C4308 | size: 0x21
.obj lbl_807C4308, global
	.string "3b8dd8995f7c40a9a5c5b7dd5b481341"
.endobj lbl_807C4308

# .data:0x9531 | 0x807C4329 | size: 0x7
.obj gap_07_807C4329_data, global
.hidden gap_07_807C4329_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C4329_data

# .data:0x9538 | 0x807C4330 | size: 0x4
.obj lbl_807C4330, global
	.4byte 0xFEFE0000
.endobj lbl_807C4330

# .data:0x953C | 0x807C4334 | size: 0x5
.obj lbl_807C4334, global
	.string "time"
.endobj lbl_807C4334

# .data:0x9541 | 0x807C4339 | size: 0x7
.obj gap_07_807C4339_data, global
.hidden gap_07_807C4339_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C4339_data

# .data:0x9548 | 0x807C4340 | size: 0x10
.obj lbl_807C4340, global
	.4byte 0x25733A25
	.4byte 0x64000000
	.4byte 0x25730000
	.4byte 0x3A256400
.endobj lbl_807C4340

# .data:0x9558 | 0x807C4350 | size: 0x8
.obj lbl_807C4350, global
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C4350

# .data:0x9560 | 0x807C4358 | size: 0xD9C
.obj lbl_807C4358, global
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C4358

# .data:0xA2FC | 0x807C50F4 | size: 0x4
.obj lbl_807C50F4, global
	.4byte lbl_807C4358
.endobj lbl_807C50F4

# .data:0xA300 | 0x807C50F8 | size: 0x1E
.obj lbl_807C50F8, global
	.string "%s.master.gs.nintendowifi.net"
.endobj lbl_807C50F8

# .data:0xA31E | 0x807C5116 | size: 0x2
.obj gap_07_807C5116_data, global
.hidden gap_07_807C5116_data
	.2byte 0x0000
.endobj gap_07_807C5116_data

# .data:0xA320 | 0x807C5118 | size: 0x38
.obj lbl_807C5118, global
	.string "No challenge value was received from the master server."
.endobj lbl_807C5118

# .data:0xA358 | 0x807C5150 | size: 0x3
.obj lbl_807C5150, global
	.string "%d"
.endobj lbl_807C5150

# .data:0xA35B | 0x807C5153 | size: 0x5
.obj gap_07_807C5153_data, global
.hidden gap_07_807C5153_data
	.4byte 0x00000000
	.byte 0x00
.endobj gap_07_807C5153_data

# .data:0xA360 | 0x807C5158 | size: 0x10
.obj lbl_807C5158, global
	.string "255.255.255.255"
.endobj lbl_807C5158

# .data:0xA370 | 0x807C5168 | size: 0x8
.obj lbl_807C5168, global
	.string "unknown"
.endobj lbl_807C5168

# .data:0xA378 | 0x807C5170 | size: 0x4
.obj lbl_807C5170, global
	.4byte 0x00000000
.endobj lbl_807C5170

# .data:0xA37C | 0x807C5174 | size: 0x20
.obj lbl_807C5174, global
	.4byte 0x73706C69
	.4byte 0x746E756D
	.4byte 0x00000000
	.4byte 0x25303278
	.4byte 0x00000000
	.4byte 0x25303858
	.4byte 0x25303458
	.4byte 0x00000000
.endobj lbl_807C5174

# .data:0xA39C | 0x807C5194 | size: 0x2C
.obj jumptable_807C5194, global
	.4byte fn_806F0EB0+0x148
	.4byte fn_806F0EB0+0x1FC
	.4byte fn_806F0EB0+0x3B0
	.4byte fn_806F0EB0+0x6BC
	.4byte fn_806F0EB0+0x3EC
	.4byte fn_806F0EB0+0x6BC
	.4byte fn_806F0EB0+0x4B0
	.4byte fn_806F0EB0+0x6BC
	.4byte fn_806F0EB0+0x69C
	.4byte fn_806F0EB0+0x12C
	.4byte fn_806F0EB0+0x6A0
.endobj jumptable_807C5194

# .data:0xA3C8 | 0x807C51C0 | size: 0x60
.obj lbl_807C51C0, global
	.4byte 0x6C6F6361
	.4byte 0x6C697025
	.4byte 0x64000000
	.4byte 0x6C6F6361
	.4byte 0x6C706F72
	.4byte 0x74000000
	.4byte 0x6E61746E
	.4byte 0x65670000
	.4byte 0x31000000
	.4byte 0x30000000
	.4byte 0x73746174
	.4byte 0x65636861
	.4byte 0x6E676564
	.4byte 0x00000000
	.4byte 0x67616D65
	.4byte 0x6E616D65
	.4byte 0x00000000
	.4byte 0x7075626C
	.4byte 0x69636970
	.4byte 0x00000000
	.4byte 0x7075626C
	.4byte 0x6963706F
	.4byte 0x72740000
	.4byte 0x00000000
.endobj lbl_807C51C0

# .data:0xA428 | 0x807C5220 | size: 0x4
.obj lbl_807C5220, global
	.4byte 0x00000000
.endobj lbl_807C5220

# .data:0xA42C | 0x807C5224 | size: 0x9
.obj lbl_807C5224, global
	.string "hostname"
.endobj lbl_807C5224

# .data:0xA435 | 0x807C522D | size: 0x3
.obj gap_07_807C522D_data, global
.hidden gap_07_807C522D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C522D_data

# .data:0xA438 | 0x807C5230 | size: 0x9
.obj lbl_807C5230, global
	.string "gamename"
.endobj lbl_807C5230

# .data:0xA441 | 0x807C5239 | size: 0x7
.obj gap_07_807C5239_data, global
.hidden gap_07_807C5239_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5239_data

# .data:0xA448 | 0x807C5240 | size: 0x8
.obj lbl_807C5240, global
	.string "gamever"
.endobj lbl_807C5240

# .data:0xA450 | 0x807C5248 | size: 0x9
.obj lbl_807C5248, global
	.string "hostport"
.endobj lbl_807C5248

# .data:0xA459 | 0x807C5251 | size: 0x7
.obj gap_07_807C5251_data, global
.hidden gap_07_807C5251_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5251_data

# .data:0xA460 | 0x807C5258 | size: 0x8
.obj lbl_807C5258, global
	.string "mapname"
.endobj lbl_807C5258

# .data:0xA468 | 0x807C5260 | size: 0x9
.obj lbl_807C5260, global
	.string "gametype"
.endobj lbl_807C5260

# .data:0xA471 | 0x807C5269 | size: 0x3
.obj gap_07_807C5269_data, global
.hidden gap_07_807C5269_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5269_data

# .data:0xA474 | 0x807C526C | size: 0xC
.obj lbl_807C526C, global
	.string "gamevariant"
.endobj lbl_807C526C

# .data:0xA480 | 0x807C5278 | size: 0xB
.obj lbl_807C5278, global
	.string "numplayers"
.endobj lbl_807C5278

# .data:0xA48B | 0x807C5283 | size: 0x1
.obj gap_07_807C5283_data, global
.hidden gap_07_807C5283_data
	.byte 0x00
.endobj gap_07_807C5283_data

# .data:0xA48C | 0x807C5284 | size: 0x9
.obj lbl_807C5284, global
	.string "numteams"
.endobj lbl_807C5284

# .data:0xA495 | 0x807C528D | size: 0x3
.obj gap_07_807C528D_data, global
.hidden gap_07_807C528D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C528D_data

# .data:0xA498 | 0x807C5290 | size: 0xB
.obj lbl_807C5290, global
	.string "maxplayers"
.endobj lbl_807C5290

# .data:0xA4A3 | 0x807C529B | size: 0x1
.obj gap_07_807C529B_data, global
.hidden gap_07_807C529B_data
	.byte 0x00
.endobj gap_07_807C529B_data

# .data:0xA4A4 | 0x807C529C | size: 0x9
.obj lbl_807C529C, global
	.string "gamemode"
.endobj lbl_807C529C

# .data:0xA4AD | 0x807C52A5 | size: 0x3
.obj gap_07_807C52A5_data, global
.hidden gap_07_807C52A5_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C52A5_data

# .data:0xA4B0 | 0x807C52A8 | size: 0x9
.obj lbl_807C52A8, global
	.string "teamplay"
.endobj lbl_807C52A8

# .data:0xA4B9 | 0x807C52B1 | size: 0x3
.obj gap_07_807C52B1_data, global
.hidden gap_07_807C52B1_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C52B1_data

# .data:0xA4BC | 0x807C52B4 | size: 0xA
.obj lbl_807C52B4, global
	.string "fraglimit"
.endobj lbl_807C52B4

# .data:0xA4C6 | 0x807C52BE | size: 0x2
.obj gap_07_807C52BE_data, global
.hidden gap_07_807C52BE_data
	.2byte 0x0000
.endobj gap_07_807C52BE_data

# .data:0xA4C8 | 0x807C52C0 | size: 0xE
.obj lbl_807C52C0, global
	.string "teamfraglimit"
.endobj lbl_807C52C0

# .data:0xA4D6 | 0x807C52CE | size: 0x2
.obj gap_07_807C52CE_data, global
.hidden gap_07_807C52CE_data
	.2byte 0x0000
.endobj gap_07_807C52CE_data

# .data:0xA4D8 | 0x807C52D0 | size: 0xC
.obj lbl_807C52D0, global
	.string "timeelapsed"
.endobj lbl_807C52D0

# .data:0xA4E4 | 0x807C52DC | size: 0xA
.obj lbl_807C52DC, global
	.string "timelimit"
.endobj lbl_807C52DC

# .data:0xA4EE | 0x807C52E6 | size: 0x2
.obj gap_07_807C52E6_data, global
.hidden gap_07_807C52E6_data
	.2byte 0x0000
.endobj gap_07_807C52E6_data

# .data:0xA4F0 | 0x807C52E8 | size: 0xA
.obj lbl_807C52E8, global
	.string "roundtime"
.endobj lbl_807C52E8

# .data:0xA4FA | 0x807C52F2 | size: 0x2
.obj gap_07_807C52F2_data, global
.hidden gap_07_807C52F2_data
	.2byte 0x0000
.endobj gap_07_807C52F2_data

# .data:0xA4FC | 0x807C52F4 | size: 0xD
.obj lbl_807C52F4, global
	.string "roundelapsed"
.endobj lbl_807C52F4

# .data:0xA509 | 0x807C5301 | size: 0x3
.obj gap_07_807C5301_data, global
.hidden gap_07_807C5301_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5301_data

# .data:0xA50C | 0x807C5304 | size: 0x9
.obj lbl_807C5304, global
	.string "password"
.endobj lbl_807C5304

# .data:0xA515 | 0x807C530D | size: 0x3
.obj gap_07_807C530D_data, global
.hidden gap_07_807C530D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C530D_data

# .data:0xA518 | 0x807C5310 | size: 0x8
.obj lbl_807C5310, global
	.string "groupid"
.endobj lbl_807C5310

# .data:0xA520 | 0x807C5318 | size: 0x8
.obj lbl_807C5318, global
	.string "player_"
.endobj lbl_807C5318

# .data:0xA528 | 0x807C5320 | size: 0x7
.obj lbl_807C5320, global
	.string "score_"
.endobj lbl_807C5320

# .data:0xA52F | 0x807C5327 | size: 0x1
.obj gap_07_807C5327_data, global
.hidden gap_07_807C5327_data
	.byte 0x00
.endobj gap_07_807C5327_data

# .data:0xA530 | 0x807C5328 | size: 0x7
.obj lbl_807C5328, global
	.string "skill_"
.endobj lbl_807C5328

# .data:0xA537 | 0x807C532F | size: 0x1
.obj gap_07_807C532F_data, global
.hidden gap_07_807C532F_data
	.byte 0x00
.endobj gap_07_807C532F_data

# .data:0xA538 | 0x807C5330 | size: 0x6
.obj lbl_807C5330, global
	.string "ping_"
.endobj lbl_807C5330

# .data:0xA53E | 0x807C5336 | size: 0x2
.obj gap_07_807C5336_data, global
.hidden gap_07_807C5336_data
	.2byte 0x0000
.endobj gap_07_807C5336_data

# .data:0xA540 | 0x807C5338 | size: 0x6
.obj lbl_807C5338, global
	.string "team_"
.endobj lbl_807C5338

# .data:0xA546 | 0x807C533E | size: 0x2
.obj gap_07_807C533E_data, global
.hidden gap_07_807C533E_data
	.2byte 0x0000
.endobj gap_07_807C533E_data

# .data:0xA548 | 0x807C5340 | size: 0x8
.obj lbl_807C5340, global
	.string "deaths_"
.endobj lbl_807C5340

# .data:0xA550 | 0x807C5348 | size: 0x5
.obj lbl_807C5348, global
	.string "pid_"
.endobj lbl_807C5348

# .data:0xA555 | 0x807C534D | size: 0x3
.obj gap_07_807C534D_data, global
.hidden gap_07_807C534D_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C534D_data

# .data:0xA558 | 0x807C5350 | size: 0x7
.obj lbl_807C5350, global
	.string "team_t"
.endobj lbl_807C5350

# .data:0xA55F | 0x807C5357 | size: 0x1
.obj gap_07_807C5357_data, global
.hidden gap_07_807C5357_data
	.byte 0x00
.endobj gap_07_807C5357_data

# .data:0xA560 | 0x807C5358 | size: 0x8
.obj lbl_807C5358, global
	.string "score_t"
.endobj lbl_807C5358

# .data:0xA568 | 0x807C5360 | size: 0xB
.obj lbl_807C5360, global
	.string "nn_groupid"
.endobj lbl_807C5360

# .data:0xA573 | 0x807C536B | size: 0x5
.obj gap_07_807C536B_data, global
.hidden gap_07_807C536B_data
	.4byte 0x00000000
	.byte 0x00
.endobj gap_07_807C536B_data

# .data:0xA578 | 0x807C5370 | size: 0x8
.obj lbl_807C5370, global
	.string "country"
.endobj lbl_807C5370

# .data:0xA580 | 0x807C5378 | size: 0x7
.obj lbl_807C5378, global
	.string "region"
.endobj lbl_807C5378

# .data:0xA587 | 0x807C537F | size: 0x1
.obj gap_07_807C537F_data, global
.hidden gap_07_807C537F_data
	.byte 0x00
.endobj gap_07_807C537F_data

# .data:0xA588 | 0x807C5380 | size: 0x3F8
.obj lbl_807C5380, global
	.4byte lbl_807C5220
	.4byte lbl_807C5224
	.4byte lbl_807C5230
	.4byte lbl_807C5240
	.4byte lbl_807C5248
	.4byte lbl_807C5258
	.4byte lbl_807C5260
	.4byte lbl_807C526C
	.4byte lbl_807C5278
	.4byte lbl_807C5284
	.4byte lbl_807C5290
	.4byte lbl_807C529C
	.4byte lbl_807C52A8
	.4byte lbl_807C52B4
	.4byte lbl_807C52C0
	.4byte lbl_807C52D0
	.4byte lbl_807C52DC
	.4byte lbl_807C52E8
	.4byte lbl_807C52F4
	.4byte lbl_807C5304
	.4byte lbl_807C5310
	.4byte lbl_807C5318
	.4byte lbl_807C5320
	.4byte lbl_807C5328
	.4byte lbl_807C5330
	.4byte lbl_807C5338
	.4byte lbl_807C5340
	.4byte lbl_807C5348
	.4byte lbl_807C5350
	.4byte lbl_807C5358
	.4byte lbl_807C5360
	.4byte lbl_807C5370
	.4byte lbl_807C5378
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C5380

# .data:0xA980 | 0x807C5778 | size: 0x3
.obj lbl_807C5778, global
	.string ": "
.endobj lbl_807C5778

# .data:0xA983 | 0x807C577B | size: 0x1
.obj gap_07_807C577B_data, global
.hidden gap_07_807C577B_data
	.byte 0x00
.endobj gap_07_807C577B_data

# .data:0xA984 | 0x807C577C | size: 0x3
.obj lbl_807C577C, global
	.string "\r\n"
.endobj lbl_807C577C

# .data:0xA987 | 0x807C577F | size: 0x1
.obj gap_07_807C577F_data, global
.hidden gap_07_807C577F_data
	.byte 0x00
.endobj gap_07_807C577F_data

# .data:0xA988 | 0x807C5780 | size: 0x3
.obj lbl_807C5780, global
	.string "%d"
.endobj lbl_807C5780

# .data:0xA98B | 0x807C5783 | size: 0x5
.obj gap_07_807C5783_data, global
.hidden gap_07_807C5783_data
	.4byte 0x00000000
	.byte 0x00
.endobj gap_07_807C5783_data

# .data:0xA990 | 0x807C5788 | size: 0x4
.obj lbl_807C5788, global
	.4byte 0x0000007D
.endobj lbl_807C5788

# .data:0xA994 | 0x807C578C | size: 0x4
.obj lbl_807C578C, global
	.4byte 0x000000FA
.endobj lbl_807C578C

# .data:0xA998 | 0x807C5790 | size: 0x9
.obj lbl_807C5790, global
	.string "https://"
.endobj lbl_807C5790

# .data:0xA9A1 | 0x807C5799 | size: 0x7
.obj gap_07_807C5799_data, global
.hidden gap_07_807C5799_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5799_data

# .data:0xA9A8 | 0x807C57A0 | size: 0x9
.obj lbl_807C57A0, global
	.string "https://"
.endobj lbl_807C57A0

# .data:0xA9B1 | 0x807C57A9 | size: 0x7
.obj gap_07_807C57A9_data, global
.hidden gap_07_807C57A9_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C57A9_data

# .data:0xA9B8 | 0x807C57B0 | size: 0x12C
.obj lbl_807C57B0, global
	.4byte 0x61626364
	.4byte 0x65666768
	.4byte 0x696A6B6C
	.4byte 0x6D6E6F70
	.4byte 0x71727374
	.4byte 0x75767778
	.4byte 0x797A4142
	.4byte 0x43444546
	.4byte 0x4748494A
	.4byte 0x4B4C4D4E
	.4byte 0x4F505152
	.4byte 0x53545556
	.4byte 0x5758595A
	.4byte 0x30313233
	.4byte 0x34353637
	.4byte 0x38395F40
	.4byte 0x2D2E2A00
	.4byte 0x00000000
	.4byte 0x6170706C
	.4byte 0x69636174
	.4byte 0x696F6E2F
	.4byte 0x64696D65
	.4byte 0x00000000
	.4byte 0x6D756C74
	.4byte 0x69706172
	.4byte 0x742F666F
	.4byte 0x726D2D64
	.4byte 0x6174613B
	.4byte 0x20626F75
	.4byte 0x6E646172
	.4byte 0x793D5172
	.4byte 0x34473832
	.4byte 0x33733233
	.4byte 0x642D2D2D
	.4byte 0x3C3C3E3C
	.4byte 0x3E3C3C3C
	.4byte 0x3E2D2D37
	.4byte 0x64313138
	.4byte 0x65303533
	.4byte 0x36000000
	.4byte 0x74657874
	.4byte 0x2F786D6C
	.4byte 0x00000000
	.4byte 0x6170706C
	.4byte 0x69636174
	.4byte 0x696F6E2F
	.4byte 0x782D7777
	.4byte 0x772D666F
	.4byte 0x726D2D75
	.4byte 0x726C656E
	.4byte 0x636F6465
	.4byte 0x64000000
	.4byte 0x2D2D5172
	.4byte 0x34473832
	.4byte 0x33733233
	.4byte 0x642D2D2D
	.4byte 0x3C3C3E3C
	.4byte 0x3E3C3C3C
	.4byte 0x3E2D2D37
	.4byte 0x64313138
	.4byte 0x65303533
	.4byte 0x36000000
	.4byte 0x6369643A
	.4byte 0x69643000
	.4byte 0x68747470
	.4byte 0x3A2F2F73
	.4byte 0x6368656D
	.4byte 0x61732E78
	.4byte 0x6D6C736F
	.4byte 0x61702E6F
	.4byte 0x72672F73
	.4byte 0x6F61702F
	.4byte 0x656E7665
	.4byte 0x6C6F7065
	.4byte 0x2F000000
.endobj lbl_807C57B0

# .data:0xAAE4 | 0x807C58DC | size: 0xFC
.obj lbl_807C58DC, global
	.4byte 0x30313233
	.4byte 0x34353637
	.4byte 0x38394142
	.4byte 0x43444546
	.4byte 0x00000000
	.4byte 0x25733D00
	.4byte 0x2625733D
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x2573436F
	.4byte 0x6E74656E
	.4byte 0x742D4469
	.4byte 0x73706F73
	.4byte 0x6974696F
	.4byte 0x6E3A2066
	.4byte 0x6F726D2D
	.4byte 0x64617461
	.4byte 0x3B206E61
	.4byte 0x6D653D22
	.4byte 0x2573220D
	.4byte 0x0A0D0A00
	.4byte 0x2D2D5172
	.4byte 0x34473832
	.4byte 0x33733233
	.4byte 0x642D2D2D
	.4byte 0x3C3C3E3C
	.4byte 0x3E3C3C3C
	.4byte 0x3E2D2D37
	.4byte 0x64313138
	.4byte 0x65303533
	.4byte 0x360D0A00
	.4byte 0x0D0A2D2D
	.4byte 0x51723447
	.4byte 0x38323373
	.4byte 0x3233642D
	.4byte 0x2D2D3C3C
	.4byte 0x3E3C3E3C
	.4byte 0x3C3C3E2D
	.4byte 0x2D376431
	.4byte 0x31386530
	.4byte 0x3533360D
	.4byte 0x0A000000
	.4byte 0x2573436F
	.4byte 0x6E74656E
	.4byte 0x742D4469
	.4byte 0x73706F73
	.4byte 0x6974696F
	.4byte 0x6E3A2066
	.4byte 0x6F726D2D
	.4byte 0x64617461
	.4byte 0x3B206E61
	.4byte 0x6D653D22
	.4byte 0x2573223B
	.4byte 0x2066696C
	.4byte 0x656E616D
	.4byte 0x653D2225
	.4byte 0x73220D0A
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x54797065
	.4byte 0x3A202573
	.4byte 0x0D0A0D0A
	.4byte 0x00000000
.endobj lbl_807C58DC

# .data:0xABE0 | 0x807C59D8 | size: 0x3
.obj lbl_807C59D8, global
	.string "\r\n"
.endobj lbl_807C59D8

# .data:0xABE3 | 0x807C59DB | size: 0x1
.obj gap_07_807C59DB_data, global
.hidden gap_07_807C59DB_data
	.byte 0x00
.endobj gap_07_807C59DB_data

# .data:0xABE4 | 0x807C59DC | size: 0x2C
.obj lbl_807C59DC, global
	.string "\r\n--Qr4G823s23d---<<><><<<>--7d118e0536--\r\n"
.endobj lbl_807C59DC

# .data:0xAC10 | 0x807C5A08 | size: 0x50
.obj lbl_807C5A08, global
	.4byte 0x68747470
	.4byte 0x3A2F2F00
	.4byte 0x68747470
	.4byte 0x733A2F2F
	.4byte 0x00000000
	.4byte 0x3A2F0000
	.4byte 0x2F000000
	.4byte 0x504F5354
	.4byte 0x20000000
	.4byte 0x48454144
	.4byte 0x20000000
	.4byte 0x47455420
	.4byte 0x00000000
	.4byte 0x20485454
	.4byte 0x502F312E
	.4byte 0x310D0A00
	.4byte 0x486F7374
	.4byte 0x00000000
	.4byte 0x486F7374
	.4byte 0x3A200000
.endobj lbl_807C5A08

# .data:0xAC60 | 0x807C5A58 | size: 0x68
.obj lbl_807C5A58, global
	.4byte 0x0D0A0000
	.4byte 0x55736572
	.4byte 0x2D416765
	.4byte 0x6E740000
	.4byte 0x47616D65
	.4byte 0x53707948
	.4byte 0x5454502F
	.4byte 0x312E3000
	.4byte 0x436F6E6E
	.4byte 0x65637469
	.4byte 0x6F6E0000
	.4byte 0x4B656570
	.4byte 0x2D416C69
	.4byte 0x76650000
	.4byte 0x636C6F73
	.4byte 0x65000000
	.4byte 0x25640000
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x4C656E67
	.4byte 0x74680000
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x54797065
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C5A58

# .data:0xACC8 | 0x807C5AC0 | size: 0x10
.obj lbl_807C5AC0, global
	.string "HTTP/%d.%d %d%n"
.endobj lbl_807C5AC0

# .data:0xACD8 | 0x807C5AD0 | size: 0x60
.obj lbl_807C5AD0, global
	.4byte 0x25780000
	.4byte 0x0A0A0000
	.4byte 0x0D0A0D0A
	.4byte 0x00000000
	.4byte 0x4C6F6361
	.4byte 0x74696F6E
	.4byte 0x3A000000
	.4byte 0x68747470
	.4byte 0x3A2F2F25
	.4byte 0x733A2564
	.4byte 0x25730000
	.4byte 0x00000000
	.4byte 0x436F6E74
	.4byte 0x656E742D
	.4byte 0x4C656E67
	.4byte 0x74683A00
	.4byte 0x5472616E
	.4byte 0x73666572
	.4byte 0x2D456E63
	.4byte 0x6F64696E
	.4byte 0x673A2063
	.4byte 0x68756E6B
	.4byte 0x65640000
	.4byte 0x00000000
.endobj lbl_807C5AD0

# .data:0xAD38 | 0x807C5B30 | size: 0x8
.obj lbl_807C5B30, global
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
.endobj lbl_807C5B30

# .data:0xAD40 | 0x807C5B38 | size: 0x38
.obj lbl_807C5B38, global
	.byte 0x00, 0x61, 0x6D, 0x65, 0x53, 0x70, 0x79, 0x33
	.byte 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x72, 0x6F, 0x6A, 0x65, 0x63, 0x74, 0x41
	.byte 0x70, 0x68, 0x65, 0x78, 0x00, 0x00, 0x00, 0x00
	.byte 0x00, 0x66, 0x69, 0x6E, 0x61, 0x6C, 0x5C, 0x00
	.byte 0x00, 0x00, 0x00, 0x00
	.4byte lbl_807C5B38
	.byte 0x00, 0x00, 0x4E, 0x20, 0x00, 0x00, 0x00, 0x00
.endobj lbl_807C5B38

# .data:0xAD78 | 0x807C5B70 | size: 0x170
.obj lbl_807C5B70, global
	.4byte 0x67616D65
	.4byte 0x73746174
	.4byte 0x732E6773
	.4byte 0x2E6E696E
	.4byte 0x74656E64
	.4byte 0x6F776966
	.4byte 0x692E6E65
	.4byte 0x74000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_806F76C0
	.4byte fn_806F77F0
	.4byte fn_806F7BB0
	.4byte fn_806F7E30
	.4byte fn_806F80B0
	.4byte fn_806F8330
	.4byte fn_806F84C0
	.4byte fn_806FAEF0
	.4byte fn_806FAF80
	.4byte fn_806FB010
	.4byte fn_806FB0B0
	.4byte fn_806FB1A0
	.4byte fn_806FB290
	.4byte fn_806FB380
	.4byte fn_806FB470
	.4byte fn_806FB560
	.4byte 0x4344204B
	.4byte 0x6579206F
	.4byte 0x72206368
	.4byte 0x616C6C65
	.4byte 0x6E676520
	.4byte 0x746F6F20
	.4byte 0x6C6F6E67
	.4byte 0x00000000
	.4byte 0x25732573
	.4byte 0x00000000
	.4byte 0x2E000000
	.4byte 0x5C000000
	.4byte 0x25642573
	.4byte 0x00000000
	.4byte 0x25303878
	.4byte 0x00000000
	.4byte 0x6374696D
	.4byte 0x65000000
	.4byte 0x706C6179
	.4byte 0x65720000
	.4byte 0x6474696D
	.4byte 0x65000000
	.4byte 0x7465616D
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x0068616C
	.4byte 0x6C656E67
	.4byte 0x65000000
	.4byte 0x00657373
	.4byte 0x6B657900
	.4byte 0x67657470
	.4byte 0x64720000
	.4byte 0x6C696400
	.4byte 0x70696400
	.4byte 0x6D6F6400
	.4byte 0x6C656E67
	.4byte 0x74680000
	.4byte 0x5C646174
	.4byte 0x615C0000
	.4byte 0x5C706175
	.4byte 0x7468725C
	.4byte 0x00000000
	.4byte 0x70617574
	.4byte 0x68720000
	.4byte 0x6572726D
	.4byte 0x73670000
	.4byte 0x5C676574
	.4byte 0x70696472
	.4byte 0x5C000000
	.4byte 0x00000000
	.4byte 0x67657470
	.4byte 0x69647200
	.4byte 0x5C676574
	.4byte 0x7064725C
	.4byte 0x00000000
	.4byte 0x5C736574
	.4byte 0x7064725C
	.4byte 0x00000000
	.4byte 0x73657470
	.4byte 0x64720000
.endobj lbl_807C5B70

# .data:0xAEE8 | 0x807C5CE0 | size: 0x7
.obj lbl_807C5CE0, global
	.string "%s_t%d"
.endobj lbl_807C5CE0

# .data:0xAEEF | 0x807C5CE7 | size: 0x1
.obj gap_07_807C5CE7_data, global
.hidden gap_07_807C5CE7_data
	.byte 0x00
.endobj gap_07_807C5CE7_data

# .data:0xAEF0 | 0x807C5CE8 | size: 0x6
.obj lbl_807C5CE8, global
	.string "%s_%d"
.endobj lbl_807C5CE8

# .data:0xAEF6 | 0x807C5CEE | size: 0x2
.obj gap_07_807C5CEE_data, global
.hidden gap_07_807C5CEE_data
	.2byte 0x0000
.endobj gap_07_807C5CEE_data

# .data:0xAEF8 | 0x807C5CF0 | size: 0x10
.obj lbl_807C5CF0, global
	.4byte 0x25733A25
	.4byte 0x64000000
	.4byte 0x25730000
	.4byte 0x3A256400
.endobj lbl_807C5CF0

# .data:0xAF08 | 0x807C5D00 | size: 0x8
.obj lbl_807C5D00, global
	.4byte 0xFDFC1E66
	.4byte 0x6AB20000
.endobj lbl_807C5D00

# .data:0xAF10 | 0x807C5D08 | size: 0x4
.obj lbl_807C5D08, global
	.4byte 0xFFFFFFFF
.endobj lbl_807C5D08

# .data:0xAF14 | 0x807C5D0C | size: 0x4
.obj lbl_807C5D0C, global
	.4byte 0xFFFFFFFF
.endobj lbl_807C5D0C

# .data:0xAF18 | 0x807C5D10 | size: 0x60
.obj lbl_807C5D10, global
	.4byte 0x00000006
	.4byte 0x6E61746E
	.4byte 0x6567312E
	.4byte 0x67732E6E
	.4byte 0x696E7465
	.4byte 0x6E646F77
	.4byte 0x6966692E
	.4byte 0x6E657400
	.4byte 0x25732E25
	.4byte 0x73000000
	.4byte 0x6E61746E
	.4byte 0x6567322E
	.4byte 0x67732E6E
	.4byte 0x696E7465
	.4byte 0x6E646F77
	.4byte 0x6966692E
	.4byte 0x6E657400
	.4byte 0x6E61746E
	.4byte 0x6567332E
	.4byte 0x67732E6E
	.4byte 0x696E7465
	.4byte 0x6E646F77
	.4byte 0x6966692E
	.4byte 0x6E657400
.endobj lbl_807C5D10

# .data:0xAF78 | 0x807C5D70 | size: 0xE
.obj lbl_807C5D70, global
	.string "\\basic\\\\info\\"
.endobj lbl_807C5D70

# .data:0xAF86 | 0x807C5D7E | size: 0x2
.obj gap_07_807C5D7E_data, global
.hidden gap_07_807C5D7E_data
	.2byte 0x0000
.endobj gap_07_807C5D7E_data

# .data:0xAF88 | 0x807C5D80 | size: 0x9
.obj lbl_807C5D80, global
	.string "\\status\\"
.endobj lbl_807C5D80

# .data:0xAF91 | 0x807C5D89 | size: 0x3
.obj gap_07_807C5D89_data, global
.hidden gap_07_807C5D89_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5D89_data

# .data:0xAF94 | 0x807C5D8C | size: 0x9
.obj lbl_807C5D8C, global
	.string "splitnum"
.endobj lbl_807C5D8C

# .data:0xAF9D | 0x807C5D95 | size: 0x3
.obj gap_07_807C5D95_data, global
.hidden gap_07_807C5D95_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5D95_data

# .data:0xAFA0 | 0x807C5D98 | size: 0x8
.obj lbl_807C5D98, global
	.string "\\final\\"
.endobj lbl_807C5D98

# .data:0xAFA8 | 0x807C5DA0 | size: 0x3
.obj lbl_807C5DA0, global
	.string "%d"
.endobj lbl_807C5DA0

# .data:0xAFAB | 0x807C5DA3 | size: 0x1
.obj gap_07_807C5DA3_data, global
.hidden gap_07_807C5DA3_data
	.byte 0x00
.endobj gap_07_807C5DA3_data

# .data:0xAFAC | 0x807C5DA4 | size: 0x5
.obj lbl_807C5DA4, global
	.string "ping"
.endobj lbl_807C5DA4

# .data:0xAFB1 | 0x807C5DA9 | size: 0x7
.obj gap_07_807C5DA9_data, global
.hidden gap_07_807C5DA9_data
	.4byte 0x00000000
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5DA9_data

# .data:0xAFB8 | 0x807C5DB0 | size: 0x8
.obj lbl_807C5DB0, global
	.string "queryid"
.endobj lbl_807C5DB0

# .data:0xAFC0 | 0x807C5DB8 | size: 0x6
.obj lbl_807C5DB8, global
	.string "final"
.endobj lbl_807C5DB8

# .data:0xAFC6 | 0x807C5DBE | size: 0x2
.obj gap_07_807C5DBE_data, global
.hidden gap_07_807C5DBE_data
	.2byte 0x0000
.endobj gap_07_807C5DBE_data

# .data:0xAFC8 | 0x807C5DC0 | size: 0x4
.obj lbl_807C5DC0, global
	.4byte 0x00000000
.endobj lbl_807C5DC0

# .data:0xAFCC | 0x807C5DC4 | size: 0x5
.obj lbl_807C5DC4, global
	.string "%s%d"
.endobj lbl_807C5DC4

# .data:0xAFD1 | 0x807C5DC9 | size: 0x3
.obj gap_07_807C5DC9_data, global
.hidden gap_07_807C5DC9_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5DC9_data

# .data:0xAFD4 | 0x807C5DCC | size: 0x9
.obj lbl_807C5DCC, global
	.string "splitnum"
.endobj lbl_807C5DCC

# .data:0xAFDD | 0x807C5DD5 | size: 0x3
.obj gap_07_807C5DD5_data, global
.hidden gap_07_807C5DD5_data
	.byte 0x00, 0x00, 0x00
.endobj gap_07_807C5DD5_data

# .data:0xAFE0 | 0x807C5DD8 | size: 0x4
.obj lbl_807C5DD8, global
	.string "\\%s"
.endobj lbl_807C5DD8

# .data:0xAFE4 | 0x807C5DDC | size: 0x4
.obj gap_07_807C5DDC_data, global
.hidden gap_07_807C5DDC_data
	.4byte 0x00000000
.endobj gap_07_807C5DDC_data

# .data:0xAFE8 | 0x807C5DE0 | size: 0x4
.obj lbl_807C5DE0, global
	.4byte 0x00000000
.endobj lbl_807C5DE0

# .data:0xAFEC | 0x807C5DE4 | size: 0xE
.obj lbl_807C5DE4, global
	.string "Query Error: "
.endobj lbl_807C5DE4

# .data:0xAFFA | 0x807C5DF2 | size: 0x2
.obj gap_07_807C5DF2_data, global
.hidden gap_07_807C5DF2_data
	.2byte 0x0000
.endobj gap_07_807C5DF2_data

# .data:0xAFFC | 0x807C5DF4 | size: 0x4
.obj lbl_807C5DF4, global
	.4byte lbl_807C5DE4
.endobj lbl_807C5DF4

# .data:0xB000 | 0x807C5DF8 | size: 0x1C
.obj lbl_807C5DF8, global
	.string "%s.ms%d.gs.nintendowifi.net"
.endobj lbl_807C5DF8

# .data:0xB01C | 0x807C5E14 | size: 0xB
.obj lbl_807C5E14, global
	.string "\\echo\\test"
.endobj lbl_807C5E14

# .data:0xB027 | 0x807C5E1F | size: 0x1
.obj gap_07_807C5E1F_data, global
.hidden gap_07_807C5E1F_data
	.byte 0x00
.endobj gap_07_807C5E1F_data

# .data:0xB028 | 0x807C5E20 | size: 0x8
.obj lbl_807C5E20, global
	.4byte 0xFFFFFFFF
	.4byte 0x00000000
.endobj lbl_807C5E20

# .data:0xB030 | 0x807C5E28 | size: 0x28
.obj lbl_807C5E28, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80709830
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_807C5E28

# .data:0xB058 | 0x807C5E50 | size: 0x38
.obj lbl_807C5E50, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070B050
	.4byte fn_8070B010
	.4byte fn_8070A9F0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80709950
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070AC80
	.4byte fn_8070A5E0
	.4byte fn_8070A620
.endobj lbl_807C5E50

# .data:0xB090 | 0x807C5E88 | size: 0x10
.obj lbl_807C5E88, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070B470
	.4byte fn_8070B2D0
.endobj lbl_807C5E88

# .data:0xB0A0 | 0x807C5E98 | size: 0x10
.obj lbl_807C5E98, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070B430
	.4byte fn_8070B230
.endobj lbl_807C5E98

# .data:0xB0B0 | 0x807C5EA8 | size: 0x10
.obj lbl_807C5EA8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070B3F0
	.4byte fn_8070B190
.endobj lbl_807C5EA8

# .data:0xB0C0 | 0x807C5EB8 | size: 0x10
.obj lbl_807C5EB8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070B3B0
	.4byte fn_8070B100
.endobj lbl_807C5EB8

# .data:0xB0D0 | 0x807C5EC8 | size: 0x10
.obj lbl_807C5EC8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070B370
	.4byte fn_8070B070
.endobj lbl_807C5EC8

# .data:0xB0E0 | 0x807C5ED8 | size: 0x28
.obj lbl_807C5ED8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8004668C
	.4byte fn_8070DCD0
	.4byte fn_8070DE00
	.4byte fn_8070E080
	.4byte fn_8070E120
	.4byte fn_8070DCB0
	.4byte fn_8070DCC0
	.4byte 0x00000000
.endobj lbl_807C5ED8

# .data:0xB108 | 0x807C5F00 | size: 0x28
.obj lbl_807C5F00, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80046708
	.4byte fn_8070E240
	.4byte fn_8070E370
	.4byte fn_8070E650
	.4byte fn_8070E6F0
	.4byte fn_8070E220
	.4byte fn_8070E230
	.4byte 0x00000000
.endobj lbl_807C5F00

# .data:0xB130 | 0x807C5F28 | size: 0x28
.obj lbl_807C5F28, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80046610
	.4byte fn_8070E8B0
	.4byte fn_8070E9E0
	.4byte fn_8070ED80
	.4byte fn_8070EE20
	.4byte fn_8070E890
	.4byte fn_8070E8A0
	.4byte 0x00000000
.endobj lbl_807C5F28

# .data:0xB158 | 0x807C5F50 | size: 0x27
.obj lbl_807C5F50, global
	.string "#%08x[%d]: printvar %sVAR_%d(%d) = %d\n"
.endobj lbl_807C5F50

# .data:0xB17F | 0x807C5F77 | size: 0x1
.obj gap_07_807C5F77_data, global
.hidden gap_07_807C5F77_data
	.byte 0x00
.endobj gap_07_807C5F77_data

# .data:0xB180 | 0x807C5F78 | size: 0x1F4
.obj jumptable_807C5F78, global
	.4byte fn_8070FAD0+0x88
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x4F8
	.4byte fn_8070FAD0+0x538
	.4byte fn_8070FAD0+0x548
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x80
	.4byte fn_8070FAD0+0x30C
	.4byte fn_8070FAD0+0x380
	.4byte fn_8070FAD0+0x104
	.4byte fn_8070FAD0+0x400
	.4byte fn_8070FAD0+0x408
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x17C
	.4byte fn_8070FAD0+0xB0
	.4byte fn_8070FAD0+0x10C
	.4byte fn_8070FAD0+0x114
	.4byte fn_8070FAD0+0x11C
	.4byte fn_8070FAD0+0x174
	.4byte fn_8070FAD0+0x23C
	.4byte fn_8070FAD0+0x244
	.4byte fn_8070FAD0+0x358
	.4byte fn_8070FAD0+0x3AC
	.4byte fn_8070FAD0+0x260
	.4byte fn_8070FAD0+0x284
	.4byte fn_8070FAD0+0x2A8
	.4byte fn_8070FAD0+0x2B0
	.4byte fn_8070FAD0+0x3C4
	.4byte fn_8070FAD0+0x258
	.4byte fn_8070FAD0+0x2EC
	.4byte fn_8070FAD0+0x2F4
	.4byte fn_8070FAD0+0x2FC
	.4byte fn_8070FAD0+0x304
	.4byte fn_8070FAD0+0x5D8
	.4byte fn_8070FAD0+0xFC
	.4byte fn_8070FAD0+0x44C
	.4byte fn_8070FAD0+0x1E4
	.4byte fn_8070FAD0+0x3D8
	.4byte fn_8070FAD0+0x42C
	.4byte fn_8070FAD0+0x434
	.4byte fn_8070FAD0+0x444
	.4byte fn_8070FAD0+0x1D8
	.4byte fn_8070FAD0+0xA0
	.4byte fn_8070FAD0+0x43C
	.4byte fn_8070FAD0+0x334
	.4byte fn_8070FAD0+0x2B8
	.4byte fn_8070FAD0+0x60
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x2C8
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x94C
	.4byte fn_8070FAD0+0x318
	.4byte fn_8070FAD0+0x610
	.4byte fn_8070FAD0+0x588
.endobj jumptable_807C5F78

# .data:0xB374 | 0x807C616C | size: 0x4
.obj gap_07_807C616C_data, global
.hidden gap_07_807C616C_data
	.4byte 0x00000000
.endobj gap_07_807C616C_data

# .data:0xB378 | 0x807C6170 | size: 0x10
.obj lbl_807C6170, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8070FAD0
	.4byte fn_80710440
.endobj lbl_807C6170

# .data:0xB388 | 0x807C6180 | size: 0x10
.obj lbl_807C6180, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80710670
	.4byte fn_80710650
.endobj lbl_807C6180

# .data:0xB398 | 0x807C6190 | size: 0x18
.obj lbl_807C6190, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8059EAE0
	.4byte fn_807106D0
	.4byte fn_80710740
	.4byte fn_807107D0
.endobj lbl_807C6190

# .data:0xB3B0 | 0x807C61A8 | size: 0x10
.obj lbl_807C61A8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80710810
	.4byte fn_80710910
.endobj lbl_807C61A8

# .data:0xB3C0 | 0x807C61B8 | size: 0x68
.obj lbl_807C61B8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80711910
	.4byte fn_80711EE0
	.4byte fn_80711F50
	.4byte fn_807120A0
	.4byte fn_8070F3F0
	.4byte fn_8070F3E0
	.4byte fn_8070F3D0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80712C70
	.4byte fn_8070F410
	.4byte fn_8070F400
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80712C80
	.4byte fn_8070F430
	.4byte fn_8070F3C0
	.4byte fn_8070F420
	.4byte fn_807122C0
	.4byte fn_8070F3B0
	.4byte fn_80712C60
	.4byte fn_8070F390
	.4byte fn_8070F3A0
	.4byte 0x00000000
.endobj lbl_807C61B8

# .data:0xB428 | 0x807C6220 | size: 0x38
.obj lbl_807C6220, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80713470
	.4byte fn_80713120
	.4byte fn_80713040
	.4byte fn_80713460
	.4byte fn_807132B0
	.4byte fn_807132D0
	.4byte fn_80712D90
	.4byte fn_80713440
	.4byte fn_80713450
	.4byte fn_807131C0
	.4byte fn_8070A5E0
	.4byte fn_8070A620
.endobj lbl_807C6220

# .data:0xB460 | 0x807C6258 | size: 0x18
.obj lbl_807C6258, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80712D30
	.4byte fn_807132E0
	.4byte fn_807133E0
	.4byte fn_80713410
.endobj lbl_807C6258

# .data:0xB478 | 0x807C6270 | size: 0x10
.obj lbl_807C6270, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80713580
	.4byte 0x00000000
.endobj lbl_807C6270

# .data:0xB488 | 0x807C6280 | size: 0x30
.obj lbl_807C6280, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_807149C0
	.4byte fn_80716220
	.4byte fn_80716260
	.4byte fn_80714AA0
	.4byte fn_80716200
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80714CF0
	.4byte fn_80714CE0
	.4byte fn_80714CA0
.endobj lbl_807C6280

# .data:0xB4B8 | 0x807C62B0 | size: 0x20
.obj lbl_807C62B0, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_800CADE4
	.4byte fn_807159C0
	.4byte fn_80715A30
	.4byte fn_80715B10
	.4byte fn_80715800
	.4byte 0x00000000
.endobj lbl_807C62B0

# .data:0xB4D8 | 0x807C62D0 | size: 0x38
.obj lbl_807C62D0, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80046784
	.4byte fn_80715EA0
	.4byte fn_80715EF0
	.4byte fn_80715F30
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80716060
	.4byte fn_80716050
	.4byte fn_80716040
	.4byte fn_80715F70
	.4byte fn_80715FE0
	.4byte 0x00000000
.endobj lbl_807C62D0

# .data:0xB510 | 0x807C6308 | size: 0x20
.obj lbl_807C6308, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80716130
	.4byte fn_80716220
	.4byte fn_80716260
	.4byte fn_807161E0
	.4byte fn_80716200
	.4byte 0x00000000
.endobj lbl_807C6308

# .data:0xB530 | 0x807C6328 | size: 0x10
.obj lbl_807C6328, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_807176D0
	.4byte fn_80717760
.endobj lbl_807C6328

# .data:0xB540 | 0x807C6338 | size: 0x46
.obj lbl_807C6338, global
	.string "<< NW4R    - SND \tfinal   build: Jun  9 2009 03:24:56 (0x4302_145) >>"
.endobj lbl_807C6338

# .data:0xB586 | 0x807C637E | size: 0x2
.obj gap_07_807C637E_data, global
.hidden gap_07_807C637E_data
	.2byte 0x0000
.endobj gap_07_807C637E_data

# .data:0xB588 | 0x807C6380 | size: 0x48
.obj lbl_807C6380, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80719C50
	.4byte fn_8071A0E0
	.4byte fn_8071A440
	.4byte fn_8071A610
	.4byte fn_8071C890
	.4byte fn_8071C880
	.4byte fn_8071C870
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8071C8D0
	.4byte fn_8071C8C0
	.4byte fn_8071C8B0
	.4byte fn_8071C8A0
	.4byte fn_8071C840
	.4byte fn_8071C850
	.4byte fn_8071C860
.endobj lbl_807C6380

# .data:0xB5D0 | 0x807C63C8 | size: 0x18
.obj lbl_807C63C8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80719BF0
	.4byte fn_8071C630
	.4byte fn_8071C700
	.4byte fn_8071C790
.endobj lbl_807C63C8

# .data:0xB5E8 | 0x807C63E0 | size: 0x18
.obj lbl_807C63E0, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80719B90
	.4byte fn_8071C4D0
	.4byte fn_8071C520
	.4byte fn_8071C530
.endobj lbl_807C63E0

# .data:0xB600 | 0x807C63F8 | size: 0x38
.obj lbl_807C63F8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8071D0C0
	.4byte fn_8071CF10
	.4byte fn_8071CE70
	.4byte fn_8071D0B0
	.4byte fn_8071D060
	.4byte fn_8071D080
	.4byte fn_8071C9A0
	.4byte fn_8071D090
	.4byte fn_8071D0A0
	.4byte fn_8071CF70
	.4byte fn_8071CBC0
	.4byte fn_8071CC40
.endobj lbl_807C63F8

# .data:0xB638 | 0x807C6430 | size: 0x24
.obj jumptable_807C6430, global
	.4byte fn_8071F7C0+0x258
	.4byte fn_8071F7C0+0x260
	.4byte fn_8071F7C0+0x270
	.4byte fn_8071F7C0+0x284
	.4byte fn_8071F7C0+0x290
	.4byte fn_8071F7C0+0x2A0
	.4byte fn_8071F7C0+0x2B4
	.4byte fn_8071F7C0+0x2C0
	.4byte fn_8071F7C0+0x2D4
.endobj jumptable_807C6430

# .data:0xB65C | 0x807C6454 | size: 0x14
.obj lbl_807C6454, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8071DD10
	.4byte fn_807204C0
	.4byte fn_80720370
.endobj lbl_807C6454

# .data:0xB670 | 0x807C6468 | size: 0x10
.obj lbl_807C6468, global
	.4byte lbl_8076E34C
	.4byte lbl_8076E750
	.4byte lbl_8076EB54
	.4byte 0x00000000
.endobj lbl_807C6468

# .data:0xB680 | 0x807C6478 | size: 0x38
.obj lbl_807C6478, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80721870
	.4byte fn_807216C0
	.4byte fn_80721620
	.4byte fn_80721860
	.4byte fn_80721810
	.4byte fn_80721830
	.4byte fn_80709950
	.4byte fn_80721840
	.4byte fn_80721850
	.4byte fn_80721720
	.4byte fn_8070A5E0
	.4byte fn_8070A620
.endobj lbl_807C6478

# .data:0xB6B8 | 0x807C64B0 | size: 0x60
.obj lbl_807C64B0, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80721540
	.4byte fn_80722060
	.4byte fn_807220D0
	.4byte fn_80722200
	.4byte fn_80722ED0
	.4byte fn_80722EB0
	.4byte fn_80722E90
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80722F10
	.4byte fn_80722F00
	.4byte fn_80722EF0
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80722F40
	.4byte fn_80722F30
	.4byte fn_8070F3C0
	.4byte fn_80722F20
	.4byte fn_807222E0
	.4byte fn_80722E80
	.4byte fn_80722E60
	.4byte fn_80722E70
.endobj lbl_807C64B0

# .data:0xB718 | 0x807C6510 | size: 0x70
.obj lbl_807C6510, global
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x2D2D2D2D
	.4byte 0x20545241
	.4byte 0x43450A00
	.4byte 0x41646472
	.4byte 0x6573733A
	.4byte 0x20202042
	.4byte 0x61636B43
	.4byte 0x6861696E
	.4byte 0x2020204C
	.4byte 0x52207361
	.4byte 0x76650A00
	.4byte 0x25303858
	.4byte 0x3A202025
	.4byte 0x30385820
	.4byte 0x20202025
	.4byte 0x30385820
	.4byte 0x00000000
	.4byte 0x25733A25
	.4byte 0x64205061
	.4byte 0x6E69633A
	.4byte 0x00000000
.endobj lbl_807C6510

# .data:0xB788 | 0x807C6580 | size: 0xF
.obj lbl_807C6580, global
	.string "%s:%d Warning:"
.endobj lbl_807C6580

# .data:0xB797 | 0x807C658F | size: 0x1
.obj gap_07_807C658F_data, global
.hidden gap_07_807C658F_data
	.byte 0x00
.endobj gap_07_807C658F_data

# .data:0xB798 | 0x807C6590 | size: 0x14
.obj lbl_807C6590, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_807257C0
	.4byte fn_80725800
	.4byte fn_80725930
.endobj lbl_807C6590

# .data:0xB7AC | 0x807C65A4 | size: 0x14
.obj lbl_807C65A4, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_80725310
	.4byte fn_80725350
	.4byte fn_80725480
.endobj lbl_807C65A4

# .data:0xB7C0 | 0x807C65B8 | size: 0x68
.obj lbl_807C65B8, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_807263C0
	.4byte fn_80725FF0
	.4byte fn_80726070
	.4byte fn_807260C0
	.4byte fn_80726150
	.4byte fn_80725C60
	.4byte fn_80725C70
	.4byte fn_8059E0E0
	.4byte fn_80726390
	.4byte fn_8059E0D0
	.4byte fn_8059E0C8
	.4byte fn_8059E0B8
	.4byte fn_8059E0B0
	.4byte fn_8059E0A8
	.4byte fn_807263A0
	.4byte fn_80726310
	.4byte fn_80726320
	.4byte fn_80726330
	.4byte fn_8059E0D8
	.4byte fn_8059E0C0
	.4byte fn_807263B0
	.4byte fn_80726250
	.4byte fn_80726290
	.4byte 0x00000000
.endobj lbl_807C65B8

# .data:0xB828 | 0x807C6620 | size: 0x64
.obj lbl_807C6620, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte fn_8059E198
	.4byte fn_80726500
	.4byte fn_80726560
	.4byte fn_807265A0
	.4byte fn_8059E144
	.4byte fn_80725C60
	.4byte fn_80725C70
	.4byte fn_8059E0E0
	.4byte fn_8059E0E8
	.4byte fn_8059E0D0
	.4byte fn_8059E0C8
	.4byte fn_8059E0B8
	.4byte fn_8059E0B0
	.4byte fn_8059E0A8
	.4byte fn_807263A0
	.4byte fn_80726310
	.4byte fn_80726760
	.4byte fn_80726330
	.4byte fn_8059E0D8
	.4byte fn_8059E0C0
	.4byte fn_807263B0
	.4byte fn_80726680
	.4byte fn_8059E0F0
.endobj lbl_807C6620
