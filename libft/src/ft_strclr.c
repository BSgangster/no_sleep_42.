#include "libft.h"

//sets every character of the the given array to '\0'
void	ft_strclr(char *s)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
			s[i++] = '\0';
}
