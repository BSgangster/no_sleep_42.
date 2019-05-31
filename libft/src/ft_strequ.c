#include "libft.h"

int	ft_strequ(const char *str,const char *str1)
{
	int i;

	i = 0;
	if (!(str || str1))
		return(0);
	if(ft_strlen(str) != ft_strlen(str1))
		return(0);
	while(str[i])
	{
		if(str[i] == str1[i])
			i++;
		else
			return 0;
	}
	return 1;
}
