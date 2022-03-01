	.file	"loop.c"
	.text
	.globl	dw_loop
	.type	dw_loop, @function
dw_loop:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %edx
	movl	%edx, %ecx
	imull	%edx, %ecx
	leal	(%edx,%edx), %eax
.L2:
	leal	1(%ecx,%edx), %edx
	subl	$1, %eax
	testl	%eax, %eax
	jg	.L2
	movl	%edx, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	dw_loop, .-dw_loop
	.ident	"GCC: (Alpine 9.3.0) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
