	.intel_syntax noprefix
	.include "common.i"
	.text

mtable:
	mov 	rax,rdi
	mov 	rcx,1
	mov 	rbx,10
	
1:	mul 	rcx
	inc 	rcx
	PutInt 	res
	mov	rax,rdi
	cmp 	rcx,rbx
	jle	1b
	ret

res:	.string "\n"


	.global	mtable
	.type	mtable ,@function

	.end