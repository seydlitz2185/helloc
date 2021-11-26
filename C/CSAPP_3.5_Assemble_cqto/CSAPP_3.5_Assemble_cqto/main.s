	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 0
	.globl	_remdiv                         ; -- Begin function remdiv
	.p2align	2
_remdiv:                                ; @remdiv
	.cfi_startproc
; %bb.0:
	sdiv	x8, x0, x1
	msub	x9, x8, x1, x0
	str	x8, [x2]
	str	x9, [x3]
	ret
	.cfi_endproc
                                        ; -- End function
.subsections_via_symbols
