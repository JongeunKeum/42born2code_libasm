section .text
	global _ft_strcpy

_ft_strcpy:
	mov	rax, 0
	xor	rdx, rdx
	jmp loop

loop:
	cmp	Byte[rsi + rax], 0
	je	end
	mov	dl, Byte[rsi + rax]
	mov	Byte[rdi + rax], dl
	inc	rax
	jmp	loop

end:
	mov	Byte[rdi + rax], 0
	mov	rax, rdi
	ret

;char	*ft_strcpy(char *dst, const char *src)
;{
;	int	i;
;
;	i = 0;
;	while (src[i])
;	{
;		dst[i] = src[i];
;		i++;
;	}
;	dst[i] = '\0';
;	return (dst);
;}
