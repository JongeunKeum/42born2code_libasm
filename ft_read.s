section .text
	global _ft_read

_ft_read:
	sub rsp, 64
	mov rdi, 0
	mov rsi, rsp
	mov rdx, 63
	syscall
