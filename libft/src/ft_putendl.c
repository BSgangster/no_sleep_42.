#include "libft.h"

void	ft_putendl(char const *s)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			write(1, &s[i++], 1);
	write(1, "\n", 1);
}
