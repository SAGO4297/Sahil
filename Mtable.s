	.include "common.i"

	.text

	.entry main

main:
	PutMsg 	greet
	GetInt	put,num
	mov	rdi,num
	call	mtable
	ret


greet:	.string "Welcome to num Table\n"
put:	.string "Enter the number "

	.data
num:	.quad 	0

	.end		