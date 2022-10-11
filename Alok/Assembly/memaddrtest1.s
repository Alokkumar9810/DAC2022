	.include "common.i"

	.text	#read-only memory section

	.entry main
main:	
	GetInt	asku, u1
	GetInt  asku, u2
	mov	rbx, u1	#rax=N
	mov	rcx, u2	#rcx=N
	add	rbx, rcx 		#rcx=N+1
	mov     rbx,rax
	#mul	rcx		#rax=N*(N+1)
	#shr	rax		#rax=N*(N+1)/2
	#mov	rsp, rax
	PutInt	tell, rbx	

	PutMsg	greet
	ret

asku:	.string	"Upper Limit: "
tell:	.string	"Sum of Integers = "
greet:	.string	"Goodbye User.\n"

	.data	#writable memory section

u1:	.quad 0
u2:	.quad 0


.end

