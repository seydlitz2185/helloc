	.file	"cread.c"
	.text
	.globl	cread
	.type	cread, @function
cread:
.LFB0:
	.cfi_startproc
	movl	4(%esp), %eax
	testl	%eax, %eax
	je	.L3
	movl	(%eax), %eax
	ret
.L3:
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	cread, .-cread
	.ident	"GCC: (Alpine 9.3.0) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
