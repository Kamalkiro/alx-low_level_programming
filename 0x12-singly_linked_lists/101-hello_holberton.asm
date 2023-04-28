section		.text
	extern	printf		;Call c function from external lib
	global	main		;Main is explained below
main:
	mov		rdi, Hello
	mov		rax, 0
	call	printf		;printf called from c lib
	ret			;Or return
section		.data
	Hello db "Hello, Holberton", 0xa, 0	;printed by printf function
