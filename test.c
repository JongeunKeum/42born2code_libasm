#include <unistd.h>

void	ft_write(void)
{
	write(1, "helloworldhelloworld", 20);
}

int		main(void)
{
	ft_write();
	return (0);
}
