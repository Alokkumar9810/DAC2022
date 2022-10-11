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
	 


month: .string "Enter Month [1-12]:"
days:  .string "No of Days in Month is : "
tell:  .quad 31, 28,31,30,31,30,31,31,30,31,30,31




	.data

useru: .quad 0




.end

