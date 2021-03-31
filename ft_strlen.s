section .text
	global _ft_strlen

_ft_strlen:
	mov rax, 0
	jmp loop

loop:
	cmp byte[rdi], 0
	je end
	inc rax
	inc rdi
	jmp loop

end:
	ret
