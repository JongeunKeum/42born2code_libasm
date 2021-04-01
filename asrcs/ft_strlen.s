section .text
	global _ft_strlen

_ft_strlen:
	mov	rax, 0
	jmp	loop

loop:
	cmp	Byte[rdi + rax], 0
	je	end
	inc	rax
	jmp	loop

end:
	ret

;size_t	ft_strlen(const char *s)
;{
;	size_t	len;
;
;	len = 0;
;	while (s[len])
;		len++;
;	return (len);
;}
