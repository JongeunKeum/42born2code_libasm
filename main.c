#include <stdio.h>
#include "libasm.h"

int	main(void)
{
	char	buf[10];

	ft_read(0, buf, 10); 
	ft_write(1, buf, 10);
//	printf("%zu\n", ft_strlen("hello"));
//	printf("%d", ft_strcmp("a", "a"));
	return (0);
}
