section .text
	global _ft_strdup
	extern _ft_strcpy
	extern _ft_strlen
	extern _malloc

_ft_strdup:
	push	rdi
	call	_ft_strlen
	inc		rax
	mov		rdi, rax
	call	_malloc
	mov		rdi, rax
	pop		rsi
	call	_ft_strcpy
	ret

;char	*ft_strdup(const char *s1)
;{
;	char	*res;
;	size_t	i;
;
;	res = malloc(ft_strlen(s1) + 1);
;	if (!res)
;		return (NULL);
;	i = 0;
;	while (s1[i])
;	{
;		res[i] = s1[i];
;		i++;
;	}
;	res[i] = '\0';
;	return (res);
;}
