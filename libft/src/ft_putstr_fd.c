#include "libft.h"

void	ft_putstr_fd(char const *str, int fd)
{
	int		x;

	x = 0;
	if (str)
		while (str[x])
			write(fd, &str[x++], 1);
}
