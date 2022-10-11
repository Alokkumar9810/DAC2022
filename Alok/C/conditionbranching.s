	.include "common.i"
	.text
	.entry main

main:	
	PutMsg p1
	GetInt p2, f1
	mov rax, 1
	mov rbx,f1
	mov rcx, 0

1:	mov rdx,10
	mul rdx
	inc rcx
	
	cmp rax,rbx
	jle 1b 

	mov rax,rcx
	PutInt p3
	ret





p1:  .string "Hello\n"
p2:  .string "Enter the number: "
p3:  .string "Total digit in the Number:"
	.data

f1: .quad 0

.end
