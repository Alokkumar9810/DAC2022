	.include "common.i"
	.text
	.extern multiplication
	.entry main


main:
	 mov rbp,rsp
	sub rsp,8
	GetInt p1,rbp-8
	mov rdi,[rbp-8]
	call multiplication

	mov rsp,rbp
	ret


p1: .string "Enter a number: \n"
 .end
