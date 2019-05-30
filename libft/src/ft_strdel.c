#include "libft.h"
//this function just frees up the memory from the address(given argument).
void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
