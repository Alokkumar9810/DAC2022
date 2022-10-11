.include "common.i"

	.text
	.entry main

main:
	PutMsg greet
	GetInt p1,f1
	GetInt p2,f2
	#GetInt p3,f3

	mov rbx, f1
	mov rcx, f2
	mov rax,rbx
	add rbx, rcx
	//mov rax, rbx
	mov add,rbx
	sub rax,rcx
	mov sub,rax

	#mov add, rax
	PutInt p4, add
	PutInt p4, sub
	ret	

greet: .string "Hello!\n"
#p3: .string "what to calculate\n"
p1: .string "Tell the 1st no.\n"
p2: .string "Tell the 2nd no.\n"
p4: .string "The calculated value is: \n"


	.data

f1: .quad 0
f2: .quad 0
#f3: .quad 0

add: .quad 0
sub: .quad 0
#f5: .quad "rbx-rcx"
#f6: .quad "rbx*rcx"
#f7: .quad "rbx/rcx"
