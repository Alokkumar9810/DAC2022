	.include "common.i"

	.text	#read-only memory section

	.entry main
main:	
	GetInt month,useru
	mov rcx, useru		#useru value goes to rcx
	sub rcx, 1		#rcx-1
	mov rbx, offset tell    #indirection
	mov rax, [rbx+8*rcx]
	PutInt days
	ret
	 


month: .string "Enter Number [1-10]:"
days:  .string "Multiplication : "




	.data

useru: .quad 0

tell:  .quad mul 4



.end

