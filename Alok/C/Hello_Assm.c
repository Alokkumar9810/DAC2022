	.include "common.i"
	.text
	.entry run
run: 
	PutMsg sos
	PutMsg sos1
	ret
sos: .string "help!\n"
sos1: .string "help\n"


.end

