section .data
	text0 db "What is your name? "
	text1 db "Hello, "
	text2 db "Where are you from? "
	text3 db "That is cool! I am also from "

section .bss
	name resb 16
	q1 resb 16

section .text
	global _start
_start:
	call _printText0
	call _getName
	call _printText1
	call _printName
	call _printText2
	call _getQ1
	call _printText3
	call _printQ1

	mov rax, 60
	mov rdi, 0
	syscall

_getName:
	mov rax, 0
	mov rdi, 0
	mov rsi, name
	mov rdx, 16
	syscall
	ret
_getQ1:
	mov rax, 0
	mov rdi, 0
	mov rsi, q1
	mov rdx, 16
	syscall
	ret
_printText0:
	mov rax, 1
	mov rdi, 1
	mov rsi, text0
	mov rdx, 19
	syscall
	ret

_printText1:
	mov rax, 1
	mov rdi, 1
	mov rsi, text1
	mov rdx, 7
	syscall
	ret

_printText2:
	mov rax, 1
	mov rdi, 1
	mov rsi, text2
	mov rdx, 20
	syscall
	ret

_printText3:
	mov rax, 1
	mov rdi, 1
	mov rsi,  text3
	mov rdx, 29
	syscall
	ret

_printName:
	mov rax, 1
	mov rdi, 1
	mov rsi, name
	mov rdx, 16
	syscall
	ret
_printQ1:
	mov rax, 1
	mov rdi, 1
	mov rsi, q1
	mov rdx, 16
	syscall
	ret
