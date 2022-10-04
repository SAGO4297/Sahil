	.include "common.i"

	.text

	.entry run
run:	
        GetInt  asku,first
        mov     rcx,first
        GetInt  asku,first
        mov     rbx,first
        add     rcx,rbx
        mov     rax,rcx
        PutInt  sum

	PutMsg	greet
	ret

asku:   .string "Enter the numbers for addition "
sum:    .string "The required sum is "
greet:	.string	"GOOD BYYYEE USER!\n"

        .data
first:  .quad 0
.end

