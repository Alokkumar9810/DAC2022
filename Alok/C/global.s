	.intel_syntax noprefix
	.text

Cube:
	mov rax,rdi
	mul rdi
	mul rdi
	ret

	.global Cube
	.type Cube, @function
	.end
