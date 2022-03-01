	.file	"main.c"
	.text
	.globl	tmult_ok1
	.type	tmult_ok1, @function
tmult_ok1:
.LFB0:
	.cfi_startproc
	movl	8(%esp), %eax
	imull	4(%esp), %eax
	movl	12(%esp), %edx
	movl	%eax, (%edx)
#APP
# 13 "main.c" 1
	setae %al
# 0 "" 2
#NO_APP
	movl	$0, %eax
	ret
	.cfi_endproc
.LFE0:
	.size	tmult_ok1, .-tmult_ok1
	.ident	"GCC: (Alpine 9.3.0) 9.3.0"
	.section	.note.GNU-stack,"",@progbits
