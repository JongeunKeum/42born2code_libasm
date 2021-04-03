#ifndef LIBASM_H
# define LIBASM_H
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define C_LIME "\e[1;38;2;133;188;94m"
# define C_PURPLE "\e[1;38;2;189;147;249m"
# define C_LEMON "\e[1;38;2;235;247;165m"
# define C_P "\e[1;38;2;255;192;91m"
# define C_O "\e[1;38;2;75;221;241m"
# define C_I "\e[1;38;2;244;66;236m"
# define C_YLW "\e[0;33m"
# define C_RED "\033[31m"
# define B_RED "\033[1;5;31m"
# define B_YLW "\e[1;5;33m"
# define B_GREEN "\033[1;5;92m"
# define C_RESET "\e[0m"

size_t	ft_strlen(const char *str);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strcmp(const char *s1, const char *s2);
ssize_t	ft_write(int fd, const void *buf, size_t cnt);
ssize_t	ft_read(int fd, void *buf, size_t cnt);
char	*ft_strdup(const char *s1);

#endif
