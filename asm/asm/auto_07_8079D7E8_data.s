.include "macros.inc"
.file "auto_07_8079D7E8_data"

# 0x8079D7E8..0x8079DA60 | size: 0x278
.data
.balign 8

# .data:0x0 | 0x8079D7E8 | size: 0x10
.obj ShutdownFunctionInfo_8079D7E8, global
	.4byte fn_805F2980
	.4byte 0x0000007F
	.4byte 0x00000000
	.4byte 0x00000000
.endobj ShutdownFunctionInfo_8079D7E8

# .data:0x10 | 0x8079D7F8 | size: 0xA
.obj "@2083_8079D7F8", global
	.string "OSReset.c"
.endobj "@2083_8079D7F8"

# .data:0x1A | 0x8079D802 | size: 0x2
.obj gap_07_8079D802_data, global
.hidden gap_07_8079D802_data
	.2byte 0x0000
.endobj gap_07_8079D802_data

# .data:0x1C | 0x8079D804 | size: 0x60
.obj lbl_8079D804, global
	.4byte 0x5F5F4F53
	.4byte 0x486F7452
	.4byte 0x65736574
	.4byte 0x28293A20
	.4byte 0x46616C69
	.4byte 0x65642074
	.4byte 0x6F207265
	.4byte 0x73657420
	.4byte 0x73797374
	.4byte 0x656D2E0A
	.4byte 0x00000000
	.4byte 0x5F5F4F53
	.4byte 0x52657475
	.4byte 0x726E546F
	.4byte 0x4D656E75
	.4byte 0x28293A20
	.4byte 0x46616C69
	.4byte 0x65642074
	.4byte 0x6F20626F
	.4byte 0x6F742073
	.4byte 0x79737465
	.4byte 0x6D206D65
	.4byte 0x6E752E0A
	.4byte 0x00000000
.endobj lbl_8079D804

# .data:0x7C | 0x8079D864 | size: 0x2F
.obj "@2131_8079D864", global
	.string "OSReturnToMenu(): Falied to boot system menu.\n"
.endobj "@2131_8079D864"

# .data:0xAB | 0x8079D893 | size: 0x1
.obj gap_07_8079D893_data, global
.hidden gap_07_8079D893_data
	.byte 0x00
.endobj gap_07_8079D893_data

# .data:0xAC | 0x8079D894 | size: 0x150
.obj lbl_8079D894, global
	.4byte 0x4F535265
	.4byte 0x7475726E
	.4byte 0x546F4461
	.4byte 0x74614D61
	.4byte 0x6E616765
	.4byte 0x7228293A
	.4byte 0x2046616C
	.4byte 0x69656420
	.4byte 0x746F2062
	.4byte 0x6F6F7420
	.4byte 0x73797374
	.4byte 0x656D206D
	.4byte 0x656E752E
	.4byte 0x0A000000
	.4byte 0x43616C65
	.4byte 0x6E646172
	.4byte 0x2F43616C
	.4byte 0x656E6461
	.4byte 0x725F696E
	.4byte 0x6465782E
	.4byte 0x68746D6C
	.4byte 0x00000000
	.4byte 0x44697370
	.4byte 0x6C61792F
	.4byte 0x44697370
	.4byte 0x6C61795F
	.4byte 0x696E6465
	.4byte 0x782E6874
	.4byte 0x6D6C0000
	.4byte 0x536F756E
	.4byte 0x642F536F
	.4byte 0x756E645F
	.4byte 0x696E6465
	.4byte 0x782E6874
	.4byte 0x6D6C0000
	.4byte 0x50617265
	.4byte 0x6E74616C
	.4byte 0x5F436F6E
	.4byte 0x74726F6C
	.4byte 0x2F506172
	.4byte 0x656E7461
	.4byte 0x6C5F436F
	.4byte 0x6E74726F
	.4byte 0x6C5F696E
	.4byte 0x6465782E
	.4byte 0x68746D6C
	.4byte 0x00000000
	.4byte 0x496E7465
	.4byte 0x726E6574
	.4byte 0x2F496E74
	.4byte 0x65726E65
	.4byte 0x745F696E
	.4byte 0x6465782E
	.4byte 0x68746D6C
	.4byte 0x00000000
	.4byte 0x57696943
	.4byte 0x6F6E6E65
	.4byte 0x63743234
	.4byte 0x2F576969
	.4byte 0x636F6E6E
	.4byte 0x65637432
	.4byte 0x345F696E
	.4byte 0x6465782E
	.4byte 0x68746D6C
	.4byte 0x00000000
	.4byte 0x55706461
	.4byte 0x74652F55
	.4byte 0x70646174
	.4byte 0x655F696E
	.4byte 0x6465782E
	.4byte 0x68746D6C
	.4byte 0x00000000
	.4byte 0x4F535265
	.4byte 0x7475726E
	.4byte 0x546F5365
	.4byte 0x7474696E
	.4byte 0x6728293A
	.4byte 0x20596F75
	.4byte 0x2063616E
	.4byte 0x27742073
	.4byte 0x70656369
	.4byte 0x66792025
	.4byte 0x642E2020
	.4byte 0x0A000000
.endobj lbl_8079D894

# .data:0x1FC | 0x8079D9E4 | size: 0x3B
.obj "@2163_8079D9E4", global
	.string "OSResetSystem() is obsoleted. It doesn't work any longer.\n"
.endobj "@2163_8079D9E4"

# .data:0x237 | 0x8079DA1F | size: 0x41
.obj lbl_8079DA1F, global
	.4byte 0x004F5353
	.4byte 0x6574426F
	.4byte 0x6F74446F
	.4byte 0x6C282920
	.4byte 0x6973206F
	.4byte 0x62736F6C
	.4byte 0x65746564
	.4byte 0x2E204974
	.4byte 0x20646F65
	.4byte 0x736E2774
	.4byte 0x20776F72
	.4byte 0x6B20616E
	.4byte 0x79206C6F
	.4byte 0x6E676572
	.4byte 0x2E0A0000
	.4byte 0x00000000
	.byte 0x00
.endobj lbl_8079DA1F
