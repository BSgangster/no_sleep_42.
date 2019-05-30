#include "libft.h"

//string that makes a new string of size size, and makes every pointer in it point to character \0 , and ends it with \0
char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	while (size--)
		str[size] = '\0';
	return (str);
}
