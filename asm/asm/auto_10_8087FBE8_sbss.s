.include "macros.inc"
.file "auto_10_8087FBE8_sbss"

# 0x8087FBE8..0x8087FC58 | size: 0x70
.section .sbss, "wa", @nobits
.balign 8

# .sbss:0x0 | 0x8087FBE8 | size: 0x8
.obj lbl_8087FBE8, global
	.skip 0x8
.endobj lbl_8087FBE8

# .sbss:0x8 | 0x8087FBF0 | size: 0x4
.obj __OSArenaHi_8087FBF0, global
	.skip 0x4
.endobj __OSArenaHi_8087FBF0

# .sbss:0xC | 0x8087FBF4 | size: 0x4
.obj s_mem2ArenaHi_8087FBF4, global
	.skip 0x4
.endobj s_mem2ArenaHi_8087FBF4

# .sbss:0x10 | 0x8087FBF8 | size: 0x4
.obj lbl_8087FBF8, global
	.skip 0x4
.endobj lbl_8087FBF8

# .sbss:0x14 | 0x8087FBFC | size: 0x4
.obj lbl_8087FBFC, global
	.skip 0x4
.endobj lbl_8087FBFC

# .sbss:0x18 | 0x8087FC00 | size: 0x4
.obj lbl_8087FC00, global
	.skip 0x4
.endobj lbl_8087FC00

# .sbss:0x1C | 0x8087FC04 | size: 0x4
.obj __OSInReboot, global
	.skip 0x4
.endobj __OSInReboot

# .sbss:0x20 | 0x8087FC08 | size: 0x8
.obj lbl_8087FC08, global
	.skip 0x8
.endobj lbl_8087FC08

# .sbss:0x28 | 0x8087FC10 | size: 0x4
.obj lbl_8087FC10, global
	.skip 0x4
.endobj lbl_8087FC10

# .sbss:0x2C | 0x8087FC14 | size: 0x4
.obj lbl_8087FC14, global
	.skip 0x4
.endobj lbl_8087FC14

# .sbss:0x30 | 0x8087FC18 | size: 0x4
.obj lbl_8087FC18, global
	.skip 0x4
.endobj lbl_8087FC18

# .sbss:0x34 | 0x8087FC1C | size: 0x4
.obj lbl_8087FC1C, global
	.skip 0x4
.endobj lbl_8087FC1C

# .sbss:0x38 | 0x8087FC20 | size: 0x4
.obj __OSLastInterruptSrr0, global
	.skip 0x4
.endobj __OSLastInterruptSrr0

# .sbss:0x3C | 0x8087FC24 | size: 0x2
.obj __OSLastInterrupt, global
	.skip 0x2
.endobj __OSLastInterrupt

# .sbss:0x3E | 0x8087FC26 | size: 0x2
.obj gap_10_8087FC26_sbss, global
.hidden gap_10_8087FC26_sbss
	.skip 0x2
.endobj gap_10_8087FC26_sbss

# .sbss:0x40 | 0x8087FC28 | size: 0x8
.obj __OSLastInterruptTime, global
	.skip 0x8
.endobj __OSLastInterruptTime

# .sbss:0x48 | 0x8087FC30 | size: 0x4
.obj InterruptHandlerTable_8087FC30, global
	.skip 0x4
.endobj InterruptHandlerTable_8087FC30

# .sbss:0x4C | 0x8087FC34 | size: 0x4
.obj gap_10_8087FC34_sbss, global
.hidden gap_10_8087FC34_sbss
	.skip 0x4
.endobj gap_10_8087FC34_sbss

# .sbss:0x50 | 0x8087FC38 | size: 0x4
# __OSInitMemoryProtection()::initialized
.obj "@LOCAL@__OSInitMemoryProtection__Fv@initialized", weak
	.skip 0x4
.endobj "@LOCAL@__OSInitMemoryProtection__Fv@initialized"

# .sbss:0x54 | 0x8087FC3C | size: 0x4
.obj gap_10_8087FC3C_sbss, global
.hidden gap_10_8087FC3C_sbss
	.skip 0x4
.endobj gap_10_8087FC3C_sbss

# .sbss:0x58 | 0x8087FC40 | size: 0x4
.obj lbl_8087FC40, global
	.skip 0x4
.endobj lbl_8087FC40

# .sbss:0x5C | 0x8087FC44 | size: 0x4
.obj lbl_8087FC44, global
	.skip 0x4
.endobj lbl_8087FC44

# .sbss:0x60 | 0x8087FC48 | size: 0x4
.obj lbl_8087FC48, global
	.skip 0x4
.endobj lbl_8087FC48

# .sbss:0x64 | 0x8087FC4C | size: 0x4
.obj lbl_8087FC4C, global
	.skip 0x4
.endobj lbl_8087FC4C

# .sbss:0x68 | 0x8087FC50 | size: 0x8
.obj ShutdownFunctionQueue_8087FC50, global
	.skip 0x8
.endobj ShutdownFunctionQueue_8087FC50
