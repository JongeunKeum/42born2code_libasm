section .text
	global _ft_strcmp

_ft_strcmp:
	mov rax, 0
	jmp loop

loop:
	cmp byte[rdi + rax], 0
	je check
	mov 

check:

end:
