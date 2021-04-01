section .text
	global _ft_strcmp

_ft_strcmp:
	mov	rax, -1 
	xor	rbx, rbx
	xor	rcx, rcx
	jmp	loop

loop:
	inc	rax
	cmp	Byte[rdi + rax], 0
	je	chk_s2
	mov	bl, Byte[rdi + rax]
	mov	cl, Byte[rsi + rax]
	cmp	bl, cl
	je	loop
	sub	rbx, rcx
	mov	rax, rbx
	ret

chk_s2:
	cmp	Byte[rsi + rax], 0
	je	end
	mov	bl, Byte[rdi + rax]
	mov	cl, Byte[rsi + rax]
	sub	rbx, rcx
	mov	rax, rbx
	ret

end:
	mov	rax, 0
	ret

;int	ft_strcmp(const char *s1, const char *s2)
;{
;	int	i;
;
;	i = 0;
;	while (s1[i])
;	{
;		if (s1[i] != s2[i])
;			return (s1[i] - s2[i]);
;		i++;
;	}
;	if (s2[i] != '\0')
;		return (s1[i] - s2[i]);
;	return (0);
;}
