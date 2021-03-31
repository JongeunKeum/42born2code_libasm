#ifndef LIBASM_H
# define LIBASM_H
# include <stddef.h>

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_write(int fd, const void *buf, size_t cnt);
int		ft_read(int fd, void *buf, size_t cnt);
char	*ft_strdup(const char *s1);

#endif
