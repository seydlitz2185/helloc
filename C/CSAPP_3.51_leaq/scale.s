	.file	"scale.c"
	.text
	.globl	scale
	.type	scale, @function
scale:
.LFB0:
	.cfi_startproc
	movl	12(%esp), %edx
	movl	8(%esp), %eax
	sall	$2, %eax
	addl	4(%esp), %eax
	leal	(%edx,%edx,2), %ecx
	leal	0(,%ecx,4), %edx
	addl	%edx, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	scale, .-scale
	.ident	"GCC: (Alpine 9.3.0) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
