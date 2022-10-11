	.include "common.i"

	.text

	.extern Cube

	.entry main

main:
	mov rbp,rsp
	sub rsp, 8


	GetInt l, rbp-8
	mov rdi, [rbp-8]
	push rcx
	call Cube
	pop rcx
	mov rsp, rbp
	PutInt k
	PutMsg j
	ret



l: .string "Enter a Number: "

k: .string "Cube of a Number is: \n"

j: .string "Thank You\n"

	.data

u: .quad 0


.end
