	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 1
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
Lloh0:
	adrp	x8, ___stack_chk_guard@GOTPAGE
Lloh1:
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
Lloh2:
	ldr	x8, [x8]
	stur	x8, [x29, #-8]
Lloh3:
	adrp	x8, l___const.main.a@PAGE
Lloh4:
	add	x8, x8, l___const.main.a@PAGEOFF
	ldp	q0, q1, [x8]
	stp	q0, q1, [sp]
	ldr	x8, [x8, #32]
	str	x8, [sp, #32]
	mov	x0, sp
	mov	w1, #10
	bl	_sort_and_divide
	mov	x0, sp
	bl	_show_array
	ldur	x8, [x29, #-8]
Lloh5:
	adrp	x9, ___stack_chk_guard@GOTPAGE
Lloh6:
	ldr	x9, [x9, ___stack_chk_guard@GOTPAGEOFF]
Lloh7:
	ldr	x9, [x9]
	cmp	x9, x8
	b.ne	LBB0_2
; %bb.1:
	mov	w0, #0
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
LBB0_2:
	bl	___stack_chk_fail
	.loh AdrpLdrGotLdr	Lloh5, Lloh6, Lloh7
	.loh AdrpAdd	Lloh3, Lloh4
	.loh AdrpLdrGotLdr	Lloh0, Lloh1, Lloh2
	.cfi_endproc
                                        ; -- End function
	.globl	_sort_and_divide                ; -- Begin function sort_and_divide
	.p2align	2
_sort_and_divide:                       ; @sort_and_divide
	.cfi_startproc
; %bb.0:
	stp	x26, x25, [sp, #-80]!           ; 16-byte Folded Spill
	stp	x24, x23, [sp, #16]             ; 16-byte Folded Spill
	stp	x22, x21, [sp, #32]             ; 16-byte Folded Spill
	stp	x20, x19, [sp, #48]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #64]             ; 16-byte Folded Spill
	add	x29, sp, #64                    ; =64
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	.cfi_offset w21, -40
	.cfi_offset w22, -48
	.cfi_offset w23, -56
	.cfi_offset w24, -64
	.cfi_offset w25, -72
	.cfi_offset w26, -80
Lloh8:
	adrp	x8, ___stack_chk_guard@GOTPAGE
Lloh9:
	ldr	x8, [x8, ___stack_chk_guard@GOTPAGEOFF]
Lloh10:
	ldr	x8, [x8]
	stur	x8, [x29, #-72]
	cmp	w1, #2                          ; =2
	b.lt	LBB1_4
; %bb.1:
	mov	x19, x1
	mov	x20, x0
	mov	x25, sp
	cmp	w1, #0                          ; =0
	cinc	w8, w1, lt
	asr	w21, w8, #1
	lsl	x9, x21, #2
	add	x8, x9, #15                     ; =15
	and	x8, x8, #0x7fffffff0
Lloh11:
	adrp	x16, ___chkstk_darwin@GOTPAGE
Lloh12:
	ldr	x16, [x16, ___chkstk_darwin@GOTPAGEOFF]
	blr	x16
	mov	x9, sp
	sub	x22, x9, x8
	mov	sp, x22
	sub	w23, w1, w21
	lsl	x9, x23, #2
	add	x8, x9, #15                     ; =15
	and	x8, x8, #0x7fffffff0
Lloh13:
	adrp	x16, ___chkstk_darwin@GOTPAGE
Lloh14:
	ldr	x16, [x16, ___chkstk_darwin@GOTPAGEOFF]
	blr	x16
	mov	x9, sp
	sub	x24, x9, x8
	mov	sp, x24
	sub	w8, w21, #1                     ; =1
	lsl	x8, x8, #2
	add	x2, x8, #4                      ; =4
	mov	x0, x22
	mov	x1, x20
	bl	_memcpy
	cmp	w23, #1                         ; =1
	b.lt	LBB1_3
; %bb.2:
	add	x1, x20, w21, sxtw #2
	mvn	w8, w21
	add	w8, w8, w19
	lsl	x8, x8, #2
	add	x2, x8, #4                      ; =4
	mov	x0, x24
	bl	_memcpy
LBB1_3:
	mov	x0, x22
	mov	x1, x21
	bl	_sort_and_divide
	mov	x0, x24
	mov	x1, x23
	bl	_sort_and_divide
	mov	x0, x20
	mov	x1, x22
	mov	x2, x24
	mov	x3, x19
	bl	_merge
	mov	sp, x25
LBB1_4:
	ldur	x8, [x29, #-72]
Lloh15:
	adrp	x9, ___stack_chk_guard@GOTPAGE
Lloh16:
	ldr	x9, [x9, ___stack_chk_guard@GOTPAGEOFF]
Lloh17:
	ldr	x9, [x9]
	cmp	x9, x8
	b.ne	LBB1_6
; %bb.5:
	sub	sp, x29, #64                    ; =64
	ldp	x29, x30, [sp, #64]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #48]             ; 16-byte Folded Reload
	ldp	x22, x21, [sp, #32]             ; 16-byte Folded Reload
	ldp	x24, x23, [sp, #16]             ; 16-byte Folded Reload
	ldp	x26, x25, [sp], #80             ; 16-byte Folded Reload
	ret
LBB1_6:
	bl	___stack_chk_fail
	.loh AdrpLdrGotLdr	Lloh8, Lloh9, Lloh10
	.loh AdrpLdrGot	Lloh13, Lloh14
	.loh AdrpLdrGot	Lloh11, Lloh12
	.loh AdrpLdrGotLdr	Lloh15, Lloh16, Lloh17
	.cfi_endproc
                                        ; -- End function
	.globl	_show_array                     ; -- Begin function show_array
	.p2align	2
_show_array:                            ; @show_array
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x20, x19, [sp, #16]             ; 16-byte Folded Spill
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	.cfi_offset w19, -24
	.cfi_offset w20, -32
	ldr	w8, [x0]
	cbz	w8, LBB2_3
; %bb.1:
	add	x20, x0, #4                     ; =4
Lloh18:
	adrp	x19, l_.str@PAGE
Lloh19:
	add	x19, x19, l_.str@PAGEOFF
LBB2_2:                                 ; =>This Inner Loop Header: Depth=1
	str	x8, [sp]
	mov	x0, x19
	bl	_printf
	ldr	w8, [x20], #4
	cbnz	w8, LBB2_2
LBB2_3:
	mov	w0, #10
	bl	_putchar
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	ldp	x20, x19, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.loh AdrpAdd	Lloh18, Lloh19
	.cfi_endproc
                                        ; -- End function
	.globl	_merge                          ; -- Begin function merge
	.p2align	2
_merge:                                 ; @merge
	.cfi_startproc
; %bb.0:
	cmp	w3, #0                          ; =0
	cinc	w8, w3, lt
	asr	w10, w8, #1
	sub	w8, w3, w10
	cmp	w8, #1                          ; =1
	ccmp	w3, #2, #8, ge
	b.ge	LBB3_2
; %bb.1:
	mov	w11, #0
	mov	w9, #0
	b	LBB3_8
LBB3_2:
	mov	w9, #0
	mov	w11, #0
LBB3_3:                                 ; =>This Inner Loop Header: Depth=1
	ldr	w12, [x1]
	ldr	w13, [x2]
	cmp	w12, w13
	b.ge	LBB3_5
; %bb.4:                                ;   in Loop: Header=BB3_3 Depth=1
	str	w12, [x0]
	add	w11, w11, #1                    ; =1
	add	x1, x1, #4                      ; =4
	b	LBB3_6
LBB3_5:                                 ;   in Loop: Header=BB3_3 Depth=1
	str	w13, [x0]
	add	w9, w9, #1                      ; =1
	add	x2, x2, #4                      ; =4
LBB3_6:                                 ;   in Loop: Header=BB3_3 Depth=1
	add	x0, x0, #4                      ; =4
	cmp	w11, w8
	b.ge	LBB3_8
; %bb.7:                                ;   in Loop: Header=BB3_3 Depth=1
	cmp	w9, w10
	b.lt	LBB3_3
LBB3_8:
	cmp	w11, w10
	b.ge	LBB3_12
; %bb.9:
	sub	w10, w10, w11
LBB3_10:                                ; =>This Inner Loop Header: Depth=1
	ldr	w11, [x1], #4
	str	w11, [x0], #4
	subs	w10, w10, #1                    ; =1
	b.ne	LBB3_10
	b	LBB3_12
LBB3_11:                                ;   in Loop: Header=BB3_12 Depth=1
	ldr	w10, [x2], #4
	str	w10, [x0], #4
	add	w9, w9, #1                      ; =1
LBB3_12:                                ; =>This Inner Loop Header: Depth=1
	cmp	w9, w8
	b.lt	LBB3_11
; %bb.13:
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__const
	.p2align	2                               ; @__const.main.a
l___const.main.a:
	.long	3                               ; 0x3
	.long	4                               ; 0x4
	.long	65                              ; 0x41
	.long	7                               ; 0x7
	.long	42                              ; 0x2a
	.long	133                             ; 0x85
	.long	43                              ; 0x2b
	.long	6778                            ; 0x1a7a
	.long	8                               ; 0x8
	.long	87                              ; 0x57

	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"%d,"

.subsections_via_symbols
