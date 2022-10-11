	.include "common.i"
	.text
	

multiplication:	
	mov rax, rdi
	mov rcx,1
	mov rbx,10


1:
	mul rcx
	inc rcx
	PutInt f1
	mov rax,rdi
	cmp rcx,rbx
	jle 1b
	ret
		
f1: .string ""

	.global multiplication
	.type multiplication, @function
	.end


