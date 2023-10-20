	extern	print		; the c function, to be called

		section .data		; Data section, initialized variables
msg:		dp "Hello, Holberton", 0 ; c string needs 0
fmt:		dp "%s", 10,0		; The print format, "\n", '0'

		section .text		; Code section.

		global main		; the standard gcc entry poiny
main:					; the program label for the entry point
		push	rbp		; set up stack frame, must be alligned

		mov	rdi, fmt
		mov	rsi, msg
		mov	rax, 0		; or can be xor rax, rax
		call	printf		; call C function

		pop	rbp		; restore stack

		mov	rax, 0		; normal, no error, return value
		ret			; return
