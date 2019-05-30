#include "libft.h"
//same as striter, the only differnece is we know now where we wanna start, so we have our unsigned int i, to be our starting index.
void	ft_striteri(char *str,void (*f)(unsigned int, char *))
{
	unsigned int	i;//why unsigned int you ask? Well, an index always starts at 0, it's never negative.

	i = 0;
	if (str && f)
		while (str[i])
		{
			f(i, &str[i]);
			i += 1;
}
}
