section		.text
	extern	printf		;Call c function from external lib
	global	main		;Main is explained below
main:
	mov		rdi, Hello	;Moves the string into the register responsible for storing
	mov		rax, 0		;set the 
	call	printf		;printf called from c lib
	mov		rax, 0		;return 0
	ret			;Or return
section		.data
	Hello db "Hello, Holberton", 0xa, 0	;printed by printf function
