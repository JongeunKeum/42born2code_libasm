/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 15:00:15 by jkeum             #+#    #+#             */
/*   Updated: 2021/04/03 15:14:07 by jkeum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	check_ft_strlen(void)
{
	printf("%s", C_LIME);
	printf("\nCheck >>> FT_STRLEN\n");
	printf("-------------------------------------\n");
	printf("result of 'empty string'	= %zu\n", ft_strlen(""));
	printf("result of 'hello'		= %zu\n", ft_strlen("hello"));
	printf("result of 'long string'		= %zu\n", \
	ft_strlen("IlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogi"));
	printf("-------------------------------------\n\n");
}
void	check_ft_strcpy(void)
{
	char	dst[200];
	printf("%s", C_PURPLE);
	printf("Check >>> FT_STRCPY\n");
	printf("-------------------------------------\n");
	printf("result of copy 'empty string'	= %s\n", ft_strcpy(dst, ""));
	printf("result of copy 'ABC'		= %s\n", ft_strcpy(dst, "ABC"));
	printf("result of copy 'long string'	= %s\n", ft_strcpy(dst, "IlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogi"));
	printf("-------------------------------------\n\n");
}
void	check_ft_strcmp(void)
{
	printf("%s", C_LEMON);
	printf("Check >>> FT_STRCMP\n");
	printf("-------------------------------------\n");
	printf("result of '2 empty strings'			= %d\n", ft_strcmp("", ""));
	printf("result of '1 empty string as first argument'	= %d\n", ft_strcmp("", "a"));
	printf("result of '1 empty string as second argument'	= %d\n", ft_strcmp("a", ""));
	printf("result of \"abc\" and \"abc\"			= %d\n", ft_strcmp("abc", "abc"));
	printf("result of \"abc\" and \"abcd\"			= %d\n", ft_strcmp("abc", "abcd"));
	printf("result of \"abcd\" and \"abc\"			= %d\n", ft_strcmp("abcd", "abc"));
	printf("-------------------------------------\n\n");
}
void	check_ft_strdup(void)
{
	char	*str;
	printf("%s", C_I);
	printf("Check >>> FT_STRDUP\n");
	printf("-------------------------------------\n");
	str = ft_strdup("");
	printf("result of 'empty string'		= %s\n", str);
	str = ft_strdup("Do you like gogi?");
	printf("result of 'Do you like gogi?'		= %s\n", str);
	str = ft_strdup("IlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogiIlikegogi");
	printf("result of 'long string'			= %s\n", str);
	printf("-------------------------------------\n\n");
}
void	check_ft_write(void)
{
	int		fd;
	fd = open("./test.txt", O_WRONLY);
	printf("%s", C_P);
	printf("Check >>> FT_WRITE\n");
	printf("-------------------------------------\n");
	printf("\nresult of 'standard out' with \"gogijoa\" 	= %zd\n", ft_write(1, "gogijoa", 7));
	printf("result of 'user fd' with 'test.txt' 		= %zd\n", ft_write(fd, "gogijoa", 7));
	printf("\ncompare errno with 'fd = -1'\n");
	printf("result of write		= %zd, errno = %d\n", write(-1, "hello", 5), errno);
	printf("result of ft_write	= %zd, errno = %d\n", ft_write(-1, "hello", 5), errno);
	printf("-------------------------------------\n\n");
	close(fd);
}
void	check_ft_read(void)
{
	int		fd;
	char	buf[30];
	fd = open("./test.txt", O_RDONLY);
	printf("%s", C_O);
	printf("Check >>> FT_READ\n");
	printf("-------------------------------------\n");
	printf("Please input string!\n");
	printf("result of 'standard in'			= %zd\n", ft_read(0, buf, 30));
	printf("READ BUF : %s", buf);
	printf("result of 'user fd' with 'test.txt'	= %zd\n", ft_read(fd, buf, 30));
	printf("READ BUF : %s\n", buf);
	printf("\ncompare errno with 'fd = -1'\n");
	printf("result of read		= %zd, 	errno = %d\n", read(-1, buf, 30), errno);
	printf("result of ft_read	= %zd, 	errno = %d\n", ft_read(-1, buf, 30), errno);
	printf("-------------------------------------\n\n");
}
int main()
{
	check_ft_strlen();
	check_ft_strcpy();
	check_ft_strcmp();
	check_ft_strdup();
	check_ft_write();
	check_ft_read();
}
